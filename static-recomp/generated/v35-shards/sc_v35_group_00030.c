/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00030(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00C000u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C000u,1u,0x18u,0xC001u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C001u:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C001u,3u,0x00u,0xC004u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C004u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C004u,3u,0x0Bu,0xC007u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B33u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C007u:
    if(m==0u&&x==0u&&e==0u){ /* 20 19 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C007u,3u,0xC0u,0xC00Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC009u))return 0;c->pc=0xC019u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C00Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C00Au,1u,0x60u,0xC00Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C00Au,1u,0x60u,0xC00Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C00Au,1u,0x60u,0xC00Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C00Au,1u,0x60u,0xC00Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C019u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C019u,2u,0x30u,0xC01Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C019u,2u,0x30u,0xC01Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C01Bu:
    if(m==0u&&x==0u&&e==0u){ /* 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C01Bu,2u,0xA0u,0xC01Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xA0u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C01Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C01Du,2u,0xD7u,0xC01Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C01Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C01Fu,3u,0x00u,0xC022u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C022u:
    if(m==0u&&x==0u&&e==0u){ /* D0 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C022u,2u,0x17u,0xC024u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC03Bu;}
      if(c->pc!=0xC024u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC024u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C024u:
    if(m==0u&&x==0u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C024u,2u,0x91u,0xC026u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C026u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C026u,1u,0x38u,0xC027u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C027u:
    if(m==0u&&x==0u&&e==0u){ /* ED BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C027u,3u,0x01u,0xC02Au);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C02Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C02Au,3u,0x00u,0xC02Du);
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C02Du:
    if(m==0u&&x==0u&&e==0u){ /* 90 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C02Du,2u,0x6Du,0xC02Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC02Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC02Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C02Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C02Fu,2u,0x6Bu,0xC031u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC031u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC031u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C031u:
    if(m==0u&&x==0u&&e==0u){ /* C9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C031u,3u,0x00u,0xC034u);
      sc_v11_op_compare(r,c->a,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C034u:
    if(m==0u&&x==0u&&e==0u){ /* B0 66 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C034u,2u,0x66u,0xC036u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC036u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC036u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C036u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B5 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C036u,3u,0xC1u,0xC039u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC038u))return 0;c->pc=0xC1B5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C039u:
    if(m==0u&&x==0u&&e==0u){ /* 80 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C039u,2u,0x1Eu,0xC03Bu);
      if(1){c->pc=0xC059u;}
      if(c->pc!=0xC03Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC03Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C039u,2u,0x1Eu,0xC03Bu);
      if(1){c->pc=0xC059u;}
      if(c->pc!=0xC03Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC03Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C039u,2u,0x1Eu,0xC03Bu);
      if(1){c->pc=0xC059u;}
      if(c->pc!=0xC03Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC03Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C039u,2u,0x1Eu,0xC03Bu);
      if(1){c->pc=0xC059u;}
      if(c->pc!=0xC03Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC03Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C03Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C03Bu,2u,0x91u,0xC03Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C03Du:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C03Du,1u,0x18u,0xC03Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C03Eu:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C03Eu,3u,0x00u,0xC041u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C041u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C041u,1u,0x38u,0xC042u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C042u:
    if(m==0u&&x==0u&&e==0u){ /* ED BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C042u,3u,0x01u,0xC045u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C045u:
    if(m==0u&&x==0u&&e==0u){ /* 30 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C045u,2u,0x55u,0xC047u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC047u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC047u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C047u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C047u,1u,0x38u,0xC048u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C048u:
    if(m==0u&&x==0u&&e==0u){ /* E9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C048u,3u,0x00u,0xC04Bu);
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C04Bu:
    if(m==0u&&x==0u&&e==0u){ /* B0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C04Bu,2u,0x04u,0xC04Du);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC051u;}
      if(c->pc!=0xC04Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC04Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C04Du:
    if(m==0u&&x==0u&&e==0u){ /* E6 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C04Du,2u,0xA0u,0xC04Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0xA0u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C04Fu:
    if(m==0u&&x==0u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C04Fu,2u,0x05u,0xC051u);
      if(1){c->pc=0xC056u;}
      if(c->pc!=0xC051u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC051u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C051u:
    if(m==0u&&x==0u&&e==0u){ /* C9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C051u,3u,0x00u,0xC054u);
      sc_v11_op_compare(r,c->a,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C054u:
    if(m==0u&&x==0u&&e==0u){ /* B0 46 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C054u,2u,0x46u,0xC056u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC056u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC056u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C056u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A0 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C056u,3u,0xC1u,0xC059u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC058u))return 0;c->pc=0xC1A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C059u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C059u,2u,0x20u,0xC05Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C059u,2u,0x20u,0xC05Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C059u,2u,0x20u,0xC05Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C059u,2u,0x20u,0xC05Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C05Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C05Bu,2u,0xD7u,0xC05Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C05Bu,2u,0xD7u,0xC05Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C05Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C05Du,3u,0x00u,0xC060u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C05Du,3u,0x00u,0xC060u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C060u:
    if(m==0u&&x==0u&&e==0u){ /* D0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C060u,2u,0x15u,0xC062u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC077u;}
      if(c->pc!=0xC062u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC062u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C060u,2u,0x15u,0xC062u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC077u;}
      if(c->pc!=0xC062u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC062u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C062u:
    if(m==0u&&x==0u&&e==0u){ /* A5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C062u,2u,0x94u,0xC064u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C062u,2u,0x94u,0xC064u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C064u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C064u,1u,0x38u,0xC065u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C064u,1u,0x38u,0xC065u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C065u:
    if(m==0u&&x==0u&&e==0u){ /* ED BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C065u,3u,0x01u,0xC068u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* ED BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C065u,3u,0x01u,0xC068u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C068u:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C068u,3u,0x00u,0xC06Bu);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C068u,3u,0x00u,0xC06Bu);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C06Bu:
    if(m==0u&&x==0u&&e==0u){ /* 90 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C06Bu,2u,0x2Fu,0xC06Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC06Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC06Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C06Bu,2u,0x2Fu,0xC06Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC06Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC06Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C06Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 2D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C06Du,2u,0x2Du,0xC06Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC06Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC06Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 2D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C06Du,2u,0x2Du,0xC06Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC06Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC06Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C06Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 1B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C06Fu,3u,0x00u,0xC072u);
      sc_v11_op_compare(r,c->a,0x001Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 1B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C06Fu,3u,0x00u,0xC072u);
      sc_v11_op_compare(r,c->a,0x001Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C072u:
    if(m==0u&&x==0u&&e==0u){ /* B0 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C072u,2u,0x28u,0xC074u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC074u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC074u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C072u,2u,0x28u,0xC074u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC074u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC074u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C074u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C074u,1u,0x3Au,0xC075u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C074u,1u,0x3Au,0xC075u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C075u:
    if(m==0u&&x==0u&&e==0u){ /* 80 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C075u,2u,0x15u,0xC077u);
      if(1){c->pc=0xC08Cu;}
      if(c->pc!=0xC077u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC077u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C075u,2u,0x15u,0xC077u);
      if(1){c->pc=0xC08Cu;}
      if(c->pc!=0xC077u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC077u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C077u:
    if(m==0u&&x==0u&&e==0u){ /* A5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C077u,2u,0x94u,0xC079u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C077u,2u,0x94u,0xC079u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C079u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C079u,1u,0x38u,0xC07Au);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C079u,1u,0x38u,0xC07Au);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C07Au:
    if(m==0u&&x==0u&&e==0u){ /* ED BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C07Au,3u,0x01u,0xC07Du);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* ED BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C07Au,3u,0x01u,0xC07Du);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C07Du:
    if(m==0u&&x==0u&&e==0u){ /* 10 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C07Du,2u,0x07u,0xC07Fu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xC086u;}
      if(c->pc!=0xC07Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC07Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 10 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C07Du,2u,0x07u,0xC07Fu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xC086u;}
      if(c->pc!=0xC07Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC07Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C07Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C07Fu,3u,0xFFu,0xC082u);
      sc_v11_op_compare(r,c->a,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C07Fu,3u,0xFFu,0xC082u);
      sc_v11_op_compare(r,c->a,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C082u:
    if(m==0u&&x==0u&&e==0u){ /* 90 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C082u,2u,0x18u,0xC084u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC084u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC084u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C082u,2u,0x18u,0xC084u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC084u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC084u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C084u:
    if(m==0u&&x==0u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C084u,2u,0x05u,0xC086u);
      if(1){c->pc=0xC08Bu;}
      if(c->pc!=0xC086u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC086u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C084u,2u,0x05u,0xC086u);
      if(1){c->pc=0xC08Bu;}
      if(c->pc!=0xC086u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC086u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C086u:
    if(m==0u&&x==0u&&e==0u){ /* C9 1D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C086u,3u,0x00u,0xC089u);
      sc_v11_op_compare(r,c->a,0x001Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 1D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C086u,3u,0x00u,0xC089u);
      sc_v11_op_compare(r,c->a,0x001Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C089u:
    if(m==0u&&x==0u&&e==0u){ /* B0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C089u,2u,0x11u,0xC08Bu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC08Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC08Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C089u,2u,0x11u,0xC08Bu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC09Cu;}
      if(c->pc!=0xC08Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC08Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C08Bu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C08Bu,1u,0x3Au,0xC08Cu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C08Bu,1u,0x3Au,0xC08Cu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C08Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C08Cu,2u,0x10u,0xC08Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C08Cu,2u,0x10u,0xC08Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C08Eu:
    if(m==0u&&x==0u&&e==0u){ /* AE 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C08Eu,3u,0x0Bu,0xC091u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C091u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C091u,1u,0xE8u,0xC092u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C092u:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C092u,1u,0x88u,0xC093u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C093u:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C093u,1u,0x88u,0xC094u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C094u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A5 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C094u,3u,0xC1u,0xC097u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC096u))return 0;c->pc=0xC1A5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C097u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C097u,1u,0xC8u,0xC098u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C097u,1u,0xC8u,0xC098u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C097u,1u,0xC8u,0xC098u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C097u,1u,0xC8u,0xC098u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C098u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C098u,1u,0xC8u,0xC099u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C098u,1u,0xC8u,0xC099u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C098u,1u,0xC8u,0xC099u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C098u,1u,0xC8u,0xC099u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C099u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 9D C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C099u,3u,0xC0u,0xC09Cu);
      c->pc=0xC09Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 9D C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C099u,3u,0xC0u,0xC09Cu);
      c->pc=0xC09Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 9D C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C099u,3u,0xC0u,0xC09Cu);
      c->pc=0xC09Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 9D C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C099u,3u,0xC0u,0xC09Cu);
      c->pc=0xC09Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C09Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C09Cu,1u,0x60u,0xC09Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C09Cu,1u,0x60u,0xC09Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C09Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C09Du,2u,0x30u,0xC09Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C09Du,2u,0x30u,0xC09Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C09Du,2u,0x30u,0xC09Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C09Du,2u,0x30u,0xC09Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C09Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C09Fu,3u,0x0Bu,0xC0A2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0A2u:
    if(m==0u&&x==0u&&e==0u){ /* C9 D8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0A2u,3u,0x01u,0xC0A5u);
      sc_v11_op_compare(r,c->a,0x01D8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0A5u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0A5u,2u,0x0Cu,0xC0A7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC0B3u;}
      if(c->pc!=0xC0A7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0A7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0A7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0A7u,2u,0x20u,0xC0A9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0A9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0A9u,2u,0xCFu,0xC0ABu);
      sc_v11_op_lda(r,0x00CFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0ABu:
    if(m==1u&&x==0u&&e==0u){ /* 85 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0ABu,2u,0x9Au,0xC0ADu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x9Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0ADu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0ADu,2u,0x00u,0xC0AFu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0AFu:
    if(m==1u&&x==0u&&e==0u){ /* 85 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0AFu,2u,0x9Du,0xC0B1u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x9Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0B1u:
    if(m==1u&&x==0u&&e==0u){ /* 80 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0B1u,2u,0x16u,0xC0B3u);
      if(1){c->pc=0xC0C9u;}
      if(c->pc!=0xC0B3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0B3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0B3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0B3u,2u,0x20u,0xC0B5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0B5u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0B5u,3u,0x00u,0xC0B8u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0B8u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0B8u,1u,0x4Au,0xC0B9u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0B9u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0B9u,3u,0x00u,0xC0BCu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0BCu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0BCu,1u,0xAAu,0xC0BDu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0BDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0BDu,2u,0x20u,0xC0BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0BFu:
    if(m==1u&&x==0u&&e==0u){ /* BD 37 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0BFu,3u,0xBCu,0xC0C2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBC37u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0C2u:
    if(m==1u&&x==0u&&e==0u){ /* 85 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0C2u,2u,0x9Au,0xC0C4u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x9Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0C4u:
    if(m==1u&&x==0u&&e==0u){ /* BD 38 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0C4u,3u,0xBCu,0xC0C7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBC38u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0C7u:
    if(m==1u&&x==0u&&e==0u){ /* 85 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0C7u,2u,0x9Du,0xC0C9u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x9Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0C9u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0C9u,2u,0x20u,0xC0CBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0CBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0CBu,3u,0x0Bu,0xC0CEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0CEu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0CEu,1u,0x4Au,0xC0CFu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0CFu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0CFu,1u,0x4Au,0xC0D0u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0D0u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0D0u,1u,0x4Au,0xC0D1u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0D1u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0D1u,1u,0x4Au,0xC0D2u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0D2u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0D2u,1u,0xAAu,0xC0D3u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0D3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0D3u,2u,0x20u,0xC0D5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0D5u:
    if(m==1u&&x==0u&&e==0u){ /* BF 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0D5u,4u,0x7Eu,0xC0D9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2200u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0D9u:
    if(m==1u&&x==0u&&e==0u){ /* 25 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0D9u,2u,0x9Au,0xC0DBu);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x9Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0DBu:
    if(m==1u&&x==0u&&e==0u){ /* 05 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0DBu,2u,0x9Du,0xC0DDu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x9Du)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0DDu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0DDu,4u,0x7Eu,0xC0E1u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0E1u:
    if(m==1u&&x==0u&&e==0u){ /* A5 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0E1u,2u,0xA0u,0xC0E3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xA0u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0E3u:
    if(m==1u&&x==0u&&e==0u){ /* F0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0E3u,2u,0x0Fu,0xC0E5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC0F4u;}
      if(c->pc!=0xC0E5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0E5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0E5u:
    if(m==1u&&x==0u&&e==0u){ /* A5 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0E5u,2u,0x9Du,0xC0E7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x9Du)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0E7u:
    if(m==1u&&x==0u&&e==0u){ /* D0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0E7u,2u,0x02u,0xC0E9u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC0EBu;}
      if(c->pc!=0xC0E9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0E9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0E9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0E9u,2u,0x20u,0xC0EBu);
      sc_v11_op_lda(r,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0EBu:
    if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0EBu,1u,0x4Au,0xC0ECu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0ECu:
    if(m==1u&&x==0u&&e==0u){ /* 1F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0ECu,4u,0x7Eu,0xC0F0u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2200u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0F0u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0F0u,4u,0x7Eu,0xC0F4u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0F4u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0F4u,1u,0x60u,0xC0F5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0F5u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0F5u,2u,0x20u,0xC0F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C0F7u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C0F7u,2u,0x10u,0xC0F9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C154u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C154u,2u,0x20u,0xC156u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C154u,2u,0x20u,0xC156u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C154u,2u,0x20u,0xC156u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C156u:
    if(m==1u&&x==1u&&e==0u){ /* A9 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C156u,2u,0xE0u,0xC158u);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C158u:
    if(m==1u&&x==1u&&e==0u){ /* 8F C5 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C158u,4u,0x7Eu,0xC15Cu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21C5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C15Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8F C9 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C15Cu,4u,0x7Eu,0xC160u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21C9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C160u:
    if(m==1u&&x==1u&&e==0u){ /* 8F CD 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C160u,4u,0x7Eu,0xC164u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21CDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C164u:
    if(m==1u&&x==1u&&e==0u){ /* 8F D1 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C164u,4u,0x7Eu,0xC168u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21D1u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C168u:
    if(m==1u&&x==1u&&e==0u){ /* AF 1C 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C168u,4u,0x7Eu,0xC16Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C16Cu:
    if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C16Cu,2u,0x03u,0xC16Eu);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C16Eu:
    if(m==1u&&x==1u&&e==0u){ /* 09 54 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C16Eu,2u,0x54u,0xC170u);
      sc_v11_op_ora(r,0x0054u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C170u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 1C 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C170u,4u,0x7Eu,0xC174u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C174u:
    if(m==1u&&x==1u&&e==0u){ /* AF 1D 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C174u,4u,0x7Eu,0xC178u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C178u:
    if(m==1u&&x==1u&&e==0u){ /* 29 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C178u,2u,0xFCu,0xC17Au);
      sc_v11_op_and(r,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C17Au:
    if(m==1u&&x==1u&&e==0u){ /* 09 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C17Au,2u,0x01u,0xC17Cu);
      sc_v11_op_ora(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C17Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 1D 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C17Cu,4u,0x7Eu,0xC180u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C180u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C180u,2u,0x20u,0xC182u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C180u,2u,0x20u,0xC182u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C180u,2u,0x20u,0xC182u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C182u:
    if(m==1u&&x==1u&&e==0u){ /* AD 03 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C182u,3u,0x0Bu,0xC185u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B03u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C185u:
    if(m==1u&&x==1u&&e==0u){ /* D0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C185u,2u,0x18u,0xC187u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC19Fu;}
      if(c->pc!=0xC187u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC187u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C187u:
    if(m==1u&&x==1u&&e==0u){ /* A9 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C187u,2u,0xE0u,0xC189u);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C189u:
    if(m==1u&&x==1u&&e==0u){ /* 8F F1 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C189u,4u,0x7Eu,0xC18Du);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21F1u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C18Du:
    if(m==1u&&x==1u&&e==0u){ /* 8F F5 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C18Du,4u,0x7Eu,0xC191u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21F5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C191u:
    if(m==1u&&x==1u&&e==0u){ /* 8F F9 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C191u,4u,0x7Eu,0xC195u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21F9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C195u:
    if(m==1u&&x==1u&&e==0u){ /* 8F FD 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C195u,4u,0x7Eu,0xC199u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E21FDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C199u:
    if(m==1u&&x==1u&&e==0u){ /* A9 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C199u,2u,0x55u,0xC19Bu);
      sc_v11_op_lda(r,0x0055u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C19Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 1F 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C19Bu,4u,0x7Eu,0xC19Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C19Fu:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C19Fu,1u,0x60u,0xC1A0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1A0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1A0u,2u,0x10u,0xC1A2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1A2u:
    if(m==0u&&x==0u&&e==0u){ /* AE 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1A2u,3u,0x0Bu,0xC1A5u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1A5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1A5u,2u,0x30u,0xC1A7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1A7u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1A7u,1u,0x0Au,0xC1A8u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1A8u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1A8u,1u,0x0Au,0xC1A9u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1A9u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1A9u,1u,0x0Au,0xC1AAu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1AAu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1AAu,1u,0x18u,0xC1ABu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1ABu:
    if(m==0u&&x==0u&&e==0u){ /* 79 6D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1ABu,3u,0x0Au,0xC1AEu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0A6Du)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1AEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1AEu,2u,0x20u,0xC1B0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1B0u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1B0u,4u,0x7Eu,0xC1B4u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1B4u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1B4u,1u,0x60u,0xC1B5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1B5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1B5u,2u,0x30u,0xC1B7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1B7u:
    if(m==0u&&x==0u&&e==0u){ /* A5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1B7u,2u,0x94u,0xC1B9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1B9u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1B9u,1u,0x38u,0xC1BAu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1BAu:
    if(m==0u&&x==0u&&e==0u){ /* ED BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1BAu,3u,0x01u,0xC1BDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1BDu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1BDu,1u,0x38u,0xC1BEu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1BEu:
    if(m==0u&&x==0u&&e==0u){ /* E9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1BEu,3u,0x00u,0xC1C1u);
      sc_v11_op_sbc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1C1u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1C1u,1u,0x0Au,0xC1C2u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1C2u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1C2u,1u,0x0Au,0xC1C3u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1C3u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1C3u,1u,0x0Au,0xC1C4u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1C4u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1C4u,1u,0x18u,0xC1C5u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1C5u:
    if(m==0u&&x==0u&&e==0u){ /* 79 6B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1C5u,3u,0x0Au,0xC1C8u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0A6Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1C8u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1C8u,1u,0x4Au,0xC1C9u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1C9u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1C9u,1u,0x4Au,0xC1CAu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1CAu:
    if(m==0u&&x==0u&&e==0u){ /* 85 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1CAu,2u,0x9Au,0xC1CCu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x9Au),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1CCu:
    if(m==0u&&x==0u&&e==0u){ /* A6 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1CCu,2u,0x97u,0xC1CEu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x97u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1CEu:
    if(m==0u&&x==0u&&e==0u){ /* E0 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1CEu,3u,0x00u,0xC1D1u);
      sc_v11_op_compare(r,c->x,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1D1u:
    if(m==0u&&x==0u&&e==0u){ /* B0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1D1u,2u,0x06u,0xC1D3u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC1D9u;}
      if(c->pc!=0xC1D3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1D3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1D3u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1D3u,1u,0x38u,0xC1D4u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1D4u:
    if(m==0u&&x==0u&&e==0u){ /* E9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1D4u,3u,0x00u,0xC1D7u);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1D7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1D7u,2u,0x9Au,0xC1D9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x9Au),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1D9u:
    if(m==0u&&x==0u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1D9u,2u,0x91u,0xC1DBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1DBu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1DBu,1u,0x38u,0xC1DCu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1DCu:
    if(m==0u&&x==0u&&e==0u){ /* ED BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1DCu,3u,0x01u,0xC1DFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1DFu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1DFu,1u,0x3Au,0xC1E0u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1E0u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1E0u,1u,0x0Au,0xC1E1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1E1u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1E1u,1u,0x0Au,0xC1E2u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1E2u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1E2u,1u,0x0Au,0xC1E3u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1E3u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1E3u,1u,0x18u,0xC1E4u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1E4u:
    if(m==0u&&x==0u&&e==0u){ /* 79 6D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1E4u,3u,0x0Au,0xC1E7u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0A6Du)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1E7u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1E7u,1u,0x38u,0xC1E8u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1E8u:
    if(m==0u&&x==0u&&e==0u){ /* E5 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1E8u,2u,0x9Au,0xC1EAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x9Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1EAu:
    if(m==0u&&x==0u&&e==0u){ /* 85 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1EAu,2u,0x9Du,0xC1ECu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x9Du),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1ECu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1ECu,2u,0x20u,0xC1EEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1EEu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1EEu,2u,0x10u,0xC1F0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1F0u:
    if(m==1u&&x==0u&&e==0u){ /* A5 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1F0u,2u,0x9Du,0xC1F2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x9Du)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1F2u:
    if(m==1u&&x==0u&&e==0u){ /* AE 33 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1F2u,3u,0x0Bu,0xC1F5u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1F5u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1F5u,4u,0x7Eu,0xC1F9u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1F9u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1F9u,1u,0x60u,0xC1FAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1FAu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1FAu,2u,0x20u,0xC1FCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1FCu:
    if(m==0u&&x==1u&&e==0u){ /* AD 0F 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1FCu,3u,0x0Cu,0xC1FFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C1FFu:
    if(m==0u&&x==1u&&e==0u){ /* D0 29 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C1FFu,2u,0x29u,0xC201u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC22Au;}
      if(c->pc!=0xC201u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC201u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C201u:
    if(m==0u&&x==1u&&e==0u){ /* A5 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C201u,2u,0xE3u,0xC203u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE3u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C203u:
    if(m==0u&&x==1u&&e==0u){ /* D0 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C203u,2u,0x25u,0xC205u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC22Au;}
      if(c->pc!=0xC205u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC205u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C205u:
    if(m==0u&&x==1u&&e==0u){ /* AD F7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C205u,3u,0x01u,0xC208u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C208u:
    if(m==0u&&x==1u&&e==0u){ /* D0 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C208u,2u,0x20u,0xC20Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC22Au;}
      if(c->pc!=0xC20Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC20Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C20Au:
    if(m==0u&&x==1u&&e==0u){ /* AD F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C20Au,3u,0x0Au,0xC20Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C20Du:
    if(m==0u&&x==1u&&e==0u){ /* D0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C20Du,2u,0x19u,0xC20Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC228u;}
      if(c->pc!=0xC20Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC20Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C20Fu:
    if(m==0u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C20Fu,2u,0xD7u,0xC211u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C211u:
    if(m==0u&&x==1u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C211u,3u,0x00u,0xC214u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C214u:
    if(m==0u&&x==1u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C214u,2u,0x0Au,0xC216u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC220u;}
      if(c->pc!=0xC216u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC216u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C216u:
    if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C216u,3u,0x01u,0xC219u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C219u:
    if(m==0u&&x==1u&&e==0u){ /* 29 80 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C219u,3u,0x40u,0xC21Cu);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C21Cu:
    if(m==0u&&x==1u&&e==0u){ /* D0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C21Cu,2u,0x0Cu,0xC21Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC22Au;}
      if(c->pc!=0xC21Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC21Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C21Eu:
    if(m==0u&&x==1u&&e==0u){ /* 80 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C21Eu,2u,0x08u,0xC220u);
      if(1){c->pc=0xC228u;}
      if(c->pc!=0xC220u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC220u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C220u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C220u,3u,0x01u,0xC223u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C220u,3u,0x01u,0xC223u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C223u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C223u,3u,0x0Fu,0xC226u);
      sc_v11_op_and(r,0x0F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 00 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C223u,3u,0x0Fu,0xC226u);
      sc_v11_op_and(r,0x0F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C226u:
    if(m==0u&&x==0u&&e==0u){ /* D0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C226u,2u,0x02u,0xC228u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC22Au;}
      if(c->pc!=0xC228u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC228u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C226u,2u,0x02u,0xC228u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC22Au;}
      if(c->pc!=0xC228u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC228u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C228u:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C228u,1u,0x38u,0xC229u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C229u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C229u,1u,0x60u,0xC22Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C22Au:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C22Au,1u,0x18u,0xC22Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C22Au,1u,0x18u,0xC22Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C22Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C22Bu,1u,0x60u,0xC22Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C22Bu,1u,0x60u,0xC22Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C22Cu:
    if(m==1u&&x==1u&&e==0u){ /* 20 30 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C22Cu,3u,0xC2u,0xC22Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC22Eu))return 0;c->pc=0xC230u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C22Fu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C22Fu,1u,0x6Bu,0xC230u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C22Fu,1u,0x6Bu,0xC230u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C22Fu,1u,0x6Bu,0xC230u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C22Fu,1u,0x6Bu,0xC230u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C230u:
    if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C230u,2u,0x10u,0xC232u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C232u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C232u,2u,0x20u,0xC234u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C234u:
    if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C234u,1u,0x8Au,0xC235u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C235u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C235u,3u,0x00u,0xC238u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C238u:
    if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C238u,2u,0x79u,0xC23Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C23Au:
    if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C23Au,1u,0x8Au,0xC23Bu);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C23Bu:
    if(m==0u&&x==1u&&e==0u){ /* 29 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C23Bu,3u,0xFFu,0xC23Eu);
      sc_v11_op_and(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C23Eu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C23Eu,1u,0x18u,0xC23Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C23Fu:
    if(m==0u&&x==1u&&e==0u){ /* 69 B4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C23Fu,3u,0x01u,0xC242u);
      sc_v11_op_adc(r,0x01B4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C242u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C242u,3u,0x00u,0xC245u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C245u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C245u,1u,0x4Au,0xC246u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C246u:
    if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C246u,3u,0x00u,0xC249u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C249u:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C249u,1u,0xAAu,0xC24Au);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C24Au:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C24Au,2u,0x20u,0xC24Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C24Cu:
    if(m==1u&&x==1u&&e==0u){ /* BD 37 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C24Cu,3u,0xBCu,0xC24Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBC37u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C24Fu:
    if(m==1u&&x==1u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C24Fu,2u,0x82u,0xC251u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x82u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C251u:
    if(m==1u&&x==1u&&e==0u){ /* BD 38 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C251u,3u,0xBCu,0xC254u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xBC38u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C254u:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C254u,1u,0x4Au,0xC255u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C255u:
    if(m==1u&&x==1u&&e==0u){ /* 85 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C255u,2u,0x85u,0xC257u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x85u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C257u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C257u,2u,0x20u,0xC259u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C259u:
    if(m==0u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C259u,2u,0x79u,0xC25Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C25Bu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C25Bu,1u,0x18u,0xC25Cu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C25Cu:
    if(m==0u&&x==1u&&e==0u){ /* 69 B4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C25Cu,3u,0x01u,0xC25Fu);
      sc_v11_op_adc(r,0x01B4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C25Fu:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C25Fu,1u,0x4Au,0xC260u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C260u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C260u,1u,0x4Au,0xC261u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C261u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C261u,1u,0x4Au,0xC262u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C262u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C262u,1u,0x4Au,0xC263u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C263u:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C263u,1u,0xAAu,0xC264u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C264u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C264u,2u,0x20u,0xC266u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C266u:
    if(m==1u&&x==1u&&e==0u){ /* BF 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C266u,4u,0x7Eu,0xC26Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2200u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C26Au:
    if(m==1u&&x==1u&&e==0u){ /* 25 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C26Au,2u,0x82u,0xC26Cu);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x82u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C26Cu:
    if(m==1u&&x==1u&&e==0u){ /* 05 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C26Cu,2u,0x85u,0xC26Eu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x85u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C26Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C26Eu,4u,0x7Eu,0xC272u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C272u:
    if(m==1u&&x==1u&&e==0u){ /* A6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C272u,2u,0x79u,0xC274u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C274u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C274u,1u,0x60u,0xC275u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C3F9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C3F9u,2u,0x30u,0xC3FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C3F9u,2u,0x30u,0xC3FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C3F9u,2u,0x30u,0xC3FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C3F9u,2u,0x30u,0xC3FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C3FBu:
    if(m==0u&&x==0u&&e==0u){ /* A5 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C3FBu,2u,0x40u,0xC3FDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x40u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C3FDu:
    if(m==0u&&x==0u&&e==0u){ /* C9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C3FDu,3u,0x00u,0xC400u);
      sc_v11_op_compare(r,c->a,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
