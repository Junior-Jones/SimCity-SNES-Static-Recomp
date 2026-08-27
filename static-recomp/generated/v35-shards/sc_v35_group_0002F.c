/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0002F(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00BC3Fu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC3Fu,2u,0x20u,0xBC41u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC3Fu,2u,0x20u,0xBC41u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC3Fu,2u,0x20u,0xBC41u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC41u:
    if(m==0u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC41u,2u,0xD7u,0xBC43u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC43u:
    if(m==0u&&x==1u&&e==0u){ /* 30 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC43u,2u,0x7Eu,0xBC45u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xBCC3u;}
      if(c->pc!=0xBC45u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC45u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC45u:
    if(m==0u&&x==1u&&e==0u){ /* AD F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC45u,3u,0x0Au,0xBC48u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC48u:
    if(m==0u&&x==1u&&e==0u){ /* D0 4F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC48u,2u,0x4Fu,0xBC4Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC99u;}
      if(c->pc!=0xBC4Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC4Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC4Au:
    if(m==0u&&x==1u&&e==0u){ /* AD B5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC4Au,3u,0x0Au,0xBC4Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC4Du:
    if(m==0u&&x==1u&&e==0u){ /* D0 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC4Du,2u,0x4Au,0xBC4Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC99u;}
      if(c->pc!=0xBC4Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC4Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC4Fu:
    if(m==0u&&x==1u&&e==0u){ /* AD F7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC4Fu,3u,0x01u,0xBC52u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC52u:
    if(m==0u&&x==1u&&e==0u){ /* D0 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC52u,2u,0x6Fu,0xBC54u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCC3u;}
      if(c->pc!=0xBC54u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC54u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC54u:
    if(m==0u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC54u,2u,0xD7u,0xBC56u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC56u:
    if(m==0u&&x==1u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC56u,3u,0x00u,0xBC59u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC59u:
    if(m==0u&&x==1u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC59u,2u,0x0Au,0xBC5Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC65u;}
      if(c->pc!=0xBC5Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC5Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC5Bu:
    if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC5Bu,3u,0x01u,0xBC5Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC5Eu:
    if(m==0u&&x==1u&&e==0u){ /* 29 80 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC5Eu,3u,0x40u,0xBC61u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC61u:
    if(m==0u&&x==1u&&e==0u){ /* D0 3C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC61u,2u,0x3Cu,0xBC63u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC9Fu;}
      if(c->pc!=0xBC63u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC63u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC63u:
    if(m==0u&&x==1u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC63u,2u,0x08u,0xBC65u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC6Du;}
      if(c->pc!=0xBC65u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC65u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC65u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC65u,3u,0x01u,0xBC68u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC65u,3u,0x01u,0xBC68u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC68u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC68u,3u,0x0Fu,0xBC6Bu);
      sc_v11_op_and(r,0x0F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 00 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC68u,3u,0x0Fu,0xBC6Bu);
      sc_v11_op_and(r,0x0F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC6Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC6Bu,2u,0x39u,0xBC6Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCA6u;}
      if(c->pc!=0xBC6Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC6Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC6Bu,2u,0x39u,0xBC6Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCA6u;}
      if(c->pc!=0xBC6Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC6Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC6Du:
    if(m==0u&&x==1u&&e==0u){ /* A5 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC6Du,2u,0xE3u,0xBC6Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE3u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC6Fu:
    if(m==0u&&x==1u&&e==0u){ /* D0 52 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC6Fu,2u,0x52u,0xBC71u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCC3u;}
      if(c->pc!=0xBC71u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC71u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC71u:
    if(m==0u&&x==1u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC71u,2u,0xE1u,0xBC73u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC73u:
    if(m==0u&&x==1u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC73u,3u,0x00u,0xBC76u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC76u:
    if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC76u,3u,0x00u,0xBC79u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC79u:
    if(m==0u&&x==1u&&e==0u){ /* 90 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC79u,2u,0x48u,0xBC7Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBCC3u;}
      if(c->pc!=0xBC7Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC7Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC7Bu:
    if(m==0u&&x==1u&&e==0u){ /* D0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC7Bu,2u,0x0Cu,0xBC7Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC89u;}
      if(c->pc!=0xBC7Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC7Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC7Du:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC7Du,2u,0x20u,0xBC7Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC7Fu:
    if(m==1u&&x==1u&&e==0u){ /* 20 54 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC7Fu,3u,0xC1u,0xBC82u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC81u))return 0;c->pc=0xC154u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC82u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C9 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC82u,3u,0xBEu,0xBC85u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC84u))return 0;c->pc=0xBEC9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C9 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC82u,3u,0xBEu,0xBC85u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC84u))return 0;c->pc=0xBEC9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C9 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC82u,3u,0xBEu,0xBC85u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC84u))return 0;c->pc=0xBEC9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC85u:
    if(m==0u&&x==1u&&e==0u){ /* 20 C8 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC85u,3u,0xBDu,0xBC88u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC87u))return 0;c->pc=0xBDC8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C8 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC85u,3u,0xBDu,0xBC88u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC87u))return 0;c->pc=0xBDC8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C8 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC85u,3u,0xBDu,0xBC88u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC87u))return 0;c->pc=0xBDC8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC88u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC88u,1u,0x60u,0xBC89u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC88u,1u,0x60u,0xBC89u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC88u,1u,0x60u,0xBC89u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC89u:
    if(m==0u&&x==1u&&e==0u){ /* 20 F5 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC89u,3u,0xC0u,0xBC8Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC8Bu))return 0;c->pc=0xC0F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC8Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 C4 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC8Cu,3u,0xBCu,0xBC8Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC8Eu))return 0;c->pc=0xBCC4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C4 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC8Cu,3u,0xBCu,0xBC8Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC8Eu))return 0;c->pc=0xBCC4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C4 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC8Cu,3u,0xBCu,0xBC8Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC8Eu))return 0;c->pc=0xBCC4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC8Fu:
    if(m==0u&&x==1u&&e==0u){ /* 20 9C BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC8Fu,3u,0xBDu,0xBC92u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC91u))return 0;c->pc=0xBD9Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9C BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC8Fu,3u,0xBDu,0xBC92u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC91u))return 0;c->pc=0xBD9Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9C BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC8Fu,3u,0xBDu,0xBC92u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC91u))return 0;c->pc=0xBD9Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC92u:
    if(m==0u&&x==1u&&e==0u){ /* 20 1C BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC92u,3u,0xBEu,0xBC95u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC94u))return 0;c->pc=0xBE1Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 1C BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC92u,3u,0xBEu,0xBC95u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC94u))return 0;c->pc=0xBE1Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1C BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC92u,3u,0xBEu,0xBC95u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC94u))return 0;c->pc=0xBE1Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC95u:
    if(m==0u&&x==1u&&e==0u){ /* 20 15 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC95u,3u,0xBDu,0xBC98u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC97u))return 0;c->pc=0xBD15u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 15 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC95u,3u,0xBDu,0xBC98u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC97u))return 0;c->pc=0xBD15u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 15 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC95u,3u,0xBDu,0xBC98u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC97u))return 0;c->pc=0xBD15u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC98u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC98u,1u,0x60u,0xBC99u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC98u,1u,0x60u,0xBC99u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC98u,1u,0x60u,0xBC99u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC99u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC99u,3u,0xC0u,0xBC9Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC9Bu))return 0;c->pc=0xC0F5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F5 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC99u,3u,0xC0u,0xBC9Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC9Bu))return 0;c->pc=0xC0F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC9Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 54 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC9Cu,3u,0xC1u,0xBC9Fu);
      c->pc=0xC154u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 54 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC9Cu,3u,0xC1u,0xBC9Fu);
      c->pc=0xC154u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 54 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC9Cu,3u,0xC1u,0xBC9Fu);
      c->pc=0xC154u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 54 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC9Cu,3u,0xC1u,0xBC9Fu);
      c->pc=0xC154u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BC9Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC9Fu,2u,0x20u,0xBCA1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BC9Fu,2u,0x20u,0xBCA1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCA1u:
    if(m==0u&&x==0u&&e==0u){ /* AD 79 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCA1u,3u,0x03u,0xBCA4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0379u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 79 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCA1u,3u,0x03u,0xBCA4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0379u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCA4u:
    if(m==0u&&x==0u&&e==0u){ /* D0 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCA4u,2u,0x1Du,0xBCA6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCC3u;}
      if(c->pc!=0xBCA6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCA6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCA4u,2u,0x1Du,0xBCA6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCC3u;}
      if(c->pc!=0xBCA6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCA6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCA6u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCA6u,3u,0x01u,0xBCA9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCA6u,3u,0x01u,0xBCA9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCA9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCA9u,2u,0x18u,0xBCABu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCC3u;}
      if(c->pc!=0xBCABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCA9u,2u,0x18u,0xBCABu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCC3u;}
      if(c->pc!=0xBCABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCABu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCABu,3u,0xC0u,0xBCAEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCADu))return 0;c->pc=0xC0F5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F5 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCABu,3u,0xC0u,0xBCAEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCADu))return 0;c->pc=0xC0F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCAEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 54 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCAEu,3u,0xC1u,0xBCB1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB0u))return 0;c->pc=0xC154u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 54 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCAEu,3u,0xC1u,0xBCB1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB0u))return 0;c->pc=0xC154u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 54 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCAEu,3u,0xC1u,0xBCB1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB0u))return 0;c->pc=0xC154u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 54 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCAEu,3u,0xC1u,0xBCB1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB0u))return 0;c->pc=0xC154u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCB1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C9 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCB1u,3u,0xBEu,0xBCB4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB3u))return 0;c->pc=0xBEC9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C9 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCB1u,3u,0xBEu,0xBCB4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB3u))return 0;c->pc=0xBEC9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C9 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCB1u,3u,0xBEu,0xBCB4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB3u))return 0;c->pc=0xBEC9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C9 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCB1u,3u,0xBEu,0xBCB4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB3u))return 0;c->pc=0xBEC9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCB4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C8 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCB4u,3u,0xBDu,0xBCB7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB6u))return 0;c->pc=0xBDC8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C8 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCB4u,3u,0xBDu,0xBCB7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB6u))return 0;c->pc=0xBDC8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C8 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCB4u,3u,0xBDu,0xBCB7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB6u))return 0;c->pc=0xBDC8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C8 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCB4u,3u,0xBDu,0xBCB7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB6u))return 0;c->pc=0xBDC8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCB7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C4 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCB7u,3u,0xBCu,0xBCBAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB9u))return 0;c->pc=0xBCC4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C4 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCB7u,3u,0xBCu,0xBCBAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB9u))return 0;c->pc=0xBCC4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C4 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCB7u,3u,0xBCu,0xBCBAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB9u))return 0;c->pc=0xBCC4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C4 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCB7u,3u,0xBCu,0xBCBAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB9u))return 0;c->pc=0xBCC4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCBAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 9C BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCBAu,3u,0xBDu,0xBCBDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCBCu))return 0;c->pc=0xBD9Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9C BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCBAu,3u,0xBDu,0xBCBDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCBCu))return 0;c->pc=0xBD9Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9C BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCBAu,3u,0xBDu,0xBCBDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCBCu))return 0;c->pc=0xBD9Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9C BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCBAu,3u,0xBDu,0xBCBDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCBCu))return 0;c->pc=0xBD9Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCBDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 1C BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCBDu,3u,0xBEu,0xBCC0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCBFu))return 0;c->pc=0xBE1Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1C BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCBDu,3u,0xBEu,0xBCC0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCBFu))return 0;c->pc=0xBE1Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 1C BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCBDu,3u,0xBEu,0xBCC0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCBFu))return 0;c->pc=0xBE1Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1C BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCBDu,3u,0xBEu,0xBCC0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCBFu))return 0;c->pc=0xBE1Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCC0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 15 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC0u,3u,0xBDu,0xBCC3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCC2u))return 0;c->pc=0xBD15u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 15 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC0u,3u,0xBDu,0xBCC3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCC2u))return 0;c->pc=0xBD15u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 15 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC0u,3u,0xBDu,0xBCC3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCC2u))return 0;c->pc=0xBD15u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 15 BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC0u,3u,0xBDu,0xBCC3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCC2u))return 0;c->pc=0xBD15u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCC3u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC3u,1u,0x60u,0xBCC4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC3u,1u,0x60u,0xBCC4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC3u,1u,0x60u,0xBCC4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCC4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC4u,2u,0x30u,0xBCC6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC4u,2u,0x30u,0xBCC6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCC4u,2u,0x30u,0xBCC6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCCBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCCBu,3u,0x00u,0xBCCEu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCCEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 80 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCCEu,3u,0xBFu,0xBCD1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCD0u))return 0;c->pc=0xBF80u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCD1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCD1u,2u,0x30u,0xBCD3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCD1u,2u,0x30u,0xBCD3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCD1u,2u,0x30u,0xBCD3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCD1u,2u,0x30u,0xBCD3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCD3u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCD3u,2u,0xD7u,0xBCD5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCD5u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCD5u,3u,0x00u,0xBCD8u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCD8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCD8u,2u,0x15u,0xBCDAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCEFu;}
      if(c->pc!=0xBCDAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCDAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCDAu:
    if(m==0u&&x==0u&&e==0u){ /* A2 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCDAu,3u,0x00u,0xBCDDu);
      sc_v11_op_ldx(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCDDu:
    if(m==0u&&x==0u&&e==0u){ /* BF B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCDDu,4u,0x7Eu,0xBCE1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E21B4u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCE1u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCE1u,1u,0x38u,0xBCE2u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCE2u:
    if(m==0u&&x==0u&&e==0u){ /* E9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCE2u,3u,0x00u,0xBCE5u);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCE5u:
    if(m==0u&&x==0u&&e==0u){ /* 9F B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCE5u,4u,0x7Eu,0xBCE9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E21B4u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCE9u:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCE9u,1u,0xCAu,0xBCEAu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCEAu:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCEAu,1u,0xCAu,0xBCEBu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCEBu:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCEBu,1u,0xCAu,0xBCECu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCECu:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCECu,1u,0xCAu,0xBCEDu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCEDu:
    if(m==0u&&x==0u&&e==0u){ /* 10 EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCEDu,2u,0xEEu,0xBCEFu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xBCDDu;}
      if(c->pc!=0xBCEFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCEFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCEFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 28 3C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCEFu,3u,0x3Cu,0xBCF2u);
      sc_v11_op_lda(r,0x3C28u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCF2u:
    if(m==0u&&x==0u&&e==0u){ /* AE C5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCF2u,3u,0x0Au,0xBCF5u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCF5u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCF5u,2u,0x03u,0xBCF7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBCFAu;}
      if(c->pc!=0xBCF7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCF7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCF7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 28 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCF7u,3u,0x3Au,0xBCFAu);
      sc_v11_op_lda(r,0x3A28u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCFAu:
    if(m==0u&&x==0u&&e==0u){ /* 8F B6 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCFAu,4u,0x7Eu,0xBCFEu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21B6u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCFEu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCFEu,1u,0x18u,0xBCFFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BCFFu:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BCFFu,3u,0x00u,0xBD02u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD02u:
    if(m==0u&&x==0u&&e==0u){ /* 8F BA 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD02u,4u,0x7Eu,0xBD06u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21BAu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD06u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD06u,3u,0x00u,0xBD09u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD09u:
    if(m==0u&&x==0u&&e==0u){ /* 8F C2 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD09u,4u,0x7Eu,0xBD0Du);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21C2u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD0Du:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD0Du,3u,0x00u,0xBD10u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD10u:
    if(m==0u&&x==0u&&e==0u){ /* 8F BE 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD10u,4u,0x7Eu,0xBD14u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21BEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD15u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD15u,2u,0x30u,0xBD17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD15u,2u,0x30u,0xBD17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD15u,2u,0x30u,0xBD17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD1Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 93 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD1Cu,3u,0x0Au,0xBD1Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A93u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD25u:
    if(m==0u&&x==0u&&e==0u){ /* AD E7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD25u,3u,0x0Au,0xBD28u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AE7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD28u:
    if(m==0u&&x==0u&&e==0u){ /* D0 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD28u,2u,0x71u,0xBD2Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBD9Bu;}
      if(c->pc!=0xBD2Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBD2Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD2Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD2Au,3u,0x00u,0xBD2Du);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD2Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 80 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD2Du,3u,0xBFu,0xBD30u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD2Fu))return 0;c->pc=0xBF80u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD30u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD30u,2u,0x20u,0xBD32u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD30u,2u,0x20u,0xBD32u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD30u,2u,0x20u,0xBD32u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD30u,2u,0x20u,0xBD32u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD32u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD32u,3u,0x00u,0xBD35u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD32u,3u,0x00u,0xBD35u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD35u:
    if(m==0u&&x==0u&&e==0u){ /* A6 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD35u,2u,0xD7u,0xBD37u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A6 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD35u,2u,0xD7u,0xBD37u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD37u:
    if(m==0u&&x==0u&&e==0u){ /* E0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD37u,3u,0x00u,0xBD3Au);
      sc_v11_op_compare(r,c->x,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD37u,2u,0x01u,0xBD39u);
      sc_v11_op_compare(r,c->x,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD3Au:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD3Au,2u,0x03u,0xBD3Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBD3Fu;}
      if(c->pc!=0xBD3Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBD3Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD3Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD3Cu,3u,0x00u,0xBD3Fu);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD3Fu,2u,0x91u,0xBD41u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD41u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD41u,2u,0x20u,0xBD43u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD43u:
    if(m==1u&&x==0u&&e==0u){ /* AF EC 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD43u,4u,0x7Eu,0xBD47u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E21ECu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD47u:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD47u,1u,0x38u,0xBD48u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD48u:
    if(m==1u&&x==0u&&e==0u){ /* E5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD48u,2u,0x91u,0xBD4Au);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x91u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD4Au:
    if(m==1u&&x==0u&&e==0u){ /* 8F EC 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD4Au,4u,0x7Eu,0xBD4Eu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21ECu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD4Eu:
    if(m==1u&&x==0u&&e==0u){ /* B0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD4Eu,2u,0x0Au,0xBD50u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBD5Au;}
      if(c->pc!=0xBD50u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBD50u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD50u:
    if(m==1u&&x==0u&&e==0u){ /* AF 1E 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD50u,4u,0x7Eu,0xBD54u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Eu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD54u:
    if(m==1u&&x==0u&&e==0u){ /* 09 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD54u,2u,0x40u,0xBD56u);
      sc_v11_op_ora(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD56u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 1E 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD56u,4u,0x7Eu,0xBD5Au);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD5Au:
    if(m==1u&&x==0u&&e==0u){ /* AF ED 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD5Au,4u,0x7Eu,0xBD5Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E21EDu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD5Eu:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD5Eu,1u,0x18u,0xBD5Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD5Fu:
    if(m==1u&&x==0u&&e==0u){ /* 69 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD5Fu,2u,0x06u,0xBD61u);
      sc_v11_op_adc(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD61u:
    if(m==1u&&x==0u&&e==0u){ /* 8F ED 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD61u,4u,0x7Eu,0xBD65u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21EDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD65u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD65u,2u,0x20u,0xBD67u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD67u:
    if(m==0u&&x==0u&&e==0u){ /* A9 4E 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD67u,3u,0x28u,0xBD6Au);
      sc_v11_op_lda(r,0x284Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD6Au:
    if(m==0u&&x==0u&&e==0u){ /* 8F EE 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD6Au,4u,0x7Eu,0xBD6Eu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21EEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD6Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD6Eu,2u,0x20u,0xBD70u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD70u:
    if(m==1u&&x==0u&&e==0u){ /* AF 1E 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD70u,4u,0x7Eu,0xBD74u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Eu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD74u:
    if(m==1u&&x==0u&&e==0u){ /* 29 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD74u,2u,0xC0u,0xBD76u);
      sc_v11_op_and(r,0x00C0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD76u:
    if(m==1u&&x==0u&&e==0u){ /* C9 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD76u,2u,0x40u,0xBD78u);
      sc_v11_op_compare(r,c->a,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD78u:
    if(m==1u&&x==0u&&e==0u){ /* D0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD78u,2u,0x04u,0xBD7Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBD7Eu;}
      if(c->pc!=0xBD7Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBD7Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD7Au:
    if(m==1u&&x==0u&&e==0u){ /* 9C EA 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD7Au,3u,0x0Au,0xBD7Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AEAu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD7Du:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD7Du,1u,0x60u,0xBD7Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD7Eu:
    if(m==1u&&x==0u&&e==0u){ /* 2C EA 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD7Eu,3u,0x0Au,0xBD81u);
      {uint16_t q=sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AEAu));uint16_t z=(uint16_t)((c->a&0x00FFu)&q);c->p=(uint8_t)(c->p&~(SC_FLAG_N|SC_FLAG_V|SC_FLAG_Z));if(!z)c->p|=SC_FLAG_Z;if(q&0x0080u)c->p|=SC_FLAG_N;if(q&0x0040u)c->p|=SC_FLAG_V;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD81u:
    if(m==1u&&x==0u&&e==0u){ /* D0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD81u,2u,0x18u,0xBD83u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBD9Bu;}
      if(c->pc!=0xBD83u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBD83u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD83u:
    if(m==1u&&x==0u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD83u,2u,0x80u,0xBD85u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD85u:
    if(m==1u&&x==0u&&e==0u){ /* 8D EA 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD85u,3u,0x0Au,0xBD88u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AEAu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD88u:
    if(m==1u&&x==0u&&e==0u){ /* AD E9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD88u,3u,0x0Au,0xBD8Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AE9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD8Bu:
    if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD8Bu,1u,0x1Au,0xBD8Cu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD8Cu:
    if(m==1u&&x==0u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD8Cu,2u,0x07u,0xBD8Eu);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD8Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D E9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD8Eu,3u,0x0Au,0xBD91u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AE9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD91u:
    if(m==1u&&x==0u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD91u,2u,0x08u,0xBD93u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBD9Bu;}
      if(c->pc!=0xBD93u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBD93u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD93u:
    if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD93u,1u,0x08u,0xBD94u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD94u:
    if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD94u,4u,0x00u,0xBD98u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xBD97u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD98u:
    if(m==0u&&x==0u&&e==0u){ /* 03 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD98u,2u,0x1Fu,0xBD9Au);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x1Fu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD98u,2u,0x1Fu,0xBD9Au);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x1Fu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD98u,2u,0x1Fu,0xBD9Au);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x1Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD98u,2u,0x1Fu,0xBD9Au);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x1Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD9Au:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Au,1u,0x28u,0xBD9Bu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Au,1u,0x28u,0xBD9Bu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Au,1u,0x28u,0xBD9Bu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Au,1u,0x28u,0xBD9Bu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD9Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Bu,1u,0x60u,0xBD9Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Bu,1u,0x60u,0xBD9Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Bu,1u,0x60u,0xBD9Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Bu,1u,0x60u,0xBD9Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BD9Cu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Cu,2u,0x30u,0xBD9Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Cu,2u,0x30u,0xBD9Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BD9Cu,2u,0x30u,0xBD9Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDA3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDA3u,3u,0x00u,0xBDA6u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDA6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 80 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDA6u,3u,0xBFu,0xBDA9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBDA8u))return 0;c->pc=0xBF80u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDA9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDA9u,2u,0x20u,0xBDABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDA9u,2u,0x20u,0xBDABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDA9u,2u,0x20u,0xBDABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDA9u,2u,0x20u,0xBDABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDABu:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 3E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDABu,3u,0x3Eu,0xBDAEu);
      sc_v11_op_lda(r,0x3E20u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 20 3E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDABu,3u,0x3Eu,0xBDAEu);
      sc_v11_op_lda(r,0x3E20u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDAEu:
    if(m==0u&&x==0u&&e==0u){ /* 8F DE 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDAEu,4u,0x7Eu,0xBDB2u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21DEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F DE 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDAEu,4u,0x7Eu,0xBDB2u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21DEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDB2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 22 3E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDB2u,3u,0x3Eu,0xBDB5u);
      sc_v11_op_lda(r,0x3E22u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 22 3E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDB2u,3u,0x3Eu,0xBDB5u);
      sc_v11_op_lda(r,0x3E22u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDB5u:
    if(m==0u&&x==0u&&e==0u){ /* 8F E2 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDB5u,4u,0x7Eu,0xBDB9u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21E2u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F E2 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDB5u,4u,0x7Eu,0xBDB9u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21E2u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDB9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 24 3E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDB9u,3u,0x3Eu,0xBDBCu);
      sc_v11_op_lda(r,0x3E24u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 24 3E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDB9u,3u,0x3Eu,0xBDBCu);
      sc_v11_op_lda(r,0x3E24u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDBCu:
    if(m==0u&&x==0u&&e==0u){ /* 8F EA 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDBCu,4u,0x7Eu,0xBDC0u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21EAu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F EA 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDBCu,4u,0x7Eu,0xBDC0u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21EAu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDC0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 26 3E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDC0u,3u,0x3Eu,0xBDC3u);
      sc_v11_op_lda(r,0x3E26u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 26 3E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDC0u,3u,0x3Eu,0xBDC3u);
      sc_v11_op_lda(r,0x3E26u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDC3u:
    if(m==0u&&x==0u&&e==0u){ /* 8F E6 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDC3u,4u,0x7Eu,0xBDC7u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21E6u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F E6 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDC3u,4u,0x7Eu,0xBDC7u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21E6u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDC7u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDC7u,1u,0x60u,0xBDC8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDC8u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDC8u,2u,0x30u,0xBDCAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDC8u,2u,0x30u,0xBDCAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDC8u,2u,0x30u,0xBDCAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDCFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDCFu,3u,0x00u,0xBDD2u);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDD2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 80 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDD2u,3u,0xBFu,0xBDD5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBDD4u))return 0;c->pc=0xBF80u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDD5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDD5u,2u,0x30u,0xBDD7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDD5u,2u,0x30u,0xBDD7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDD5u,2u,0x30u,0xBDD7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDD5u,2u,0x30u,0xBDD7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDD7u:
    if(m==1u&&x==1u&&e==0u){ /* AE 9F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDD7u,3u,0x0Au,0xBDDAu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A9Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDDAu:
    if(m==1u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDDAu,2u,0xD7u,0xBDDCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDDCu:
    if(m==1u&&x==1u&&e==0u){ /* C9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDDCu,2u,0x01u,0xBDDEu);
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDDEu:
    if(m==1u&&x==1u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDDEu,2u,0x06u,0xBDE0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBDE6u;}
      if(c->pc!=0xBDE0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDE0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDE0u:
    if(m==1u&&x==1u&&e==0u){ /* E0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDE0u,2u,0x04u,0xBDE2u);
      sc_v11_op_compare(r,c->x,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDE2u:
    if(m==1u&&x==1u&&e==0u){ /* D0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDE2u,2u,0x02u,0xBDE4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBDE6u;}
      if(c->pc!=0xBDE4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDE4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDE4u:
    if(m==1u&&x==1u&&e==0u){ /* A2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDE4u,2u,0x03u,0xBDE6u);
      sc_v11_op_ldx(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDE6u:
    if(m==1u&&x==1u&&e==0u){ /* BD DB BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDE6u,3u,0xBBu,0xBDE9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBBDBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDE9u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDE9u,1u,0x48u,0xBDEAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDEAu:
    if(m==1u&&x==1u&&e==0u){ /* BD D3 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDEAu,3u,0xBBu,0xBDEDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBBD3u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDEDu:
    if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDEDu,1u,0xFAu,0xBDEEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDEEu:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDEEu,1u,0xEBu,0xBDEFu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDEFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDEFu,2u,0x08u,0xBDF1u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDF1u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDF1u,2u,0x20u,0xBDF3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDF3u:
    if(m==0u&&x==1u&&e==0u){ /* 09 00 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDF3u,3u,0x30u,0xBDF6u);
      sc_v11_op_ora(r,0x3000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDF6u:
    if(m==0u&&x==1u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDF6u,2u,0x91u,0xBDF8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDF8u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDF8u,1u,0x18u,0xBDF9u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDF9u:
    if(m==0u&&x==1u&&e==0u){ /* 7D B3 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDF9u,3u,0xBBu,0xBDFCu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBBB3u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BDFCu:
    if(m==0u&&x==1u&&e==0u){ /* 8F C6 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BDFCu,4u,0x7Eu,0xBE00u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21C6u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE00u:
    if(m==0u&&x==1u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE00u,2u,0x91u,0xBE02u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE02u:
    if(m==0u&&x==1u&&e==0u){ /* 7D B5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE02u,3u,0xBBu,0xBE05u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBBB5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE05u:
    if(m==0u&&x==1u&&e==0u){ /* 8F CA 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE05u,4u,0x7Eu,0xBE09u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21CAu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE09u:
    if(m==0u&&x==1u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE09u,2u,0x91u,0xBE0Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE0Bu:
    if(m==0u&&x==1u&&e==0u){ /* 7D B7 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE0Bu,3u,0xBBu,0xBE0Eu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBBB7u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE0Eu:
    if(m==0u&&x==1u&&e==0u){ /* 8F D2 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE0Eu,4u,0x7Eu,0xBE12u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21D2u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE12u:
    if(m==0u&&x==1u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE12u,2u,0x91u,0xBE14u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE14u:
    if(m==0u&&x==1u&&e==0u){ /* 7D B9 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE14u,3u,0xBBu,0xBE17u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBBB9u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE17u:
    if(m==0u&&x==1u&&e==0u){ /* 8F CE 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE17u,4u,0x7Eu,0xBE1Bu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21CEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE1Bu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE1Bu,1u,0x60u,0xBE1Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE1Cu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE1Cu,2u,0x30u,0xBE1Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE1Cu,2u,0x30u,0xBE1Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE1Cu,2u,0x30u,0xBE1Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE24u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE24u,3u,0x00u,0xBE27u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE27u:
    if(m==0u&&x==0u&&e==0u){ /* 85 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE27u,2u,0x97u,0xBE29u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x97u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE29u:
    if(m==0u&&x==0u&&e==0u){ /* A9 D4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE29u,3u,0x01u,0xBE2Cu);
      sc_v11_op_lda(r,0x01D4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE2Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE2Cu,3u,0x0Bu,0xBE2Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE2Fu:
    if(m==0u&&x==0u&&e==0u){ /* A0 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE2Fu,3u,0x00u,0xBE32u);
      sc_v11_op_ldy(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE32u:
    if(m==0u&&x==0u&&e==0u){ /* AD 5D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE32u,3u,0x0Au,0xBE35u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A5Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE35u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE35u,1u,0x3Au,0xBE36u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE36u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE36u,2u,0x91u,0xBE38u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE38u:
    if(m==0u&&x==0u&&e==0u){ /* AD 5B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE38u,3u,0x0Au,0xBE3Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A5Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE3Bu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE3Bu,1u,0x3Au,0xBE3Cu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE3Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE3Cu,2u,0x94u,0xBE3Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE3Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 19 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE3Eu,3u,0xC0u,0xBE41u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBE40u))return 0;c->pc=0xC019u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE41u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE41u,2u,0x20u,0xBE43u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE41u,2u,0x20u,0xBE43u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE41u,2u,0x20u,0xBE43u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE41u,2u,0x20u,0xBE43u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE43u:
    if(m==1u&&x==0u&&e==0u){ /* AF 1D 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE43u,4u,0x7Eu,0xBE47u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 1D 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE43u,4u,0x7Eu,0xBE47u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE47u:
    if(m==1u&&x==0u&&e==0u){ /* 29 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE47u,2u,0xCFu,0xBE49u);
      sc_v11_op_and(r,0x00CFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE47u,2u,0xCFu,0xBE49u);
      sc_v11_op_and(r,0x00CFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE49u:
    if(m==1u&&x==0u&&e==0u){ /* 09 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE49u,2u,0x10u,0xBE4Bu);
      sc_v11_op_ora(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE49u,2u,0x10u,0xBE4Bu);
      sc_v11_op_ora(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE4Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 1D 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE4Bu,4u,0x7Eu,0xBE4Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 1D 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE4Bu,4u,0x7Eu,0xBE4Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE4Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE4Fu,2u,0x30u,0xBE51u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE4Fu,2u,0x30u,0xBE51u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE51u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE51u,3u,0x0Au,0xBE54u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A9Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE54u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE54u,1u,0x4Au,0xBE55u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE55u:
    if(m==0u&&x==0u&&e==0u){ /* B0 3D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE55u,2u,0x3Du,0xBE57u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBE94u;}
      if(c->pc!=0xBE57u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE57u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE57u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE57u,3u,0x00u,0xBE5Au);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE5Au:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE5Au,1u,0x0Au,0xBE5Bu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE5Bu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE5Bu,1u,0xAAu,0xBE5Cu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE5Cu:
    if(m==0u&&x==0u&&e==0u){ /* BD FF BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE5Cu,3u,0xBBu,0xBE5Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBBFFu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE5Fu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE5Fu,1u,0x18u,0xBE60u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE60u:
    if(m==0u&&x==0u&&e==0u){ /* 65 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE60u,2u,0x91u,0xBE62u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE62u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE62u,2u,0x91u,0xBE64u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE64u:
    if(m==0u&&x==0u&&e==0u){ /* BD 07 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE64u,3u,0xBCu,0xBE67u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBC07u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE67u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE67u,1u,0x18u,0xBE68u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE68u:
    if(m==0u&&x==0u&&e==0u){ /* 65 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE68u,2u,0x94u,0xBE6Au);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE6Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE6Au,2u,0x94u,0xBE6Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE6Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 D8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE6Cu,3u,0x01u,0xBE6Fu);
      sc_v11_op_lda(r,0x01D8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE6Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE6Fu,3u,0x0Bu,0xBE72u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE72u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE72u,3u,0x00u,0xBE75u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE75u:
    if(m==0u&&x==0u&&e==0u){ /* 85 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE75u,2u,0x97u,0xBE77u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x97u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE77u:
    if(m==0u&&x==0u&&e==0u){ /* 20 19 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE77u,3u,0xC0u,0xBE7Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBE79u))return 0;c->pc=0xC019u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE7Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE7Au,2u,0x20u,0xBE7Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE7Au,2u,0x20u,0xBE7Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE7Au,2u,0x20u,0xBE7Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE7Au,2u,0x20u,0xBE7Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE7Cu:
    if(m==1u&&x==0u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE7Cu,2u,0xD7u,0xBE7Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE7Cu,2u,0xD7u,0xBE7Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE7Eu:
    if(m==1u&&x==0u&&e==0u){ /* C9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE7Eu,2u,0x01u,0xBE80u);
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE7Eu,2u,0x01u,0xBE80u);
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE80u:
    if(m==1u&&x==0u&&e==0u){ /* D0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE80u,2u,0x12u,0xBE82u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBE94u;}
      if(c->pc!=0xBE82u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE82u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE80u,2u,0x12u,0xBE82u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBE94u;}
      if(c->pc!=0xBE82u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE82u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE82u:
    if(m==1u&&x==0u&&e==0u){ /* AD 9B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE82u,3u,0x0Au,0xBE85u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A9Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 9B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE82u,3u,0x0Au,0xBE85u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A9Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE85u:
    if(m==1u&&x==0u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE85u,2u,0x03u,0xBE87u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE85u,2u,0x03u,0xBE87u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE87u:
    if(m==1u&&x==0u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE87u,2u,0x0Bu,0xBE89u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBE94u;}
      if(c->pc!=0xBE89u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE89u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE87u,2u,0x0Bu,0xBE89u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBE94u;}
      if(c->pc!=0xBE89u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE89u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE89u:
    if(m==1u&&x==0u&&e==0u){ /* AF D4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE89u,4u,0x7Eu,0xBE8Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E21D4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF D4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE89u,4u,0x7Eu,0xBE8Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E21D4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE8Du:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE8Du,1u,0x18u,0xBE8Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE8Du,1u,0x18u,0xBE8Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE8Eu:
    if(m==1u&&x==0u&&e==0u){ /* 69 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE8Eu,2u,0x08u,0xBE90u);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE8Eu,2u,0x08u,0xBE90u);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE90u:
    if(m==1u&&x==0u&&e==0u){ /* 8F D8 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE90u,4u,0x7Eu,0xBE94u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21D8u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F D8 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE90u,4u,0x7Eu,0xBE94u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21D8u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE94u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE94u,2u,0x30u,0xBE96u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE94u,2u,0x30u,0xBE96u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE94u,2u,0x30u,0xBE96u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE96u:
    if(m==1u&&x==1u&&e==0u){ /* AE 9B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE96u,3u,0x0Au,0xBE99u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A9Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE99u:
    if(m==1u&&x==1u&&e==0u){ /* AD EB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE99u,3u,0x0Au,0xBE9Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AEBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE9Cu:
    if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE9Cu,2u,0x03u,0xBE9Eu);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE9Eu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE9Eu,1u,0x18u,0xBE9Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BE9Fu:
    if(m==1u&&x==1u&&e==0u){ /* 7D 0F BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BE9Fu,3u,0xBCu,0xBEA2u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBC0Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEA2u:
    if(m==1u&&x==1u&&e==0u){ /* 8F D6 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEA2u,4u,0x7Eu,0xBEA6u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21D6u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEA6u:
    if(m==1u&&x==1u&&e==0u){ /* BD 1F BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEA6u,3u,0xBCu,0xBEA9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBC1Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEA9u:
    if(m==1u&&x==1u&&e==0u){ /* 8F D7 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEA9u,4u,0x7Eu,0xBEADu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21D7u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEADu:
    if(m==1u&&x==1u&&e==0u){ /* AD 9B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEADu,3u,0x0Au,0xBEB0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A9Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEB0u:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEB0u,1u,0x4Au,0xBEB1u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEB1u:
    if(m==1u&&x==1u&&e==0u){ /* B0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEB1u,2u,0x15u,0xBEB3u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBEC8u;}
      if(c->pc!=0xBEB3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEB3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEB3u:
    if(m==1u&&x==1u&&e==0u){ /* AD EB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEB3u,3u,0x0Au,0xBEB6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AEBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEB6u:
    if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEB6u,2u,0x03u,0xBEB8u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEB8u:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEB8u,1u,0x4Au,0xBEB9u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEB9u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEB9u,1u,0x18u,0xBEBAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEBAu:
    if(m==1u&&x==1u&&e==0u){ /* 7D 17 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEBAu,3u,0xBCu,0xBEBDu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBC17u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEBDu:
    if(m==1u&&x==1u&&e==0u){ /* 8F DA 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEBDu,4u,0x7Eu,0xBEC1u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21DAu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEC1u:
    if(m==1u&&x==1u&&e==0u){ /* BD 1F BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEC1u,3u,0xBCu,0xBEC4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBC1Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEC4u:
    if(m==1u&&x==1u&&e==0u){ /* 8F DB 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEC4u,4u,0x7Eu,0xBEC8u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21DBu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEC8u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEC8u,1u,0x60u,0xBEC9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEC9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEC9u,2u,0x30u,0xBECBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEC9u,2u,0x30u,0xBECBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEC9u,2u,0x30u,0xBECBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEE2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEE2u,2u,0x30u,0xBEE4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEE4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEE4u,3u,0x00u,0xBEE7u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEE7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEE7u,2u,0x91u,0xBEE9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEE9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4D BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEE9u,3u,0xBFu,0xBEECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBEEBu))return 0;c->pc=0xBF4Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEECu:
    if(m==0u&&x==0u&&e==0u){ /* A9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEECu,3u,0x00u,0xBEEFu);
      sc_v11_op_lda(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEECu,3u,0x00u,0xBEEFu);
      sc_v11_op_lda(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEECu,2u,0x14u,0xBEEEu);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEECu,2u,0x14u,0xBEEEu);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEEFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 80 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEEFu,3u,0xBFu,0xBEF2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBEF1u))return 0;c->pc=0xBF80u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 80 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEEFu,3u,0xBFu,0xBEF2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBEF1u))return 0;c->pc=0xBF80u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEF2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEF2u,2u,0x30u,0xBEF4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEF2u,2u,0x30u,0xBEF4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEF2u,2u,0x30u,0xBEF4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEF2u,2u,0x30u,0xBEF4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEF4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEF4u,3u,0x00u,0xBEF7u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEF7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEF7u,2u,0x91u,0xBEF9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEF9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4D BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEF9u,3u,0xBFu,0xBEFCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBEFBu))return 0;c->pc=0xBF4Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEFCu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEFCu,2u,0x30u,0xBEFEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEFCu,2u,0x30u,0xBEFEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEFCu,2u,0x30u,0xBEFEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEFCu,2u,0x30u,0xBEFEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BEFEu:
    if(m==1u&&x==1u&&e==0u){ /* AE 0C 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BEFEu,3u,0x0Bu,0xBF01u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B0Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF01u:
    if(m==1u&&x==1u&&e==0u){ /* 30 49 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF01u,2u,0x49u,0xBF03u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xBF4Cu;}
      if(c->pc!=0xBF03u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF03u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF03u:
    if(m==1u&&x==1u&&e==0u){ /* AE 0B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF03u,3u,0x0Bu,0xBF06u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B0Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF06u:
    if(m==1u&&x==1u&&e==0u){ /* E0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF06u,2u,0x04u,0xBF08u);
      sc_v11_op_compare(r,c->x,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF08u:
    if(m==1u&&x==1u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF08u,2u,0x0Au,0xBF0Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBF14u;}
      if(c->pc!=0xBF0Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF0Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF0Au:
    if(m==1u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF0Au,2u,0xD7u,0xBF0Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF0Cu:
    if(m==1u&&x==1u&&e==0u){ /* C9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF0Cu,2u,0x01u,0xBF0Eu);
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF0Eu:
    if(m==1u&&x==1u&&e==0u){ /* D0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF0Eu,2u,0x04u,0xBF10u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBF14u;}
      if(c->pc!=0xBF10u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF10u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF10u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF10u,2u,0x02u,0xBF12u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF12u:
    if(m==1u&&x==1u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF12u,2u,0x06u,0xBF14u);
      if(1){c->pc=0xBF1Au;}
      if(c->pc!=0xBF14u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF14u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF14u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF14u,2u,0x30u,0xBF16u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF16u:
    if(m==1u&&x==1u&&e==0u){ /* BD 2F BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF16u,3u,0xBCu,0xBF19u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBC2Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF19u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF19u,1u,0xAAu,0xBF1Au);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF1Au:
    if(m==1u&&x==1u&&e==0u){ /* BD 2B BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF1Au,3u,0xBCu,0xBF1Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBC2Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF1Du:
    if(m==1u&&x==1u&&e==0u){ /* 85 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF1Du,2u,0x92u,0xBF1Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x92u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF1Fu:
    if(m==1u&&x==1u&&e==0u){ /* 64 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF1Fu,2u,0x91u,0xBF21u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF21u:
    if(m==1u&&x==1u&&e==0u){ /* BD 27 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF21u,3u,0xBCu,0xBF24u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBC27u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF24u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF24u,1u,0xAAu,0xBF25u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF25u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF25u,2u,0x20u,0xBF27u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF27u:
    if(m==0u&&x==1u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF27u,2u,0x91u,0xBF29u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF29u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF29u,1u,0x18u,0xBF2Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF2Au:
    if(m==0u&&x==1u&&e==0u){ /* 7D B3 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF2Au,3u,0xBBu,0xBF2Du);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBBB3u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF2Du:
    if(m==0u&&x==1u&&e==0u){ /* 8F F2 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF2Du,4u,0x7Eu,0xBF31u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21F2u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF31u:
    if(m==0u&&x==1u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF31u,2u,0x91u,0xBF33u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF33u:
    if(m==0u&&x==1u&&e==0u){ /* 7D B5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF33u,3u,0xBBu,0xBF36u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBBB5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF36u:
    if(m==0u&&x==1u&&e==0u){ /* 8F F6 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF36u,4u,0x7Eu,0xBF3Au);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21F6u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF3Au:
    if(m==0u&&x==1u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF3Au,2u,0x91u,0xBF3Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF3Cu:
    if(m==0u&&x==1u&&e==0u){ /* 7D B7 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF3Cu,3u,0xBBu,0xBF3Fu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBBB7u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF3Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8F FE 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF3Fu,4u,0x7Eu,0xBF43u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21FEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF43u:
    if(m==0u&&x==1u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF43u,2u,0x91u,0xBF45u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF45u:
    if(m==0u&&x==1u&&e==0u){ /* 7D B9 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF45u,3u,0xBBu,0xBF48u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBBB9u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF48u:
    if(m==0u&&x==1u&&e==0u){ /* 8F FA 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF48u,4u,0x7Eu,0xBF4Cu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21FAu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF4Cu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF4Cu,1u,0x60u,0xBF4Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF4Cu,1u,0x60u,0xBF4Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF4Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF4Du,2u,0x20u,0xBF4Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF4Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 13 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF4Fu,3u,0x0Bu,0xBF52u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF52u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF52u,1u,0x18u,0xBF53u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF53u:
    if(m==0u&&x==0u&&e==0u){ /* 65 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF53u,2u,0x91u,0xBF55u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF55u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF55u,3u,0x0Au,0xBF58u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A65u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF58u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF58u,3u,0x00u,0xBF5Bu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF5Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 81 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF5Bu,3u,0x0Au,0xBF5Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A81u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF5Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4E 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF5Eu,3u,0x0Au,0xBF61u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0A65u),16u,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF61u:
    if(m==0u&&x==0u&&e==0u){ /* 4E 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF61u,3u,0x0Au,0xBF64u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0A65u),16u,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF64u:
    if(m==0u&&x==0u&&e==0u){ /* 4E 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF64u,3u,0x0Au,0xBF67u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0A65u),16u,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF67u:
    if(m==0u&&x==0u&&e==0u){ /* AD 11 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF67u,3u,0x0Bu,0xBF6Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B11u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF6Au:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF6Au,1u,0x38u,0xBF6Bu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF6Bu:
    if(m==0u&&x==0u&&e==0u){ /* E5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF6Bu,2u,0x91u,0xBF6Du);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF6Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF6Du,3u,0x0Au,0xBF70u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A63u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF70u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF70u,3u,0x00u,0xBF73u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF73u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF73u,3u,0x0Au,0xBF76u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A7Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF76u:
    if(m==0u&&x==0u&&e==0u){ /* 4E 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF76u,3u,0x0Au,0xBF79u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0A63u),16u,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF79u:
    if(m==0u&&x==0u&&e==0u){ /* 4E 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF79u,3u,0x0Au,0xBF7Cu);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0A63u),16u,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF7Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4E 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF7Cu,3u,0x0Au,0xBF7Fu);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x0A63u),16u,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF7Fu,1u,0x60u,0xBF80u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF80u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF80u,2u,0x30u,0xBF82u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF80u,2u,0x30u,0xBF82u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF82u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF82u,1u,0xAAu,0xBF83u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF83u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF83u,1u,0x4Au,0xBF84u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF84u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF84u,1u,0xA8u,0xBF85u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF85u:
    if(m==0u&&x==0u&&e==0u){ /* B9 0B C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF85u,3u,0xC0u,0xBF88u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC00Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF88u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF88u,3u,0x0Bu,0xBF8Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF8Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF8Bu,3u,0x00u,0xBF8Eu);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF8Eu:
    if(m==0u&&x==0u&&e==0u){ /* C0 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF8Eu,3u,0x00u,0xBF91u);
      sc_v11_op_compare(r,c->y,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF91u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF91u,2u,0x03u,0xBF93u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBF96u;}
      if(c->pc!=0xBF93u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF93u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF93u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF93u,3u,0x80u,0xBF96u);
      sc_v11_op_lda(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF96u:
    if(m==0u&&x==0u&&e==0u){ /* 85 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF96u,2u,0x97u,0xBF98u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x97u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF98u:
    if(m==0u&&x==0u&&e==0u){ /* 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF98u,1u,0x9Bu,0xBF99u);
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF99u:
    if(m==0u&&x==0u&&e==0u){ /* BD 6D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF99u,3u,0x0Au,0xBF9Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A6Du)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF9Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 A3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF9Cu,2u,0xA3u,0xBF9Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xA3u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BF9Eu:
    if(m==0u&&x==0u&&e==0u){ /* BD 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BF9Eu,3u,0x0Au,0xBFA1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A51u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFA1u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFA1u,1u,0x18u,0xBFA2u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFA2u:
    if(m==0u&&x==0u&&e==0u){ /* 7D E3 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFA2u,3u,0xBBu,0xBFA5u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBBE3u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFA5u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFA5u,2u,0x91u,0xBFA7u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFA7u:
    if(m==0u&&x==0u&&e==0u){ /* BD 6B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFA7u,3u,0x0Au,0xBFAAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A6Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFAAu:
    if(m==0u&&x==0u&&e==0u){ /* 85 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFAAu,2u,0xA6u,0xBFACu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xA6u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFACu:
    if(m==0u&&x==0u&&e==0u){ /* BD 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFACu,3u,0x0Au,0xBFAFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A4Fu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFAFu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFAFu,1u,0x18u,0xBFB0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFB0u:
    if(m==0u&&x==0u&&e==0u){ /* 7D E5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFB0u,3u,0xBBu,0xBFB3u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBBE5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFB3u:
    if(m==0u&&x==0u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFB3u,2u,0x94u,0xBFB5u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFB5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 19 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFB5u,3u,0xC0u,0xBFB8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBFB7u))return 0;c->pc=0xC019u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFB8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFB8u,2u,0x20u,0xBFBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFB8u,2u,0x20u,0xBFBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFB8u,2u,0x20u,0xBFBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFB8u,2u,0x20u,0xBFBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFBAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFBAu,2u,0x97u,0xBFBCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x97u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFBAu,2u,0x97u,0xBFBCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x97u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFBCu:
    if(m==0u&&x==0u&&e==0u){ /* 10 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFBCu,2u,0x01u,0xBFBEu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xBFBFu;}
      if(c->pc!=0xBFBEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFBEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 10 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFBCu,2u,0x01u,0xBFBEu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xBFBFu;}
      if(c->pc!=0xBFBEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFBEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFBEu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFBEu,1u,0x60u,0xBFBFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFBEu,1u,0x60u,0xBFBFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFBFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFBFu,2u,0x20u,0xBFC1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFBFu,2u,0x20u,0xBFC1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFC1u:
    if(m==0u&&x==0u&&e==0u){ /* C6 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFC1u,2u,0x97u,0xBFC3u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x97u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C6 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFC1u,2u,0x97u,0xBFC3u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x97u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFC3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFC3u,3u,0x0Bu,0xBFC6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFC3u,3u,0x0Bu,0xBFC6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFC6u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFC6u,1u,0x18u,0xBFC7u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFC6u,1u,0x18u,0xBFC7u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFC7u:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFC7u,3u,0x00u,0xBFCAu);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFC7u,3u,0x00u,0xBFCAu);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFCAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFCAu,3u,0x0Bu,0xBFCDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFCAu,3u,0x0Bu,0xBFCDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFCDu:
    if(m==0u&&x==0u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFCDu,2u,0x91u,0xBFCFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFCDu,2u,0x91u,0xBFCFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFCFu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFCFu,1u,0x48u,0xBFD0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFCFu,1u,0x48u,0xBFD0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFD0u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFD0u,1u,0x18u,0xBFD1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFD0u,1u,0x18u,0xBFD1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFD1u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFD1u,3u,0x00u,0xBFD4u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFD1u,3u,0x00u,0xBFD4u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFD4u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFD4u,2u,0x91u,0xBFD6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFD4u,2u,0x91u,0xBFD6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFD6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 19 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFD6u,3u,0xC0u,0xBFD9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBFD8u))return 0;c->pc=0xC019u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 19 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFD6u,3u,0xC0u,0xBFD9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBFD8u))return 0;c->pc=0xC019u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFD9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFD9u,2u,0x20u,0xBFDBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFD9u,2u,0x20u,0xBFDBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFD9u,2u,0x20u,0xBFDBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFD9u,2u,0x20u,0xBFDBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFDBu:
    if(m==0u&&x==0u&&e==0u){ /* C6 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFDBu,2u,0x97u,0xBFDDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x97u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C6 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFDBu,2u,0x97u,0xBFDDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x97u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFDDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFDDu,3u,0x0Bu,0xBFE0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFDDu,3u,0x0Bu,0xBFE0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFE0u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFE0u,1u,0x18u,0xBFE1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFE0u,1u,0x18u,0xBFE1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFE1u:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFE1u,3u,0x00u,0xBFE4u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFE1u,3u,0x00u,0xBFE4u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFE4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFE4u,3u,0x0Bu,0xBFE7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFE4u,3u,0x0Bu,0xBFE7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFE7u:
    if(m==0u&&x==0u&&e==0u){ /* A5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFE7u,2u,0x94u,0xBFE9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFE7u,2u,0x94u,0xBFE9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFE9u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFE9u,1u,0x18u,0xBFEAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFE9u,1u,0x18u,0xBFEAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFEAu:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFEAu,3u,0x00u,0xBFEDu);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFEAu,3u,0x00u,0xBFEDu);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFEDu:
    if(m==0u&&x==0u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFEDu,2u,0x94u,0xBFEFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFEDu,2u,0x94u,0xBFEFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFEFu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFEFu,1u,0x48u,0xBFF0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFEFu,1u,0x48u,0xBFF0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFF0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 19 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFF0u,3u,0xC0u,0xBFF3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBFF2u))return 0;c->pc=0xC019u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 19 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFF0u,3u,0xC0u,0xBFF3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBFF2u))return 0;c->pc=0xC019u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFF3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFF3u,2u,0x30u,0xBFF5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFF3u,2u,0x30u,0xBFF5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFF3u,2u,0x30u,0xBFF5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFF3u,2u,0x30u,0xBFF5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFF5u:
    if(m==0u&&x==0u&&e==0u){ /* C6 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFF5u,2u,0x97u,0xBFF7u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x97u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFF7u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFF7u,1u,0x68u,0xBFF8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFF8u:
    if(m==0u&&x==0u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFF8u,2u,0x94u,0xBFFAu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFFAu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFFAu,1u,0x68u,0xBFFBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFFBu:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFFBu,2u,0x91u,0xBFFDu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00BFFDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00BFFDu,3u,0x0Bu,0xC000u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
