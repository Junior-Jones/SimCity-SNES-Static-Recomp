/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0006D(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01B42Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B42Au,2u,0x30u,0xB42Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B42Cu:
    if(m==0u&&x==0u&&e==0u){ /* AE DD 01 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B42Cu,3u,0x01u,0xB42Fu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B42Fu:
    if(m==0u&&x==0u&&e==0u){ /* BF 10 80 01 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B42Fu,4u,0x01u,0xB433u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018010u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B433u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B433u,3u,0x00u,0xB436u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B436u:
    if(m==0u&&x==0u&&e==0u){ /* AE 0D 02 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B436u,3u,0x02u,0xB439u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B439u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0D 02 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B439u,3u,0x02u,0xB43Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x020Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B43Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B43Cu,1u,0x60u,0xB43Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B43Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B43Du,2u,0x30u,0xB43Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B43Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 0A B9 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B43Fu,3u,0xB9u,0xB442u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB441u))return 0;c->pc=0xB90Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B442u:
    if(m==0u&&x==0u&&e==0u){ /* 90 1A Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B442u,2u,0x1Au,0xB444u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB45Eu;}
      if(c->pc!=0xB444u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB444u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B45Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F9 BB Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B45Eu,3u,0xBBu,0xB461u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB460u))return 0;c->pc=0xBBF9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B461u:
    if(m==0u&&x==0u&&e==0u){ /* B0 17 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B461u,2u,0x17u,0xB463u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB47Au;}
      if(c->pc!=0xB463u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB463u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B463u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F2 B5 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B463u,3u,0xB5u,0xB466u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB465u))return 0;c->pc=0xB5F2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B466u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4A BC Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B466u,3u,0xBCu,0xB469u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB468u))return 0;c->pc=0xBC4Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B469u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9A B7 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B469u,3u,0xB7u,0xB46Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB46Bu))return 0;c->pc=0xB79Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B46Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 78 BB Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B46Cu,3u,0xBBu,0xB46Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB46Eu))return 0;c->pc=0xBB78u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B46Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B46Fu,2u,0x20u,0xB471u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B471u:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B471u,1u,0x08u,0xB472u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B472u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B472u,4u,0x00u,0xB476u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB475u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B478u:
    if(m==1u&&x==1u&&e==0u){ /* 28 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B478u,1u,0x28u,0xB479u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B479u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B479u,1u,0x60u,0xB47Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B483u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B483u,2u,0x30u,0xB485u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B485u:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 BC Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B485u,3u,0xBCu,0xB488u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB487u))return 0;c->pc=0xBC35u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B488u:
    if(m==1u&&x==1u&&e==0u){ /* B0 5F Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B488u,2u,0x5Fu,0xB48Au);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB4E9u;}
      if(c->pc!=0xB48Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB48Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B48Au:
    if(m==1u&&x==1u&&e==0u){ /* 20 0A B9 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B48Au,3u,0xB9u,0xB48Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB48Cu))return 0;c->pc=0xB90Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B48Du:
    if(m==0u&&x==0u&&e==0u){ /* B0 5A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B48Du,2u,0x5Au,0xB48Fu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB4E9u;}
      if(c->pc!=0xB48Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB48Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B48Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 05 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B48Fu,3u,0x02u,0xB492u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0205u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B492u:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B492u,3u,0x00u,0xB495u);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B495u:
    if(m==0u&&x==0u&&e==0u){ /* B0 52 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B495u,2u,0x52u,0xB497u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB4E9u;}
      if(c->pc!=0xB497u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB497u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B497u:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B497u,3u,0x02u,0xB49Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0207u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B49Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B49Au,3u,0x00u,0xB49Du);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B49Du:
    if(m==0u&&x==0u&&e==0u){ /* B0 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B49Du,2u,0x4Au,0xB49Fu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB4E9u;}
      if(c->pc!=0xB49Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB49Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B49Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F9 BB Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B49Fu,3u,0xBBu,0xB4A2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4A1u))return 0;c->pc=0xBBF9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4A2u:
    if(m==0u&&x==0u&&e==0u){ /* B0 45 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4A2u,2u,0x45u,0xB4A4u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB4E9u;}
      if(c->pc!=0xB4A4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB4A4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4A4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4A4u,2u,0x20u,0xB4A6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4A6u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4A6u,3u,0x02u,0xB4A9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4A9u:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4A9u,3u,0x00u,0xB4ACu);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4ACu:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4ACu,2u,0x03u,0xB4AEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB4B1u;}
      if(c->pc!=0xB4AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB4AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4B1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4A BC Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4B1u,3u,0xBCu,0xB4B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4B3u))return 0;c->pc=0xBC4Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4B4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9A B7 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4B4u,3u,0xB7u,0xB4B7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4B6u))return 0;c->pc=0xB79Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4B7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 78 BB Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4B7u,3u,0xBBu,0xB4BAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4B9u))return 0;c->pc=0xBB78u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4BAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4BAu,2u,0x30u,0xB4BCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4BCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4BCu,3u,0xFFu,0xB4BFu);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4BFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3F 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4BFu,3u,0x02u,0xB4C2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4C2u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4C2u,3u,0x02u,0xB4C5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4C5u:
    if(m==0u&&x==0u&&e==0u){ /* C9 05 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4C5u,3u,0x00u,0xB4C8u);
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4C8u:
    if(m==0u&&x==0u&&e==0u){ /* B0 09 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4C8u,2u,0x09u,0xB4CAu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB4D3u;}
      if(c->pc!=0xB4CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB4CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4D3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4D3u,3u,0x02u,0xB4D6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4D6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0A 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4D6u,3u,0x00u,0xB4D9u);
      sc_v11_op_compare(r,c->a,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4D9u:
    if(m==0u&&x==0u&&e==0u){ /* F0 5B Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4D9u,2u,0x5Bu,0xB4DBu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB536u;}
      if(c->pc!=0xB4DBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB4DBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4DBu:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4DBu,3u,0x00u,0xB4DEu);
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4DEu:
    if(m==0u&&x==0u&&e==0u){ /* F0 12 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4DEu,2u,0x12u,0xB4E0u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB4F2u;}
      if(c->pc!=0xB4E0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB4E0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4E0u:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4E0u,1u,0x08u,0xB4E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4E1u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4E1u,4u,0x00u,0xB4E5u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB4E4u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4E7u:
    if(m==1u&&x==1u&&e==0u){ /* 28 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4E7u,1u,0x28u,0xB4E8u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B4E8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B4E8u,1u,0x60u,0xB4E9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B5F2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B5F2u,2u,0x20u,0xB5F4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B5F4u:
    if(m==0u&&x==0u&&e==0u){ /* AD 49 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B5F4u,3u,0x02u,0xB5F7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0249u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B5F7u:
    if(m==0u&&x==0u&&e==0u){ /* D0 19 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B5F7u,2u,0x19u,0xB5F9u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB612u;}
      if(c->pc!=0xB5F9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB5F9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B5F9u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 43 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B5F9u,3u,0x02u,0xB5FCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0243u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B5FCu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 45 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B5FCu,3u,0x02u,0xB5FFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0245u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B5FFu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 47 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B5FFu,3u,0x02u,0xB602u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0247u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B602u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CC B6 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B602u,3u,0xB6u,0xB605u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB604u))return 0;c->pc=0xB6CCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B605u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B605u,2u,0x20u,0xB607u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B607u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B607u,3u,0x02u,0xB60Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B60Au:
    if(m==0u&&x==0u&&e==0u){ /* 3A Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B60Au,1u,0x3Au,0xB60Bu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B60Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B60Bu,2u,0x10u,0xB60Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B60Du:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B60Du,1u,0x0Au,0xB60Eu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B60Eu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B60Eu,1u,0xAAu,0xB60Fu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B60Fu:
    if(m==0u&&x==0u&&e==0u){ /* FC 0C 83 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B60Fu,3u,0x83u,0xB612u);
      {uint32_t q=((uint32_t)c->pbr<<16)|((0x830Cu+c->x)&0xffffu);uint16_t t=sc_v11_bus_read16(r,q);sc_v11_scheduler_internal_cycle(r,2u);if(!sc_v11_push16(r,0xB611u))return 0;c->pc=t;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B612u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B612u,1u,0x60u,0xB613u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B65Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B65Bu,2u,0x20u,0xB65Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B65Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B65Du,2u,0x10u,0xB65Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B65Fu:
    if(m==0u&&x==0u&&e==0u){ /* AE 47 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B65Fu,3u,0x02u,0xB662u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0247u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B662u:
    if(m==0u&&x==0u&&e==0u){ /* BF 20 80 01 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B662u,4u,0x01u,0xB666u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018020u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B666u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B666u,3u,0x00u,0xB669u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B669u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B669u,1u,0x18u,0xB66Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B66Au:
    if(m==0u&&x==0u&&e==0u){ /* 69 60 00 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B66Au,3u,0x00u,0xB66Du);
      sc_v11_op_adc(r,0x0060u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B66Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D 49 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B66Du,3u,0x02u,0xB670u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0249u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B670u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B670u,1u,0x60u,0xB671u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6CCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6CCu,2u,0x10u,0xB6CEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6CEu:
    if(m==0u&&x==0u&&e==0u){ /* A2 03 00 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6CEu,3u,0x00u,0xB6D1u);
      sc_v11_op_ldx(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6D1u:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6D1u,1u,0xDAu,0xB6D2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6D2u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6D2u,2u,0x20u,0xB6D4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6D4u:
    if(m==1u&&x==0u&&e==0u){ /* AD 05 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6D4u,3u,0x02u,0xB6D7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0205u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6D7u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6D7u,1u,0x18u,0xB6D8u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6D8u:
    if(m==1u&&x==0u&&e==0u){ /* 7D 61 9B Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6D8u,3u,0x9Bu,0xB6DBu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x9B61u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6DBu:
    if(m==1u&&x==0u&&e==0u){ /* 30 21 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6DBu,2u,0x21u,0xB6DDu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB6FEu;}
      if(c->pc!=0xB6DDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6DDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6DDu:
    if(m==1u&&x==0u&&e==0u){ /* C9 78 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6DDu,2u,0x78u,0xB6DFu);
      sc_v11_op_compare(r,c->a,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6DFu:
    if(m==1u&&x==0u&&e==0u){ /* B0 1D Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6DFu,2u,0x1Du,0xB6E1u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB6FEu;}
      if(c->pc!=0xB6E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6E1u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6E1u,1u,0xEBu,0xB6E2u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6E2u:
    if(m==1u&&x==0u&&e==0u){ /* AD 07 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6E2u,3u,0x02u,0xB6E5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0207u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6E5u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6E5u,1u,0x18u,0xB6E6u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6E6u:
    if(m==1u&&x==0u&&e==0u){ /* 7D 65 9B Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6E6u,3u,0x9Bu,0xB6E9u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x9B65u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6E9u:
    if(m==1u&&x==0u&&e==0u){ /* 30 13 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6E9u,2u,0x13u,0xB6EBu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB6FEu;}
      if(c->pc!=0xB6EBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6EBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6EBu:
    if(m==1u&&x==0u&&e==0u){ /* C9 64 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6EBu,2u,0x64u,0xB6EDu);
      sc_v11_op_compare(r,c->a,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6EDu:
    if(m==1u&&x==0u&&e==0u){ /* B0 0F Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6EDu,2u,0x0Fu,0xB6EFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB6FEu;}
      if(c->pc!=0xB6EFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6EFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6EFu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6EFu,2u,0x20u,0xB6F1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6F1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3F BA Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6F1u,3u,0xBAu,0xB6F4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB6F3u))return 0;c->pc=0xBA3Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6F4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3E B7 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6F4u,3u,0xB7u,0xB6F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB6F6u))return 0;c->pc=0xB73Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6F7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6F7u,2u,0x10u,0xB6F9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6F9u:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6F9u,1u,0xFAu,0xB6FAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6FAu:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6FAu,1u,0xCAu,0xB6FBu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6FBu:
    if(m==0u&&x==0u&&e==0u){ /* 10 D4 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6FBu,2u,0xD4u,0xB6FDu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB6D1u;}
      if(c->pc!=0xB6FDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6FDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B6FDu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B6FDu,1u,0x60u,0xB6FEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B705u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B705u,2u,0x10u,0xB707u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B707u:
    if(m==0u&&x==0u&&e==0u){ /* A2 03 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B707u,3u,0x00u,0xB70Au);
      sc_v11_op_ldx(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B70Au:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B70Au,1u,0xDAu,0xB70Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B70Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B70Bu,2u,0x20u,0xB70Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B70Du:
    if(m==1u&&x==0u&&e==0u){ /* AD 09 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B70Du,3u,0x02u,0xB710u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0209u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B710u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B710u,1u,0x18u,0xB711u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B711u:
    if(m==1u&&x==0u&&e==0u){ /* 7D 61 9B Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B711u,3u,0x9Bu,0xB714u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x9B61u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B714u:
    if(m==1u&&x==0u&&e==0u){ /* 30 21 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B714u,2u,0x21u,0xB716u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB737u;}
      if(c->pc!=0xB716u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB716u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B716u:
    if(m==1u&&x==0u&&e==0u){ /* C9 78 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B716u,2u,0x78u,0xB718u);
      sc_v11_op_compare(r,c->a,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B718u:
    if(m==1u&&x==0u&&e==0u){ /* B0 1D Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B718u,2u,0x1Du,0xB71Au);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB737u;}
      if(c->pc!=0xB71Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB71Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B71Au:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B71Au,1u,0xEBu,0xB71Bu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B71Bu:
    if(m==1u&&x==0u&&e==0u){ /* AD 0B 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B71Bu,3u,0x02u,0xB71Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x020Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B71Eu:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B71Eu,1u,0x18u,0xB71Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B71Fu:
    if(m==1u&&x==0u&&e==0u){ /* 7D 65 9B Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B71Fu,3u,0x9Bu,0xB722u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x9B65u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B722u:
    if(m==1u&&x==0u&&e==0u){ /* 30 13 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B722u,2u,0x13u,0xB724u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB737u;}
      if(c->pc!=0xB724u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB724u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B724u:
    if(m==1u&&x==0u&&e==0u){ /* C9 64 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B724u,2u,0x64u,0xB726u);
      sc_v11_op_compare(r,c->a,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B726u:
    if(m==1u&&x==0u&&e==0u){ /* B0 0F Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B726u,2u,0x0Fu,0xB728u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB737u;}
      if(c->pc!=0xB728u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB728u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B728u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B728u,2u,0x20u,0xB72Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B72Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 3F BA Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B72Au,3u,0xBAu,0xB72Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB72Cu))return 0;c->pc=0xBA3Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B72Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 3E B7 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B72Du,3u,0xB7u,0xB730u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB72Fu))return 0;c->pc=0xB73Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B730u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B730u,2u,0x10u,0xB732u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B732u:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B732u,1u,0xFAu,0xB733u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B733u:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B733u,1u,0xCAu,0xB734u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B734u:
    if(m==0u&&x==0u&&e==0u){ /* 10 D4 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B734u,2u,0xD4u,0xB736u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB70Au;}
      if(c->pc!=0xB736u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB736u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B736u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B736u,1u,0x60u,0xB737u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B73Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B73Eu,2u,0x20u,0xB740u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B740u:
    if(m==0u&&x==0u&&e==0u){ /* 20 53 B7 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B740u,3u,0xB7u,0xB743u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB742u))return 0;c->pc=0xB753u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B743u:
    if(m==0u&&x==0u&&e==0u){ /* 2E 43 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B743u,3u,0x02u,0xB746u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0243u),16u,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B746u:
    if(m==0u&&x==0u&&e==0u){ /* 20 65 B7 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B746u,3u,0xB7u,0xB749u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB748u))return 0;c->pc=0xB765u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B749u:
    if(m==0u&&x==0u&&e==0u){ /* 2E 45 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B749u,3u,0x02u,0xB74Cu);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0245u),16u,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B74Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 B7 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B74Cu,3u,0xB7u,0xB74Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB74Eu))return 0;c->pc=0xB777u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B74Fu:
    if(m==0u&&x==0u&&e==0u){ /* 2E 47 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B74Fu,3u,0x02u,0xB752u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0247u),16u,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B752u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B752u,1u,0x60u,0xB753u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B753u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B753u,2u,0x10u,0xB755u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B755u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B755u,3u,0x00u,0xB758u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B758u:
    if(m==0u&&x==0u&&e==0u){ /* DF 18 83 01 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B758u,4u,0x01u,0xB75Cu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018318u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B75Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B75Cu,2u,0x05u,0xB75Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB763u;}
      if(c->pc!=0xB75Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB75Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B75Eu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B75Eu,1u,0xE8u,0xB75Fu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B75Fu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B75Fu,1u,0xE8u,0xB760u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B760u:
    if(m==0u&&x==0u&&e==0u){ /* B0 F6 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B760u,2u,0xF6u,0xB762u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB758u;}
      if(c->pc!=0xB762u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB762u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B762u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B762u,1u,0x60u,0xB763u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B765u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B765u,2u,0x10u,0xB767u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B767u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B767u,3u,0x00u,0xB76Au);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B76Au:
    if(m==0u&&x==0u&&e==0u){ /* DF 78 83 01 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B76Au,4u,0x01u,0xB76Eu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018378u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B76Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B76Eu,2u,0x05u,0xB770u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB775u;}
      if(c->pc!=0xB770u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB770u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B770u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B770u,1u,0xE8u,0xB771u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B771u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B771u,1u,0xE8u,0xB772u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B772u:
    if(m==0u&&x==0u&&e==0u){ /* B0 F6 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B772u,2u,0xF6u,0xB774u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB76Au;}
      if(c->pc!=0xB774u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB774u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B774u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B774u,1u,0x60u,0xB775u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B777u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B777u,2u,0x10u,0xB779u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B779u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B779u,3u,0x00u,0xB77Cu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B77Cu:
    if(m==0u&&x==0u&&e==0u){ /* DF AE 83 01 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B77Cu,4u,0x01u,0xB780u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0183AEu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B780u:
    if(m==0u&&x==0u&&e==0u){ /* F0 16 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B780u,2u,0x16u,0xB782u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB798u;}
      if(c->pc!=0xB782u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB782u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B782u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B782u,1u,0xE8u,0xB783u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B783u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B783u,1u,0xE8u,0xB784u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B784u:
    if(m==0u&&x==0u&&e==0u){ /* B0 F6 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B784u,2u,0xF6u,0xB786u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB77Cu;}
      if(c->pc!=0xB786u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB786u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B786u:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 00 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B786u,3u,0x00u,0xB789u);
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B789u:
    if(m==0u&&x==0u&&e==0u){ /* B0 01 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B789u,2u,0x01u,0xB78Bu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB78Cu;}
      if(c->pc!=0xB78Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB78Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B78Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B78Bu,1u,0x60u,0xB78Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B78Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 54 03 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B78Cu,3u,0x03u,0xB78Fu);
      sc_v11_op_compare(r,c->a,0x0354u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B78Fu:
    if(m==0u&&x==0u&&e==0u){ /* 90 07 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B78Fu,2u,0x07u,0xB791u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB798u;}
      if(c->pc!=0xB791u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB791u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B798u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B798u,1u,0x38u,0xB799u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B799u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B799u,1u,0x60u,0xB79Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B79Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B79Au,2u,0x20u,0xB79Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B79Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B79Cu,2u,0x10u,0xB79Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B79Eu:
    if(m==0u&&x==0u&&e==0u){ /* AE 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B79Eu,3u,0x02u,0xB7A1u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7A1u:
    if(m==0u&&x==0u&&e==0u){ /* BF 40 80 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7A1u,4u,0x01u,0xB7A5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018040u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7A5u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7A5u,3u,0x00u,0xB7A8u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7A8u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7A8u,1u,0xA8u,0xB7A9u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7A9u:
    if(m==0u&&x==0u&&e==0u){ /* BF 51 80 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7A9u,4u,0x01u,0xB7ADu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018051u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7ADu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7ADu,3u,0x00u,0xB7B0u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7B0u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7B0u,1u,0xAAu,0xB7B1u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7B1u:
    if(m==0u&&x==0u&&e==0u){ /* BD 51 9B Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7B1u,3u,0x9Bu,0xB7B4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x9B51u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7B4u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7B4u,1u,0x48u,0xB7B5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7B5u:
    if(m==0u&&x==0u&&e==0u){ /* BD 59 9B Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7B5u,3u,0x9Bu,0xB7B8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x9B59u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7B8u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7B8u,1u,0x48u,0xB7B9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7B9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7B9u,3u,0x00u,0xB7BCu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7BCu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7BCu,2u,0x20u,0xB7BEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7BEu:
    if(m==1u&&x==0u&&e==0u){ /* B3 03 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7BEu,2u,0x03u,0xB7C0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x03u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7C0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7C0u,2u,0x20u,0xB7C2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7C2u:
    if(m==0u&&x==0u&&e==0u){ /* 10 03 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7C2u,2u,0x03u,0xB7C4u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB7C7u;}
      if(c->pc!=0xB7C4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7C4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7C4u:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 FF Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7C4u,3u,0xFFu,0xB7C7u);
      sc_v11_op_ora(r,0xFF00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7C7u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7C7u,1u,0x18u,0xB7C8u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7C8u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 05 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7C8u,3u,0x02u,0xB7CBu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0205u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7CBu:
    if(m==0u&&x==0u&&e==0u){ /* 30 54 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7CBu,2u,0x54u,0xB7CDu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB821u;}
      if(c->pc!=0xB7CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7CDu:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7CDu,3u,0x00u,0xB7D0u);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7D0u:
    if(m==0u&&x==0u&&e==0u){ /* B0 4F Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7D0u,2u,0x4Fu,0xB7D2u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB821u;}
      if(c->pc!=0xB7D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7D2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 09 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7D2u,3u,0x02u,0xB7D5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0209u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7D5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7D5u,3u,0x00u,0xB7D8u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7D8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7D8u,2u,0x20u,0xB7DAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7DAu:
    if(m==1u&&x==0u&&e==0u){ /* B3 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7DAu,2u,0x01u,0xB7DCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7DCu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7DCu,2u,0x20u,0xB7DEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7DEu:
    if(m==0u&&x==0u&&e==0u){ /* 10 03 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7DEu,2u,0x03u,0xB7E0u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB7E3u;}
      if(c->pc!=0xB7E0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7E0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7E0u:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 FF Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7E0u,3u,0xFFu,0xB7E3u);
      sc_v11_op_ora(r,0xFF00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7E3u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7E3u,1u,0x18u,0xB7E4u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7E4u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 07 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7E4u,3u,0x02u,0xB7E7u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0207u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7E7u:
    if(m==0u&&x==0u&&e==0u){ /* 30 38 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7E7u,2u,0x38u,0xB7E9u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB821u;}
      if(c->pc!=0xB7E9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7E9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7E9u:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7E9u,3u,0x00u,0xB7ECu);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7ECu:
    if(m==0u&&x==0u&&e==0u){ /* B0 33 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7ECu,2u,0x33u,0xB7EEu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB821u;}
      if(c->pc!=0xB7EEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7EEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7EEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0B 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7EEu,3u,0x02u,0xB7F1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x020Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7F1u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 43 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7F1u,3u,0x02u,0xB7F4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0243u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7F4u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 45 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7F4u,3u,0x02u,0xB7F7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0245u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7F7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 47 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7F7u,3u,0x02u,0xB7FAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0247u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7FAu:
    if(m==0u&&x==0u&&e==0u){ /* 5A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7FAu,1u,0x5Au,0xB7FBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7FBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7FBu,2u,0x20u,0xB7FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B7FDu:
    if(m==1u&&x==0u&&e==0u){ /* AD 09 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01B7FDu,3u,0x02u,0xB800u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0209u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
