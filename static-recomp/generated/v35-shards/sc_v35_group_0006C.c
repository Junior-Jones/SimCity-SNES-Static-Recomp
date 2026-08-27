/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0006C(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01B002u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B002u,3u,0x00u,0xB005u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B005u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B005u,3u,0x01u,0xB008u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0139u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B008u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B008u,1u,0x68u,0xB009u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B009u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B009u,1u,0x4Au,0xB00Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B00Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B00Au,2u,0x0Fu,0xB00Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB01Bu;}
      if(c->pc!=0xB00Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB00Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B00Cu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B00Cu,1u,0x48u,0xB00Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B00Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B00Du,3u,0x01u,0xB010u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0137u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B010u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B010u,1u,0x18u,0xB011u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B011u:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B011u,3u,0x00u,0xB014u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B014u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B014u,3u,0x00u,0xB017u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B017u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B017u,3u,0x01u,0xB01Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0137u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B01Au:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B01Au,1u,0x68u,0xB01Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B01Bu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B01Bu,1u,0x4Au,0xB01Cu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B01Cu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B01Cu,2u,0x0Du,0xB01Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB02Bu;}
      if(c->pc!=0xB01Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB01Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B01Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B01Eu,3u,0x01u,0xB021u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0137u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B021u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B021u,1u,0x38u,0xB022u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B022u:
    if(m==0u&&x==0u&&e==0u){ /* E9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B022u,3u,0x00u,0xB025u);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B025u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B025u,3u,0x00u,0xB028u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B028u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B028u,3u,0x01u,0xB02Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0137u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B02Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B02Bu,1u,0x60u,0xB02Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B02Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 30 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B02Cu,3u,0xB0u,0xB02Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB02Eu))return 0;c->pc=0xB030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B02Fu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B02Fu,1u,0x6Bu,0xB030u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B02Fu,1u,0x6Bu,0xB030u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B02Fu,1u,0x6Bu,0xB030u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B02Fu,1u,0x6Bu,0xB030u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B030u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B030u,2u,0x30u,0xB032u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B030u,2u,0x30u,0xB032u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B030u,2u,0x30u,0xB032u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B032u:
    if(m==0u&&x==0u&&e==0u){ /* AD BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B032u,3u,0x01u,0xB035u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B035u:
    if(m==0u&&x==0u&&e==0u){ /* 30 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B035u,2u,0x0Fu,0xB037u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB046u;}
      if(c->pc!=0xB037u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB037u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B037u:
    if(m==0u&&x==0u&&e==0u){ /* CD C5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B037u,3u,0x01u,0xB03Au);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B03Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B03Au,2u,0x0Au,0xB03Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB046u;}
      if(c->pc!=0xB03Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB03Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B03Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B03Cu,3u,0x01u,0xB03Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B03Fu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B03Fu,3u,0xFFu,0xB042u);
      sc_v11_op_and(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B042u:
    if(m==0u&&x==0u&&e==0u){ /* 8D C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B042u,3u,0x01u,0xB045u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B045u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B045u,1u,0x60u,0xB046u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B046u:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B046u,3u,0x01u,0xB049u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B049u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B049u,1u,0x4Au,0xB04Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B04Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B04Au,1u,0x4Au,0xB04Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B04Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B04Bu,3u,0xFFu,0xB04Eu);
      sc_v11_op_and(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B04Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D CD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B04Eu,3u,0x01u,0xB051u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B051u:
    if(m==0u&&x==0u&&e==0u){ /* AD 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B051u,3u,0x01u,0xB054u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0137u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B054u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B054u,1u,0x38u,0xB055u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B055u:
    if(m==0u&&x==0u&&e==0u){ /* E9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B055u,3u,0x00u,0xB058u);
      sc_v11_op_sbc(r,0x0008u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B058u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B058u,3u,0x00u,0xB05Bu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B05Bu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B05Bu,1u,0x4Au,0xB05Cu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B05Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B05Cu,1u,0x4Au,0xB05Du);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B05Du:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B05Du,1u,0x4Au,0xB05Eu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B05Eu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B05Eu,1u,0x48u,0xB05Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B05Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B05Fu,2u,0x20u,0xB061u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B061u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B061u,1u,0x48u,0xB062u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B062u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B062u,2u,0xB3u,0xB064u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B064u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B064u,2u,0x7Fu,0xB066u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B066u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B066u,2u,0xB1u,0xB068u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B068u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B068u,1u,0x68u,0xB069u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B069u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B069u,4u,0x00u,0xB06Du);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B06Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B06Du,2u,0x40u,0xB06Fu);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B06Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B06Fu,4u,0x00u,0xB073u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B073u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B073u,1u,0x48u,0xB074u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B074u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B074u,1u,0x68u,0xB075u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B075u:
    if(m==1u&&x==0u&&e==0u){ /* EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B075u,1u,0xEAu,0xB076u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B076u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B076u,4u,0x00u,0xB07Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B07Au:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B07Au,1u,0xEBu,0xB07Bu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B07Bu:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B07Bu,4u,0x00u,0xB07Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B07Fu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B07Fu,1u,0x48u,0xB080u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B080u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B080u,2u,0xB3u,0xB082u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B082u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B082u,2u,0xB1u,0xB084u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B084u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B084u,1u,0x68u,0xB085u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B085u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B085u,2u,0x20u,0xB087u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B087u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B087u,1u,0x18u,0xB088u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B088u:
    if(m==0u&&x==0u&&e==0u){ /* 6D CD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B088u,3u,0x01u,0xB08Bu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01CDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B08Bu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B08Bu,1u,0xAAu,0xB08Cu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B08Cu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B08Cu,1u,0x68u,0xB08Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B08Du:
    if(m==0u&&x==0u&&e==0u){ /* 49 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B08Du,3u,0xFFu,0xB090u);
      sc_v11_op_eor(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B090u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B090u,1u,0x18u,0xB091u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B091u:
    if(m==0u&&x==0u&&e==0u){ /* 69 21 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B091u,3u,0x00u,0xB094u);
      sc_v11_op_adc(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B094u:
    if(m==0u&&x==0u&&e==0u){ /* C9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B094u,3u,0x00u,0xB097u);
      sc_v11_op_compare(r,c->a,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B097u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B097u,2u,0x03u,0xB099u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB09Cu;}
      if(c->pc!=0xB099u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB099u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B099u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B099u,3u,0x00u,0xB09Cu);
      sc_v11_op_lda(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B09Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B09Cu,3u,0x01u,0xB09Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B09Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B09Fu,3u,0x00u,0xB0A2u);
      sc_v11_op_lda(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0A2u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0A2u,1u,0x38u,0xB0A3u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0A3u:
    if(m==0u&&x==0u&&e==0u){ /* ED CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0A3u,3u,0x01u,0xB0A6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01CFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0A6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0A6u,3u,0x01u,0xB0A9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0A9u:
    if(m==0u&&x==0u&&e==0u){ /* AD BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0A9u,3u,0x01u,0xB0ACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0ACu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0ACu,1u,0x18u,0xB0ADu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0ADu:
    if(m==0u&&x==0u&&e==0u){ /* 69 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0ADu,3u,0x00u,0xB0B0u);
      sc_v11_op_adc(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0B0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0B0u,3u,0x01u,0xB0B3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0B3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B7 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0B3u,3u,0xB0u,0xB0B6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB0B5u))return 0;c->pc=0xB0B7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0B6u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0B6u,1u,0x60u,0xB0B7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0B6u,1u,0x60u,0xB0B7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0B6u,1u,0x60u,0xB0B7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0B6u,1u,0x60u,0xB0B7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0B7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0B7u,2u,0x30u,0xB0B9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0B9u:
    if(m==0u&&x==0u&&e==0u){ /* AD BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0B9u,3u,0x01u,0xB0BCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0BCu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0BCu,1u,0x3Au,0xB0BDu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0BDu:
    if(m==0u&&x==0u&&e==0u){ /* 8D D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0BDu,3u,0x01u,0xB0C0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0C0u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C0u,1u,0xDAu,0xB0C1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C0u,1u,0xDAu,0xB0C1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0C1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 72 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C1u,3u,0xC7u,0xB0C4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB0C3u))return 0;c->pc=0xC772u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 72 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C1u,3u,0xC7u,0xB0C4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB0C3u))return 0;c->pc=0xC772u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0C4u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C4u,1u,0xFAu,0xB0C5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C4u,1u,0xFAu,0xB0C5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C4u,1u,0xFAu,0xB0C5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C4u,1u,0xFAu,0xB0C5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0C5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C5u,3u,0x01u,0xB0C8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C5u,3u,0x01u,0xB0C8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C5u,3u,0x01u,0xB0C8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C5u,3u,0x01u,0xB0C8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0C8u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 30 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C8u,4u,0x7Eu,0xB0CCu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3040u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 40 30 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C8u,4u,0x7Eu,0xB0CCu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3040u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9F 40 30 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C8u,4u,0x7Eu,0xB0CCu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E3040u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 40 30 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0C8u,4u,0x7Eu,0xB0CCu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E3040u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0CCu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0CCu,2u,0xD7u,0xB0CEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0CCu,2u,0xD7u,0xB0CEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0CCu,2u,0xD7u,0xB0CEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0CCu,2u,0xD7u,0xB0CEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0CEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0CEu,3u,0x00u,0xB0D1u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0CEu,3u,0x00u,0xB0D1u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0CEu,2u,0x02u,0xB0D0u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0CEu,2u,0x02u,0xB0D0u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0D1u:
    if(m==0u&&x==0u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0D1u,2u,0x07u,0xB0D3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB0DAu;}
      if(c->pc!=0xB0D3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB0D3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0D1u,2u,0x07u,0xB0D3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB0DAu;}
      if(c->pc!=0xB0D3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB0D3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0D3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 41 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0D3u,3u,0x01u,0xB0D6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0141u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 41 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0D3u,3u,0x01u,0xB0D6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0141u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0D6u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 38 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0D6u,4u,0x7Eu,0xB0DAu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 40 38 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0D6u,4u,0x7Eu,0xB0DAu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0DAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0DAu,3u,0x01u,0xB0DDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0DAu,3u,0x01u,0xB0DDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0DDu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0DDu,1u,0x0Au,0xB0DEu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0DDu,1u,0x0Au,0xB0DEu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0DEu:
    if(m==0u&&x==0u&&e==0u){ /* 10 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0DEu,2u,0x32u,0xB0E0u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB112u;}
      if(c->pc!=0xB0E0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB0E0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 10 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0DEu,2u,0x32u,0xB0E0u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB112u;}
      if(c->pc!=0xB0E0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB0E0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0E0u:
    if(m==0u&&x==0u&&e==0u){ /* AD D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0E0u,3u,0x01u,0xB0E3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0E0u,3u,0x01u,0xB0E3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0E3u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0E3u,1u,0x48u,0xB0E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0E3u,1u,0x48u,0xB0E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0E4u:
    if(m==0u&&x==0u&&e==0u){ /* AD D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0E4u,3u,0x01u,0xB0E7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0E4u,3u,0x01u,0xB0E7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0E7u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0E7u,1u,0x48u,0xB0E8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0E7u,1u,0x48u,0xB0E8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0E8u:
    if(m==0u&&x==0u&&e==0u){ /* CE D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0E8u,3u,0x01u,0xB0EBu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D3u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CE D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0E8u,3u,0x01u,0xB0EBu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D3u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0EBu:
    if(m==0u&&x==0u&&e==0u){ /* CE D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0EBu,3u,0x01u,0xB0EEu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D5u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CE D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0EBu,3u,0x01u,0xB0EEu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D5u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0EEu:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0EEu,1u,0xDAu,0xB0EFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0EEu,1u,0xDAu,0xB0EFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0EFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 72 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0EFu,3u,0xC7u,0xB0F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB0F1u))return 0;c->pc=0xC772u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 72 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0EFu,3u,0xC7u,0xB0F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB0F1u))return 0;c->pc=0xC772u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0F2u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F2u,1u,0xFAu,0xB0F3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F2u,1u,0xFAu,0xB0F3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F2u,1u,0xFAu,0xB0F3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F2u,1u,0xFAu,0xB0F3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0F3u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F3u,1u,0x68u,0xB0F4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F3u,1u,0x68u,0xB0F4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F3u,1u,0x68u,0xB0F4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F3u,1u,0x68u,0xB0F4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0F4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F4u,3u,0x01u,0xB0F7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F4u,3u,0x01u,0xB0F7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F4u,3u,0x01u,0xB0F7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01D5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F4u,3u,0x01u,0xB0F7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01D5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0F7u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F7u,1u,0x68u,0xB0F8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F7u,1u,0x68u,0xB0F8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F7u,1u,0x68u,0xB0F8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F7u,1u,0x68u,0xB0F8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0F8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F8u,3u,0x01u,0xB0FBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F8u,3u,0x01u,0xB0FBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F8u,3u,0x01u,0xB0FBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01D3u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0F8u,3u,0x01u,0xB0FBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01D3u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0FBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0FBu,3u,0x01u,0xB0FEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0FBu,3u,0x01u,0xB0FEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0FBu,3u,0x01u,0xB0FEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0FBu,3u,0x01u,0xB0FEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B0FEu:
    if(m==0u&&x==0u&&e==0u){ /* 30 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0FEu,2u,0x09u,0xB100u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB109u;}
      if(c->pc!=0xB100u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB100u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0FEu,2u,0x09u,0xB100u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB109u;}
      if(c->pc!=0xB100u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB100u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 30 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0FEu,2u,0x09u,0xB100u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB109u;}
      if(c->pc!=0xB100u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB100u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B0FEu,2u,0x09u,0xB100u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB109u;}
      if(c->pc!=0xB100u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB100u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B100u:
    if(m==0u&&x==0u&&e==0u){ /* A9 76 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B100u,3u,0x13u,0xB103u);
      sc_v11_op_lda(r,0x1376u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 76 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B100u,3u,0x13u,0xB103u);
      sc_v11_op_lda(r,0x1376u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 76 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B100u,2u,0x76u,0xB102u);
      sc_v11_op_lda(r,0x0076u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 76 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B100u,2u,0x76u,0xB102u);
      sc_v11_op_lda(r,0x0076u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B103u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B103u,4u,0x7Eu,0xB107u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B103u,4u,0x7Eu,0xB107u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B107u:
    if(m==0u&&x==0u&&e==0u){ /* 80 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B107u,2u,0x10u,0xB109u);
      if(1){c->pc=0xB119u;}
      if(c->pc!=0xB109u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB109u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B107u,2u,0x10u,0xB109u);
      if(1){c->pc=0xB119u;}
      if(c->pc!=0xB109u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB109u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B109u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B109u,3u,0x03u,0xB10Cu);
      sc_v11_op_lda(r,0x0300u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B109u,3u,0x03u,0xB10Cu);
      sc_v11_op_lda(r,0x0300u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B109u,2u,0x00u,0xB10Bu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B109u,2u,0x00u,0xB10Bu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B10Bu:
    if(m==1u&&x==0u&&e==0u){ /* 03 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B10Bu,2u,0x9Fu,0xB10Du);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x9Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B10Bu,2u,0x9Fu,0xB10Du);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x9Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B10Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B10Cu,4u,0x7Eu,0xB110u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B10Cu,4u,0x7Eu,0xB110u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B10Du:
    if(m==1u&&x==0u&&e==0u){ /* 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B10Du,1u,0x40u,0xB10Eu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B10Du,1u,0x40u,0xB10Eu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B110u:
    if(m==0u&&x==0u&&e==0u){ /* 80 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B110u,2u,0x07u,0xB112u);
      if(1){c->pc=0xB119u;}
      if(c->pc!=0xB112u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB112u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B110u,2u,0x07u,0xB112u);
      if(1){c->pc=0xB119u;}
      if(c->pc!=0xB112u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB112u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B112u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B112u,3u,0x01u,0xB115u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 3D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B112u,3u,0x01u,0xB115u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B115u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B115u,4u,0x7Eu,0xB119u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B115u,4u,0x7Eu,0xB119u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B119u:
    if(m==0u&&x==0u&&e==0u){ /* EE D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B119u,3u,0x01u,0xB11Cu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D5u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B119u,3u,0x01u,0xB11Cu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D5u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B11Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B11Cu,1u,0x8Au,0xB11Du);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B11Cu,1u,0x8Au,0xB11Du);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B11Du:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B11Du,1u,0x18u,0xB11Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B11Du,1u,0x18u,0xB11Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B11Eu:
    if(m==0u&&x==0u&&e==0u){ /* 69 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B11Eu,3u,0x00u,0xB121u);
      sc_v11_op_adc(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B11Eu,3u,0x00u,0xB121u);
      sc_v11_op_adc(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B121u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B121u,1u,0xAAu,0xB122u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B121u,1u,0xAAu,0xB122u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B122u:
    if(m==0u&&x==0u&&e==0u){ /* CE CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B122u,3u,0x01u,0xB125u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01CFu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CE CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B122u,3u,0x01u,0xB125u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01CFu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B125u:
    if(m==0u&&x==0u&&e==0u){ /* D0 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B125u,2u,0x99u,0xB127u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB0C0u;}
      if(c->pc!=0xB127u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB127u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B125u,2u,0x99u,0xB127u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB0C0u;}
      if(c->pc!=0xB127u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB127u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B127u:
    if(m==0u&&x==0u&&e==0u){ /* AD D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B127u,3u,0x01u,0xB12Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B127u,3u,0x01u,0xB12Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B12Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B12Au,2u,0x11u,0xB12Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB13Du;}
      if(c->pc!=0xB12Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB12Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B12Au,2u,0x11u,0xB12Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB13Du;}
      if(c->pc!=0xB12Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB12Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B12Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B12Cu,3u,0x01u,0xB12Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B12Cu,3u,0x01u,0xB12Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B12Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B12Fu,3u,0x01u,0xB132u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B12Fu,3u,0x01u,0xB132u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B132u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B132u,1u,0x8Au,0xB133u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B132u,1u,0x8Au,0xB133u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B133u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B133u,1u,0x38u,0xB134u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B133u,1u,0x38u,0xB134u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B134u:
    if(m==0u&&x==0u&&e==0u){ /* E9 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B134u,3u,0x00u,0xB137u);
      sc_v11_op_sbc(r,0x0040u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B134u,3u,0x00u,0xB137u);
      sc_v11_op_sbc(r,0x0040u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B137u:
    if(m==0u&&x==0u&&e==0u){ /* 29 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B137u,3u,0x00u,0xB13Au);
      sc_v11_op_and(r,0x003Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B137u,3u,0x00u,0xB13Au);
      sc_v11_op_and(r,0x003Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B13Au:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Au,1u,0xAAu,0xB13Bu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Au,1u,0xAAu,0xB13Bu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B13Bu:
    if(m==0u&&x==0u&&e==0u){ /* 80 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Bu,2u,0x83u,0xB13Du);
      if(1){c->pc=0xB0C0u;}
      if(c->pc!=0xB13Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB13Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Bu,2u,0x83u,0xB13Du);
      if(1){c->pc=0xB0C0u;}
      if(c->pc!=0xB13Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB13Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B13Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Du,1u,0x60u,0xB13Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Du,1u,0x60u,0xB13Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B13Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Eu,1u,0x60u,0xB13Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Eu,1u,0x60u,0xB13Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Eu,1u,0x60u,0xB13Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Eu,1u,0x60u,0xB13Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B13Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 43 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Fu,3u,0xB1u,0xB142u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB141u))return 0;c->pc=0xB143u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 43 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Fu,3u,0xB1u,0xB142u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB141u))return 0;c->pc=0xB143u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 43 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Fu,3u,0xB1u,0xB142u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB141u))return 0;c->pc=0xB143u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 43 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B13Fu,3u,0xB1u,0xB142u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB141u))return 0;c->pc=0xB143u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B142u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B142u,1u,0x6Bu,0xB143u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B142u,1u,0x6Bu,0xB143u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B142u,1u,0x6Bu,0xB143u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B142u,1u,0x6Bu,0xB143u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B143u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B143u,2u,0x30u,0xB145u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B143u,2u,0x30u,0xB145u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B143u,2u,0x30u,0xB145u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B143u,2u,0x30u,0xB145u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B145u:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B145u,3u,0x01u,0xB148u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B148u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B148u,1u,0x4Au,0xB149u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B149u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B149u,1u,0x4Au,0xB14Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B14Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B14Au,3u,0xFFu,0xB14Du);
      sc_v11_op_and(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B14Du:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B14Du,1u,0xAAu,0xB14Eu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B14Eu:
    if(m==0u&&x==0u&&e==0u){ /* A0 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B14Eu,3u,0x00u,0xB151u);
      sc_v11_op_ldy(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B151u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B151u,3u,0x23u,0xB154u);
      sc_v11_op_lda(r,0x2300u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B154u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B154u,4u,0x7Eu,0xB158u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B158u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B158u,1u,0x8Au,0xB159u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B159u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B159u,1u,0x18u,0xB15Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B15Au:
    if(m==0u&&x==0u&&e==0u){ /* 69 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B15Au,3u,0x00u,0xB15Du);
      sc_v11_op_adc(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B15Du:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B15Du,1u,0xAAu,0xB15Eu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B15Eu:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B15Eu,1u,0x88u,0xB15Fu);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B15Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B15Fu,2u,0xF0u,0xB161u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB151u;}
      if(c->pc!=0xB161u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB161u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B161u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B161u,1u,0x60u,0xB162u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B162u:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B162u,3u,0xB1u,0xB165u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB164u))return 0;c->pc=0xB166u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B165u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B165u,1u,0x6Bu,0xB166u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B165u,1u,0x6Bu,0xB166u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B165u,1u,0x6Bu,0xB166u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B165u,1u,0x6Bu,0xB166u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B166u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B166u,2u,0x30u,0xB168u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B166u,2u,0x30u,0xB168u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B166u,2u,0x30u,0xB168u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B168u:
    if(m==0u&&x==0u&&e==0u){ /* AD BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B168u,3u,0x01u,0xB16Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B16Bu:
    if(m==0u&&x==0u&&e==0u){ /* 10 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B16Bu,2u,0x0Fu,0xB16Du);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB17Cu;}
      if(c->pc!=0xB16Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB16Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B16Du:
    if(m==0u&&x==0u&&e==0u){ /* CD C7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B16Du,3u,0x01u,0xB170u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B170u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B170u,2u,0x0Au,0xB172u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB17Cu;}
      if(c->pc!=0xB172u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB172u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B172u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B172u,3u,0x01u,0xB175u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B175u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FD FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B175u,3u,0xFFu,0xB178u);
      sc_v11_op_and(r,0xFFFDu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B178u:
    if(m==0u&&x==0u&&e==0u){ /* 8D C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B178u,3u,0x01u,0xB17Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B17Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B17Bu,1u,0x60u,0xB17Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B17Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B17Cu,3u,0x01u,0xB17Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B17Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B17Fu,1u,0x4Au,0xB180u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B180u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B180u,1u,0x4Au,0xB181u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B181u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B181u,3u,0xFFu,0xB184u);
      sc_v11_op_and(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B184u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B184u,1u,0x18u,0xB185u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B185u:
    if(m==0u&&x==0u&&e==0u){ /* 69 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B185u,3u,0x00u,0xB188u);
      sc_v11_op_adc(r,0x003Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B188u:
    if(m==0u&&x==0u&&e==0u){ /* 29 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B188u,3u,0x00u,0xB18Bu);
      sc_v11_op_and(r,0x003Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B18Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D CD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B18Bu,3u,0x01u,0xB18Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B18Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B18Eu,3u,0x01u,0xB191u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0137u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B191u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B191u,1u,0x38u,0xB192u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B192u:
    if(m==0u&&x==0u&&e==0u){ /* E9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B192u,3u,0x00u,0xB195u);
      sc_v11_op_sbc(r,0x0008u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B195u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B195u,3u,0x00u,0xB198u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B198u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B198u,1u,0x4Au,0xB199u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B199u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B199u,1u,0x4Au,0xB19Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B19Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B19Au,1u,0x4Au,0xB19Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B19Bu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B19Bu,1u,0x48u,0xB19Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B19Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B19Cu,2u,0x20u,0xB19Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B19Eu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B19Eu,1u,0x48u,0xB19Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B19Fu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B19Fu,2u,0xB3u,0xB1A1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1A1u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1A1u,2u,0x7Fu,0xB1A3u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1A3u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1A3u,2u,0xB1u,0xB1A5u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1A5u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1A5u,1u,0x68u,0xB1A6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1A6u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1A6u,4u,0x00u,0xB1AAu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1AAu:
    if(m==1u&&x==0u&&e==0u){ /* A9 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1AAu,2u,0x40u,0xB1ACu);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1ACu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1ACu,4u,0x00u,0xB1B0u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1B0u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1B0u,1u,0x48u,0xB1B1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1B1u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1B1u,1u,0x68u,0xB1B2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1B2u:
    if(m==1u&&x==0u&&e==0u){ /* EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1B2u,1u,0xEAu,0xB1B3u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1B3u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1B3u,4u,0x00u,0xB1B7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1B7u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1B7u,1u,0xEBu,0xB1B8u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1B8u:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1B8u,4u,0x00u,0xB1BCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1BCu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1BCu,1u,0x48u,0xB1BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1BDu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1BDu,2u,0xB3u,0xB1BFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1BFu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1BFu,2u,0xB1u,0xB1C1u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1C1u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1C1u,1u,0x68u,0xB1C2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1C2u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1C2u,2u,0x20u,0xB1C4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1C4u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1C4u,1u,0x18u,0xB1C5u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1C5u:
    if(m==0u&&x==0u&&e==0u){ /* 6D CD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1C5u,3u,0x01u,0xB1C8u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01CDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1C8u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1C8u,1u,0xAAu,0xB1C9u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1C9u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1C9u,1u,0x68u,0xB1CAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1CAu:
    if(m==0u&&x==0u&&e==0u){ /* 49 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1CAu,3u,0xFFu,0xB1CDu);
      sc_v11_op_eor(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1CDu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1CDu,1u,0x18u,0xB1CEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1CEu:
    if(m==0u&&x==0u&&e==0u){ /* 69 21 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1CEu,3u,0x00u,0xB1D1u);
      sc_v11_op_adc(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1D1u:
    if(m==0u&&x==0u&&e==0u){ /* C9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1D1u,3u,0x00u,0xB1D4u);
      sc_v11_op_compare(r,c->a,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1D4u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1D4u,2u,0x03u,0xB1D6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB1D9u;}
      if(c->pc!=0xB1D6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB1D6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1D6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1D6u,3u,0x00u,0xB1D9u);
      sc_v11_op_lda(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1D9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1D9u,3u,0x01u,0xB1DCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1DCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1DCu,3u,0x00u,0xB1DFu);
      sc_v11_op_lda(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1DFu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1DFu,1u,0x38u,0xB1E0u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1E0u:
    if(m==0u&&x==0u&&e==0u){ /* ED CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1E0u,3u,0x01u,0xB1E3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01CFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1E3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1E3u,3u,0x01u,0xB1E6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1E6u:
    if(m==0u&&x==0u&&e==0u){ /* AD BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1E6u,3u,0x01u,0xB1E9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1E9u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1E9u,1u,0x3Au,0xB1EAu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1EAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1EAu,3u,0x01u,0xB1EDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1EDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 B7 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1EDu,3u,0xB0u,0xB1F0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB1EFu))return 0;c->pc=0xB0B7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1F0u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F0u,1u,0x60u,0xB1F1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F0u,1u,0x60u,0xB1F1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F0u,1u,0x60u,0xB1F1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F0u,1u,0x60u,0xB1F1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1F1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F1u,1u,0x60u,0xB1F2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F1u,1u,0x60u,0xB1F2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F1u,1u,0x60u,0xB1F2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F1u,1u,0x60u,0xB1F2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1F2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F6 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F2u,3u,0xB1u,0xB1F5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB1F4u))return 0;c->pc=0xB1F6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1F5u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F5u,1u,0x6Bu,0xB1F6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F5u,1u,0x6Bu,0xB1F6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F5u,1u,0x6Bu,0xB1F6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F5u,1u,0x6Bu,0xB1F6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1F6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F6u,2u,0x30u,0xB1F8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F6u,2u,0x30u,0xB1F8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F6u,2u,0x30u,0xB1F8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1F8u:
    if(m==0u&&x==0u&&e==0u){ /* AD BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1F8u,3u,0x01u,0xB1FBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1FBu:
    if(m==0u&&x==0u&&e==0u){ /* 30 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1FBu,2u,0x0Fu,0xB1FDu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB20Cu;}
      if(c->pc!=0xB1FDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB1FDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B1FDu:
    if(m==0u&&x==0u&&e==0u){ /* CD C9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B1FDu,3u,0x01u,0xB200u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B200u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B200u,2u,0x0Au,0xB202u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB20Cu;}
      if(c->pc!=0xB202u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB202u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B202u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B202u,3u,0x01u,0xB205u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B205u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FB FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B205u,3u,0xFFu,0xB208u);
      sc_v11_op_and(r,0xFFFBu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B208u:
    if(m==0u&&x==0u&&e==0u){ /* 8D C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B208u,3u,0x01u,0xB20Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B20Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B20Bu,1u,0x60u,0xB20Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B20Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B20Cu,3u,0x01u,0xB20Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B20Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B20Fu,1u,0x4Au,0xB210u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B210u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B210u,1u,0x4Au,0xB211u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B211u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B211u,3u,0xFFu,0xB214u);
      sc_v11_op_and(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B214u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B214u,1u,0x48u,0xB215u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B215u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B215u,3u,0x01u,0xB218u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B218u:
    if(m==0u&&x==0u&&e==0u){ /* AD 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B218u,3u,0x01u,0xB21Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0137u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B21Bu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B21Bu,1u,0x4Au,0xB21Cu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B21Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B21Cu,1u,0x4Au,0xB21Du);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B21Du:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B21Du,1u,0x4Au,0xB21Eu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B21Eu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B21Eu,1u,0x18u,0xB21Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B21Fu:
    if(m==0u&&x==0u&&e==0u){ /* 69 1C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B21Fu,3u,0x00u,0xB222u);
      sc_v11_op_adc(r,0x001Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B222u:
    if(m==0u&&x==0u&&e==0u){ /* C9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B222u,3u,0x00u,0xB225u);
      sc_v11_op_compare(r,c->a,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B225u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B225u,2u,0x03u,0xB227u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB22Au;}
      if(c->pc!=0xB227u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB227u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B227u:
    if(m==0u&&x==0u&&e==0u){ /* E9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B227u,3u,0x00u,0xB22Au);
      sc_v11_op_sbc(r,0x0020u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B22Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B22Au,2u,0x20u,0xB22Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B22Cu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B22Cu,1u,0x48u,0xB22Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B22Du:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B22Du,2u,0xB3u,0xB22Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B22Fu:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B22Fu,2u,0x7Fu,0xB231u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B231u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B231u,2u,0xB1u,0xB233u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B233u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B233u,1u,0x68u,0xB234u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B234u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B234u,4u,0x00u,0xB238u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B238u:
    if(m==1u&&x==0u&&e==0u){ /* A9 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B238u,2u,0x40u,0xB23Au);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B23Au:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B23Au,4u,0x00u,0xB23Eu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B23Eu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B23Eu,1u,0x48u,0xB23Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B23Fu:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B23Fu,1u,0x68u,0xB240u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B240u:
    if(m==1u&&x==0u&&e==0u){ /* EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B240u,1u,0xEAu,0xB241u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B241u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B241u,4u,0x00u,0xB245u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B245u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B245u,1u,0xEBu,0xB246u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B246u:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B246u,4u,0x00u,0xB24Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B24Au:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B24Au,1u,0x48u,0xB24Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B24Bu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B24Bu,2u,0xB3u,0xB24Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B24Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B24Du,2u,0xB1u,0xB24Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B24Fu:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B24Fu,1u,0x68u,0xB250u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B250u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B250u,2u,0x20u,0xB252u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B252u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B252u,1u,0x18u,0xB253u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B253u:
    if(m==0u&&x==0u&&e==0u){ /* 6D CD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B253u,3u,0x01u,0xB256u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01CDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B256u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B256u,1u,0xAAu,0xB257u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B257u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B257u,1u,0x68u,0xB258u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B258u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B258u,1u,0x4Au,0xB259u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B259u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B259u,3u,0x01u,0xB25Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B25Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B25Cu,3u,0x00u,0xB25Fu);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B25Fu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B25Fu,1u,0x38u,0xB260u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B260u:
    if(m==0u&&x==0u&&e==0u){ /* ED D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B260u,3u,0x01u,0xB263u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D1u)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B263u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B263u,3u,0x01u,0xB266u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B266u:
    if(m==0u&&x==0u&&e==0u){ /* AD BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B266u,3u,0x01u,0xB269u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B269u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B269u,1u,0x18u,0xB26Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B26Au:
    if(m==0u&&x==0u&&e==0u){ /* 69 1C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B26Au,3u,0x00u,0xB26Du);
      sc_v11_op_adc(r,0x001Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B26Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B26Du,3u,0x01u,0xB270u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B270u:
    if(m==0u&&x==0u&&e==0u){ /* 20 74 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B270u,3u,0xB2u,0xB273u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB272u))return 0;c->pc=0xB274u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B273u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B273u,1u,0x60u,0xB274u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B273u,1u,0x60u,0xB274u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B273u,1u,0x60u,0xB274u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B273u,1u,0x60u,0xB274u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B27Cu:

    if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B27Cu,1u,0xDAu,0xB27Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B27Du:

    if(m==0u&&x==1u&&e==0u){ /* 20 72 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B27Du,3u,0xC7u,0xB280u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB27Fu))return 0;c->pc=0xC772u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B280u:
    if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B280u,1u,0xFAu,0xB281u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B280u,1u,0xFAu,0xB281u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B280u,1u,0xFAu,0xB281u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B281u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B281u,3u,0x01u,0xB284u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B281u,3u,0x01u,0xB284u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B281u,3u,0x01u,0xB284u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B284u:
    if(m==0u&&x==1u&&e==0u){ /* 9F 40 30 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B284u,4u,0x7Eu,0xB288u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3040u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9F 40 30 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B284u,4u,0x7Eu,0xB288u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E3040u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 40 30 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B284u,4u,0x7Eu,0xB288u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E3040u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B288u:
    if(m==0u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B288u,2u,0xD7u,0xB28Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B288u,2u,0xD7u,0xB28Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B288u,2u,0xD7u,0xB28Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xD7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B28Au:
    if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B28Au,3u,0x00u,0xB28Du);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B28Au,2u,0x02u,0xB28Cu);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B28Au,2u,0x02u,0xB28Cu);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B28Du:
    if(m==0u&&x==1u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B28Du,2u,0x07u,0xB28Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB296u;}
      if(c->pc!=0xB28Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB28Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B28Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 41 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B28Fu,3u,0x01u,0xB292u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0141u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 41 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B28Fu,3u,0x01u,0xB292u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0141u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B292u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 38 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B292u,4u,0x7Eu,0xB296u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 40 38 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B292u,4u,0x7Eu,0xB296u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B296u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B296u,3u,0x01u,0xB299u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B299u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B299u,1u,0x0Au,0xB29Au);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B29Au:
    if(m==0u&&x==1u&&e==0u){ /* 10 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B29Au,2u,0x32u,0xB29Cu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB2CEu;}
      if(c->pc!=0xB29Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB29Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B29Cu:
    if(m==0u&&x==1u&&e==0u){ /* AD D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B29Cu,3u,0x01u,0xB29Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B29Fu:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B29Fu,1u,0x48u,0xB2A0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2A0u:
    if(m==0u&&x==1u&&e==0u){ /* AD D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2A0u,3u,0x01u,0xB2A3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2A3u:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2A3u,1u,0x48u,0xB2A4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2A4u:
    if(m==0u&&x==1u&&e==0u){ /* CE D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2A4u,3u,0x01u,0xB2A7u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D3u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2A7u:
    if(m==0u&&x==1u&&e==0u){ /* CE D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2A7u,3u,0x01u,0xB2AAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D5u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2AAu:
    if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2AAu,1u,0xDAu,0xB2ABu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2ABu:
    if(m==0u&&x==1u&&e==0u){ /* 20 72 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2ABu,3u,0xC7u,0xB2AEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB2ADu))return 0;c->pc=0xC772u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2AEu:
    if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2AEu,1u,0xFAu,0xB2AFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2AEu,1u,0xFAu,0xB2AFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2AEu,1u,0xFAu,0xB2AFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2AFu:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2AFu,1u,0x68u,0xB2B0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2AFu,1u,0x68u,0xB2B0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2AFu,1u,0x68u,0xB2B0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2B0u:
    if(m==0u&&x==1u&&e==0u){ /* 8D D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B0u,3u,0x01u,0xB2B3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B0u,3u,0x01u,0xB2B3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01D5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B0u,3u,0x01u,0xB2B3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01D5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2B3u:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B3u,1u,0x68u,0xB2B4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B3u,1u,0x68u,0xB2B4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B3u,1u,0x68u,0xB2B4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2B4u:
    if(m==0u&&x==1u&&e==0u){ /* 8D D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B4u,3u,0x01u,0xB2B7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B4u,3u,0x01u,0xB2B7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01D3u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B4u,3u,0x01u,0xB2B7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01D3u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2B7u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B7u,3u,0x01u,0xB2BAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B7u,3u,0x01u,0xB2BAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2B7u,3u,0x01u,0xB2BAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x013Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2BAu:
    if(m==0u&&x==1u&&e==0u){ /* 30 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2BAu,2u,0x09u,0xB2BCu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB2C5u;}
      if(c->pc!=0xB2BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 30 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2BAu,2u,0x09u,0xB2BCu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB2C5u;}
      if(c->pc!=0xB2BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2BAu,2u,0x09u,0xB2BCu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB2C5u;}
      if(c->pc!=0xB2BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2BCu:
    if(m==0u&&x==1u&&e==0u){ /* A9 76 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2BCu,3u,0x13u,0xB2BFu);
      sc_v11_op_lda(r,0x1376u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 76 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2BCu,2u,0x76u,0xB2BEu);
      sc_v11_op_lda(r,0x0076u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 76 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2BCu,2u,0x76u,0xB2BEu);
      sc_v11_op_lda(r,0x0076u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2BFu:
    if(m==0u&&x==1u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2BFu,4u,0x7Eu,0xB2C3u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2C3u:
    if(m==0u&&x==1u&&e==0u){ /* 80 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2C3u,2u,0x10u,0xB2C5u);
      if(1){c->pc=0xB2D5u;}
      if(c->pc!=0xB2C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2C5u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2C5u,3u,0x03u,0xB2C8u);
      sc_v11_op_lda(r,0x0300u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2C5u,2u,0x00u,0xB2C7u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2C5u,2u,0x00u,0xB2C7u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2C7u:
    if(m==1u&&x==0u&&e==0u){ /* 03 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2C7u,2u,0x9Fu,0xB2C9u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x9Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2C7u,2u,0x9Fu,0xB2C9u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x9Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2C8u:
    if(m==0u&&x==1u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2C8u,4u,0x7Eu,0xB2CCu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2C9u:
    if(m==1u&&x==0u&&e==0u){ /* 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2C9u,1u,0x40u,0xB2CAu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2C9u,1u,0x40u,0xB2CAu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2CCu:
    if(m==0u&&x==1u&&e==0u){ /* 80 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2CCu,2u,0x07u,0xB2CEu);
      if(1){c->pc=0xB2D5u;}
      if(c->pc!=0xB2CEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2CEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2CEu:
    if(m==0u&&x==1u&&e==0u){ /* AD 3D 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2CEu,3u,0x01u,0xB2D1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x013Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2D1u:
    if(m==0u&&x==1u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2D1u,4u,0x7Eu,0xB2D5u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2D5u:
    if(m==0u&&x==1u&&e==0u){ /* EE D3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2D5u,3u,0x01u,0xB2D8u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D3u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2D8u:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2D8u,1u,0xE8u,0xB2D9u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2D9u:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2D9u,1u,0xE8u,0xB2DAu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2DAu:
    if(m==0u&&x==1u&&e==0u){ /* CE CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2DAu,3u,0x01u,0xB2DDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01CFu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2DDu:
    if(m==0u&&x==1u&&e==0u){ /* D0 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2DDu,2u,0x9Du,0xB2DFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB27Cu;}
      if(c->pc!=0xB2DFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2DFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2DFu:
    if(m==0u&&x==1u&&e==0u){ /* AD D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2DFu,3u,0x01u,0xB2E2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2E2u:
    if(m==0u&&x==1u&&e==0u){ /* F0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2E2u,2u,0x0Fu,0xB2E4u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2F3u;}
      if(c->pc!=0xB2E4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2E4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2E4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2E4u,3u,0x01u,0xB2E7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2E4u,3u,0x01u,0xB2E7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2E7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2E7u,3u,0x01u,0xB2EAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2E7u,3u,0x01u,0xB2EAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2EAu:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2EAu,1u,0x8Au,0xB2EBu);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2EAu,1u,0x8Au,0xB2EBu);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2EBu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2EBu,1u,0x38u,0xB2ECu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2EBu,1u,0x38u,0xB2ECu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2ECu:
    if(m==0u&&x==0u&&e==0u){ /* E9 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2ECu,3u,0x00u,0xB2EFu);
      sc_v11_op_sbc(r,0x0040u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2ECu,3u,0x00u,0xB2EFu);
      sc_v11_op_sbc(r,0x0040u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2EFu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2EFu,1u,0xAAu,0xB2F0u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2EFu,1u,0xAAu,0xB2F0u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2F0u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 7C B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F0u,3u,0xB2u,0xB2F3u);
      c->pc=0xB27Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 7C B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F0u,3u,0xB2u,0xB2F3u);
      c->pc=0xB27Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2F3u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F3u,1u,0x60u,0xB2F4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2F4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F4u,1u,0x60u,0xB2F5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F4u,1u,0x60u,0xB2F5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F4u,1u,0x60u,0xB2F5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F4u,1u,0x60u,0xB2F5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2F5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F9 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F5u,3u,0xB2u,0xB2F8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB2F7u))return 0;c->pc=0xB2F9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2F8u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F8u,1u,0x6Bu,0xB2F9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F8u,1u,0x6Bu,0xB2F9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F8u,1u,0x6Bu,0xB2F9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F8u,1u,0x6Bu,0xB2F9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2F9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F9u,2u,0x20u,0xB2FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F9u,2u,0x20u,0xB2FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2F9u,2u,0x20u,0xB2FBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2FBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2FBu,2u,0x10u,0xB2FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2FBu,2u,0x10u,0xB2FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B2FDu:
    if(m==0u&&x==0u&&e==0u){ /* AD BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B2FDu,3u,0x01u,0xB300u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B300u:
    if(m==0u&&x==0u&&e==0u){ /* CD CB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B300u,3u,0x01u,0xB303u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01CBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B303u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B303u,2u,0x0Au,0xB305u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB30Fu;}
      if(c->pc!=0xB305u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB305u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B305u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B305u,3u,0x01u,0xB308u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B308u:
    if(m==0u&&x==0u&&e==0u){ /* 29 F7 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B308u,3u,0xFFu,0xB30Bu);
      sc_v11_op_and(r,0xFFF7u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B30Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B30Bu,3u,0x01u,0xB30Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B30Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B30Eu,1u,0x60u,0xB30Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B30Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B30Fu,3u,0x01u,0xB312u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B312u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B312u,1u,0x4Au,0xB313u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B313u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B313u,1u,0x4Au,0xB314u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B314u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B314u,3u,0xFFu,0xB317u);
      sc_v11_op_and(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B317u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B317u,1u,0x48u,0xB318u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B318u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B318u,3u,0x01u,0xB31Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B31Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B31Bu,3u,0x01u,0xB31Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0137u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B31Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B31Eu,1u,0x4Au,0xB31Fu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B31Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B31Fu,1u,0x4Au,0xB320u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B320u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B320u,1u,0x4Au,0xB321u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B321u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B321u,1u,0x18u,0xB322u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B322u:
    if(m==0u&&x==0u&&e==0u){ /* 69 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B322u,3u,0x00u,0xB325u);
      sc_v11_op_adc(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B325u:
    if(m==0u&&x==0u&&e==0u){ /* C9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B325u,3u,0x00u,0xB328u);
      sc_v11_op_compare(r,c->a,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B328u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B328u,2u,0x03u,0xB32Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB32Du;}
      if(c->pc!=0xB32Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB32Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B32Au:
    if(m==0u&&x==0u&&e==0u){ /* E9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B32Au,3u,0x00u,0xB32Du);
      sc_v11_op_sbc(r,0x0020u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B32Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B32Du,2u,0x20u,0xB32Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B32Fu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B32Fu,1u,0x48u,0xB330u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B330u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B330u,2u,0xB3u,0xB332u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B332u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B332u,2u,0x7Fu,0xB334u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B334u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B334u,2u,0xB1u,0xB336u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B336u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B336u,1u,0x68u,0xB337u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B337u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B337u,4u,0x00u,0xB33Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B33Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B33Bu,2u,0x40u,0xB33Du);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B33Du:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B33Du,4u,0x00u,0xB341u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B341u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B341u,1u,0x48u,0xB342u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B342u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B342u,1u,0x68u,0xB343u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B343u:
    if(m==1u&&x==0u&&e==0u){ /* EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B343u,1u,0xEAu,0xB344u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B344u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B344u,4u,0x00u,0xB348u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B348u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B348u,1u,0xEBu,0xB349u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B349u:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B349u,4u,0x00u,0xB34Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B34Du:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B34Du,1u,0x48u,0xB34Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B34Eu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B34Eu,2u,0xB3u,0xB350u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B350u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B350u,2u,0xB1u,0xB352u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B352u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B352u,1u,0x68u,0xB353u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B353u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B353u,2u,0x20u,0xB355u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B355u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B355u,1u,0x18u,0xB356u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B356u:
    if(m==0u&&x==0u&&e==0u){ /* 6D CD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B356u,3u,0x01u,0xB359u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01CDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B359u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B359u,1u,0xAAu,0xB35Au);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B35Au:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B35Au,1u,0x68u,0xB35Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B35Bu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B35Bu,1u,0x4Au,0xB35Cu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B35Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B35Cu,3u,0x01u,0xB35Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B35Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B35Fu,3u,0x00u,0xB362u);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B362u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B362u,1u,0x38u,0xB363u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B363u:
    if(m==0u&&x==0u&&e==0u){ /* ED D1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B363u,3u,0x01u,0xB366u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D1u)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B366u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B366u,3u,0x01u,0xB369u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B369u:
    if(m==0u&&x==0u&&e==0u){ /* AD BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B369u,3u,0x01u,0xB36Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B36Cu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B36Cu,1u,0x3Au,0xB36Du);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B36Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B36Du,3u,0x01u,0xB370u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B370u:
    if(m==0u&&x==0u&&e==0u){ /* 20 74 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B370u,3u,0xB2u,0xB373u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB372u))return 0;c->pc=0xB274u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B373u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B373u,1u,0x60u,0xB374u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B373u,1u,0x60u,0xB374u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B373u,1u,0x60u,0xB374u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B373u,1u,0x60u,0xB374u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B374u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B374u,1u,0x60u,0xB375u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B374u,1u,0x60u,0xB375u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B374u,1u,0x60u,0xB375u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B374u,1u,0x60u,0xB375u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B375u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B375u,2u,0x30u,0xB377u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B375u,2u,0x30u,0xB377u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B375u,2u,0x30u,0xB377u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B37Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B37Cu,1u,0x60u,0xB37Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B395u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B395u,3u,0x00u,0xB398u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B398u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B398u,1u,0x38u,0xB399u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B399u:
    if(m==0u&&x==0u&&e==0u){ /* ED BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B399u,3u,0x01u,0xB39Cu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B39Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B39Cu,1u,0x0Au,0xB39Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B39Du:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B39Du,1u,0x0Au,0xB39Eu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B39Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B39Eu,1u,0x0Au,0xB39Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B39Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B39Fu,3u,0x01u,0xB3A2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3A2u:
    if(m==0u&&x==0u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3A2u,2u,0x12u,0xB3A4u);
      if(1){c->pc=0xB3B6u;}
      if(c->pc!=0xB3A4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3A4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3AEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3AEu,3u,0x00u,0xB3B1u);
      sc_v11_op_lda(r,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3B1u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3B1u,1u,0x38u,0xB3B2u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3B2u:
    if(m==0u&&x==0u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3B2u,2u,0x79u,0xB3B4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3B4u:
    if(m==0u&&x==0u&&e==0u){ /* 80 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3B4u,2u,0xE3u,0xB3B6u);
      if(1){c->pc=0xB399u;}
      if(c->pc!=0xB3B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3C2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3C2u,3u,0x00u,0xB3C5u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3C5u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3C5u,1u,0x38u,0xB3C6u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3C6u:
    if(m==0u&&x==0u&&e==0u){ /* ED BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3C6u,3u,0x01u,0xB3C9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3C9u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3C9u,1u,0x0Au,0xB3CAu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3CAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3CAu,1u,0x0Au,0xB3CBu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3CBu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3CBu,1u,0x0Au,0xB3CCu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3CCu:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3CCu,3u,0x01u,0xB3CFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3CFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3CFu,1u,0x60u,0xB3D0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3DAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3DAu,3u,0x00u,0xB3DDu);
      sc_v11_op_lda(r,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3DDu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3DDu,1u,0x38u,0xB3DEu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3DEu:
    if(m==0u&&x==0u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3DEu,2u,0x79u,0xB3E0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3E0u:
    if(m==0u&&x==0u&&e==0u){ /* 80 E4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E0u,2u,0xE4u,0xB3E2u);
      if(1){c->pc=0xB3C6u;}
      if(c->pc!=0xB3E2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3E2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3E3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 E7 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E3u,3u,0xB3u,0xB3E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB3E5u))return 0;c->pc=0xB3E7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E7 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E3u,3u,0xB3u,0xB3E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB3E5u))return 0;c->pc=0xB3E7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E7 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E3u,3u,0xB3u,0xB3E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB3E5u))return 0;c->pc=0xB3E7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E7 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E3u,3u,0xB3u,0xB3E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB3E5u))return 0;c->pc=0xB3E7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3E6u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E6u,1u,0x6Bu,0xB3E7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E6u,1u,0x6Bu,0xB3E7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E6u,1u,0x6Bu,0xB3E7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E6u,1u,0x6Bu,0xB3E7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3E7u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E7u,2u,0x20u,0xB3E9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E7u,2u,0x20u,0xB3E9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E7u,2u,0x20u,0xB3E9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3E9u:
    if(m==1u&&x==1u&&e==0u){ /* A5 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3E9u,2u,0x38u,0xB3EBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x38u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3EBu:
    if(m==1u&&x==1u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3EBu,2u,0x06u,0xB3EDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB3F3u;}
      if(c->pc!=0xB3EDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3EDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3EDu:
    if(m==1u&&x==0u&&e==0u){ /* 64 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3EDu,2u,0x38u,0xB3EFu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x38u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3EDu,2u,0x38u,0xB3EFu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x38u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3EFu:
    if(m==1u&&x==0u&&e==0u){ /* A9 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3EFu,2u,0xF1u,0xB3F1u);
      sc_v11_op_lda(r,0x00F1u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3EFu,2u,0xF1u,0xB3F1u);
      sc_v11_op_lda(r,0x00F1u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3F1u:
    if(m==1u&&x==0u&&e==0u){ /* 80 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3F1u,2u,0x04u,0xB3F3u);
      if(1){c->pc=0xB3F7u;}
      if(c->pc!=0xB3F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3F1u,2u,0x04u,0xB3F3u);
      if(1){c->pc=0xB3F7u;}
      if(c->pc!=0xB3F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3F3u:
    if(m==1u&&x==1u&&e==0u){ /* AD A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3F3u,3u,0x0Cu,0xB3F6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CA5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3F6u:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3F6u,1u,0x1Au,0xB3F7u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3F7u:
    if(m==1u&&x==1u&&e==0u){ /* 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3F7u,2u,0x03u,0xB3F9u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3F9u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3F9u,1u,0x60u,0xB3FAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3FAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3FAu,2u,0x30u,0xB3FCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3FAu,2u,0x30u,0xB3FCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3FCu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3FCu,3u,0x08u,0xB3FFu);
      sc_v11_op_ldx(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01B3FFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 4B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01B3FFu,3u,0x01u,0xB402u);
      sc_v11_op_lda(r,0x014Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
