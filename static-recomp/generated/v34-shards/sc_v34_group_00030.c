/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00030(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00C0F5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0F5u,2u,0x20u,0xC0F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0F7u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0F7u,2u,0x10u,0xC0F9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0F9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 E0 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0F9u,2u,0xE0u,0xC0FBu);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0FBu:
    if(m==1u&&x==0u&&e==0u){ /* 8F B5 21 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0FBu,4u,0x7Eu,0xC0FFu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21B5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0FFu:
    if(m==1u&&x==0u&&e==0u){ /* 8F B9 21 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0FFu,4u,0x7Eu,0xC103u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21B9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C103u:
    if(m==1u&&x==0u&&e==0u){ /* 8F BD 21 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C103u,4u,0x7Eu,0xC107u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21BDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C107u:
    if(m==1u&&x==0u&&e==0u){ /* 8F C1 21 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C107u,4u,0x7Eu,0xC10Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21C1u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C10Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8F D5 21 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C10Bu,4u,0x7Eu,0xC10Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21D5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C10Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8F D9 21 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C10Fu,4u,0x7Eu,0xC113u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21D9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C113u:
    if(m==1u&&x==0u&&e==0u){ /* 8F DD 21 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C113u,4u,0x7Eu,0xC117u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21DDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C117u:
    if(m==1u&&x==0u&&e==0u){ /* 8F E1 21 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C117u,4u,0x7Eu,0xC11Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21E1u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C11Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8F E5 21 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C11Bu,4u,0x7Eu,0xC11Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21E5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C11Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8F E9 21 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C11Fu,4u,0x7Eu,0xC123u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21E9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C123u:
    if(m==1u&&x==0u&&e==0u){ /* 8F ED 21 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C123u,4u,0x7Eu,0xC127u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21EDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C127u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C127u,2u,0x20u,0xC129u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C129u:
    if(m==1u&&x==0u&&e==0u){ /* AF 1B 22 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C129u,4u,0x7Eu,0xC12Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C12Du:
    if(m==1u&&x==0u&&e==0u){ /* 29 03 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C12Du,2u,0x03u,0xC12Fu);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C12Fu:
    if(m==1u&&x==0u&&e==0u){ /* 09 54 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C12Fu,2u,0x54u,0xC131u);
      sc_v11_op_ora(r,0x0054u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C131u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 1B 22 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C131u,4u,0x7Eu,0xC135u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C135u:
    if(m==1u&&x==0u&&e==0u){ /* AF 1C 22 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C135u,4u,0x7Eu,0xC139u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C139u:
    if(m==1u&&x==0u&&e==0u){ /* 29 FC Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C139u,2u,0xFCu,0xC13Bu);
      sc_v11_op_and(r,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C13Bu:
    if(m==1u&&x==0u&&e==0u){ /* 09 01 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C13Bu,2u,0x01u,0xC13Du);
      sc_v11_op_ora(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C13Du:
    if(m==1u&&x==0u&&e==0u){ /* 8F 1C 22 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C13Du,4u,0x7Eu,0xC141u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C141u:
    if(m==1u&&x==0u&&e==0u){ /* AF 1D 22 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C141u,4u,0x7Eu,0xC145u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C145u:
    if(m==1u&&x==0u&&e==0u){ /* 29 03 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C145u,2u,0x03u,0xC147u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C147u:
    if(m==1u&&x==0u&&e==0u){ /* 09 54 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C147u,2u,0x54u,0xC149u);
      sc_v11_op_ora(r,0x0054u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C149u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 1D 22 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C149u,4u,0x7Eu,0xC14Du);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C14Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 55 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C14Du,2u,0x55u,0xC14Fu);
      sc_v11_op_lda(r,0x0055u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C14Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 1E 22 7E Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C14Fu,4u,0x7Eu,0xC153u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C153u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C153u,1u,0x60u,0xC154u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C154u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C154u,2u,0x20u,0xC156u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C156u:
    if(m==1u&&x==0u&&e==0u){ /* A9 E0 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C156u,2u,0xE0u,0xC158u);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C158u:
    if(m==1u&&x==0u&&e==0u){ /* 8F C5 21 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C158u,4u,0x7Eu,0xC15Cu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21C5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C15Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8F C9 21 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C15Cu,4u,0x7Eu,0xC160u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21C9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C160u:
    if(m==1u&&x==0u&&e==0u){ /* 8F CD 21 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C160u,4u,0x7Eu,0xC164u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21CDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C164u:
    if(m==1u&&x==0u&&e==0u){ /* 8F D1 21 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C164u,4u,0x7Eu,0xC168u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21D1u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C168u:
    if(m==1u&&x==0u&&e==0u){ /* AF 1C 22 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C168u,4u,0x7Eu,0xC16Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C16Cu:
    if(m==1u&&x==0u&&e==0u){ /* 29 03 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C16Cu,2u,0x03u,0xC16Eu);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C16Eu:
    if(m==1u&&x==0u&&e==0u){ /* 09 54 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C16Eu,2u,0x54u,0xC170u);
      sc_v11_op_ora(r,0x0054u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C170u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 1C 22 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C170u,4u,0x7Eu,0xC174u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C174u:
    if(m==1u&&x==0u&&e==0u){ /* AF 1D 22 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C174u,4u,0x7Eu,0xC178u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C178u:
    if(m==1u&&x==0u&&e==0u){ /* 29 FC Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C178u,2u,0xFCu,0xC17Au);
      sc_v11_op_and(r,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C17Au:
    if(m==1u&&x==0u&&e==0u){ /* 09 01 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C17Au,2u,0x01u,0xC17Cu);
      sc_v11_op_ora(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C17Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 1D 22 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C17Cu,4u,0x7Eu,0xC180u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C180u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C180u,2u,0x20u,0xC182u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C182u:
    if(m==1u&&x==0u&&e==0u){ /* AD 03 0B Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C182u,3u,0x0Bu,0xC185u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B03u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C185u:
    if(m==1u&&x==0u&&e==0u){ /* D0 18 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C185u,2u,0x18u,0xC187u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC19Fu;}
      if(c->pc!=0xC187u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC187u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C187u:
    if(m==1u&&x==0u&&e==0u){ /* A9 E0 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C187u,2u,0xE0u,0xC189u);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C189u:
    if(m==1u&&x==0u&&e==0u){ /* 8F F1 21 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C189u,4u,0x7Eu,0xC18Du);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21F1u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C18Du:
    if(m==1u&&x==0u&&e==0u){ /* 8F F5 21 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C18Du,4u,0x7Eu,0xC191u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21F5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C191u:
    if(m==1u&&x==0u&&e==0u){ /* 8F F9 21 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C191u,4u,0x7Eu,0xC195u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21F9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C195u:
    if(m==1u&&x==0u&&e==0u){ /* 8F FD 21 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C195u,4u,0x7Eu,0xC199u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21FDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C199u:
    if(m==1u&&x==0u&&e==0u){ /* A9 55 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C199u,2u,0x55u,0xC19Bu);
      sc_v11_op_lda(r,0x0055u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C19Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 1F 22 7E Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C19Bu,4u,0x7Eu,0xC19Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C19Fu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C19Fu,1u,0x60u,0xC1A0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1FAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1FAu,2u,0x20u,0xC1FCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1FCu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1FCu,3u,0x0Cu,0xC1FFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1FFu:
    if(m==0u&&x==0u&&e==0u){ /* D0 29 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1FFu,2u,0x29u,0xC201u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC22Au;}
      if(c->pc!=0xC201u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC201u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C201u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E3 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C201u,2u,0xE3u,0xC203u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE3u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C203u:
    if(m==0u&&x==0u&&e==0u){ /* D0 25 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C203u,2u,0x25u,0xC205u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC22Au;}
      if(c->pc!=0xC205u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC205u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C205u:
    if(m==0u&&x==0u&&e==0u){ /* AD F7 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C205u,3u,0x01u,0xC208u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C208u:
    if(m==0u&&x==0u&&e==0u){ /* D0 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C208u,2u,0x20u,0xC20Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC22Au;}
      if(c->pc!=0xC20Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC20Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C20Au:
    if(m==0u&&x==0u&&e==0u){ /* AD F1 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C20Au,3u,0x0Au,0xC20Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C20Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 19 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C20Du,2u,0x19u,0xC20Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC228u;}
      if(c->pc!=0xC20Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC20Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C20Fu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C20Fu,2u,0xD7u,0xC211u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C211u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C211u,3u,0x00u,0xC214u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C214u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C214u,2u,0x0Au,0xC216u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC220u;}
      if(c->pc!=0xC216u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC216u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C216u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C216u,3u,0x01u,0xC219u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C219u:
    if(m==0u&&x==0u&&e==0u){ /* 29 80 40 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C219u,3u,0x40u,0xC21Cu);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C21Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C21Cu,2u,0x0Cu,0xC21Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC22Au;}
      if(c->pc!=0xC21Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC21Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C21Eu:
    if(m==0u&&x==0u&&e==0u){ /* 80 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C21Eu,2u,0x08u,0xC220u);
      if(1){c->pc=0xC228u;}
      if(c->pc!=0xC220u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC220u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C228u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C228u,1u,0x38u,0xC229u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C229u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00C229u,1u,0x60u,0xC22Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
