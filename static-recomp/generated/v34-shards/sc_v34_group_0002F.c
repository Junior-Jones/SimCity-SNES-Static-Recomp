/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0002F(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00BC3Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC3Fu,2u,0x20u,0xBC41u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC41u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC41u,2u,0xD7u,0xBC43u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC43u:
    if(m==0u&&x==0u&&e==0u){ /* 30 7E Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC43u,2u,0x7Eu,0xBC45u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xBCC3u;}
      if(c->pc!=0xBC45u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC45u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC45u:
    if(m==0u&&x==0u&&e==0u){ /* AD F1 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC45u,3u,0x0Au,0xBC48u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC48u:
    if(m==0u&&x==0u&&e==0u){ /* D0 4F Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC48u,2u,0x4Fu,0xBC4Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC99u;}
      if(c->pc!=0xBC4Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC4Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC4Au:
    if(m==0u&&x==0u&&e==0u){ /* AD B5 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC4Au,3u,0x0Au,0xBC4Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC4Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 4A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC4Du,2u,0x4Au,0xBC4Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC99u;}
      if(c->pc!=0xBC4Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC4Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC4Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD F7 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC4Fu,3u,0x01u,0xBC52u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC52u:
    if(m==0u&&x==0u&&e==0u){ /* D0 6F Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC52u,2u,0x6Fu,0xBC54u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCC3u;}
      if(c->pc!=0xBC54u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC54u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC54u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC54u,2u,0xD7u,0xBC56u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC56u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC56u,3u,0x00u,0xBC59u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC59u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC59u,2u,0x0Au,0xBC5Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC65u;}
      if(c->pc!=0xBC5Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC5Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC5Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC5Bu,3u,0x01u,0xBC5Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC5Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 80 40 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC5Eu,3u,0x40u,0xBC61u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC61u:
    if(m==0u&&x==0u&&e==0u){ /* D0 3C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC61u,2u,0x3Cu,0xBC63u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC9Fu;}
      if(c->pc!=0xBC63u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC63u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC63u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC63u,2u,0x08u,0xBC65u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC6Du;}
      if(c->pc!=0xBC65u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC65u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC6Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 E3 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC6Du,2u,0xE3u,0xBC6Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE3u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC6Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 52 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC6Fu,2u,0x52u,0xBC71u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCC3u;}
      if(c->pc!=0xBC71u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC71u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC71u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E1 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC71u,2u,0xE1u,0xBC73u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC73u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC73u,3u,0x00u,0xBC76u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC76u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC76u,3u,0x00u,0xBC79u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC79u:
    if(m==0u&&x==0u&&e==0u){ /* 90 48 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC79u,2u,0x48u,0xBC7Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBCC3u;}
      if(c->pc!=0xBC7Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC7Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC7Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0C Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC7Bu,2u,0x0Cu,0xBC7Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC89u;}
      if(c->pc!=0xBC7Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC7Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC7Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC7Du,2u,0x20u,0xBC7Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC7Fu:
    if(m==1u&&x==0u&&e==0u){ /* 20 54 C1 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC7Fu,3u,0xC1u,0xBC82u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC81u))return 0;c->pc=0xC154u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC82u:
    if(m==1u&&x==0u&&e==0u){ /* 20 C9 BE Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC82u,3u,0xBEu,0xBC85u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC84u))return 0;c->pc=0xBEC9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC85u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C8 BD Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC85u,3u,0xBDu,0xBC88u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC87u))return 0;c->pc=0xBDC8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC88u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC88u,1u,0x60u,0xBC89u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC89u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 C0 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC89u,3u,0xC0u,0xBC8Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC8Bu))return 0;c->pc=0xC0F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC8Cu:
    if(m==1u&&x==0u&&e==0u){ /* 20 C4 BC Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC8Cu,3u,0xBCu,0xBC8Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC8Eu))return 0;c->pc=0xBCC4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 9C BD Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC8Fu,3u,0xBDu,0xBC92u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC91u))return 0;c->pc=0xBD9Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC92u:
    if(m==0u&&x==0u&&e==0u){ /* 20 1C BE Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC92u,3u,0xBEu,0xBC95u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC94u))return 0;c->pc=0xBE1Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC95u:
    if(m==0u&&x==0u&&e==0u){ /* 20 15 BD Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC95u,3u,0xBDu,0xBC98u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC97u))return 0;c->pc=0xBD15u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC98u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC98u,1u,0x60u,0xBC99u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCC3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC3u,1u,0x60u,0xBCC4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCC4u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC4u,2u,0x30u,0xBCC6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCC6u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8B 0A Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC6u,3u,0x0Au,0xBCC9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A8Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCC9u:
    if(m==0u&&x==0u&&e==0u){ /* F0 49 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC9u,2u,0x49u,0xBCCBu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBD14u;}
      if(c->pc!=0xBCCBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCCBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD14u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD14u,1u,0x60u,0xBD15u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD15u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD15u,2u,0x30u,0xBD17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD17u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 0C Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD17u,3u,0x0Cu,0xBD1Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD1Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD1Au,2u,0x03u,0xBD1Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBD1Fu;}
      if(c->pc!=0xBD1Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBD1Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD1Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 0A Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD1Fu,3u,0x0Au,0xBD22u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A93u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD22u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD22u,2u,0x01u,0xBD24u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBD25u;}
      if(c->pc!=0xBD24u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBD24u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD24u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD24u,1u,0x60u,0xBD25u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD9Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Cu,2u,0x30u,0xBD9Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD9Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 91 0A Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Eu,3u,0x0Au,0xBDA1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A91u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDA1u:
    if(m==0u&&x==0u&&e==0u){ /* F0 24 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDA1u,2u,0x24u,0xBDA3u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBDC7u;}
      if(c->pc!=0xBDA3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDA3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDC7u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDC7u,1u,0x60u,0xBDC8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDC8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDC8u,2u,0x30u,0xBDCAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDCAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 8D 0A Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDCAu,3u,0x0Au,0xBDCDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A8Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDCDu:
    if(m==0u&&x==0u&&e==0u){ /* F0 4C Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDCDu,2u,0x4Cu,0xBDCFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBE1Bu;}
      if(c->pc!=0xBDCFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDCFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE1Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE1Bu,1u,0x60u,0xBE1Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE1Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE1Cu,2u,0x30u,0xBE1Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE1Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 8F 0A Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE1Eu,3u,0x0Au,0xBE21u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A8Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE21u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE21u,2u,0x01u,0xBE23u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBE24u;}
      if(c->pc!=0xBE23u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE23u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE23u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2551; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE23u,1u,0x60u,0xBE24u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEC9u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEC9u,2u,0x30u,0xBECBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BECBu:
    if(m==0u&&x==0u&&e==0u){ /* A5 40 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BECBu,2u,0x40u,0xBECDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x40u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BECDu:
    if(m==0u&&x==0u&&e==0u){ /* C9 06 00 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BECDu,3u,0x00u,0xBED0u);
      sc_v11_op_compare(r,c->a,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BED0u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0F Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BED0u,2u,0x0Fu,0xBED2u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBEE1u;}
      if(c->pc!=0xBED2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBED2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BED2u:
    if(m==0u&&x==0u&&e==0u){ /* A5 40 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BED2u,2u,0x40u,0xBED4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x40u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BED4u:
    if(m==0u&&x==0u&&e==0u){ /* C9 07 00 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BED4u,3u,0x00u,0xBED7u);
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BED7u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BED7u,2u,0x08u,0xBED9u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBEE1u;}
      if(c->pc!=0xBED9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBED9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BED9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 0A Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BED9u,3u,0x0Au,0xBEDCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEDCu:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEDCu,3u,0x00u,0xBEDFu);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEDFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEDFu,2u,0x01u,0xBEE1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBEE2u;}
      if(c->pc!=0xBEE1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEE1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEE1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEE1u,1u,0x60u,0xBEE2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
