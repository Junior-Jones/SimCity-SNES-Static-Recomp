/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0002B(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00AC02u:
    if(m==1u&&x==1u&&e==0u){ /* F0 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC02u,2u,0x4Au,0xAC04u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAC4Eu;}
      if(c->pc!=0xAC04u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC04u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC04u:
    if(m==1u&&x==1u&&e==0u){ /* 99 6B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC04u,3u,0x0Au,0xAC07u);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0A6Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC07u:
    if(m==1u&&x==1u&&e==0u){ /* C9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC07u,2u,0x07u,0xAC09u);
      sc_v11_op_compare(r,c->a,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC09u:
    if(m==1u&&x==1u&&e==0u){ /* D0 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC09u,2u,0x43u,0xAC0Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAC4Eu;}
      if(c->pc!=0xAC0Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC0Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC0Bu:
    if(m==1u&&x==1u&&e==0u){ /* B9 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC0Bu,3u,0x0Au,0xAC0Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0A4Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC0Eu:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC0Eu,1u,0x38u,0xAC0Fu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC0Fu:
    if(m==1u&&x==1u&&e==0u){ /* E9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC0Fu,2u,0x01u,0xAC11u);
      sc_v11_op_sbc(r,0x0001u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC11u:
    if(m==1u&&x==1u&&e==0u){ /* 99 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC11u,3u,0x0Au,0xAC14u);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0A4Fu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC14u:
    if(m==1u&&x==1u&&e==0u){ /* 80 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC14u,2u,0x1Eu,0xAC16u);
      if(1){c->pc=0xAC34u;}
      if(c->pc!=0xAC16u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC16u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC16u:
    if(m==1u&&x==1u&&e==0u){ /* B9 6B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC16u,3u,0x0Au,0xAC19u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0A6Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC19u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC19u,1u,0x18u,0xAC1Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC1Au:
    if(m==1u&&x==1u&&e==0u){ /* 69 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC1Au,2u,0x01u,0xAC1Cu);
      sc_v11_op_adc(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC1Cu:
    if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC1Cu,2u,0x07u,0xAC1Eu);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC1Eu:
    if(m==1u&&x==1u&&e==0u){ /* D9 6B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC1Eu,3u,0x0Au,0xAC21u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0A6Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC21u:
    if(m==1u&&x==1u&&e==0u){ /* F0 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC21u,2u,0x2Bu,0xAC23u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAC4Eu;}
      if(c->pc!=0xAC23u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC23u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC23u:
    if(m==1u&&x==1u&&e==0u){ /* 99 6B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC23u,3u,0x0Au,0xAC26u);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0A6Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC26u:
    if(m==1u&&x==1u&&e==0u){ /* B9 6B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC26u,3u,0x0Au,0xAC29u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0A6Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC29u:
    if(m==1u&&x==1u&&e==0u){ /* D0 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC29u,2u,0x23u,0xAC2Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAC4Eu;}
      if(c->pc!=0xAC2Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC2Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC2Bu:
    if(m==1u&&x==1u&&e==0u){ /* B9 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC2Bu,3u,0x0Au,0xAC2Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0A4Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC2Eu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC2Eu,1u,0x18u,0xAC2Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC2Fu:
    if(m==1u&&x==1u&&e==0u){ /* 69 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC2Fu,2u,0x01u,0xAC31u);
      sc_v11_op_adc(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC31u:
    if(m==1u&&x==1u&&e==0u){ /* 99 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC31u,3u,0x0Au,0xAC34u);
      sc_v11_bus_write8(r,sc_v11_ea_absy(r,0x0A4Fu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC34u:
    if(m==1u&&x==1u&&e==0u){ /* AD 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC34u,3u,0x0Au,0xAC37u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A4Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC37u:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC37u,1u,0xEBu,0xAC38u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC38u:
    if(m==1u&&x==1u&&e==0u){ /* AD 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC38u,3u,0x0Au,0xAC3Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC3Bu:
    if(m==1u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC3Bu,1u,0x5Au,0xAC3Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC3Cu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC3Cu,2u,0x10u,0xAC3Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC3Eu:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC3Eu,3u,0x00u,0xAC41u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC41u:
    if(m==1u&&x==0u&&e==0u){ /* 22 C2 A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC41u,4u,0x03u,0xAC45u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAC44u))return 0;
      c->pbr=0x03u;c->pc=0xA9C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC45u:
    if(m==0u&&x==0u&&e==0u){ /* 8D B9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC45u,3u,0x0Au,0xAC48u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AB9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D B9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC45u,3u,0x0Au,0xAC48u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AB9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D B9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC45u,3u,0x0Au,0xAC48u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AB9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D B9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC45u,3u,0x0Au,0xAC48u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AB9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC48u:
    if(m==0u&&x==0u&&e==0u){ /* 20 EE AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC48u,3u,0xADu,0xAC4Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC4Au))return 0;c->pc=0xADEEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 EE AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC48u,3u,0xADu,0xAC4Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC4Au))return 0;c->pc=0xADEEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EE AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC48u,3u,0xADu,0xAC4Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC4Au))return 0;c->pc=0xADEEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 EE AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC48u,3u,0xADu,0xAC4Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC4Au))return 0;c->pc=0xADEEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC4Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC4Bu,2u,0x30u,0xAC4Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC4Bu,2u,0x30u,0xAC4Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC4Bu,2u,0x30u,0xAC4Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC4Bu,2u,0x30u,0xAC4Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC4Du:
    if(m==1u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC4Du,1u,0x7Au,0xAC4Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC4Eu:
    if(m==1u&&x==1u&&e==0u){ /* B9 6B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC4Eu,3u,0x0Au,0xAC51u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0A6Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC51u:
    if(m==1u&&x==1u&&e==0u){ /* D0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC51u,2u,0x0Fu,0xAC53u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAC62u;}
      if(c->pc!=0xAC53u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC53u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC53u:
    if(m==1u&&x==1u&&e==0u){ /* B9 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC53u,3u,0x0Au,0xAC56u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0A4Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC56u:
    if(m==1u&&x==1u&&e==0u){ /* 30 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC56u,2u,0x0Eu,0xAC58u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xAC66u;}
      if(c->pc!=0xAC58u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC58u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC58u:
    if(m==1u&&x==1u&&e==0u){ /* D9 BB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC58u,3u,0x0Au,0xAC5Bu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0ABBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC5Bu:
    if(m==1u&&x==1u&&e==0u){ /* F0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC5Bu,2u,0x09u,0xAC5Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAC66u;}
      if(c->pc!=0xAC5Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC5Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC5Du:
    if(m==1u&&x==1u&&e==0u){ /* D9 79 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC5Du,3u,0xACu,0xAC60u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xAC79u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC60u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC60u,2u,0x04u,0xAC62u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAC66u;}
      if(c->pc!=0xAC62u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC62u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC62u:
    if(m==1u&&x==1u&&e==0u){ /* 20 24 AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC62u,3u,0xADu,0xAC65u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC64u))return 0;c->pc=0xAD24u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC65u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC65u,1u,0x60u,0xAC66u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC65u,1u,0x60u,0xAC66u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC65u,1u,0x60u,0xAC66u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC65u,1u,0x60u,0xAC66u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC66u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC66u,2u,0x20u,0xAC68u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC68u:
    if(m==0u&&x==1u&&e==0u){ /* AD 91 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC68u,3u,0x0Au,0xAC6Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A91u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC6Bu:
    if(m==0u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC6Bu,2u,0x03u,0xAC6Du);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xAC70u;}
      if(c->pc!=0xAC6Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC6Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC6Du:
    if(m==0u&&x==1u&&e==0u){ /* 4C 7D AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC6Du,3u,0xACu,0xAC70u);
      c->pc=0xAC7Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC70u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC70u,2u,0x20u,0xAC72u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC72u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 91 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC72u,3u,0x0Au,0xAC75u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A91u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC75u:
    if(m==0u&&x==1u&&e==0u){ /* 9C B7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC75u,3u,0x0Au,0xAC78u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AB7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC78u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC78u,1u,0x60u,0xAC79u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC7Du:
    if(m==0u&&x==1u&&e==0u){ /* AD C1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC7Du,3u,0x0Au,0xAC80u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AC1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC80u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC80u,3u,0x82u,0xAC83u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC82u))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 4F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC80u,3u,0x82u,0xAC83u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC82u))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC83u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC83u,2u,0x30u,0xAC85u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC83u,2u,0x30u,0xAC85u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC83u,2u,0x30u,0xAC85u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC83u,2u,0x30u,0xAC85u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC85u:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC85u,3u,0x00u,0xAC88u);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC88u:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC88u,2u,0x06u,0xAC8Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAC90u;}
      if(c->pc!=0xAC8Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC8Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC8Au:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC8Au,1u,0x38u,0xAC8Bu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC8Bu:
    if(m==0u&&x==0u&&e==0u){ /* E9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC8Bu,3u,0x00u,0xAC8Eu);
      sc_v11_op_sbc(r,0x0078u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC8Eu:
    if(m==0u&&x==0u&&e==0u){ /* B0 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC8Eu,2u,0xF5u,0xAC90u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAC85u;}
      if(c->pc!=0xAC90u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC90u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC90u:
    if(m==0u&&x==0u&&e==0u){ /* CD 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC90u,3u,0x0Au,0xAC93u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A51u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC93u:
    if(m==0u&&x==0u&&e==0u){ /* F0 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC93u,2u,0xEBu,0xAC95u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAC80u;}
      if(c->pc!=0xAC95u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAC95u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC95u:
    if(m==0u&&x==0u&&e==0u){ /* 8D BD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC95u,3u,0x0Au,0xAC98u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ABDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC98u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC98u,3u,0x82u,0xAC9Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAC9Au))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC9Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC9Bu,2u,0x30u,0xAC9Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC9Bu,2u,0x30u,0xAC9Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC9Bu,2u,0x30u,0xAC9Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC9Bu,2u,0x30u,0xAC9Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AC9Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AC9Du,3u,0x00u,0xACA0u);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACA0u:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACA0u,2u,0x06u,0xACA2u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xACA8u;}
      if(c->pc!=0xACA2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xACA2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACA2u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACA2u,1u,0x38u,0xACA3u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACA3u:
    if(m==0u&&x==0u&&e==0u){ /* E9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACA3u,3u,0x00u,0xACA6u);
      sc_v11_op_sbc(r,0x0064u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACA6u:
    if(m==0u&&x==0u&&e==0u){ /* B0 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACA6u,2u,0xF5u,0xACA8u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAC9Du;}
      if(c->pc!=0xACA8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xACA8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACA8u:
    if(m==0u&&x==0u&&e==0u){ /* CD 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACA8u,3u,0x0Au,0xACABu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A4Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACABu:
    if(m==0u&&x==0u&&e==0u){ /* F0 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACABu,2u,0xEBu,0xACADu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAC98u;}
      if(c->pc!=0xACADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xACADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACADu:
    if(m==0u&&x==0u&&e==0u){ /* 8D BB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACADu,3u,0x0Au,0xACB0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ABBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACB0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACB0u,3u,0xFFu,0xACB3u);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACB3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 91 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACB3u,3u,0x0Au,0xACB6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A91u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACB6u:
    if(m==0u&&x==0u&&e==0u){ /* 9C BF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACB6u,3u,0x0Au,0xACB9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ABFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACB9u:
    if(m==0u&&x==0u&&e==0u){ /* A2 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACB9u,3u,0x00u,0xACBCu);
      sc_v11_op_ldx(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACBCu:
    if(m==0u&&x==0u&&e==0u){ /* AD 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACBCu,3u,0x0Au,0xACBFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A51u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACBFu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACBFu,1u,0x38u,0xACC0u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACC0u:
    if(m==0u&&x==0u&&e==0u){ /* ED BD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACC0u,3u,0x0Au,0xACC3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0ABDu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACC3u:
    if(m==0u&&x==0u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACC3u,2u,0x05u,0xACC5u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xACCAu;}
      if(c->pc!=0xACC5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xACC5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACC5u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACC5u,1u,0xE8u,0xACC6u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACC6u:
    if(m==0u&&x==0u&&e==0u){ /* 49 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACC6u,3u,0xFFu,0xACC9u);
      sc_v11_op_eor(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACC9u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACC9u,1u,0x1Au,0xACCAu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACCAu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACCAu,2u,0x79u,0xACCCu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACCCu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACCCu,3u,0x00u,0xACCFu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACCFu:
    if(m==0u&&x==0u&&e==0u){ /* AD 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACCFu,3u,0x0Au,0xACD2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A4Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACD2u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACD2u,1u,0x38u,0xACD3u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACD3u:
    if(m==0u&&x==0u&&e==0u){ /* ED BB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACD3u,3u,0x0Au,0xACD6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0ABBu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACD6u:
    if(m==0u&&x==0u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACD6u,2u,0x05u,0xACD8u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xACDDu;}
      if(c->pc!=0xACD8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xACD8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACD8u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACD8u,1u,0xC8u,0xACD9u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACD9u:
    if(m==0u&&x==0u&&e==0u){ /* 49 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACD9u,3u,0xFFu,0xACDCu);
      sc_v11_op_eor(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACDCu:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACDCu,1u,0x1Au,0xACDDu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACDDu:
    if(m==0u&&x==0u&&e==0u){ /* C5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACDDu,2u,0x79u,0xACDFu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACDFu:
    if(m==0u&&x==0u&&e==0u){ /* 90 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACDFu,2u,0x04u,0xACE1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xACE5u;}
      if(c->pc!=0xACE1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xACE1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACE1u:
    if(m==0u&&x==0u&&e==0u){ /* 8C C1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACE1u,3u,0x0Au,0xACE4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AC1u),c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACE4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACE4u,1u,0x60u,0xACE5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACE5u:
    if(m==0u&&x==0u&&e==0u){ /* 8E C1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACE5u,3u,0x0Au,0xACE8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AC1u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACE8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACE8u,1u,0x60u,0xACE9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACE9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACE9u,2u,0x20u,0xACEBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACE9u,2u,0x20u,0xACEBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACE9u,2u,0x20u,0xACEBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACE9u,2u,0x20u,0xACEBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACEBu:
    if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACEBu,2u,0x10u,0xACEDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACEBu,2u,0x10u,0xACEDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACEDu:
    if(m==1u&&x==1u&&e==0u){ /* 9C BF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACEDu,3u,0x0Au,0xACF0u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0ABFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACF0u:
    if(m==1u&&x==1u&&e==0u){ /* A2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACF0u,2u,0x03u,0xACF2u);
      sc_v11_op_ldx(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACF2u:
    if(m==1u&&x==1u&&e==0u){ /* AD BD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACF2u,3u,0x0Au,0xACF5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0ABDu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACF5u:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACF5u,1u,0x38u,0xACF6u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACF6u:
    if(m==1u&&x==1u&&e==0u){ /* ED 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACF6u,3u,0x0Au,0xACF9u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A51u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACF9u:
    if(m==1u&&x==1u&&e==0u){ /* B0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACF9u,2u,0x08u,0xACFBu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAD03u;}
      if(c->pc!=0xACFBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xACFBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACFBu:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACFBu,1u,0xCAu,0xACFCu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACFCu:
    if(m==1u&&x==1u&&e==0u){ /* AD 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACFCu,3u,0x0Au,0xACFFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A51u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ACFFu:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ACFFu,1u,0x38u,0xAD00u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD00u:
    if(m==1u&&x==1u&&e==0u){ /* ED BD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD00u,3u,0x0Au,0xAD03u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0ABDu)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD03u:
    if(m==1u&&x==1u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD03u,2u,0x91u,0xAD05u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD05u:
    if(m==1u&&x==1u&&e==0u){ /* A0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD05u,2u,0x01u,0xAD07u);
      sc_v11_op_ldy(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD07u:
    if(m==1u&&x==1u&&e==0u){ /* AD BB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD07u,3u,0x0Au,0xAD0Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0ABBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD0Au:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD0Au,1u,0x38u,0xAD0Bu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD0Bu:
    if(m==1u&&x==1u&&e==0u){ /* ED 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD0Bu,3u,0x0Au,0xAD0Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A4Fu)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD0Eu:
    if(m==1u&&x==1u&&e==0u){ /* B0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD0Eu,2u,0x08u,0xAD10u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAD18u;}
      if(c->pc!=0xAD10u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD10u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD10u:
    if(m==1u&&x==1u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD10u,1u,0x88u,0xAD11u);
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD11u:
    if(m==1u&&x==1u&&e==0u){ /* AD 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD11u,3u,0x0Au,0xAD14u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A4Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD14u:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD14u,1u,0x38u,0xAD15u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD15u:
    if(m==1u&&x==1u&&e==0u){ /* ED BB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD15u,3u,0x0Au,0xAD18u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0ABBu)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD18u:
    if(m==1u&&x==1u&&e==0u){ /* C5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD18u,2u,0x91u,0xAD1Au);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x91u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD1Au:
    if(m==1u&&x==1u&&e==0u){ /* B0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD1Au,2u,0x04u,0xAD1Cu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAD20u;}
      if(c->pc!=0xAD1Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD1Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD1Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8E C1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD1Cu,3u,0x0Au,0xAD1Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AC1u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD1Fu:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD1Fu,1u,0x60u,0xAD20u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD20u:
    if(m==1u&&x==1u&&e==0u){ /* 8C C1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD20u,3u,0x0Au,0xAD23u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AC1u),(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD23u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD23u,1u,0x60u,0xAD24u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD24u:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD24u,2u,0x30u,0xAD26u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD26u:
    if(m==0u&&x==0u&&e==0u){ /* AD B5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD26u,3u,0x0Au,0xAD29u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD29u:
    if(m==0u&&x==0u&&e==0u){ /* D0 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD29u,2u,0x42u,0xAD2Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAD6Du;}
      if(c->pc!=0xAD2Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD2Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD2Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD C3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD2Bu,3u,0x0Au,0xAD2Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AC3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD2Eu:
    if(m==0u&&x==0u&&e==0u){ /* AE B9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD2Eu,3u,0x0Au,0xAD31u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD31u:
    if(m==0u&&x==0u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD31u,2u,0x04u,0xAD33u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAD37u;}
      if(c->pc!=0xAD33u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD33u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD33u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD33u,1u,0x18u,0xAD34u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD34u:
    if(m==0u&&x==0u&&e==0u){ /* 69 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD34u,3u,0x00u,0xAD37u);
      sc_v11_op_adc(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD37u:
    if(m==0u&&x==0u&&e==0u){ /* A6 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD37u,2u,0xD7u,0xAD39u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD39u:
    if(m==0u&&x==0u&&e==0u){ /* E0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD39u,3u,0x00u,0xAD3Cu);
      sc_v11_op_compare(r,c->x,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD3Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD3Cu,2u,0x04u,0xAD3Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAD42u;}
      if(c->pc!=0xAD3Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAD3Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD3Eu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD3Eu,1u,0x18u,0xAD3Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 69 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD3Fu,3u,0x00u,0xAD42u);
      sc_v11_op_adc(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD42u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD42u,1u,0xAAu,0xAD43u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD43u:
    if(m==0u&&x==0u&&e==0u){ /* BD 6E AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD43u,3u,0xADu,0xAD46u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xAD6Eu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD46u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD46u,1u,0xAAu,0xAD47u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD47u:
    if(m==0u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD47u,1u,0x8Bu,0xAD48u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD48u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 74 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD48u,3u,0x74u,0xAD4Bu);
      sc_v11_op_ldy(r,0x7400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD4Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD4Bu,3u,0x00u,0xAD4Eu);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD4Eu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD4Eu,3u,0x04u,0xAD51u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x04u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xAD4Eu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD51u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 76 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD51u,3u,0x76u,0xAD54u);
      sc_v11_op_ldy(r,0x7600u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD54u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD54u,3u,0x00u,0xAD57u);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD57u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD57u,3u,0x04u,0xAD5Au);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x04u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xAD57u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD5Au:
    if(m==0u&&x==0u&&e==0u){ /* A0 80 74 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD5Au,3u,0x74u,0xAD5Du);
      sc_v11_op_ldy(r,0x7480u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD5Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD5Du,3u,0x00u,0xAD60u);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD60u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD60u,3u,0x04u,0xAD63u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x04u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xAD60u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD63u:
    if(m==0u&&x==0u&&e==0u){ /* A0 80 76 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD63u,3u,0x76u,0xAD66u);
      sc_v11_op_ldy(r,0x7680u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD66u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD66u,3u,0x00u,0xAD69u);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD69u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD69u,3u,0x04u,0xAD6Cu);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x04u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xAD69u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD6Cu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD6Cu,1u,0xABu,0xAD6Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AD6Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AD6Du,1u,0x60u,0xAD6Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ADEEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ADEEu,2u,0x10u,0xADF0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ADEEu,2u,0x10u,0xADF0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ADEEu,2u,0x10u,0xADF0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ADEEu,2u,0x10u,0xADF0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ADF0u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ADF0u,2u,0x20u,0xADF2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ADF0u,2u,0x20u,0xADF2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ADF2u:
    if(m==0u&&x==1u&&e==0u){ /* AD 95 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ADF2u,3u,0x0Au,0xADF5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ADF5u:
    if(m==0u&&x==1u&&e==0u){ /* F0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ADF5u,2u,0x13u,0xADF7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAE0Au;}
      if(c->pc!=0xADF7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADF7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ADF7u:
    if(m==0u&&x==1u&&e==0u){ /* AD 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ADF7u,3u,0x0Au,0xADFAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A51u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ADFAu:
    if(m==0u&&x==1u&&e==0u){ /* CD 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ADFAu,3u,0x0Au,0xADFDu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A65u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ADFDu:
    if(m==0u&&x==1u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ADFDu,2u,0x0Bu,0xADFFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAE0Au;}
      if(c->pc!=0xADFFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xADFFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00ADFFu:
    if(m==0u&&x==1u&&e==0u){ /* AD 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00ADFFu,3u,0x0Au,0xAE02u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A4Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE02u:
    if(m==0u&&x==1u&&e==0u){ /* CD 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE02u,3u,0x0Au,0xAE05u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A63u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE05u:
    if(m==0u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE05u,2u,0x03u,0xAE07u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAE0Au;}
      if(c->pc!=0xAE07u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE07u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE07u:
    if(m==0u&&x==1u&&e==0u){ /* 4C 54 BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE07u,3u,0xBAu,0xAE0Au);
      c->pc=0xBA54u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE0Au:
    if(m==0u&&x==1u&&e==0u){ /* AD 93 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE0Au,3u,0x0Au,0xAE0Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A93u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE0Du:
    if(m==0u&&x==1u&&e==0u){ /* F0 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE0Du,2u,0x1Eu,0xAE0Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAE2Du;}
      if(c->pc!=0xAE0Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE0Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE0Fu:
    if(m==0u&&x==1u&&e==0u){ /* AD 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE0Fu,3u,0x0Au,0xAE12u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A51u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE12u:
    if(m==0u&&x==1u&&e==0u){ /* CD 55 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE12u,3u,0x0Au,0xAE15u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A55u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE15u:
    if(m==0u&&x==1u&&e==0u){ /* D0 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE15u,2u,0x16u,0xAE17u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAE2Du;}
      if(c->pc!=0xAE17u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE17u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE17u:
    if(m==0u&&x==1u&&e==0u){ /* AD 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE17u,3u,0x0Au,0xAE1Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A4Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE1Au:
    if(m==0u&&x==1u&&e==0u){ /* CD 53 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE1Au,3u,0x0Au,0xAE1Du);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A53u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE1Du:
    if(m==0u&&x==1u&&e==0u){ /* D0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE1Du,2u,0x0Eu,0xAE1Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAE2Du;}
      if(c->pc!=0xAE1Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE1Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE1Fu:
    if(m==0u&&x==1u&&e==0u){ /* 9C 93 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE1Fu,3u,0x0Au,0xAE22u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A93u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE22u:
    if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE22u,2u,0x10u,0xAE24u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE24u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE24u,3u,0x00u,0xAE27u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE27u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE27u,3u,0x00u,0xAE2Au);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE2Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 2E AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE2Au,3u,0xAEu,0xAE2Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAE2Cu))return 0;c->pc=0xAE2Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE2Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE2Du,1u,0x60u,0xAE2Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE2Du,1u,0x60u,0xAE2Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE2Du,1u,0x60u,0xAE2Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE2Du,1u,0x60u,0xAE2Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE2Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE2Eu,2u,0x20u,0xAE30u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE2Eu,2u,0x20u,0xAE30u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE30u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE30u,2u,0x10u,0xAE32u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE32u:
    if(m==1u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE32u,1u,0x8Au,0xAE33u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE33u:
    if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE33u,2u,0xFFu,0xAE35u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE35u:
    if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE35u,1u,0xAAu,0xAE36u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE36u:
    if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE36u,1u,0xDAu,0xAE37u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE37u:
    if(m==1u&&x==0u&&e==0u){ /* BD 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE37u,3u,0x0Au,0xAE3Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A4Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE3Au:
    if(m==1u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE3Au,1u,0x3Au,0xAE3Bu);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE3Bu:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE3Bu,1u,0xEBu,0xAE3Cu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE3Cu:
    if(m==1u&&x==0u&&e==0u){ /* BD 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE3Cu,3u,0x0Au,0xAE3Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A51u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE3Fu:
    if(m==1u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE3Fu,1u,0x3Au,0xAE40u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE40u:
    if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE40u,1u,0x5Au,0xAE41u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE41u:
    if(m==1u&&x==0u&&e==0u){ /* 22 C2 A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE41u,4u,0x03u,0xAE45u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAE44u))return 0;
      c->pbr=0x03u;c->pc=0xA9C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE45u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE45u,2u,0x20u,0xAE47u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE45u,2u,0x20u,0xAE47u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE45u,2u,0x20u,0xAE47u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE45u,2u,0x20u,0xAE47u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE47u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE47u,2u,0x10u,0xAE49u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE47u,2u,0x10u,0xAE49u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE49u:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE49u,1u,0x7Au,0xAE4Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE4Au:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE4Au,1u,0xFAu,0xAE4Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE4Bu:
    if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE4Bu,1u,0xDAu,0xAE4Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE4Cu:
    if(m==1u&&x==0u&&e==0u){ /* BD 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE4Cu,3u,0x0Au,0xAE4Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A4Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE4Fu:
    if(m==1u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE4Fu,1u,0x3Au,0xAE50u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE50u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE50u,1u,0xEBu,0xAE51u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE51u:
    if(m==1u&&x==0u&&e==0u){ /* BD 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE51u,3u,0x0Au,0xAE54u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A51u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE54u:
    if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE54u,1u,0x1Au,0xAE55u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE55u:
    if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE55u,1u,0x5Au,0xAE56u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE56u:
    if(m==1u&&x==0u&&e==0u){ /* 22 C2 A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE56u,4u,0x03u,0xAE5Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAE59u))return 0;
      c->pbr=0x03u;c->pc=0xA9C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE5Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE5Au,2u,0x20u,0xAE5Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE5Au,2u,0x20u,0xAE5Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE5Au,2u,0x20u,0xAE5Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE5Au,2u,0x20u,0xAE5Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE5Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE5Cu,2u,0x10u,0xAE5Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE5Cu,2u,0x10u,0xAE5Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE5Eu:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE5Eu,1u,0x7Au,0xAE5Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE5Fu:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE5Fu,1u,0xFAu,0xAE60u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE60u:
    if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE60u,1u,0xDAu,0xAE61u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE61u:
    if(m==1u&&x==0u&&e==0u){ /* BD 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE61u,3u,0x0Au,0xAE64u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A4Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE64u:
    if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE64u,1u,0x1Au,0xAE65u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE65u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE65u,1u,0xEBu,0xAE66u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE66u:
    if(m==1u&&x==0u&&e==0u){ /* BD 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE66u,3u,0x0Au,0xAE69u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A51u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE69u:
    if(m==1u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE69u,1u,0x3Au,0xAE6Au);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE6Au:
    if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE6Au,1u,0x5Au,0xAE6Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE6Bu:
    if(m==1u&&x==0u&&e==0u){ /* 22 C2 A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE6Bu,4u,0x03u,0xAE6Fu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAE6Eu))return 0;
      c->pbr=0x03u;c->pc=0xA9C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE6Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE6Fu,2u,0x20u,0xAE71u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE6Fu,2u,0x20u,0xAE71u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE6Fu,2u,0x20u,0xAE71u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE6Fu,2u,0x20u,0xAE71u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE71u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE71u,2u,0x10u,0xAE73u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE71u,2u,0x10u,0xAE73u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE73u:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE73u,1u,0x7Au,0xAE74u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE74u:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE74u,1u,0xFAu,0xAE75u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE75u:
    if(m==1u&&x==0u&&e==0u){ /* BD 4F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE75u,3u,0x0Au,0xAE78u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A4Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE78u:
    if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE78u,1u,0x1Au,0xAE79u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE79u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE79u,1u,0xEBu,0xAE7Au);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE7Au:
    if(m==1u&&x==0u&&e==0u){ /* BD 51 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE7Au,3u,0x0Au,0xAE7Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A51u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE7Du:
    if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE7Du,1u,0x1Au,0xAE7Eu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE7Eu:
    if(m==1u&&x==0u&&e==0u){ /* 22 C2 A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE7Eu,4u,0x03u,0xAE82u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xAE81u))return 0;
      c->pbr=0x03u;c->pc=0xA9C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE82u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE82u,1u,0x60u,0xAE83u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE82u,1u,0x60u,0xAE83u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE82u,1u,0x60u,0xAE83u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE82u,1u,0x60u,0xAE83u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE83u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE83u,2u,0x30u,0xAE85u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE83u,2u,0x30u,0xAE85u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE83u,2u,0x30u,0xAE85u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE8Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE8Bu,3u,0x01u,0xAE8Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0193u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE8Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE8Eu,3u,0x00u,0xAE91u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE91u:
    if(m==0u&&x==0u&&e==0u){ /* F0 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE91u,2u,0x43u,0xAE93u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAED6u;}
      if(c->pc!=0xAE93u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE93u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE93u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE93u,2u,0xE1u,0xAE95u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE95u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE95u,3u,0x00u,0xAE98u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE98u:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE98u,2u,0x06u,0xAE9Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAEA0u;}
      if(c->pc!=0xAE9Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAE9Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE9Au:
    if(m==0u&&x==0u&&e==0u){ /* EE EB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE9Au,3u,0x0Au,0xAE9Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AEBu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AE9Du:
    if(m==0u&&x==0u&&e==0u){ /* EE EB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AE9Du,3u,0x0Au,0xAEA0u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AEBu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEA0u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEA0u,2u,0xE1u,0xAEA2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEA2u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEA2u,3u,0x00u,0xAEA5u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEA5u:
    if(m==0u&&x==0u&&e==0u){ /* C9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEA5u,3u,0x00u,0xAEA8u);
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEA8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEA8u,2u,0xE0u,0xAEAAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAE8Au;}
      if(c->pc!=0xAEAAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEAAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEAAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEAAu,2u,0x30u,0xAEACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEACu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEACu,2u,0x01u,0xAEAEu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEAEu:
    if(m==1u&&x==1u&&e==0u){ /* 8D B7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEAEu,3u,0x0Au,0xAEB1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AB7u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEB1u:
    if(m==1u&&x==1u&&e==0u){ /* AD AF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEB1u,3u,0x0Au,0xAEB4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AAFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEB4u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEB4u,2u,0x04u,0xAEB6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAEBAu;}
      if(c->pc!=0xAEB6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEB6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEB6u:
    if(m==1u&&x==1u&&e==0u){ /* 20 B1 AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEB6u,3u,0xAFu,0xAEB9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAEB8u))return 0;c->pc=0xAFB1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEB9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEB9u,1u,0x60u,0xAEBAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEB9u,1u,0x60u,0xAEBAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEB9u,1u,0x60u,0xAEBAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEB9u,1u,0x60u,0xAEBAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEBAu:
    if(m==1u&&x==1u&&e==0u){ /* 2C 9C 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEBAu,3u,0x0Au,0xAEBDu);
      {uint16_t q=sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A9Cu));uint16_t z=(uint16_t)((c->a&0x00FFu)&q);c->p=(uint8_t)(c->p&~(SC_FLAG_N|SC_FLAG_V|SC_FLAG_Z));if(!z)c->p|=SC_FLAG_Z;if(q&0x0080u)c->p|=SC_FLAG_N;if(q&0x0040u)c->p|=SC_FLAG_V;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEBDu:
    if(m==1u&&x==1u&&e==0u){ /* 10 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEBDu,2u,0x05u,0xAEBFu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xAEC4u;}
      if(c->pc!=0xAEBFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEBFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEBFu:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEBFu,2u,0x00u,0xAEC1u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEC1u:
    if(m==1u&&x==1u&&e==0u){ /* 4C CC AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEC1u,3u,0xAFu,0xAEC4u);
      c->pc=0xAFCCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEC4u:
    if(m==1u&&x==1u&&e==0u){ /* 20 D7 AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEC4u,3u,0xAEu,0xAEC7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAEC6u))return 0;c->pc=0xAED7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEC7u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEC7u,2u,0x03u,0xAEC9u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAECCu;}
      if(c->pc!=0xAEC9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEC9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEC7u,2u,0x03u,0xAEC9u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAECCu;}
      if(c->pc!=0xAEC9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEC9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEC7u,2u,0x03u,0xAEC9u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAECCu;}
      if(c->pc!=0xAEC9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEC9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEC7u,2u,0x03u,0xAEC9u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAECCu;}
      if(c->pc!=0xAEC9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEC9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEC9u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 40 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEC9u,3u,0xB0u,0xAECCu);
      c->pc=0xB040u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 40 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEC9u,3u,0xB0u,0xAECCu);
      c->pc=0xB040u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 40 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEC9u,3u,0xB0u,0xAECCu);
      c->pc=0xB040u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 40 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEC9u,3u,0xB0u,0xAECCu);
      c->pc=0xB040u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AECCu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AECCu,2u,0x20u,0xAECEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AECCu,2u,0x20u,0xAECEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AECCu,2u,0x20u,0xAECEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AECCu,2u,0x20u,0xAECEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AECEu:
    if(m==1u&&x==0u&&e==0u){ /* AD 9C 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AECEu,3u,0x0Au,0xAED1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A9Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 9C 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AECEu,3u,0x0Au,0xAED1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A9Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AED1u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AED1u,2u,0x80u,0xAED3u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AED1u,2u,0x80u,0xAED3u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AED3u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 9C 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AED3u,3u,0x0Au,0xAED6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0A9Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 9C 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AED3u,3u,0x0Au,0xAED6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0A9Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AED6u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AED6u,1u,0x60u,0xAED7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AED6u,1u,0x60u,0xAED7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AED6u,1u,0x60u,0xAED7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AED7u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AED7u,2u,0x30u,0xAED9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AED9u:
    if(m==1u&&x==1u&&e==0u){ /* A2 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AED9u,2u,0x04u,0xAEDBu);
      sc_v11_op_ldx(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEDBu:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEDBu,2u,0x30u,0xAEDDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEDDu:
    if(m==0u&&x==0u&&e==0u){ /* BD 97 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEDDu,3u,0x0Au,0xAEE0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A97u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEE0u:
    if(m==0u&&x==0u&&e==0u){ /* F0 66 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEE0u,2u,0x66u,0xAEE2u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAF48u;}
      if(c->pc!=0xAEE2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEE2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEE2u:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEE2u,3u,0x00u,0xAEE5u);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEE5u:
    if(m==0u&&x==0u&&e==0u){ /* F0 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEE5u,2u,0x61u,0xAEE7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAF48u;}
      if(c->pc!=0xAEE7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEE7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEE7u:
    if(m==0u&&x==0u&&e==0u){ /* B0 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEE7u,2u,0x1Fu,0xAEE9u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAF08u;}
      if(c->pc!=0xAEE9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEE9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEE9u:
    if(m==0u&&x==0u&&e==0u){ /* BD 75 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEE9u,3u,0x0Au,0xAEECu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A75u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEECu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEECu,1u,0x18u,0xAEEDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEEDu:
    if(m==0u&&x==0u&&e==0u){ /* 69 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEEDu,3u,0x00u,0xAEF0u);
      sc_v11_op_adc(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEF0u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEF0u,3u,0x00u,0xAEF3u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEF3u:
    if(m==0u&&x==0u&&e==0u){ /* 9D 75 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEF3u,3u,0x0Au,0xAEF6u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0A75u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEF6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 50 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEF6u,2u,0x50u,0xAEF8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAF48u;}
      if(c->pc!=0xAEF8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAEF8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEF8u:
    if(m==0u&&x==0u&&e==0u){ /* BD 59 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEF8u,3u,0x0Au,0xAEFBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A59u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEFBu:
    if(m==0u&&x==0u&&e==0u){ /* C9 77 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEFBu,3u,0x00u,0xAEFEu);
      sc_v11_op_compare(r,c->a,0x0077u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AEFEu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AEFEu,2u,0x03u,0xAF00u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAF03u;}
      if(c->pc!=0xAF00u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF00u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF00u:
    if(m==0u&&x==0u&&e==0u){ /* 4C AF AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF00u,3u,0xAFu,0xAF03u);
      c->pc=0xAFAFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF03u:
    if(m==0u&&x==0u&&e==0u){ /* FE 59 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF03u,3u,0x0Au,0xAF06u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x0A59u),16u,1);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF06u:
    if(m==0u&&x==0u&&e==0u){ /* 80 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF06u,2u,0x1Du,0xAF08u);
      if(1){c->pc=0xAF25u;}
      if(c->pc!=0xAF08u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF08u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF08u:
    if(m==0u&&x==0u&&e==0u){ /* BD 75 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF08u,3u,0x0Au,0xAF0Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A75u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF0Bu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF0Bu,1u,0x38u,0xAF0Cu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF0Cu:
    if(m==0u&&x==0u&&e==0u){ /* E9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF0Cu,3u,0x00u,0xAF0Fu);
      sc_v11_op_sbc(r,0x0001u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF0Fu,3u,0x00u,0xAF12u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF12u:
    if(m==0u&&x==0u&&e==0u){ /* 9D 75 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF12u,3u,0x0Au,0xAF15u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0A75u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF15u:
    if(m==0u&&x==0u&&e==0u){ /* C9 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF15u,3u,0x00u,0xAF18u);
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF18u:
    if(m==0u&&x==0u&&e==0u){ /* D0 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF18u,2u,0x2Eu,0xAF1Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAF48u;}
      if(c->pc!=0xAF1Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF1Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF1Au:
    if(m==0u&&x==0u&&e==0u){ /* BD 59 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF1Au,3u,0x0Au,0xAF1Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A59u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF1Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF1Du,2u,0x03u,0xAF1Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAF22u;}
      if(c->pc!=0xAF1Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF1Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF1Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4C AF AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF1Fu,3u,0xAFu,0xAF22u);
      c->pc=0xAFAFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF22u:
    if(m==0u&&x==0u&&e==0u){ /* DE 59 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF22u,3u,0x0Au,0xAF25u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x0A59u),16u,-1);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF25u:
    if(m==0u&&x==0u&&e==0u){ /* BD 59 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF25u,3u,0x0Au,0xAF28u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A59u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF28u:
    if(m==0u&&x==0u&&e==0u){ /* DD A5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF28u,3u,0x0Au,0xAF2Bu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0AA5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF2Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF2Bu,2u,0x1Bu,0xAF2Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAF48u;}
      if(c->pc!=0xAF2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF2Du:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF2Du,3u,0x00u,0xAF30u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF30u:
    if(m==0u&&x==0u&&e==0u){ /* BD 97 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF30u,3u,0x0Au,0xAF33u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A97u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF33u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF33u,3u,0x00u,0xAF36u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF36u:
    if(m==0u&&x==0u&&e==0u){ /* F0 77 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF36u,2u,0x77u,0xAF38u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAFAFu;}
      if(c->pc!=0xAF38u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF38u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF38u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF38u,2u,0x0Au,0xAF3Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAF44u;}
      if(c->pc!=0xAF3Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF3Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF3Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF3Au,3u,0x00u,0xAF3Du);
      sc_v11_op_compare(r,c->a,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF3Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF3Du,2u,0x70u,0xAF3Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAFAFu;}
      if(c->pc!=0xAF3Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF3Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF3Fu:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF3Fu,2u,0x03u,0xAF41u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAF44u;}
      if(c->pc!=0xAF41u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF41u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF41u:
    if(m==0u&&x==0u&&e==0u){ /* A0 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF41u,3u,0x00u,0xAF44u);
      sc_v11_op_ldy(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF44u:
    if(m==0u&&x==0u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF44u,1u,0x98u,0xAF45u);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF45u:
    if(m==0u&&x==0u&&e==0u){ /* 9D 97 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF45u,3u,0x0Au,0xAF48u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0A97u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF48u:
    if(m==0u&&x==0u&&e==0u){ /* BD 97 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF48u,3u,0x0Au,0xAF4Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A97u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF4Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF4Bu,3u,0x00u,0xAF4Eu);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF4Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF4Eu,2u,0x5Du,0xAF50u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAFADu;}
      if(c->pc!=0xAF50u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF50u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF50u:
    if(m==0u&&x==0u&&e==0u){ /* 90 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF50u,2u,0x23u,0xAF52u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAF75u;}
      if(c->pc!=0xAF52u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF52u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF52u:
    if(m==0u&&x==0u&&e==0u){ /* C9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF52u,3u,0x00u,0xAF55u);
      sc_v11_op_compare(r,c->a,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF55u:
    if(m==0u&&x==0u&&e==0u){ /* F0 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF55u,2u,0x56u,0xAF57u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAFADu;}
      if(c->pc!=0xAF57u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF57u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF57u:
    if(m==0u&&x==0u&&e==0u){ /* B0 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF57u,2u,0x1Cu,0xAF59u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAF75u;}
      if(c->pc!=0xAF59u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF59u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF59u:
    if(m==0u&&x==0u&&e==0u){ /* BD 73 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF59u,3u,0x0Au,0xAF5Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A73u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF5Cu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF5Cu,1u,0x18u,0xAF5Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF5Du:
    if(m==0u&&x==0u&&e==0u){ /* 69 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF5Du,3u,0x00u,0xAF60u);
      sc_v11_op_adc(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF60u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF60u,3u,0x00u,0xAF63u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF63u:
    if(m==0u&&x==0u&&e==0u){ /* 9D 73 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF63u,3u,0x0Au,0xAF66u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0A73u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF66u:
    if(m==0u&&x==0u&&e==0u){ /* D0 45 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF66u,2u,0x45u,0xAF68u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAFADu;}
      if(c->pc!=0xAF68u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF68u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF68u:
    if(m==0u&&x==0u&&e==0u){ /* BD 57 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF68u,3u,0x0Au,0xAF6Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A57u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF6Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 63 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF6Bu,3u,0x00u,0xAF6Eu);
      sc_v11_op_compare(r,c->a,0x0063u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF6Eu:
    if(m==0u&&x==0u&&e==0u){ /* B0 3F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF6Eu,2u,0x3Fu,0xAF70u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAFAFu;}
      if(c->pc!=0xAF70u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF70u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF70u:
    if(m==0u&&x==0u&&e==0u){ /* FE 57 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF70u,3u,0x0Au,0xAF73u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x0A57u),16u,1);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF73u:
    if(m==0u&&x==0u&&e==0u){ /* 80 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF73u,2u,0x1Au,0xAF75u);
      if(1){c->pc=0xAF8Fu;}
      if(c->pc!=0xAF75u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF75u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF75u:
    if(m==0u&&x==0u&&e==0u){ /* BD 73 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF75u,3u,0x0Au,0xAF78u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A73u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF78u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF78u,1u,0x38u,0xAF79u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF79u:
    if(m==0u&&x==0u&&e==0u){ /* E9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF79u,3u,0x00u,0xAF7Cu);
      sc_v11_op_sbc(r,0x0001u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF7Cu:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF7Cu,3u,0x00u,0xAF7Fu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9D 73 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF7Fu,3u,0x0Au,0xAF82u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0A73u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF82u:
    if(m==0u&&x==0u&&e==0u){ /* C9 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF82u,3u,0x00u,0xAF85u);
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF85u:
    if(m==0u&&x==0u&&e==0u){ /* D0 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF85u,2u,0x26u,0xAF87u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAFADu;}
      if(c->pc!=0xAF87u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF87u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF87u:
    if(m==0u&&x==0u&&e==0u){ /* BD 57 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF87u,3u,0x0Au,0xAF8Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A57u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF8Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF8Au,2u,0x23u,0xAF8Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAFAFu;}
      if(c->pc!=0xAF8Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF8Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF8Cu:
    if(m==0u&&x==0u&&e==0u){ /* DE 57 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF8Cu,3u,0x0Au,0xAF8Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x0A57u),16u,-1);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF8Fu:
    if(m==0u&&x==0u&&e==0u){ /* BD 57 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF8Fu,3u,0x0Au,0xAF92u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A57u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF92u:
    if(m==0u&&x==0u&&e==0u){ /* DD A3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF92u,3u,0x0Au,0xAF95u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0AA3u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF95u:
    if(m==0u&&x==0u&&e==0u){ /* D0 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF95u,2u,0x16u,0xAF97u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAFADu;}
      if(c->pc!=0xAF97u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF97u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF97u:
    if(m==0u&&x==0u&&e==0u){ /* A0 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF97u,3u,0x00u,0xAF9Au);
      sc_v11_op_ldy(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF9Au:
    if(m==0u&&x==0u&&e==0u){ /* BD 97 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF9Au,3u,0x0Au,0xAF9Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A97u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF9Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF9Du,2u,0x10u,0xAF9Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAFAFu;}
      if(c->pc!=0xAF9Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAF9Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AF9Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AF9Fu,3u,0x00u,0xAFA2u);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFA2u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFA2u,2u,0x0Bu,0xAFA4u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAFAFu;}
      if(c->pc!=0xAFA4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFA4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFA4u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFA4u,2u,0x03u,0xAFA6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAFA9u;}
      if(c->pc!=0xAFA6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFA6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFA6u:
    if(m==0u&&x==0u&&e==0u){ /* A0 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFA6u,3u,0x00u,0xAFA9u);
      sc_v11_op_ldy(r,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFA9u:
    if(m==0u&&x==0u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFA9u,1u,0x98u,0xAFAAu);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFAAu:
    if(m==0u&&x==0u&&e==0u){ /* 9D 97 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFAAu,3u,0x0Au,0xAFADu);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0A97u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFADu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFADu,1u,0x38u,0xAFAEu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFAEu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFAEu,1u,0x60u,0xAFAFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFAFu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFAFu,1u,0x18u,0xAFB0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFB0u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFB0u,1u,0x60u,0xAFB1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFB1u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFB1u,2u,0x30u,0xAFB3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFB3u:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFB3u,2u,0x00u,0xAFB5u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFB5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFB5u,2u,0x30u,0xAFB7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFB5u,2u,0x30u,0xAFB7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFB7u:
    if(m==1u&&x==1u&&e==0u){ /* BD 9B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFB7u,3u,0x0Au,0xAFBAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A9Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFBAu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFBAu,1u,0x18u,0xAFBBu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFBBu:
    if(m==1u&&x==1u&&e==0u){ /* 7D AF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFBBu,3u,0x0Au,0xAFBEu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0AAFu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFBEu:
    if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFBEu,2u,0x07u,0xAFC0u);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFC0u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 9B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFC0u,3u,0x0Au,0xAFC3u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0A9Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFC3u:
    if(m==1u&&x==1u&&e==0u){ /* DD 9D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFC3u,3u,0x0Au,0xAFC6u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A9Du)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFC6u:
    if(m==1u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFC6u,2u,0x03u,0xAFC8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xAFCBu;}
      if(c->pc!=0xAFC8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFC8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFC8u:
    if(m==1u&&x==1u&&e==0u){ /* 9E AF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFC8u,3u,0x0Au,0xAFCBu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0AAFu),0u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFCBu:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFCBu,1u,0x60u,0xAFCCu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFCCu:
    if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFCCu,2u,0x10u,0xAFCEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFCEu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFCEu,2u,0x20u,0xAFD0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFD0u:
    if(m==0u&&x==1u&&e==0u){ /* BD 9B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFD0u,3u,0x0Au,0xAFD3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A9Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFD3u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFD3u,3u,0x00u,0xAFD6u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFD6u:
    if(m==0u&&x==1u&&e==0u){ /* 9D 9B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFD6u,3u,0x0Au,0xAFD9u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0A9Bu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFD9u:
    if(m==0u&&x==1u&&e==0u){ /* 20 4F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFD9u,3u,0x82u,0xAFDCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFDBu))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFDCu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFDCu,2u,0x30u,0xAFDEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFDCu,2u,0x30u,0xAFDEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFDCu,2u,0x30u,0xAFDEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFDCu,2u,0x30u,0xAFDEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFDEu:
    if(m==1u&&x==1u&&e==0u){ /* C9 78 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFDEu,2u,0x78u,0xAFE0u);
      sc_v11_op_compare(r,c->a,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFE0u:
    if(m==1u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFE0u,2u,0x05u,0xAFE2u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xAFE7u;}
      if(c->pc!=0xAFE2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFE2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFE2u:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFE2u,1u,0x38u,0xAFE3u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFE3u:
    if(m==1u&&x==1u&&e==0u){ /* E9 78 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFE3u,2u,0x78u,0xAFE5u);
      sc_v11_op_sbc(r,0x0078u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFE5u:
    if(m==1u&&x==1u&&e==0u){ /* B0 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFE5u,2u,0xF7u,0xAFE7u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAFDEu;}
      if(c->pc!=0xAFE7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFE7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFE7u:
    if(m==1u&&x==1u&&e==0u){ /* DD 5D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFE7u,3u,0x0Au,0xAFEAu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A5Du)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFEAu:
    if(m==1u&&x==1u&&e==0u){ /* F0 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFEAu,2u,0xE0u,0xAFECu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xAFCCu;}
      if(c->pc!=0xAFECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFECu:
    if(m==1u&&x==1u&&e==0u){ /* 9D A9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFECu,3u,0x0Au,0xAFEFu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0AA9u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFEFu:
    if(m==1u&&x==1u&&e==0u){ /* 8D CD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFEFu,3u,0x0Au,0xAFF2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0ACDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFF2u:
    if(m==1u&&x==1u&&e==0u){ /* 20 4F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFF2u,3u,0x82u,0xAFF5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xAFF4u))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFF5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFF5u,2u,0x30u,0xAFF7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFF5u,2u,0x30u,0xAFF7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFF5u,2u,0x30u,0xAFF7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFF5u,2u,0x30u,0xAFF7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFF7u:
    if(m==1u&&x==1u&&e==0u){ /* C9 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFF7u,2u,0x64u,0xAFF9u);
      sc_v11_op_compare(r,c->a,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFF9u:
    if(m==1u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFF9u,2u,0x05u,0xAFFBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB000u;}
      if(c->pc!=0xAFFBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xAFFBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFFBu:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFFBu,1u,0x38u,0xAFFCu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFFCu:
    if(m==1u&&x==1u&&e==0u){ /* E9 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFFCu,2u,0x64u,0xAFFEu);
      sc_v11_op_sbc(r,0x0064u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00AFFEu:
    if(m==1u&&x==1u&&e==0u){ /* B0 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00AFFEu,2u,0xF7u,0xB000u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xAFF7u;}
      if(c->pc!=0xB000u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB000u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
