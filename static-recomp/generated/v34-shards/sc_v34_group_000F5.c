/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000F5(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03D417u:
    if(m==1u&&x==1u&&e==0u){ /* 20 ED D5 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D417u,3u,0xD5u,0xD41Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD419u))return 0;c->pc=0xD5EDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D41Au:
    if(m==1u&&x==0u&&e==0u){ /* AF 01 21 7E Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D41Au,4u,0x7Eu,0xD41Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2101u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D41Eu:
    if(m==1u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D41Eu,1u,0x1Au,0xD41Fu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D41Fu:
    if(m==1u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D41Fu,1u,0x1Au,0xD420u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D420u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 01 21 7E Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D420u,4u,0x7Eu,0xD424u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2101u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D424u:
    if(m==1u&&x==0u&&e==0u){ /* AF 05 21 7E Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D424u,4u,0x7Eu,0xD428u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2105u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D428u:
    if(m==1u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D428u,1u,0x1Au,0xD429u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D429u:
    if(m==1u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D429u,1u,0x1Au,0xD42Au);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D42Au:
    if(m==1u&&x==0u&&e==0u){ /* 8F 05 21 7E Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D42Au,4u,0x7Eu,0xD42Eu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2105u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D42Eu:
    if(m==1u&&x==0u&&e==0u){ /* 20 74 E5 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D42Eu,3u,0xE5u,0xD431u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD430u))return 0;c->pc=0xE574u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D431u:
    if(m==1u&&x==0u&&e==0u){ /* E6 14 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D431u,2u,0x14u,0xD433u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D433u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D433u,2u,0x10u,0xD435u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D435u:
    if(m==1u&&x==0u&&e==0u){ /* A0 14 00 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D435u,3u,0x00u,0xD438u);
      sc_v11_op_ldy(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D438u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1701; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D438u,2u,0x20u,0xD43Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D438u,2u,0x20u,0xD43Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D43Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D43Au,3u,0x00u,0xD43Du);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D43Du:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D43Du,2u,0x00u,0xD43Fu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD43Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D43Fu:
    if(m==0u&&x==0u&&e==0u){ /* 88 Mesen corrected gameplay frame 1701; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D43Fu,1u,0x88u,0xD440u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D440u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F6 Mesen corrected gameplay frame 1701; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D440u,2u,0xF6u,0xD442u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD438u;}
      if(c->pc!=0xD442u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD442u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D442u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B5 D5 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D442u,3u,0xD5u,0xD445u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD444u))return 0;c->pc=0xD5B5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D445u:
    if(m==1u&&x==0u&&e==0u){ /* AF 01 21 7E Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D445u,4u,0x7Eu,0xD449u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2101u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D449u:
    if(m==1u&&x==0u&&e==0u){ /* 3A Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D449u,1u,0x3Au,0xD44Au);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D44Au:
    if(m==1u&&x==0u&&e==0u){ /* 3A Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D44Au,1u,0x3Au,0xD44Bu);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D44Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 01 21 7E Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D44Bu,4u,0x7Eu,0xD44Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2101u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D44Fu:
    if(m==1u&&x==0u&&e==0u){ /* AF 05 21 7E Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D44Fu,4u,0x7Eu,0xD453u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2105u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D453u:
    if(m==1u&&x==0u&&e==0u){ /* 3A Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D453u,1u,0x3Au,0xD454u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D454u:
    if(m==1u&&x==0u&&e==0u){ /* 3A Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D454u,1u,0x3Au,0xD455u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D455u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 05 21 7E Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D455u,4u,0x7Eu,0xD459u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2105u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D459u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D459u,1u,0x60u,0xD45Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1627; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D459u,1u,0x60u,0xD45Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5B5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5B5u,2u,0x20u,0xD5B7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5B7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 38 08 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5B7u,3u,0x08u,0xD5BAu);
      sc_v11_op_lda(r,0x0838u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5BAu:
    if(m==0u&&x==0u&&e==0u){ /* 8F F0 33 7E Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5BAu,4u,0x7Eu,0xD5BEu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E33F0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5BEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 44 08 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5BEu,3u,0x08u,0xD5C1u);
      sc_v11_op_lda(r,0x0844u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5C1u:
    if(m==0u&&x==0u&&e==0u){ /* 8F F2 33 7E Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5C1u,4u,0x7Eu,0xD5C5u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E33F2u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5C5u:
    if(m==0u&&x==0u&&e==0u){ /* 8F F4 33 7E Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5C5u,4u,0x7Eu,0xD5C9u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E33F4u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5C9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 39 08 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5C9u,3u,0x08u,0xD5CCu);
      sc_v11_op_lda(r,0x0839u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5CCu:
    if(m==0u&&x==0u&&e==0u){ /* 8F F6 33 7E Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5CCu,4u,0x7Eu,0xD5D0u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E33F6u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5D0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3A 08 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5D0u,3u,0x08u,0xD5D3u);
      sc_v11_op_lda(r,0x083Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5D3u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 30 34 7E Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5D3u,4u,0x7Eu,0xD5D7u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3430u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5D7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 45 08 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5D7u,3u,0x08u,0xD5DAu);
      sc_v11_op_lda(r,0x0845u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5DAu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 32 34 7E Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5DAu,4u,0x7Eu,0xD5DEu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3432u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5DEu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 34 34 7E Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5DEu,4u,0x7Eu,0xD5E2u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3434u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5E2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3B 08 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5E2u,3u,0x08u,0xD5E5u);
      sc_v11_op_lda(r,0x083Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5E5u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 36 34 7E Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5E5u,4u,0x7Eu,0xD5E9u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3436u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5E9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D6 DB Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5E9u,3u,0xDBu,0xD5ECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD5EBu))return 0;c->pc=0xDBD6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5ECu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5ECu,1u,0x60u,0xD5EDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5EDu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5EDu,2u,0x20u,0xD5EFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5EFu:
    if(m==0u&&x==1u&&e==0u){ /* A9 3C 08 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5EFu,3u,0x08u,0xD5F2u);
      sc_v11_op_lda(r,0x083Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5F2u:
    if(m==0u&&x==1u&&e==0u){ /* 8F F0 33 7E Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5F2u,4u,0x7Eu,0xD5F6u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E33F0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5F6u:
    if(m==0u&&x==1u&&e==0u){ /* A9 46 08 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5F6u,3u,0x08u,0xD5F9u);
      sc_v11_op_lda(r,0x0846u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5F9u:
    if(m==0u&&x==1u&&e==0u){ /* 8F F2 33 7E Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5F9u,4u,0x7Eu,0xD5FDu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E33F2u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5FDu:
    if(m==0u&&x==1u&&e==0u){ /* 8F F4 33 7E Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5FDu,4u,0x7Eu,0xD601u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E33F4u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D601u:
    if(m==0u&&x==1u&&e==0u){ /* A9 3D 08 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D601u,3u,0x08u,0xD604u);
      sc_v11_op_lda(r,0x083Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D604u:
    if(m==0u&&x==1u&&e==0u){ /* 8F F6 33 7E Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D604u,4u,0x7Eu,0xD608u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E33F6u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D608u:
    if(m==0u&&x==1u&&e==0u){ /* A9 3E 08 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D608u,3u,0x08u,0xD60Bu);
      sc_v11_op_lda(r,0x083Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D60Bu:
    if(m==0u&&x==1u&&e==0u){ /* 8F 30 34 7E Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D60Bu,4u,0x7Eu,0xD60Fu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3430u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D60Fu:
    if(m==0u&&x==1u&&e==0u){ /* A9 47 08 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D60Fu,3u,0x08u,0xD612u);
      sc_v11_op_lda(r,0x0847u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D612u:
    if(m==0u&&x==1u&&e==0u){ /* 8F 32 34 7E Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D612u,4u,0x7Eu,0xD616u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3432u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D616u:
    if(m==0u&&x==1u&&e==0u){ /* 8F 34 34 7E Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D616u,4u,0x7Eu,0xD61Au);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3434u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D61Au:
    if(m==0u&&x==1u&&e==0u){ /* A9 3F 08 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D61Au,3u,0x08u,0xD61Du);
      sc_v11_op_lda(r,0x083Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D61Du:
    if(m==0u&&x==1u&&e==0u){ /* 8F 36 34 7E Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D61Du,4u,0x7Eu,0xD621u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3436u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D621u:
    if(m==0u&&x==1u&&e==0u){ /* 20 D6 DB Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D621u,3u,0xDBu,0xD624u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD623u))return 0;c->pc=0xDBD6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D624u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1700; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D624u,1u,0x60u,0xD625u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D773u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D773u,2u,0x30u,0xD775u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D775u:
    if(m==1u&&x==1u&&e==0u){ /* A9 93 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D775u,2u,0x93u,0xD777u);
      sc_v11_op_lda(r,0x0093u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D777u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 05 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D777u,4u,0x7Eu,0xD77Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2005u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D77Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 11 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D77Bu,4u,0x7Eu,0xD77Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2011u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D77Fu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 1D 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D77Fu,4u,0x7Eu,0xD783u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E201Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D783u:
    if(m==1u&&x==1u&&e==0u){ /* A9 9C Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D783u,2u,0x9Cu,0xD785u);
      sc_v11_op_lda(r,0x009Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D785u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 09 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D785u,4u,0x7Eu,0xD789u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2009u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D789u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 15 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D789u,4u,0x7Eu,0xD78Du);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2015u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D78Du:
    if(m==1u&&x==1u&&e==0u){ /* 8F 21 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D78Du,4u,0x7Eu,0xD791u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2021u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D791u:
    if(m==1u&&x==1u&&e==0u){ /* A9 A5 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D791u,2u,0xA5u,0xD793u);
      sc_v11_op_lda(r,0x00A5u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D793u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 0D 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D793u,4u,0x7Eu,0xD797u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E200Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D797u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 19 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D797u,4u,0x7Eu,0xD79Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2019u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D79Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 25 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D79Bu,4u,0x7Eu,0xD79Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2025u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D79Fu:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D79Fu,2u,0x00u,0xD7A1u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7A1u:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7A1u,2u,0x00u,0xD7A3u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7A3u:
    if(m==1u&&x==1u&&e==0u){ /* 20 B8 D7 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7A3u,3u,0xD7u,0xD7A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD7A5u))return 0;c->pc=0xD7B8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7A6u:
    if(m==1u&&x==1u&&e==0u){ /* A0 01 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7A6u,2u,0x01u,0xD7A8u);
      sc_v11_op_ldy(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7A8u:
    if(m==1u&&x==1u&&e==0u){ /* A2 0C Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7A8u,2u,0x0Cu,0xD7AAu);
      sc_v11_op_ldx(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7AAu:
    if(m==1u&&x==1u&&e==0u){ /* 20 B8 D7 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7AAu,3u,0xD7u,0xD7ADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD7ACu))return 0;c->pc=0xD7B8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7ADu:
    if(m==1u&&x==1u&&e==0u){ /* A0 02 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7ADu,2u,0x02u,0xD7AFu);
      sc_v11_op_ldy(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7AFu:
    if(m==1u&&x==1u&&e==0u){ /* A2 18 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7AFu,2u,0x18u,0xD7B1u);
      sc_v11_op_ldx(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7B1u:
    if(m==1u&&x==1u&&e==0u){ /* 20 B8 D7 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B1u,3u,0xD7u,0xD7B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD7B3u))return 0;c->pc=0xD7B8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7B4u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 2F 0B Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B4u,3u,0x0Bu,0xD7B7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7B7u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B7u,1u,0x60u,0xD7B8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7B8u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B8u,2u,0x30u,0xD7BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7BAu:
    if(m==1u&&x==1u&&e==0u){ /* B9 27 0B Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7BAu,3u,0x0Bu,0xD7BDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0B27u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7BDu:
    if(m==1u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7BDu,1u,0x18u,0xD7BEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7BEu:
    if(m==1u&&x==1u&&e==0u){ /* 69 40 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7BEu,2u,0x40u,0xD7C0u);
      sc_v11_op_adc(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7C0u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 0A 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7C0u,4u,0x7Eu,0xD7C4u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E200Au),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7C4u:
    if(m==1u&&x==1u&&e==0u){ /* 48 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7C4u,1u,0x48u,0xD7C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7C5u:
    if(m==1u&&x==1u&&e==0u){ /* 1A Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7C5u,1u,0x1Au,0xD7C6u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7C6u:
    if(m==1u&&x==1u&&e==0u){ /* C9 4A Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7C6u,2u,0x4Au,0xD7C8u);
      sc_v11_op_compare(r,c->a,0x004Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7C8u:
    if(m==1u&&x==1u&&e==0u){ /* D0 02 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7C8u,2u,0x02u,0xD7CAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD7CCu;}
      if(c->pc!=0xD7CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD7CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7CCu:
    if(m==1u&&x==1u&&e==0u){ /* 9F 0E 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7CCu,4u,0x7Eu,0xD7D0u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E200Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7D0u:
    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7D0u,1u,0x68u,0xD7D1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7D1u:
    if(m==1u&&x==1u&&e==0u){ /* 3A Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7D1u,1u,0x3Au,0xD7D2u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7D2u:
    if(m==1u&&x==1u&&e==0u){ /* C9 3F Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7D2u,2u,0x3Fu,0xD7D4u);
      sc_v11_op_compare(r,c->a,0x003Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7D4u:
    if(m==1u&&x==1u&&e==0u){ /* D0 02 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7D4u,2u,0x02u,0xD7D6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD7D8u;}
      if(c->pc!=0xD7D6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD7D6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7D6u:
    if(m==1u&&x==1u&&e==0u){ /* A9 49 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7D6u,2u,0x49u,0xD7D8u);
      sc_v11_op_lda(r,0x0049u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7D8u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 06 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7D8u,4u,0x7Eu,0xD7DCu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2006u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7DCu:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7DCu,1u,0x60u,0xD7DDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7DDu:
    if(m==1u&&x==0u&&e==0u){ /* E2 10 Mesen corrected gameplay frame 1720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7DDu,2u,0x10u,0xD7DFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7DDu,2u,0x10u,0xD7DFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7DFu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7DFu,2u,0x20u,0xD7E1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7E1u:
    if(m==0u&&x==1u&&e==0u){ /* AD 2D 0B Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7E1u,3u,0x0Bu,0xD7E4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B2Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7E4u:
    if(m==0u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7E4u,1u,0x0Au,0xD7E5u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7E5u:
    if(m==0u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7E5u,1u,0xAAu,0xD7E6u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7E6u:
    if(m==0u&&x==1u&&e==0u){ /* BD FD D7 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7E6u,3u,0xD7u,0xD7E9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xD7FDu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7E9u:
    if(m==0u&&x==1u&&e==0u){ /* 8F 00 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7E9u,4u,0x7Eu,0xD7EDu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7EDu:
    if(m==0u&&x==1u&&e==0u){ /* A9 9E 3F Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7EDu,3u,0x3Fu,0xD7F0u);
      sc_v11_op_lda(r,0x3F9Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7F0u:
    if(m==0u&&x==1u&&e==0u){ /* 8F 02 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7F0u,4u,0x7Eu,0xD7F4u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2002u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7F4u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7F4u,2u,0x20u,0xD7F6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7F6u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7F6u,2u,0x02u,0xD7F8u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7F8u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 00 22 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7F8u,4u,0x7Eu,0xD7FCu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7FCu:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7FCu,1u,0x60u,0xD7FDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
