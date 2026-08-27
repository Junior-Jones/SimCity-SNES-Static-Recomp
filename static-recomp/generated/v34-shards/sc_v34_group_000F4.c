/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000F4(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03D287u:

    if(m==0u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D287u,2u,0x30u,0xD289u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D292u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D292u,2u,0x20u,0xD294u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D292u,2u,0x20u,0xD294u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D294u:

    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D294u,3u,0x00u,0xD297u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D297u:

    if(m==0u&&x==1u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D297u,2u,0x00u,0xD299u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD299u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D299u:

    if(m==0u&&x==1u&&e==0u){ /* A5 14 Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D299u,2u,0x14u,0xD29Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x14u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D29Bu:

    if(m==0u&&x==1u&&e==0u){ /* 10 EA Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D29Bu,2u,0xEAu,0xD29Du);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD287u;}
      if(c->pc!=0xD29Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD29Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D388u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1021; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D388u,2u,0x20u,0xD38Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D38Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 Mesen corrected gameplay frame 1021; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D38Au,3u,0x00u,0xD38Du);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D38Du:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1021; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D38Du,2u,0x00u,0xD38Fu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD38Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D38Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D38Fu,2u,0x20u,0xD391u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D391u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D391u,2u,0xB3u,0xD393u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D393u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D393u,2u,0x7Fu,0xD395u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D395u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D395u,2u,0xB1u,0xD397u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D397u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D397u,2u,0x20u,0xD399u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D399u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D399u,2u,0x20u,0xD39Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D39Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D39Bu,3u,0x00u,0xD39Eu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D39Eu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D39Eu,2u,0x00u,0xD3A0u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD3A0u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3A0u:
    if(m==0u&&x==0u&&e==0u){ /* 22 EE 98 05 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3A0u,4u,0x05u,0xD3A4u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD3A3u))return 0;
      c->pbr=0x05u;c->pc=0x98EEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3A4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B7 D3 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3A4u,3u,0xD3u,0xD3A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3A6u))return 0;c->pc=0xD3B7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3A7u:
    if(m==0u&&x==0u&&e==0u){ /* 22 FE 99 05 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3A7u,4u,0x05u,0xD3ABu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD3AAu))return 0;
      c->pbr=0x05u;c->pc=0x99FEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3ABu:
    if(m==0u&&x==0u&&e==0u){ /* 20 0D D8 Mesen corrected gameplay frame 1098; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3ABu,3u,0xD8u,0xD3AEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3ADu))return 0;c->pc=0xD80Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3AEu:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3AEu,2u,0x20u,0xD3B0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3B0u:
    if(m==1u&&x==1u&&e==0u){ /* A9 16 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B0u,2u,0x16u,0xD3B2u);
      sc_v11_op_lda(r,0x0016u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3B2u:
    if(m==1u&&x==1u&&e==0u){ /* 85 68 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B2u,2u,0x68u,0xD3B4u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3B4u:
    if(m==1u&&x==1u&&e==0u){ /* E6 14 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B4u,2u,0x14u,0xD3B6u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3B6u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1626; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B6u,1u,0x60u,0xD3B7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3B7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B7u,2u,0x30u,0xD3B9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3B9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B9u,3u,0x00u,0xD3BCu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3BCu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 2D 0B Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3BCu,3u,0x0Bu,0xD3BFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B2Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3BFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 73 D7 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3BFu,3u,0xD7u,0xD3C2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3C1u))return 0;c->pc=0xD773u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3C2u:
    if(m==1u&&x==1u&&e==0u){ /* 20 DD D7 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3C2u,3u,0xD7u,0xD3C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3C4u))return 0;c->pc=0xD7DDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3C5u:
    if(m==1u&&x==1u&&e==0u){ /* 22 51 9A 05 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3C5u,4u,0x05u,0xD3C9u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD3C8u))return 0;
      c->pbr=0x05u;c->pc=0x9A51u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3C9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3C9u,1u,0x60u,0xD3CAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3CAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3CAu,2u,0xC9u,0xD3CCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3CCu:
    if(m==0u&&x==0u&&e==0u){ /* 29 40 00 Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3CCu,3u,0x00u,0xD3CFu);
      sc_v11_op_and(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3CFu:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3CFu,2u,0x06u,0xD3D1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD3D7u;}
      if(c->pc!=0xD3D1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD3D1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3D1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 E0 D3 Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3D1u,3u,0xD3u,0xD3D4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3D3u))return 0;c->pc=0xD3E0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3D4u:
    if(m==1u&&x==0u&&e==0u){ /* 4C DD D7 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3D4u,3u,0xD7u,0xD3D7u);
      c->pc=0xD7DDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C DD D7 Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3D4u,3u,0xD7u,0xD3D7u);
      c->pc=0xD7DDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3E0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3E0u,2u,0x30u,0xD3E2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3E2u:
    if(m==1u&&x==1u&&e==0u){ /* A5 CA Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3E2u,2u,0xCAu,0xD3E4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xCAu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3E4u:
    if(m==1u&&x==1u&&e==0u){ /* 30 07 Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3E4u,2u,0x07u,0xD3E6u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD3EDu;}
      if(c->pc!=0xD3E6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD3E6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3E6u:
    if(m==1u&&x==1u&&e==0u){ /* 29 0F Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3E6u,2u,0x0Fu,0xD3E8u);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3E8u:
    if(m==1u&&x==1u&&e==0u){ /* F0 6F Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3E8u,2u,0x6Fu,0xD3EAu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD459u;}
      if(c->pc!=0xD3EAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD3EAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3EDu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 31 0B Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3EDu,3u,0x0Bu,0xD3F0u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B31u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3F0u:
    if(m==1u&&x==1u&&e==0u){ /* AD 2D 0B Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3F0u,3u,0x0Bu,0xD3F3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B2Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3F3u:
    if(m==1u&&x==1u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3F3u,2u,0x07u,0xD3F5u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD3FCu;}
      if(c->pc!=0xD3F5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD3F5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3FCu:
    if(m==1u&&x==1u&&e==0u){ /* C9 01 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3FCu,2u,0x01u,0xD3FEu);
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3FEu:
    if(m==1u&&x==1u&&e==0u){ /* F0 17 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3FEu,2u,0x17u,0xD400u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD417u;}
      if(c->pc!=0xD400u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD400u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
