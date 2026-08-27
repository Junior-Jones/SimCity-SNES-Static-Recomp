/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000F7(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03DC83u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DC83u,2u,0x30u,0xDC85u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DC83u,2u,0x30u,0xDC85u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DC85u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 01 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DC85u,3u,0x01u,0xDC88u);
      sc_v11_op_lda(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DC88u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DC88u,3u,0x02u,0xDC8Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DC8Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 A9 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DC8Bu,3u,0x00u,0xDC8Eu);
      sc_v11_op_lda(r,0x00A9u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DC8Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DC8Eu,3u,0x02u,0xDC91u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DC91u:
    if(m==0u&&x==0u&&e==0u){ /* A9 61 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DC91u,3u,0x00u,0xDC94u);
      sc_v11_op_lda(r,0x0061u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DC94u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DC94u,3u,0x02u,0xDC97u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DC97u:
    if(m==0u&&x==0u&&e==0u){ /* A9 13 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DC97u,3u,0x00u,0xDC9Au);
      sc_v11_op_lda(r,0x0013u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DC9Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DC9Au,3u,0x02u,0xDC9Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DC9Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DC9Du,2u,0x20u,0xDC9Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DC9Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DC9Fu,3u,0x00u,0xDCA2u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCA2u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCA2u,2u,0x00u,0xDCA4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xDCA4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCA4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCA4u,1u,0x60u,0xDCA5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCA5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCA5u,2u,0x30u,0xDCA7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCA5u,2u,0x30u,0xDCA7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCA7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCA7u,3u,0x00u,0xDCAAu);
      sc_v11_op_lda(r,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCAAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCAAu,3u,0x02u,0xDCADu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCADu:
    if(m==0u&&x==0u&&e==0u){ /* A9 60 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCADu,3u,0x00u,0xDCB0u);
      sc_v11_op_lda(r,0x0060u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCB0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCB0u,3u,0x02u,0xDCB3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCB3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3D 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCB3u,3u,0x00u,0xDCB6u);
      sc_v11_op_lda(r,0x003Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCB6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCB6u,3u,0x02u,0xDCB9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCB9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 28 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCB9u,3u,0x00u,0xDCBCu);
      sc_v11_op_lda(r,0x0028u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCBCu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCBCu,3u,0x02u,0xDCBFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCBFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCBFu,2u,0x20u,0xDCC1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCC1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCC1u,3u,0x00u,0xDCC4u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCC4u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCC4u,2u,0x00u,0xDCC6u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xDCC6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCC6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCC6u,2u,0x30u,0xDCC8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCC8u:
    if(m==1u&&x==1u&&e==0u){ /* AD 5B 0B Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCC8u,3u,0x0Bu,0xDCCBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B5Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCCBu:
    if(m==1u&&x==1u&&e==0u){ /* F0 30 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCCBu,2u,0x30u,0xDCCDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDCFDu;}
      if(c->pc!=0xDCCDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDCCDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCCDu:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCCDu,2u,0x00u,0xDCCFu);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCCFu:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCCFu,2u,0x00u,0xDCD1u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCD1u:
    if(m==1u&&x==1u&&e==0u){ /* 5A Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCD1u,1u,0x5Au,0xDCD2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCD2u:
    if(m==1u&&x==1u&&e==0u){ /* B9 5C 0B Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCD2u,3u,0x0Bu,0xDCD5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0B5Cu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCD5u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCD5u,1u,0x0Au,0xDCD6u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCD6u:
    if(m==1u&&x==1u&&e==0u){ /* A8 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCD6u,1u,0xA8u,0xDCD7u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCD7u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCD7u,2u,0x20u,0xDCD9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCD9u:
    if(m==0u&&x==1u&&e==0u){ /* B9 00 DD Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCD9u,3u,0xDDu,0xDCDCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDD00u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCDCu:
    if(m==0u&&x==1u&&e==0u){ /* 9F 82 20 7E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCDCu,4u,0x7Eu,0xDCE0u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2082u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCE0u:
    if(m==0u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCE0u,1u,0x18u,0xDCE1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCE1u:
    if(m==0u&&x==1u&&e==0u){ /* 69 10 00 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCE1u,3u,0x00u,0xDCE4u);
      sc_v11_op_adc(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCE4u:
    if(m==0u&&x==1u&&e==0u){ /* 9F 86 20 7E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCE4u,4u,0x7Eu,0xDCE8u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2086u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCE8u:
    if(m==0u&&x==1u&&e==0u){ /* A9 2D 3C Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCE8u,3u,0x3Cu,0xDCEBu);
      sc_v11_op_lda(r,0x3C2Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCEBu:
    if(m==0u&&x==1u&&e==0u){ /* 9F 8A 20 7E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCEBu,4u,0x7Eu,0xDCEFu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E208Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCEFu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCEFu,2u,0x20u,0xDCF1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCF1u:
    if(m==1u&&x==1u&&e==0u){ /* 8A Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCF1u,1u,0x8Au,0xDCF2u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCF2u:
    if(m==1u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCF2u,1u,0x18u,0xDCF3u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCF3u:
    if(m==1u&&x==1u&&e==0u){ /* 69 0C Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCF3u,2u,0x0Cu,0xDCF5u);
      sc_v11_op_adc(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCF5u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCF5u,1u,0xAAu,0xDCF6u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCF6u:
    if(m==1u&&x==1u&&e==0u){ /* 7A Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCF6u,1u,0x7Au,0xDCF7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCF7u:
    if(m==1u&&x==1u&&e==0u){ /* C8 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCF7u,1u,0xC8u,0xDCF8u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCF8u:
    if(m==1u&&x==1u&&e==0u){ /* CC 5B 0B Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCF8u,3u,0x0Bu,0xDCFBu);
      sc_v11_op_compare(r,c->y,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B5Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCFBu:
    if(m==1u&&x==1u&&e==0u){ /* D0 D4 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCFBu,2u,0xD4u,0xDCFDu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDCD1u;}
      if(c->pc!=0xDCFDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDCFDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCFDu:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCFDu,2u,0x30u,0xDCFFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DCFFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1738; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03DCFFu,1u,0x60u,0xDD00u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
