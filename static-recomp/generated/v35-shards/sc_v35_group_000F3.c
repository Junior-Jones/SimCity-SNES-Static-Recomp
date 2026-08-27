/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000F3(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03CC02u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC02u,3u,0x03u,0xCC05u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0385u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC05u:
    if(m==0u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC05u,1u,0x0Bu,0xCC06u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC06u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC06u,3u,0x00u,0xCC09u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC09u:
    if(m==0u&&x==0u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC09u,1u,0x5Bu,0xCC0Au);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC0Au:
    if(m==0u&&x==0u&&e==0u){ /* 22 A3 94 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC0Au,4u,0x01u,0xCC0Eu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xCC0Du))return 0;
      c->pbr=0x01u;c->pc=0x94A3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC0Eu:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC0Eu,1u,0x2Bu,0xCC0Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC0Eu,1u,0x2Bu,0xCC0Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC0Eu,1u,0x2Bu,0xCC0Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC0Eu,1u,0x2Bu,0xCC0Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC0Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC0Fu,2u,0x20u,0xCC11u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC0Fu,2u,0x20u,0xCC11u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC0Fu,2u,0x20u,0xCC11u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC0Fu,2u,0x20u,0xCC11u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC11u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC11u,3u,0x00u,0xCC14u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC11u,3u,0x00u,0xCC14u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC14u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC14u,2u,0x00u,0xCC16u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCC16u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC14u,2u,0x00u,0xCC16u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xCC16u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC16u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC16u,1u,0x60u,0xCC17u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC16u,1u,0x60u,0xCC17u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC17u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC17u,2u,0x30u,0xCC19u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC17u,2u,0x30u,0xCC19u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC19u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC19u,3u,0x00u,0xCC1Cu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC1Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC1Cu,1u,0x9Bu,0xCC1Du);
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC1Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 23 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC1Du,3u,0x04u,0xCC20u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0423u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC20u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC20u,3u,0x00u,0xCC23u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC23u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC23u,2u,0x06u,0xCC25u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xCC2Bu;}
      if(c->pc!=0xCC25u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCC25u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC25u:
    if(m==0u&&x==0u&&e==0u){ /* A2 F0 3F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC25u,3u,0x3Fu,0xCC28u);
      sc_v11_op_ldx(r,0x3FF0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC28u:
    if(m==0u&&x==0u&&e==0u){ /* A0 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC28u,3u,0x00u,0xCC2Bu);
      sc_v11_op_ldy(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC2Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 8B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC2Bu,3u,0x0Bu,0xCC2Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC2Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 10 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC2Eu,4u,0x70u,0xCC32u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700010u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC32u:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC32u,3u,0x0Bu,0xCC35u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B93u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC35u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 12 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC35u,4u,0x70u,0xCC39u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700012u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC39u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC39u,3u,0x0Bu,0xCC3Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC3Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 14 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC3Cu,4u,0x70u,0xCC40u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700014u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC40u:
    if(m==0u&&x==0u&&e==0u){ /* AD AD 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC40u,3u,0x0Bu,0xCC43u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BADu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC43u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 16 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC43u,4u,0x70u,0xCC47u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700016u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC47u:
    if(m==0u&&x==0u&&e==0u){ /* AD AF 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC47u,3u,0x0Bu,0xCC4Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BAFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC4Au:
    if(m==0u&&x==0u&&e==0u){ /* 9F 18 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC4Au,4u,0x70u,0xCC4Eu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700018u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC4Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD B1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC4Eu,3u,0x0Bu,0xCC51u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BB1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC51u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 1A 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC51u,4u,0x70u,0xCC55u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70001Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC55u:
    if(m==0u&&x==0u&&e==0u){ /* AD 6D 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC55u,3u,0x0Cu,0xCC58u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC58u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 1C 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC58u,4u,0x70u,0xCC5Cu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70001Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC5Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 6F 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC5Cu,3u,0x0Cu,0xCC5Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC5Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 1E 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC5Fu,4u,0x70u,0xCC63u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70001Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC63u:
    if(m==0u&&x==0u&&e==0u){ /* AD 03 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC63u,3u,0x0Cu,0xCC66u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C03u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC66u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 20 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC66u,4u,0x70u,0xCC6Au);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700020u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC6Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC6Au,3u,0x0Cu,0xCC6Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C01u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC6Du:
    if(m==0u&&x==0u&&e==0u){ /* 9F 22 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC6Du,4u,0x70u,0xCC71u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700022u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC71u:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC71u,3u,0x0Cu,0xCC74u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C07u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC74u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 24 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC74u,4u,0x70u,0xCC78u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700024u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC78u:
    if(m==0u&&x==0u&&e==0u){ /* AD 57 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC78u,3u,0x0Bu,0xCC7Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B57u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC7Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 26 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC7Bu,4u,0x70u,0xCC7Fu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700026u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC7Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC7Fu,3u,0x0Bu,0xCC82u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC82u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 28 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC82u,4u,0x70u,0xCC86u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700028u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC86u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC86u,3u,0x0Bu,0xCC89u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC89u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 2A 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC89u,4u,0x70u,0xCC8Du);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70002Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC8Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC8Du,3u,0x01u,0xCC90u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0193u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC90u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 2C 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC90u,4u,0x70u,0xCC94u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70002Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC94u:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC94u,3u,0x01u,0xCC97u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0195u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC97u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 2E 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC97u,4u,0x70u,0xCC9Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70002Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC9Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 53 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC9Bu,3u,0x0Bu,0xCC9Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B53u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CC9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 30 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CC9Eu,4u,0x70u,0xCCA2u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700030u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCA2u:
    if(m==0u&&x==0u&&e==0u){ /* 99 67 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCA2u,3u,0x0Bu,0xCCA5u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0B67u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCA5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 55 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCA5u,3u,0x0Bu,0xCCA8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCA8u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 32 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCA8u,4u,0x70u,0xCCACu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700032u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCACu:
    if(m==0u&&x==0u&&e==0u){ /* 99 69 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCACu,3u,0x0Bu,0xCCAFu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0B69u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCAFu:
    if(m==0u&&x==0u&&e==0u){ /* AD C5 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCAFu,3u,0x0Du,0xCCB2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCB2u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 34 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCB2u,4u,0x70u,0xCCB6u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700034u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCB6u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCB6u,3u,0x0Du,0xCCB9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCB9u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 36 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCB9u,4u,0x70u,0xCCBDu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700036u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCBDu:
    if(m==0u&&x==0u&&e==0u){ /* 99 65 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCBDu,3u,0x0Bu,0xCCC0u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0B65u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCC0u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCC0u,3u,0x0Du,0xCCC3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCC3u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 38 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCC3u,4u,0x70u,0xCCC7u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700038u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCC7u:
    if(m==0u&&x==0u&&e==0u){ /* AD C7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCC7u,3u,0x0Du,0xCCCAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCCAu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 3A 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCCAu,4u,0x70u,0xCCCEu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70003Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCCEu:
    if(m==0u&&x==0u&&e==0u){ /* AD A5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCCEu,3u,0x0Bu,0xCCD1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCD1u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 3C 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCD1u,4u,0x70u,0xCCD5u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70003Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCD5u:
    if(m==0u&&x==0u&&e==0u){ /* AD A7 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCD5u,3u,0x0Bu,0xCCD8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCD8u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 3E 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCD8u,4u,0x70u,0xCCDCu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70003Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCDCu:
    if(m==0u&&x==0u&&e==0u){ /* AD A7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCDCu,3u,0x0Cu,0xCCDFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCDFu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCDFu,4u,0x70u,0xCCE3u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700040u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCE3u:
    if(m==0u&&x==0u&&e==0u){ /* AD A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCE3u,3u,0x0Cu,0xCCE6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCE6u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 42 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCE6u,4u,0x70u,0xCCEAu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700042u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCEAu:
    if(m==0u&&x==0u&&e==0u){ /* AD AB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCEAu,3u,0x0Cu,0xCCEDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CABu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCEDu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 44 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCEDu,4u,0x70u,0xCCF1u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700044u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCF1u:
    if(m==0u&&x==0u&&e==0u){ /* AD AD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCF1u,3u,0x0Cu,0xCCF4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CADu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCF4u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 46 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCF4u,4u,0x70u,0xCCF8u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700046u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCF8u:
    if(m==0u&&x==0u&&e==0u){ /* AD AF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCF8u,3u,0x0Cu,0xCCFBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CAFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCFBu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 48 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCFBu,4u,0x70u,0xCCFFu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700048u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CCFFu:
    if(m==0u&&x==0u&&e==0u){ /* AD B1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CCFFu,3u,0x0Cu,0xCD02u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD02u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 4A 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD02u,4u,0x70u,0xCD06u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70004Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD06u:
    if(m==0u&&x==0u&&e==0u){ /* AD B3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD06u,3u,0x0Cu,0xCD09u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD09u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 4C 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD09u,4u,0x70u,0xCD0Du);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70004Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD0Du:
    if(m==0u&&x==0u&&e==0u){ /* AD B5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD0Du,3u,0x0Cu,0xCD10u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD10u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 4E 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD10u,4u,0x70u,0xCD14u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70004Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD14u:
    if(m==0u&&x==0u&&e==0u){ /* AD B7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD14u,3u,0x0Cu,0xCD17u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD17u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 50 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD17u,4u,0x70u,0xCD1Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700050u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD1Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD B9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD1Bu,3u,0x0Cu,0xCD1Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD1Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 52 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD1Eu,4u,0x70u,0xCD22u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700052u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD22u:
    if(m==0u&&x==0u&&e==0u){ /* AD 51 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD22u,3u,0x0Bu,0xCD25u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B51u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD25u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 54 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD25u,4u,0x70u,0xCD29u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700054u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD29u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD29u,2u,0x20u,0xCD2Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD2Bu:
    if(m==1u&&x==0u&&e==0u){ /* AD BB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD2Bu,3u,0x0Cu,0xCD2Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CBBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD2Eu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 56 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD2Eu,4u,0x70u,0xCD32u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x700056u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD32u:
    if(m==1u&&x==0u&&e==0u){ /* AD BD 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD32u,3u,0x0Cu,0xCD35u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CBDu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD35u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 57 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD35u,4u,0x70u,0xCD39u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x700057u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD39u:
    if(m==1u&&x==0u&&e==0u){ /* AD BF 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD39u,3u,0x0Cu,0xCD3Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CBFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD3Cu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 58 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD3Cu,4u,0x70u,0xCD40u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x700058u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD40u:
    if(m==1u&&x==0u&&e==0u){ /* AD CB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD40u,3u,0x0Cu,0xCD43u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CCBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD43u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 59 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD43u,4u,0x70u,0xCD47u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x700059u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD47u:
    if(m==1u&&x==0u&&e==0u){ /* AD C3 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD47u,3u,0x0Cu,0xCD4Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CC3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD4Au:
    if(m==1u&&x==0u&&e==0u){ /* 9F 5A 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD4Au,4u,0x70u,0xCD4Eu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x70005Au),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD4Eu:
    if(m==1u&&x==0u&&e==0u){ /* AD C7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD4Eu,3u,0x0Cu,0xCD51u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CC7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD51u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 5B 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD51u,4u,0x70u,0xCD55u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x70005Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD55u:
    if(m==1u&&x==0u&&e==0u){ /* AD C1 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD55u,3u,0x0Cu,0xCD58u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CC1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD58u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 5C 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD58u,4u,0x70u,0xCD5Cu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x70005Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD5Cu:
    if(m==1u&&x==0u&&e==0u){ /* AD C5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD5Cu,3u,0x0Cu,0xCD5Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CC5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD5Fu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 5D 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD5Fu,4u,0x70u,0xCD63u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x70005Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD63u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD63u,2u,0x20u,0xCD65u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD65u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD65u,3u,0x0Bu,0xCD68u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B1Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD68u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 5E 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD68u,4u,0x70u,0xCD6Cu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70005Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD6Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD6Cu,3u,0x03u,0xCD6Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD6Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 60 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD6Fu,4u,0x70u,0xCD73u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700060u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD73u:
    if(m==0u&&x==0u&&e==0u){ /* AD F7 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD73u,3u,0x03u,0xCD76u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD76u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 62 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD76u,4u,0x70u,0xCD7Au);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700062u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD7Au:
    if(m==0u&&x==0u&&e==0u){ /* AD E7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD7Au,3u,0x01u,0xCD7Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01E7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD7Du:
    if(m==0u&&x==0u&&e==0u){ /* 9F 64 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD7Du,4u,0x70u,0xCD81u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700064u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD81u:
    if(m==0u&&x==0u&&e==0u){ /* AD BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD81u,3u,0x01u,0xCD84u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD84u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 66 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD84u,4u,0x70u,0xCD88u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700066u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD88u:
    if(m==0u&&x==0u&&e==0u){ /* AD BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD88u,3u,0x01u,0xCD8Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD8Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 68 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD8Bu,4u,0x70u,0xCD8Fu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700068u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD8Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD8Fu,3u,0x0Cu,0xCD92u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD92u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 6A 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD92u,4u,0x70u,0xCD96u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70006Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD96u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD96u,3u,0x00u,0xCD99u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x003Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD99u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 6C 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD99u,4u,0x70u,0xCD9Du);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70006Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CD9Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 91 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CD9Du,3u,0x0Au,0xCDA0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A91u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDA0u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDA0u,1u,0x0Au,0xCDA1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDA1u:
    if(m==0u&&x==0u&&e==0u){ /* 0D 8B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDA1u,3u,0x0Au,0xCDA4u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A8Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDA4u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDA4u,1u,0x0Au,0xCDA5u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDA5u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 6E 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDA5u,4u,0x70u,0xCDA9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70006Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDA9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDA9u,3u,0x00u,0xCDACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0040u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDACu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 70 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDACu,4u,0x70u,0xCDB0u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700070u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDB0u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDB0u,3u,0x0Cu,0xCDB3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDB3u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 72 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDB3u,4u,0x70u,0xCDB7u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700072u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDB7u:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDB7u,3u,0x0Bu,0xCDBAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B01u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDBAu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 74 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDBAu,4u,0x70u,0xCDBEu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700074u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDBEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 5B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDBEu,3u,0x0Bu,0xCDC1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B5Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDC1u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 76 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDC1u,4u,0x70u,0xCDC5u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700076u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDC5u:
    if(m==0u&&x==0u&&e==0u){ /* 99 6B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDC5u,3u,0x0Bu,0xCDC8u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0B6Bu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDC8u:
    if(m==0u&&x==0u&&e==0u){ /* AD 5D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDC8u,3u,0x0Bu,0xCDCBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B5Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDCBu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 78 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDCBu,4u,0x70u,0xCDCFu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700078u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDCFu:
    if(m==0u&&x==0u&&e==0u){ /* 99 6D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDCFu,3u,0x0Bu,0xCDD2u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0B6Du),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDD2u:
    if(m==0u&&x==0u&&e==0u){ /* AD 5F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDD2u,3u,0x0Bu,0xCDD5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B5Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDD5u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 7A 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDD5u,4u,0x70u,0xCDD9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70007Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDD9u:
    if(m==0u&&x==0u&&e==0u){ /* 99 6F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDD9u,3u,0x0Bu,0xCDDCu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0B6Fu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDDCu:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDDCu,3u,0x0Bu,0xCDDFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDDFu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 7C 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDDFu,4u,0x70u,0xCDE3u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70007Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDE3u:
    if(m==0u&&x==0u&&e==0u){ /* 99 71 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDE3u,3u,0x0Bu,0xCDE6u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0B71u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDE6u:
    if(m==0u&&x==0u&&e==0u){ /* AD 63 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDE6u,3u,0x0Bu,0xCDE9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B63u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDE9u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 7E 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDE9u,4u,0x70u,0xCDEDu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x70007Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDEDu:
    if(m==0u&&x==0u&&e==0u){ /* 99 73 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDEDu,3u,0x0Bu,0xCDF0u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0B73u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDF0u:
    if(m==0u&&x==0u&&e==0u){ /* AD 27 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDF0u,3u,0x0Bu,0xCDF3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B27u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDF3u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDF3u,4u,0x70u,0xCDF7u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700080u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDF7u:
    if(m==0u&&x==0u&&e==0u){ /* AD 29 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDF7u,3u,0x0Bu,0xCDFAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B29u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDFAu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDFAu,3u,0x00u,0xCDFDu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CDFDu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 82 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CDFDu,4u,0x70u,0xCE01u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700082u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE01u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE01u,1u,0xDAu,0xCE02u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE02u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE02u,3u,0x00u,0xCE05u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE05u:
    if(m==0u&&x==0u&&e==0u){ /* B9 ED 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE05u,3u,0x0Cu,0xCE08u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0CEDu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE08u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 84 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE08u,4u,0x70u,0xCE0Cu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700084u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE0Cu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE0Cu,1u,0xE8u,0xCE0Du);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE0Du:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE0Du,1u,0xE8u,0xCE0Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE0Eu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE0Eu,1u,0xC8u,0xCE0Fu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE0Fu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE0Fu,1u,0xC8u,0xCE10u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE10u:
    if(m==0u&&x==0u&&e==0u){ /* C0 3C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE10u,3u,0x00u,0xCE13u);
      sc_v11_op_compare(r,c->y,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE13u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE13u,2u,0xF0u,0xCE15u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCE05u;}
      if(c->pc!=0xCE15u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCE15u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE15u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE15u,1u,0xFAu,0xCE16u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE16u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE16u,3u,0x00u,0xCE19u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE19u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE19u,1u,0xDAu,0xCE1Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE1Au:
    if(m==0u&&x==0u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE1Au,1u,0xBBu,0xCE1Bu);
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE1Bu:
    if(m==0u&&x==0u&&e==0u){ /* BF C0 5F 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE1Bu,4u,0x7Fu,0xCE1Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F5FC0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE1Fu:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE1Fu,1u,0xFAu,0xCE20u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE20u:
    if(m==0u&&x==0u&&e==0u){ /* 9F C0 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE20u,4u,0x70u,0xCE24u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7000C0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE24u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE24u,1u,0xE8u,0xCE25u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE25u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE25u,1u,0xE8u,0xCE26u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE26u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE26u,1u,0xC8u,0xCE27u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE27u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE27u,1u,0xC8u,0xCE28u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE28u:
    if(m==0u&&x==0u&&e==0u){ /* C0 40 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE28u,3u,0x0Bu,0xCE2Bu);
      sc_v11_op_compare(r,c->y,0x0B40u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE2Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE2Bu,2u,0xECu,0xCE2Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCE19u;}
      if(c->pc!=0xCE2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCE2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE2Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE2Du,1u,0x60u,0xCE2Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE61u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE61u,2u,0x20u,0xCE63u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE61u,2u,0x20u,0xCE63u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE61u,2u,0x20u,0xCE63u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE63u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE63u,2u,0x10u,0xCE65u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE8Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE8Bu,2u,0x30u,0xCE8Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE8Bu,2u,0x30u,0xCE8Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE8Bu,2u,0x30u,0xCE8Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE8Bu,2u,0x30u,0xCE8Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE8Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE8Du,3u,0x00u,0xCE90u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0040u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE90u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE90u,1u,0x0Au,0xCE91u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE91u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE91u,1u,0xA8u,0xCE92u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE92u:
    if(m==0u&&x==0u&&e==0u){ /* B9 C9 CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE92u,3u,0xCEu,0xCE95u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xCEC9u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE95u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0D 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE95u,3u,0x0Cu,0xCE98u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C0Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE98u:
    if(m==0u&&x==0u&&e==0u){ /* B9 D9 CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE98u,3u,0xCEu,0xCE9Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xCED9u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE9Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE9Bu,3u,0x0Bu,0xCE9Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B53u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CE9Eu:
    if(m==0u&&x==0u&&e==0u){ /* B9 E9 CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CE9Eu,3u,0xCEu,0xCEA1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xCEE9u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEA1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEA1u,3u,0x0Du,0xCEA4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DEBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEA4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEA4u,3u,0x0Cu,0xCEA7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CA5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEA7u:
    if(m==0u&&x==0u&&e==0u){ /* B9 F9 CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEA7u,3u,0xCEu,0xCEAAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xCEF9u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEAAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D A5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEAAu,3u,0x0Bu,0xCEADu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BA5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEADu:
    if(m==0u&&x==0u&&e==0u){ /* B9 09 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEADu,3u,0xCFu,0xCEB0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xCF09u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEB0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D A7 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEB0u,3u,0x0Bu,0xCEB3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BA7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEB3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 19 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEB3u,3u,0xCFu,0xCEB6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xCEB5u))return 0;c->pc=0xCF19u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEB6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEB6u,3u,0x00u,0xCEB9u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEB6u,3u,0x00u,0xCEB9u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEB6u,2u,0x01u,0xCEB8u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEB6u,2u,0x01u,0xCEB8u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEB9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 55 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEB9u,3u,0x0Bu,0xCEBCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B55u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 55 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEB9u,3u,0x0Bu,0xCEBCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B55u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEBCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 4E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEBCu,3u,0x4Eu,0xCEBFu);
      sc_v11_op_lda(r,0x4E20u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 20 4E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEBCu,3u,0x4Eu,0xCEBFu);
      sc_v11_op_lda(r,0x4E20u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEBFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEBFu,3u,0x0Bu,0xCEC2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEBFu,3u,0x0Bu,0xCEC2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEC2u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEC2u,3u,0x0Bu,0xCEC5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEC2u,3u,0x0Bu,0xCEC5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEC5u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 57 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEC5u,3u,0x0Bu,0xCEC8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B57u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 57 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEC5u,3u,0x0Bu,0xCEC8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B57u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CEC8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEC8u,1u,0x60u,0xCEC9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CEC8u,1u,0x60u,0xCEC9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF31u:
    if(m==1u&&x==1u&&e==1u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF31u,1u,0x60u,0xCF32u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF82u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF82u,2u,0x20u,0xCF84u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF84u:
    if(m==1u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF84u,1u,0x8Bu,0xCF85u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF85u:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF85u,2u,0x7Eu,0xCF87u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF87u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF87u,1u,0x48u,0xCF88u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF88u:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF88u,1u,0xABu,0xCF89u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF89u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF89u,2u,0x30u,0xCF8Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF8Bu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF8Bu,3u,0x00u,0xCF8Eu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF8Eu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF8Eu,4u,0x7Fu,0xCF92u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF92u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF92u,3u,0x03u,0xCF95u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF95u:
    if(m==0u&&x==0u&&e==0u){ /* 9D 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF95u,3u,0x80u,0xCF98u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x8000u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF98u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF98u,1u,0xE8u,0xCF99u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF99u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF99u,1u,0xE8u,0xCF9Au);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF9Au:
    if(m==0u&&x==0u&&e==0u){ /* E0 C0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF9Au,3u,0x5Du,0xCF9Du);
      sc_v11_op_compare(r,c->x,0x5DC0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF9Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF9Du,2u,0xEFu,0xCF9Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCF8Eu;}
      if(c->pc!=0xCF9Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCF9Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CF9Fu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CF9Fu,3u,0x00u,0xCFA2u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFA2u:
    if(m==0u&&x==0u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFA2u,1u,0xBBu,0xCFA3u);
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFA3u:
    if(m==0u&&x==0u&&e==0u){ /* B9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFA3u,3u,0x80u,0xCFA6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFA6u:
    if(m==0u&&x==0u&&e==0u){ /* 30 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFA6u,2u,0x5Bu,0xCFA8u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xD003u;}
      if(c->pc!=0xCFA8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFA8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFA8u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFA8u,1u,0x1Au,0xCFA9u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFA9u:
    if(m==0u&&x==0u&&e==0u){ /* D9 02 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFA9u,3u,0x80u,0xCFACu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8002u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFACu:
    if(m==0u&&x==0u&&e==0u){ /* D0 4D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFACu,2u,0x4Du,0xCFAEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCFFBu;}
      if(c->pc!=0xCFAEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFAEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFAEu:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFAEu,1u,0x1Au,0xCFAFu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFAFu:
    if(m==0u&&x==0u&&e==0u){ /* D9 04 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFAFu,3u,0x80u,0xCFB2u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8004u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFB2u:
    if(m==0u&&x==0u&&e==0u){ /* D0 47 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFB2u,2u,0x47u,0xCFB4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCFFBu;}
      if(c->pc!=0xCFB4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFB4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFB4u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFB4u,1u,0x1Au,0xCFB5u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFB5u:
    if(m==0u&&x==0u&&e==0u){ /* D9 F0 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFB5u,3u,0x80u,0xCFB8u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x80F0u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFB8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 41 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFB8u,2u,0x41u,0xCFBAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCFFBu;}
      if(c->pc!=0xCFBAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFBAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFBAu:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFBAu,1u,0x1Au,0xCFBBu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFBBu:
    if(m==0u&&x==0u&&e==0u){ /* D9 F2 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFBBu,3u,0x80u,0xCFBEu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x80F2u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFBEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFBEu,2u,0x3Bu,0xCFC0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCFFBu;}
      if(c->pc!=0xCFC0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFC0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFC0u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFC0u,1u,0x1Au,0xCFC1u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFC1u:
    if(m==0u&&x==0u&&e==0u){ /* D9 F4 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFC1u,3u,0x80u,0xCFC4u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x80F4u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFC4u:
    if(m==0u&&x==0u&&e==0u){ /* D0 35 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFC4u,2u,0x35u,0xCFC6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCFFBu;}
      if(c->pc!=0xCFC6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFC6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFC6u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFC6u,1u,0x1Au,0xCFC7u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFC7u:
    if(m==0u&&x==0u&&e==0u){ /* D9 E0 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFC7u,3u,0x81u,0xCFCAu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x81E0u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFCAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFCAu,2u,0x2Fu,0xCFCCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCFFBu;}
      if(c->pc!=0xCFCCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFCCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFCCu:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFCCu,1u,0x1Au,0xCFCDu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFCDu:
    if(m==0u&&x==0u&&e==0u){ /* D9 E2 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFCDu,3u,0x81u,0xCFD0u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x81E2u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFD0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 29 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFD0u,2u,0x29u,0xCFD2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCFFBu;}
      if(c->pc!=0xCFD2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFD2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFD2u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFD2u,1u,0x1Au,0xCFD3u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFD3u:
    if(m==0u&&x==0u&&e==0u){ /* D9 E4 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFD3u,3u,0x81u,0xCFD6u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x81E4u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFD6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFD6u,2u,0x23u,0xCFD8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCFFBu;}
      if(c->pc!=0xCFD8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFD8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFD8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFD8u,3u,0x80u,0xCFDBu);
      sc_v11_op_lda(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFDBu:
    if(m==0u&&x==0u&&e==0u){ /* 99 02 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFDBu,3u,0x80u,0xCFDEu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x8002u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFDEu:
    if(m==0u&&x==0u&&e==0u){ /* 99 04 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFDEu,3u,0x80u,0xCFE1u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x8004u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFE1u:
    if(m==0u&&x==0u&&e==0u){ /* 99 F0 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFE1u,3u,0x80u,0xCFE4u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x80F0u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFE4u:
    if(m==0u&&x==0u&&e==0u){ /* 99 F2 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFE4u,3u,0x80u,0xCFE7u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x80F2u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFE7u:
    if(m==0u&&x==0u&&e==0u){ /* 99 F4 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFE7u,3u,0x80u,0xCFEAu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x80F4u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFEAu:
    if(m==0u&&x==0u&&e==0u){ /* 99 E0 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFEAu,3u,0x81u,0xCFEDu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x81E0u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFEDu:
    if(m==0u&&x==0u&&e==0u){ /* 99 E2 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFEDu,3u,0x81u,0xCFF0u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x81E2u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFF0u:
    if(m==0u&&x==0u&&e==0u){ /* 99 E4 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFF0u,3u,0x81u,0xCFF3u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x81E4u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFF3u:
    if(m==0u&&x==0u&&e==0u){ /* B9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFF3u,3u,0x80u,0xCFF6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFF6u:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFF6u,3u,0x80u,0xCFF9u);
      sc_v11_op_ora(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFF9u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFF9u,2u,0x03u,0xCFFBu);
      if(1){c->pc=0xCFFEu;}
      if(c->pc!=0xCFFBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xCFFBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFFBu:
    if(m==0u&&x==0u&&e==0u){ /* B9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFFBu,3u,0x80u,0xCFFEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03CFFEu:
    if(m==0u&&x==0u&&e==0u){ /* 9D 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03CFFEu,3u,0x80u,0xD001u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x8000u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
