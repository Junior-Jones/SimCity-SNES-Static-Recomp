/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00070(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01C002u:
    if(m==1u&&x==1u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C002u,2u,0x07u,0xC004u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC00Bu;}
      if(c->pc!=0xC004u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC004u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C004u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C004u,1u,0xE8u,0xC005u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C005u:
    if(m==1u&&x==1u&&e==0u){ /* E0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C005u,2u,0x04u,0xC007u);
      sc_v11_op_compare(r,c->x,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C007u:
    if(m==1u&&x==1u&&e==0u){ /* 90 F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C007u,2u,0xF6u,0xC009u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBFFFu;}
      if(c->pc!=0xC009u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC009u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C009u:
    if(m==1u&&x==1u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C009u,2u,0x05u,0xC00Bu);
      if(1){c->pc=0xC010u;}
      if(c->pc!=0xC00Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC00Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C00Bu:
    if(m==1u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C00Bu,2u,0x79u,0xC00Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C00Du:
    if(m==1u&&x==1u&&e==0u){ /* 9D F5 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C00Du,3u,0x03u,0xC010u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x03F5u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C010u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C010u,2u,0x20u,0xC012u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C012u:
    if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C012u,3u,0x00u,0xC015u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C015u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 03 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C015u,3u,0x01u,0xC018u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0103u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C018u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 05 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C018u,3u,0x01u,0xC01Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0105u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C01Bu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C01Bu,1u,0x60u,0xC01Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C026u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C026u,3u,0x00u,0xC029u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C026u,3u,0x00u,0xC029u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C029u:
    if(m==0u&&x==0u&&e==0u){ /* 85 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C029u,2u,0xE3u,0xC02Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C029u,2u,0xE3u,0xC02Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C02Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C02Bu,1u,0x60u,0xC02Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C02Bu,1u,0x60u,0xC02Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C02Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 33 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C02Fu,3u,0xC0u,0xC032u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC031u))return 0;c->pc=0xC033u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 33 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C02Fu,3u,0xC0u,0xC032u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC031u))return 0;c->pc=0xC033u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 33 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C02Fu,3u,0xC0u,0xC032u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC031u))return 0;c->pc=0xC033u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C032u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C032u,1u,0x6Bu,0xC033u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C032u,1u,0x6Bu,0xC033u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C032u,1u,0x6Bu,0xC033u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C032u,1u,0x6Bu,0xC033u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C033u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C033u,2u,0x30u,0xC035u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C033u,2u,0x30u,0xC035u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C033u,2u,0x30u,0xC035u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C03Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C03Du,1u,0x60u,0xC03Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C067u:
    if(m==0u&&x==0u&&e==0u){ /* E9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C067u,3u,0x00u,0xC06Au);
      sc_v11_op_sbc(r,0x0020u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0BBu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0BBu,2u,0x30u,0xC0BDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0BBu,2u,0x30u,0xC0BDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0BBu,2u,0x30u,0xC0BDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0DDu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0DDu,2u,0x30u,0xC0DFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0DDu,2u,0x30u,0xC0DFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0DDu,2u,0x30u,0xC0DFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0E3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0E3u,1u,0x60u,0xC0E4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0E9u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 8E C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0E9u,3u,0xC3u,0xC0ECu);
      c->pc=0xC38Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C141u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C141u,1u,0x48u,0xC142u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C142u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C142u,3u,0x08u,0xC145u);
      sc_v11_op_lda(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C145u:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C145u,3u,0x01u,0xC148u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C148u:
    if(m==0u&&x==0u&&e==0u){ /* 20 BA C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C148u,3u,0xC1u,0xC14Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC14Au))return 0;c->pc=0xC1BAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C14Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C14Bu,2u,0x30u,0xC14Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C14Bu,2u,0x30u,0xC14Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C14Bu,2u,0x30u,0xC14Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C14Bu,2u,0x30u,0xC14Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C14Du:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C14Du,1u,0x68u,0xC14Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C14Eu:
    if(m==0u&&x==0u&&e==0u){ /* AE 03 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C14Eu,3u,0x02u,0xC151u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0203u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C151u:
    if(m==0u&&x==0u&&e==0u){ /* F0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C151u,2u,0x02u,0xC153u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC155u;}
      if(c->pc!=0xC153u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC153u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C153u:
    if(m==0u&&x==0u&&e==0u){ /* 80 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C153u,2u,0x39u,0xC155u);
      if(1){c->pc=0xC18Eu;}
      if(c->pc!=0xC155u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC155u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C162u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C162u,2u,0x30u,0xC164u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C162u,2u,0x30u,0xC164u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C162u,2u,0x30u,0xC164u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C16Au:
    if(m==0u&&x==0u&&e==0u){ /* 80 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C16Au,2u,0x22u,0xC16Cu);
      if(1){c->pc=0xC18Eu;}
      if(c->pc!=0xC16Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC16Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C16Fu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C16Fu,1u,0x48u,0xC170u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C170u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C170u,3u,0x01u,0xC173u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C173u:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C173u,3u,0x02u,0xC176u);
      sc_v11_op_ora(r,0x0200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C176u:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C176u,3u,0x01u,0xC179u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C179u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3F C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C179u,3u,0xC2u,0xC17Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC17Bu))return 0;c->pc=0xC23Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C17Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C17Cu,2u,0x30u,0xC17Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C17Cu,2u,0x30u,0xC17Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C17Cu,2u,0x30u,0xC17Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C17Cu,2u,0x30u,0xC17Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C17Eu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C17Eu,1u,0x68u,0xC17Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C18Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 C7 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C18Eu,3u,0xC4u,0xC191u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC190u))return 0;c->pc=0xC4C7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C7 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C18Eu,3u,0xC4u,0xC191u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC190u))return 0;c->pc=0xC4C7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C7 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C18Eu,3u,0xC4u,0xC191u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC190u))return 0;c->pc=0xC4C7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C191u:
    if(m==0u&&x==1u&&e==0u){ /* 20 E5 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C191u,3u,0xC4u,0xC194u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC193u))return 0;c->pc=0xC4E5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E5 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C191u,3u,0xC4u,0xC194u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC193u))return 0;c->pc=0xC4E5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E5 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C191u,3u,0xC4u,0xC194u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC193u))return 0;c->pc=0xC4E5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C194u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C194u,1u,0x60u,0xC195u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C194u,1u,0x60u,0xC195u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C194u,1u,0x60u,0xC195u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C19Cu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C19Cu,1u,0x48u,0xC19Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C19Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 CB C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C19Du,3u,0xC1u,0xC1A0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC19Fu))return 0;c->pc=0xC1CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1A0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1A0u,2u,0x30u,0xC1A2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1A0u,2u,0x30u,0xC1A2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1A0u,2u,0x30u,0xC1A2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1A0u,2u,0x30u,0xC1A2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1A2u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1A2u,1u,0x68u,0xC1A3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1AAu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1AAu,2u,0x30u,0xC1ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1AAu,2u,0x30u,0xC1ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1AAu,2u,0x30u,0xC1ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1B0u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 50 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1B0u,3u,0xC2u,0xC1B3u);
      c->pc=0xC250u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1BAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1BAu,2u,0x7Cu,0xC1BCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1BCu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1BCu,2u,0x0Du,0xC1BEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC1CBu;}
      if(c->pc!=0xC1BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1BEu:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1BEu,3u,0x01u,0xC1C1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1C1u:
    if(m==0u&&x==0u&&e==0u){ /* F0 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1C1u,2u,0x2Au,0xC1C3u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC1EDu;}
      if(c->pc!=0xC1C3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1C3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1C3u:
    if(m==0u&&x==0u&&e==0u){ /* AD BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1C3u,3u,0x01u,0xC1C6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1C6u:
    if(m==0u&&x==0u&&e==0u){ /* CD CB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1C6u,3u,0x01u,0xC1C9u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01CBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1C9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1C9u,2u,0x22u,0xC1CBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC1EDu;}
      if(c->pc!=0xC1CBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1CBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1CBu:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1CBu,3u,0x01u,0xC1CEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1CEu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1CEu,1u,0x3Au,0xC1CFu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1CFu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1CFu,1u,0x3Au,0xC1D0u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1D0u:
    if(m==0u&&x==0u&&e==0u){ /* C9 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1D0u,3u,0x00u,0xC1D3u);
      sc_v11_op_compare(r,c->a,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1D3u:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1D3u,2u,0x06u,0xC1D5u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC1DBu;}
      if(c->pc!=0xC1D5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1D5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1D5u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1D5u,3u,0x01u,0xC1D8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1D8u:
    if(m==0u&&x==0u&&e==0u){ /* 4C D4 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1D8u,3u,0xC2u,0xC1DBu);
      c->pc=0xC2D4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1DBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1DBu,3u,0x04u,0xC1DEu);
      sc_v11_op_lda(r,0x0408u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1DEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D F7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1DEu,3u,0x01u,0xC1E1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1E1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1E1u,3u,0x00u,0xC1E4u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1E4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1E4u,3u,0x01u,0xC1E7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1E7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F9 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1E7u,3u,0xB2u,0xC1EAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC1E9u))return 0;c->pc=0xB2F9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1EAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 EC EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1EAu,3u,0xEEu,0xC1EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC1ECu))return 0;c->pc=0xEEECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 EC EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1EAu,3u,0xEEu,0xC1EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC1ECu))return 0;c->pc=0xEEECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EC EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1EAu,3u,0xEEu,0xC1EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC1ECu))return 0;c->pc=0xEEECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 EC EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1EAu,3u,0xEEu,0xC1EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC1ECu))return 0;c->pc=0xEEECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1EDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1EDu,2u,0x20u,0xC1EFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1EDu,2u,0x20u,0xC1EFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1EDu,2u,0x20u,0xC1EFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1EDu,2u,0x20u,0xC1EFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1EFu:
    if(m==0u&&x==0u&&e==0u){ /* 9C FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1EFu,3u,0x01u,0xC1F2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1EFu,3u,0x01u,0xC1F2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1F2u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1F2u,1u,0x60u,0xC1F3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1F2u,1u,0x60u,0xC1F3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C21Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 D0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C21Eu,3u,0x00u,0xC221u);
      sc_v11_op_lda(r,0x00D0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C227u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C227u,3u,0x04u,0xC22Au);
      sc_v11_op_lda(r,0x0404u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C22Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D F7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C22Au,3u,0x01u,0xC22Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C22Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C22Du,3u,0x00u,0xC230u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C230u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C230u,3u,0x01u,0xC233u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C233u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F6 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C233u,3u,0xB1u,0xC236u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC235u))return 0;c->pc=0xB1F6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C236u:
    if(m==0u&&x==0u&&e==0u){ /* 20 49 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C236u,3u,0xEFu,0xC239u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC238u))return 0;c->pc=0xEF49u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 49 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C236u,3u,0xEFu,0xC239u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC238u))return 0;c->pc=0xEF49u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 49 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C236u,3u,0xEFu,0xC239u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC238u))return 0;c->pc=0xEF49u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 49 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C236u,3u,0xEFu,0xC239u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC238u))return 0;c->pc=0xEF49u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C239u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C239u,2u,0x20u,0xC23Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C239u,2u,0x20u,0xC23Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C239u,2u,0x20u,0xC23Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C239u,2u,0x20u,0xC23Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C23Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C23Bu,3u,0x01u,0xC23Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C23Bu,3u,0x01u,0xC23Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C23Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C23Eu,1u,0x60u,0xC23Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C23Eu,1u,0x60u,0xC23Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C23Fu:
    if(m==0u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C23Fu,2u,0x79u,0xC241u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C241u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C241u,2u,0x0Du,0xC243u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC250u;}
      if(c->pc!=0xC243u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC243u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C243u:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C243u,3u,0x01u,0xC246u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C246u:
    if(m==0u&&x==0u&&e==0u){ /* F0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C246u,2u,0x2Cu,0xC248u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC274u;}
      if(c->pc!=0xC248u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC248u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C248u:
    if(m==0u&&x==0u&&e==0u){ /* AD BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C248u,3u,0x01u,0xC24Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C24Bu:
    if(m==0u&&x==0u&&e==0u){ /* CD C7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C24Bu,3u,0x01u,0xC24Eu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C24Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C24Eu,2u,0x24u,0xC250u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC274u;}
      if(c->pc!=0xC250u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC250u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C250u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C250u,3u,0x01u,0xC253u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C253u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C253u,1u,0x3Au,0xC254u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C254u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C254u,1u,0x3Au,0xC255u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C255u:
    if(m==0u&&x==0u&&e==0u){ /* C9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C255u,3u,0x00u,0xC258u);
      sc_v11_op_compare(r,c->a,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C258u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C258u,2u,0x05u,0xC25Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC25Fu;}
      if(c->pc!=0xC25Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC25Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C25Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C25Au,3u,0x01u,0xC25Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C25Du:
    if(m==0u&&x==0u&&e==0u){ /* 80 75 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C25Du,2u,0x75u,0xC25Fu);
      if(1){c->pc=0xC2D4u;}
      if(c->pc!=0xC25Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC25Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C25Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C25Fu,3u,0x04u,0xC262u);
      sc_v11_op_lda(r,0x0402u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C262u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C262u,3u,0x01u,0xC265u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C265u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C265u,3u,0x00u,0xC268u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C268u:
    if(m==0u&&x==0u&&e==0u){ /* 0D F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C268u,3u,0x01u,0xC26Bu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C26Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C26Bu,3u,0x01u,0xC26Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C26Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 66 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C26Eu,3u,0xB1u,0xC271u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC270u))return 0;c->pc=0xB166u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C271u:
    if(m==0u&&x==0u&&e==0u){ /* 20 E5 EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C271u,3u,0xEEu,0xC274u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC273u))return 0;c->pc=0xEEE5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E5 EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C271u,3u,0xEEu,0xC274u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC273u))return 0;c->pc=0xEEE5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E5 EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C271u,3u,0xEEu,0xC274u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC273u))return 0;c->pc=0xEEE5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E5 EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C271u,3u,0xEEu,0xC274u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC273u))return 0;c->pc=0xEEE5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C274u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C274u,2u,0x20u,0xC276u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C274u,2u,0x20u,0xC276u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C274u,2u,0x20u,0xC276u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C274u,2u,0x20u,0xC276u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C276u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C276u,3u,0x01u,0xC279u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C276u,3u,0x01u,0xC279u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C279u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C279u,3u,0xFCu,0xC27Cu);
      sc_v11_op_and(r,0xFCFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C279u,3u,0xFCu,0xC27Cu);
      sc_v11_op_and(r,0xFCFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C27Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C27Cu,3u,0x01u,0xC27Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C27Cu,3u,0x01u,0xC27Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C27Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C27Fu,1u,0x60u,0xC280u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C27Fu,1u,0x60u,0xC280u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2ABu:
    if(m==0u&&x==0u&&e==0u){ /* A9 F8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2ABu,3u,0x00u,0xC2AEu);
      sc_v11_op_lda(r,0x00F8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2B3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2B3u,3u,0x04u,0xC2B6u);
      sc_v11_op_lda(r,0x0401u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2B6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2B6u,3u,0x01u,0xC2B9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2B9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2B9u,3u,0x00u,0xC2BCu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2BCu:
    if(m==0u&&x==0u&&e==0u){ /* 0D F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2BCu,3u,0x01u,0xC2BFu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2BFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2BFu,3u,0x01u,0xC2C2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2C2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 30 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2C2u,3u,0xB0u,0xC2C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC2C4u))return 0;c->pc=0xB030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2C5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 42 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2C5u,3u,0xEFu,0xC2C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC2C7u))return 0;c->pc=0xEF42u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 42 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2C5u,3u,0xEFu,0xC2C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC2C7u))return 0;c->pc=0xEF42u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 42 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2C5u,3u,0xEFu,0xC2C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC2C7u))return 0;c->pc=0xEF42u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 42 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2C5u,3u,0xEFu,0xC2C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC2C7u))return 0;c->pc=0xEF42u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2C8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2C8u,2u,0x20u,0xC2CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2C8u,2u,0x20u,0xC2CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2C8u,2u,0x20u,0xC2CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2C8u,2u,0x20u,0xC2CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2CAu:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2CAu,3u,0x01u,0xC2CDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2CAu,3u,0x01u,0xC2CDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2CDu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2CDu,3u,0xFCu,0xC2D0u);
      sc_v11_op_and(r,0xFCFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2CDu,3u,0xFCu,0xC2D0u);
      sc_v11_op_and(r,0xFCFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2D0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2D0u,3u,0x01u,0xC2D3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2D0u,3u,0x01u,0xC2D3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2D3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2D3u,1u,0x60u,0xC2D4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2D3u,1u,0x60u,0xC2D4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C30Bu:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Bu,1u,0x68u,0xC30Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Bu,1u,0x68u,0xC30Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Bu,1u,0x68u,0xC30Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C30Cu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Cu,1u,0x0Au,0xC30Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Cu,1u,0x0Au,0xC30Du);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Cu,1u,0x0Au,0xC30Du);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C30Du:
    if(m==0u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Du,2u,0x05u,0xC30Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC314u;}
      if(c->pc!=0xC30Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC30Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Du,2u,0x05u,0xC30Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC314u;}
      if(c->pc!=0xC30Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC30Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Du,2u,0x05u,0xC30Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC314u;}
      if(c->pc!=0xC30Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC30Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C30Fu:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Fu,1u,0x48u,0xC310u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Fu,1u,0x48u,0xC310u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Fu,1u,0x48u,0xC310u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C310u:
    if(m==0u&&x==1u&&e==0u){ /* 20 3C C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C310u,3u,0xC3u,0xC313u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC312u))return 0;c->pc=0xC33Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 3C C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C310u,3u,0xC3u,0xC313u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC312u))return 0;c->pc=0xC33Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 3C C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C310u,3u,0xC3u,0xC313u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC312u))return 0;c->pc=0xC33Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C313u:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C313u,1u,0x68u,0xC314u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C313u,1u,0x68u,0xC314u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C313u,1u,0x68u,0xC314u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C314u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C314u,1u,0x0Au,0xC315u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C314u,1u,0x0Au,0xC315u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C314u,1u,0x0Au,0xC315u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C315u:
    if(m==0u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C315u,2u,0x05u,0xC317u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC31Cu;}
      if(c->pc!=0xC317u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC317u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C315u,2u,0x05u,0xC317u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC31Cu;}
      if(c->pc!=0xC317u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC317u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C315u,2u,0x05u,0xC317u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC31Cu;}
      if(c->pc!=0xC317u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC317u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C317u:
    if(m==0u&&x==0u&&e==0u){ /* 20 55 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C317u,3u,0xC3u,0xC31Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC319u))return 0;c->pc=0xC355u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 55 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C317u,3u,0xC3u,0xC31Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC319u))return 0;c->pc=0xC355u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 55 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C317u,3u,0xC3u,0xC31Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC319u))return 0;c->pc=0xC355u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 55 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C317u,3u,0xC3u,0xC31Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC319u))return 0;c->pc=0xC355u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C31Au:
    if(m==0u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Au,2u,0x06u,0xC31Cu);
      if(1){c->pc=0xC322u;}
      if(c->pc!=0xC31Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC31Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Au,2u,0x06u,0xC31Cu);
      if(1){c->pc=0xC322u;}
      if(c->pc!=0xC31Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC31Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Au,2u,0x06u,0xC31Cu);
      if(1){c->pc=0xC322u;}
      if(c->pc!=0xC31Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC31Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Au,2u,0x06u,0xC31Cu);
      if(1){c->pc=0xC322u;}
      if(c->pc!=0xC31Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC31Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C31Cu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Cu,1u,0x0Au,0xC31Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Cu,1u,0x0Au,0xC31Du);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Cu,1u,0x0Au,0xC31Du);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C31Du:
    if(m==0u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Du,2u,0x03u,0xC31Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC322u;}
      if(c->pc!=0xC31Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC31Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Du,2u,0x03u,0xC31Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC322u;}
      if(c->pc!=0xC31Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC31Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Du,2u,0x03u,0xC31Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC322u;}
      if(c->pc!=0xC31Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC31Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C31Fu:
    if(m==0u&&x==1u&&e==0u){ /* 20 6E C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Fu,3u,0xC3u,0xC322u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC321u))return 0;c->pc=0xC36Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 6E C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Fu,3u,0xC3u,0xC322u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC321u))return 0;c->pc=0xC36Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 6E C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Fu,3u,0xC3u,0xC322u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC321u))return 0;c->pc=0xC36Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C322u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C322u,1u,0x60u,0xC323u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C322u,1u,0x60u,0xC323u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C322u,1u,0x60u,0xC323u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C32Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C32Bu,3u,0x01u,0xC32Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C32Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C32Eu,3u,0xF7u,0xC331u);
      sc_v11_op_and(r,0xF7FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C331u:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C331u,3u,0x01u,0xC334u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C334u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C334u,1u,0x60u,0xC335u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C33Cu:
    if(m==0u&&x==1u&&e==0u){ /* AD ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C33Cu,3u,0x01u,0xC33Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C33Cu,3u,0x01u,0xC33Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EDu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C33Cu,3u,0x01u,0xC33Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EDu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C33Fu:
    if(m==0u&&x==1u&&e==0u){ /* C9 C0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C33Fu,3u,0x00u,0xC342u);
      sc_v11_op_compare(r,c->a,0x00C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C33Fu,2u,0xC0u,0xC341u);
      sc_v11_op_compare(r,c->a,0x00C0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C33Fu,2u,0xC0u,0xC341u);
      sc_v11_op_compare(r,c->a,0x00C0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C342u:
    if(m==0u&&x==1u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C342u,2u,0x0Au,0xC344u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC34Eu;}
      if(c->pc!=0xC344u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC344u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C344u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C344u,3u,0x01u,0xC347u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C344u,3u,0x01u,0xC347u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C347u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF FB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C347u,3u,0xFBu,0xC34Au);
      sc_v11_op_and(r,0xFBFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF FB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C347u,3u,0xFBu,0xC34Au);
      sc_v11_op_and(r,0xFBFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C34Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C34Au,3u,0x01u,0xC34Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C34Au,3u,0x01u,0xC34Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C34Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C34Du,1u,0x60u,0xC34Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C34Du,1u,0x60u,0xC34Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C34Eu:
    if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C34Eu,1u,0x1Au,0xC34Fu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C34Fu:
    if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C34Fu,1u,0x1Au,0xC350u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C350u:
    if(m==0u&&x==1u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C350u,3u,0x01u,0xC353u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C353u:
    if(m==0u&&x==1u&&e==0u){ /* 80 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C353u,2u,0x30u,0xC355u);
      if(1){c->pc=0xC385u;}
      if(c->pc!=0xC355u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC355u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C355u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C355u,3u,0x01u,0xC358u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C355u,3u,0x01u,0xC358u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C355u,3u,0x01u,0xC358u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C355u,3u,0x01u,0xC358u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C358u:
    if(m==0u&&x==0u&&e==0u){ /* C9 11 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C358u,3u,0x00u,0xC35Bu);
      sc_v11_op_compare(r,c->a,0x0011u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 11 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C358u,3u,0x00u,0xC35Bu);
      sc_v11_op_compare(r,c->a,0x0011u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C358u,2u,0x11u,0xC35Au);
      sc_v11_op_compare(r,c->a,0x0011u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C358u,2u,0x11u,0xC35Au);
      sc_v11_op_compare(r,c->a,0x0011u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C35Bu:
    if(m==0u&&x==0u&&e==0u){ /* B0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C35Bu,2u,0x0Au,0xC35Du);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC367u;}
      if(c->pc!=0xC35Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC35Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C35Bu,2u,0x0Au,0xC35Du);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC367u;}
      if(c->pc!=0xC35Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC35Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C35Du:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C35Du,3u,0x01u,0xC360u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C35Du,3u,0x01u,0xC360u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C360u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF FD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C360u,3u,0xFDu,0xC363u);
      sc_v11_op_and(r,0xFDFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF FD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C360u,3u,0xFDu,0xC363u);
      sc_v11_op_and(r,0xFDFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C363u:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C363u,3u,0x01u,0xC366u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C363u,3u,0x01u,0xC366u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C366u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C366u,1u,0x60u,0xC367u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C366u,1u,0x60u,0xC367u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C367u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C367u,1u,0x3Au,0xC368u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C367u,1u,0x3Au,0xC368u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C368u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C368u,1u,0x3Au,0xC369u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C368u,1u,0x3Au,0xC369u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C369u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C369u,3u,0x01u,0xC36Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C369u,3u,0x01u,0xC36Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C36Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C36Cu,2u,0x17u,0xC36Eu);
      if(1){c->pc=0xC385u;}
      if(c->pc!=0xC36Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC36Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C36Cu,2u,0x17u,0xC36Eu);
      if(1){c->pc=0xC385u;}
      if(c->pc!=0xC36Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC36Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C36Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C36Eu,3u,0x01u,0xC371u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C36Eu,3u,0x01u,0xC371u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C36Eu,3u,0x01u,0xC371u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C371u:
    if(m==0u&&x==1u&&e==0u){ /* C9 E8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C371u,3u,0x00u,0xC374u);
      sc_v11_op_compare(r,c->a,0x00E8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C371u,2u,0xE8u,0xC373u);
      sc_v11_op_compare(r,c->a,0x00E8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C371u,2u,0xE8u,0xC373u);
      sc_v11_op_compare(r,c->a,0x00E8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C374u:
    if(m==0u&&x==1u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C374u,2u,0x0Au,0xC376u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC380u;}
      if(c->pc!=0xC376u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC376u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C376u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C376u,3u,0x01u,0xC379u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C376u,3u,0x01u,0xC379u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C379u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF FE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C379u,3u,0xFEu,0xC37Cu);
      sc_v11_op_and(r,0xFEFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF FE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C379u,3u,0xFEu,0xC37Cu);
      sc_v11_op_and(r,0xFEFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C37Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C37Cu,3u,0x01u,0xC37Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C37Cu,3u,0x01u,0xC37Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C37Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C37Fu,1u,0x60u,0xC380u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C37Fu,1u,0x60u,0xC380u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C380u:
    if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C380u,1u,0x1Au,0xC381u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C381u:
    if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C381u,1u,0x1Au,0xC382u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C382u:
    if(m==0u&&x==1u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C382u,3u,0x01u,0xC385u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C385u:
    if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C385u,3u,0x00u,0xC388u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C388u:
    if(m==0u&&x==1u&&e==0u){ /* D0 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C388u,2u,0x98u,0xC38Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC322u;}
      if(c->pc!=0xC38Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC38Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C38Au:
    if(m==0u&&x==1u&&e==0u){ /* 8D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C38Au,3u,0x01u,0xC38Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C38Du:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C38Du,1u,0x60u,0xC38Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C38Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 E5 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C38Eu,3u,0xC4u,0xC391u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC390u))return 0;c->pc=0xC4E5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C391u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C391u,2u,0x20u,0xC393u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C391u,2u,0x20u,0xC393u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C391u,2u,0x20u,0xC393u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C391u,2u,0x20u,0xC393u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C393u:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C393u,3u,0x01u,0xC396u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C393u,3u,0x01u,0xC396u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C396u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C396u,1u,0x4Au,0xC397u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C396u,1u,0x4Au,0xC397u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C397u:
    if(m==0u&&x==0u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C397u,2u,0x07u,0xC399u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3A0u;}
      if(c->pc!=0xC399u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC399u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C397u,2u,0x07u,0xC399u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3A0u;}
      if(c->pc!=0xC399u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC399u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C399u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C399u,1u,0x48u,0xC39Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C399u,1u,0x48u,0xC39Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C39Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 42 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C39Au,3u,0xEFu,0xC39Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC39Cu))return 0;c->pc=0xEF42u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 42 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C39Au,3u,0xEFu,0xC39Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC39Cu))return 0;c->pc=0xEF42u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C39Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C39Du,2u,0x20u,0xC39Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C39Du,2u,0x20u,0xC39Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C39Du,2u,0x20u,0xC39Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C39Du,2u,0x20u,0xC39Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C39Fu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C39Fu,1u,0x68u,0xC3A0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C39Fu,1u,0x68u,0xC3A0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3A0u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A0u,1u,0x4Au,0xC3A1u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A0u,1u,0x4Au,0xC3A1u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3A1u:
    if(m==0u&&x==0u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A1u,2u,0x07u,0xC3A3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3AAu;}
      if(c->pc!=0xC3A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A1u,2u,0x07u,0xC3A3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3AAu;}
      if(c->pc!=0xC3A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3A3u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A3u,1u,0x48u,0xC3A4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A3u,1u,0x48u,0xC3A4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3A4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 E5 EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A4u,3u,0xEEu,0xC3A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC3A6u))return 0;c->pc=0xEEE5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E5 EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A4u,3u,0xEEu,0xC3A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC3A6u))return 0;c->pc=0xEEE5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3A7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A7u,2u,0x20u,0xC3A9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A7u,2u,0x20u,0xC3A9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A7u,2u,0x20u,0xC3A9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A7u,2u,0x20u,0xC3A9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3A9u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A9u,1u,0x68u,0xC3AAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3A9u,1u,0x68u,0xC3AAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3AAu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3AAu,1u,0x4Au,0xC3ABu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3AAu,1u,0x4Au,0xC3ABu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3ABu:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3ABu,2u,0x05u,0xC3ADu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3B2u;}
      if(c->pc!=0xC3ADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3ADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3ABu,2u,0x05u,0xC3ADu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3B2u;}
      if(c->pc!=0xC3ADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3ADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3ADu:
    if(m==0u&&x==0u&&e==0u){ /* 20 49 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3ADu,3u,0xEFu,0xC3B0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC3AFu))return 0;c->pc=0xEF49u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 49 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3ADu,3u,0xEFu,0xC3B0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC3AFu))return 0;c->pc=0xEF49u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3B0u:
    if(m==0u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B0u,2u,0x06u,0xC3B2u);
      if(1){c->pc=0xC3B8u;}
      if(c->pc!=0xC3B2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3B2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B0u,2u,0x06u,0xC3B2u);
      if(1){c->pc=0xC3B8u;}
      if(c->pc!=0xC3B2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3B2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B0u,2u,0x06u,0xC3B2u);
      if(1){c->pc=0xC3B8u;}
      if(c->pc!=0xC3B2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3B2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B0u,2u,0x06u,0xC3B2u);
      if(1){c->pc=0xC3B8u;}
      if(c->pc!=0xC3B2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3B2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3B2u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B2u,1u,0x4Au,0xC3B3u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B2u,1u,0x4Au,0xC3B3u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3B3u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B3u,2u,0x03u,0xC3B5u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3B8u;}
      if(c->pc!=0xC3B5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3B5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B3u,2u,0x03u,0xC3B5u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3B8u;}
      if(c->pc!=0xC3B5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3B5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3B5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 EC EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B5u,3u,0xEEu,0xC3B8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC3B7u))return 0;c->pc=0xEEECu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 EC EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B5u,3u,0xEEu,0xC3B8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC3B7u))return 0;c->pc=0xEEECu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3B8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B8u,2u,0x20u,0xC3BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B8u,2u,0x20u,0xC3BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B8u,2u,0x20u,0xC3BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3B8u,2u,0x20u,0xC3BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3BAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3BAu,3u,0x01u,0xC3BDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3BAu,3u,0x01u,0xC3BDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3BDu:
    if(m==0u&&x==0u&&e==0u){ /* 0D 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3BDu,3u,0x01u,0xC3C0u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0137u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0D 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3BDu,3u,0x01u,0xC3C0u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0137u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3C0u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3C0u,3u,0x00u,0xC3C3u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3C0u,3u,0x00u,0xC3C3u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3C3u:
    if(m==0u&&x==0u&&e==0u){ /* D0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3C3u,2u,0x09u,0xC3C5u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC3CEu;}
      if(c->pc!=0xC3C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3C3u,2u,0x09u,0xC3C5u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC3CEu;}
      if(c->pc!=0xC3C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3C5u:
    if(m==0u&&x==0u&&e==0u){ /* 9C F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3C5u,3u,0x01u,0xC3C8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3C5u,3u,0x01u,0xC3C8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3C8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3C8u,3u,0x00u,0xC3CBu);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3C8u,3u,0x00u,0xC3CBu);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3CBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D F3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3CBu,3u,0x01u,0xC3CEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D F3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3CBu,3u,0x01u,0xC3CEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3CEu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3CEu,1u,0x60u,0xC3CFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3CEu,1u,0x60u,0xC3CFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3CFu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3CFu,2u,0x30u,0xC3D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3CFu,2u,0x30u,0xC3D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
