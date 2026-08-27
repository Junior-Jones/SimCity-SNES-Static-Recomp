/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00025(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x009401u:
    if(m==1u&&x==1u&&e==0u){ /* A5 73 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009401u,2u,0x73u,0x9403u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x73u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009403u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 11 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009403u,3u,0x21u,0x9406u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009406u:
    if(m==1u&&x==1u&&e==0u){ /* A5 74 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009406u,2u,0x74u,0x9408u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x74u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009408u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 11 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009408u,3u,0x21u,0x940Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00940Bu:
    if(m==1u&&x==1u&&e==0u){ /* A5 75 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00940Bu,2u,0x75u,0x940Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x75u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00940Du:
    if(m==1u&&x==1u&&e==0u){ /* 8D 12 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00940Du,3u,0x21u,0x9410u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009410u:
    if(m==1u&&x==1u&&e==0u){ /* A5 76 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009410u,2u,0x76u,0x9412u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x76u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009412u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 12 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009412u,3u,0x21u,0x9415u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009415u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009415u,1u,0x60u,0x9416u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009416u:
    if(m==1u&&x==1u&&e==0u){ /* AD 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009416u,3u,0x01u,0x9419u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0137u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009419u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 10 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009419u,3u,0x21u,0x941Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2110u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00941Cu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 10 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00941Cu,3u,0x21u,0x941Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2110u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00941Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 12 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00941Fu,3u,0x21u,0x9422u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009422u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 12 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009422u,3u,0x21u,0x9425u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009425u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009425u,1u,0x18u,0x9426u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009426u:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009426u,2u,0x08u,0x9428u);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009428u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0E 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009428u,3u,0x21u,0x942Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00942Bu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0E 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00942Bu,3u,0x21u,0x942Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Eu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00942Eu:
    if(m==1u&&x==1u&&e==0u){ /* A5 D1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00942Eu,2u,0xD1u,0x9430u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD1u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009430u:
    if(m==1u&&x==1u&&e==0u){ /* 29 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009430u,2u,0x08u,0x9432u);
      sc_v11_op_and(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009432u:
    if(m==1u&&x==1u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009432u,2u,0x06u,0x9434u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x943Au;}
      if(c->pc!=0x9434u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9434u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009434u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009434u,2u,0x02u,0x9436u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009436u:
    if(m==1u&&x==1u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009436u,2u,0x91u,0x9438u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009438u:
    if(m==1u&&x==1u&&e==0u){ /* 80 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009438u,2u,0x04u,0x943Au);
      if(1){c->pc=0x943Eu;}
      if(c->pc!=0x943Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x943Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00943Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 FE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00943Au,2u,0xFEu,0x943Cu);
      sc_v11_op_lda(r,0x00FEu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00943Cu:
    if(m==1u&&x==1u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00943Cu,2u,0x91u,0x943Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x91u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00943Eu:
    if(m==1u&&x==1u&&e==0u){ /* AD 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00943Eu,3u,0x01u,0x9441u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0139u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009441u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009441u,1u,0x18u,0x9442u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009442u:
    if(m==1u&&x==1u&&e==0u){ /* 65 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009442u,2u,0x91u,0x9444u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x91u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009444u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0F 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009444u,3u,0x21u,0x9447u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009447u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0F 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009447u,3u,0x21u,0x944Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00944Au:
    if(m==1u&&x==1u&&e==0u){ /* 9C 11 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00944Au,3u,0x21u,0x944Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00944Du:
    if(m==1u&&x==1u&&e==0u){ /* 9C 11 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00944Du,3u,0x21u,0x9450u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009450u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009450u,1u,0x18u,0x9451u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009451u:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009451u,2u,0x08u,0x9453u);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009453u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0D 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009453u,3u,0x21u,0x9456u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009456u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0D 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009456u,3u,0x21u,0x9459u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009459u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009459u,1u,0x60u,0x945Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00945Au:
    if(m==1u&&x==1u&&e==0u){ /* AD 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00945Au,3u,0x01u,0x945Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0137u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00945Du:
    if(m==1u&&x==1u&&e==0u){ /* 8D 10 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00945Du,3u,0x21u,0x9460u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2110u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009460u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 10 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009460u,3u,0x21u,0x9463u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2110u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009463u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 12 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009463u,3u,0x21u,0x9466u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009466u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 12 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009466u,3u,0x21u,0x9469u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009469u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009469u,1u,0x18u,0x946Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00946Au:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00946Au,2u,0x08u,0x946Cu);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00946Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0E 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00946Cu,3u,0x21u,0x946Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00946Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0E 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00946Fu,3u,0x21u,0x9472u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Eu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009472u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 11 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009472u,3u,0x21u,0x9475u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009475u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 11 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009475u,3u,0x21u,0x9478u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009478u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009478u,1u,0x60u,0x9479u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009479u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009479u,2u,0x30u,0x947Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00947Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 9D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00947Bu,3u,0x01u,0x947Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x019Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00947Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00947Eu,3u,0x01u,0x9481u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009481u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009481u,1u,0x4Au,0x9482u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009482u:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009482u,2u,0x06u,0x9484u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x948Au;}
      if(c->pc!=0x9484u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9484u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009484u:
    if(m==0u&&x==0u&&e==0u){ /* 22 2C B0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009484u,4u,0x01u,0x9488u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9487u))return 0;
      c->pbr=0x01u;c->pc=0xB02Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009488u:
    if(m==0u&&x==0u&&e==0u){ /* 80 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009488u,2u,0x19u,0x948Au);
      if(1){c->pc=0x94A3u;}
      if(c->pc!=0x948Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x948Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009488u,2u,0x19u,0x948Au);
      if(1){c->pc=0x94A3u;}
      if(c->pc!=0x948Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x948Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009488u,2u,0x19u,0x948Au);
      if(1){c->pc=0x94A3u;}
      if(c->pc!=0x948Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x948Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009488u,2u,0x19u,0x948Au);
      if(1){c->pc=0x94A3u;}
      if(c->pc!=0x948Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x948Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00948Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00948Au,1u,0x4Au,0x948Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00948Bu:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00948Bu,2u,0x06u,0x948Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9493u;}
      if(c->pc!=0x948Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x948Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00948Du:
    if(m==0u&&x==0u&&e==0u){ /* 22 62 B1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00948Du,4u,0x01u,0x9491u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9490u))return 0;
      c->pbr=0x01u;c->pc=0xB162u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009491u:
    if(m==0u&&x==0u&&e==0u){ /* 80 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009491u,2u,0x10u,0x9493u);
      if(1){c->pc=0x94A3u;}
      if(c->pc!=0x9493u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9493u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009491u,2u,0x10u,0x9493u);
      if(1){c->pc=0x94A3u;}
      if(c->pc!=0x9493u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9493u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009491u,2u,0x10u,0x9493u);
      if(1){c->pc=0x94A3u;}
      if(c->pc!=0x9493u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9493u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009491u,2u,0x10u,0x9493u);
      if(1){c->pc=0x94A3u;}
      if(c->pc!=0x9493u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9493u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009493u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009493u,1u,0x4Au,0x9494u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009494u:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009494u,2u,0x06u,0x9496u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x949Cu;}
      if(c->pc!=0x9496u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9496u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009496u:
    if(m==0u&&x==0u&&e==0u){ /* 22 F2 B1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009496u,4u,0x01u,0x949Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9499u))return 0;
      c->pbr=0x01u;c->pc=0xB1F2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00949Au:
    if(m==0u&&x==0u&&e==0u){ /* 80 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00949Au,2u,0x07u,0x949Cu);
      if(1){c->pc=0x94A3u;}
      if(c->pc!=0x949Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x949Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00949Au,2u,0x07u,0x949Cu);
      if(1){c->pc=0x94A3u;}
      if(c->pc!=0x949Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x949Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00949Au,2u,0x07u,0x949Cu);
      if(1){c->pc=0x94A3u;}
      if(c->pc!=0x949Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x949Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00949Au,2u,0x07u,0x949Cu);
      if(1){c->pc=0x94A3u;}
      if(c->pc!=0x949Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x949Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00949Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00949Cu,1u,0x4Au,0x949Du);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00949Du:
    if(m==0u&&x==0u&&e==0u){ /* 90 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00949Du,2u,0x1Cu,0x949Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x94BBu;}
      if(c->pc!=0x949Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x949Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00949Fu:
    if(m==0u&&x==0u&&e==0u){ /* 22 F5 B2 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00949Fu,4u,0x01u,0x94A3u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94A2u))return 0;
      c->pbr=0x01u;c->pc=0xB2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094A3u:
    if(m==0u&&x==0u&&e==0u){ /* 22 BA AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094A3u,4u,0x01u,0x94A7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94A6u))return 0;
      c->pbr=0x01u;c->pc=0xAFBAu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 BA AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094A3u,4u,0x01u,0x94A7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94A6u))return 0;
      c->pbr=0x01u;c->pc=0xAFBAu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 BA AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094A3u,4u,0x01u,0x94A7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94A6u))return 0;
      c->pbr=0x01u;c->pc=0xAFBAu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 BA AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094A3u,4u,0x01u,0x94A7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94A6u))return 0;
      c->pbr=0x01u;c->pc=0xAFBAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094A7u:
    if(m==0u&&x==0u&&e==0u){ /* 22 DC AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094A7u,4u,0x01u,0x94ABu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94AAu))return 0;
      c->pbr=0x01u;c->pc=0xAFDCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 DC AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094A7u,4u,0x01u,0x94ABu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94AAu))return 0;
      c->pbr=0x01u;c->pc=0xAFDCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 DC AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094A7u,4u,0x01u,0x94ABu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94AAu))return 0;
      c->pbr=0x01u;c->pc=0xAFDCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 DC AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094A7u,4u,0x01u,0x94ABu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94AAu))return 0;
      c->pbr=0x01u;c->pc=0xAFDCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094ABu:
    if(m==0u&&x==0u&&e==0u){ /* 22 DC AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094ABu,4u,0x01u,0x94AFu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94AEu))return 0;
      c->pbr=0x01u;c->pc=0xAFDCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 DC AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094ABu,4u,0x01u,0x94AFu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94AEu))return 0;
      c->pbr=0x01u;c->pc=0xAFDCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 DC AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094ABu,4u,0x01u,0x94AFu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94AEu))return 0;
      c->pbr=0x01u;c->pc=0xAFDCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 DC AF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094ABu,4u,0x01u,0x94AFu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x94AEu))return 0;
      c->pbr=0x01u;c->pc=0xAFDCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094AFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094AFu,2u,0x20u,0x94B1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094AFu,2u,0x20u,0x94B1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094AFu,2u,0x20u,0x94B1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094AFu,2u,0x20u,0x94B1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094B1u:
    if(m==0u&&x==0u&&e==0u){ /* 9C C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094B1u,3u,0x01u,0x94B4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094B1u,3u,0x01u,0x94B4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094B4u:
    if(m==0u&&x==0u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094B4u,2u,0xBBu,0x94B6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xBBu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094B4u,2u,0xBBu,0x94B6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xBBu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094B6u:
    if(m==0u&&x==0u&&e==0u){ /* 09 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094B6u,3u,0x00u,0x94B9u);
      sc_v11_op_ora(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 09 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094B6u,3u,0x00u,0x94B9u);
      sc_v11_op_ora(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094B9u:
    if(m==0u&&x==0u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094B9u,2u,0xBBu,0x94BBu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xBBu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094B9u,2u,0xBBu,0x94BBu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xBBu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094BBu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094BBu,1u,0x60u,0x94BCu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094BBu,1u,0x60u,0x94BCu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094BCu:
    if(m==0u&&x==1u&&e==0u){ /* 20 C0 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094BCu,3u,0x94u,0x94BFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x94BEu))return 0;c->pc=0x94C0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094BFu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094BFu,1u,0x6Bu,0x94C0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094BFu,1u,0x6Bu,0x94C0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094BFu,1u,0x6Bu,0x94C0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094C0u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094C0u,2u,0x20u,0x94C2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094C2u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094C2u,2u,0x10u,0x94C4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094D5u:
    if(m==0u&&x==1u&&e==0u){ /* 20 D9 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094D5u,3u,0x94u,0x94D8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x94D7u))return 0;c->pc=0x94D9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 D9 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094D5u,3u,0x94u,0x94D8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x94D7u))return 0;c->pc=0x94D9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 D9 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094D5u,3u,0x94u,0x94D8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x94D7u))return 0;c->pc=0x94D9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094D8u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094D8u,1u,0x6Bu,0x94D9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094D8u,1u,0x6Bu,0x94D9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }

    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094D8u,1u,0x6Bu,0x94D9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094D9u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094D9u,2u,0x20u,0x94DBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094D9u,2u,0x20u,0x94DBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094D9u,2u,0x20u,0x94DBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0094DBu:

    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0094DBu,2u,0x10u,0x94DDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009600u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009600u,2u,0x20u,0x9602u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }

    if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009600u,2u,0x20u,0x9602u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009602u:

    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009602u,2u,0xB3u,0x9604u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009604u:

    if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009604u,2u,0x80u,0x9606u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009606u:

    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009606u,2u,0xB1u,0x9608u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009608u:

    if(m==1u&&x==1u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009608u,3u,0x00u,0x960Bu);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00960Bu:

    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00960Bu,1u,0xABu,0x960Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00960Cu:

    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00960Cu,1u,0xABu,0x960Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00960Du:

    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00960Du,1u,0x60u,0x960Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009618u:
    if(m==0u&&x==0u&&e==0u){ /* 20 1C 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009618u,3u,0x96u,0x961Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x961Au))return 0;c->pc=0x961Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1C 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009618u,3u,0x96u,0x961Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x961Au))return 0;c->pc=0x961Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 1C 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009618u,3u,0x96u,0x961Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x961Au))return 0;c->pc=0x961Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1C 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009618u,3u,0x96u,0x961Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x961Au))return 0;c->pc=0x961Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00961Bu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00961Bu,1u,0x6Bu,0x961Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00961Bu,1u,0x6Bu,0x961Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00961Bu,1u,0x6Bu,0x961Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00961Bu,1u,0x6Bu,0x961Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00961Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00961Cu,2u,0x30u,0x961Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00961Cu,2u,0x30u,0x961Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00961Cu,2u,0x30u,0x961Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009654u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009654u,2u,0x30u,0x9656u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009654u,2u,0x30u,0x9656u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0096BAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 BE 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096BAu,3u,0x96u,0x96BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x96BCu))return 0;c->pc=0x96BEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 BE 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096BAu,3u,0x96u,0x96BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x96BCu))return 0;c->pc=0x96BEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 BE 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096BAu,3u,0x96u,0x96BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x96BCu))return 0;c->pc=0x96BEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 BE 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096BAu,3u,0x96u,0x96BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x96BCu))return 0;c->pc=0x96BEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0096BDu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096BDu,1u,0x6Bu,0x96BEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096BDu,1u,0x6Bu,0x96BEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096BDu,1u,0x6Bu,0x96BEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096BDu,1u,0x6Bu,0x96BEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0096BEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096BEu,2u,0x20u,0x96C0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096BEu,2u,0x20u,0x96C0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096BEu,2u,0x20u,0x96C0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0096C0u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096C0u,2u,0x10u,0x96C2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0096DBu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096DBu,2u,0x20u,0x96DDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096DBu,2u,0x20u,0x96DDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096DBu,2u,0x20u,0x96DDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0096DDu:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096DDu,3u,0x00u,0x96E0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0096E0u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096E0u,3u,0x21u,0x96E3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0096E3u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0096E3u,2u,0x30u,0x96E5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009720u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009720u,2u,0x20u,0x9722u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009720u,2u,0x20u,0x9722u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009720u,2u,0x20u,0x9722u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009722u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009722u,3u,0x60u,0x9725u);
      sc_v11_op_lda(r,0x6000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009725u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009725u,3u,0x21u,0x9728u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009728u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009728u,2u,0x30u,0x972Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x009799u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009799u,2u,0x20u,0x979Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009799u,2u,0x20u,0x979Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x009799u,2u,0x20u,0x979Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00979Bu:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00979Bu,3u,0x40u,0x979Eu);
      sc_v11_op_lda(r,0x4000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00979Eu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00979Eu,3u,0x21u,0x97A1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0097A1u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097A1u,2u,0x30u,0x97A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0097F4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F8 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097F4u,3u,0x97u,0x97F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x97F6u))return 0;c->pc=0x97F8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F8 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097F4u,3u,0x97u,0x97F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x97F6u))return 0;c->pc=0x97F8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F8 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097F4u,3u,0x97u,0x97F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x97F6u))return 0;c->pc=0x97F8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F8 97 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097F4u,3u,0x97u,0x97F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x97F6u))return 0;c->pc=0x97F8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0097F7u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097F7u,1u,0x6Bu,0x97F8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097F7u,1u,0x6Bu,0x97F8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097F7u,1u,0x6Bu,0x97F8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097F7u,1u,0x6Bu,0x97F8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0097F8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097F8u,2u,0x20u,0x97FAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097F8u,2u,0x20u,0x97FAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097F8u,2u,0x20u,0x97FAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097F8u,2u,0x20u,0x97FAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0097FAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097FAu,2u,0x10u,0x97FCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097FAu,2u,0x10u,0x97FCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0097FCu:
    if(m==1u&&x==0u&&e==0u){ /* A2 BD C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097FCu,3u,0xC7u,0x97FFu);
      sc_v11_op_ldx(r,0xC7BDu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0097FFu:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0097FFu,2u,0x09u,0x9801u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
