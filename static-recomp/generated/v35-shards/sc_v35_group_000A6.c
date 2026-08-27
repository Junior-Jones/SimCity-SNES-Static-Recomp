/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000A6(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x029803u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029803u,4u,0x7Eu,0x9807u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 03 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029803u,4u,0x7Eu,0x9807u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029807u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 04 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029807u,4u,0x7Eu,0x980Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2204u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 04 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029807u,4u,0x7Eu,0x980Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2204u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02980Bu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02980Bu,1u,0x60u,0x980Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02980Bu,1u,0x60u,0x980Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02980Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02980Cu,2u,0x20u,0x980Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02980Cu,2u,0x20u,0x980Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02980Cu,2u,0x20u,0x980Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02980Cu,2u,0x20u,0x980Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02980Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02980Eu,3u,0x00u,0x9811u);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02980Eu,3u,0x00u,0x9811u);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029811u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029811u,3u,0x02u,0x9814u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029811u,3u,0x02u,0x9814u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029814u:
    if(m==0u&&x==0u&&e==0u){ /* AD 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029814u,3u,0x0Du,0x9817u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 33 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029814u,3u,0x0Du,0x9817u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D33u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029817u:
    if(m==0u&&x==0u&&e==0u){ /* C9 43 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029817u,3u,0x00u,0x981Au);
      sc_v11_op_compare(r,c->a,0x0043u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 43 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029817u,3u,0x00u,0x981Au);
      sc_v11_op_compare(r,c->a,0x0043u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02981Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02981Au,2u,0x0Au,0x981Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9826u;}
      if(c->pc!=0x981Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x981Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02981Au,2u,0x0Au,0x981Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9826u;}
      if(c->pc!=0x981Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x981Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02981Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 A1 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02981Cu,3u,0x00u,0x981Fu);
      sc_v11_op_compare(r,c->a,0x00A1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 A1 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02981Cu,3u,0x00u,0x981Fu);
      sc_v11_op_compare(r,c->a,0x00A1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02981Fu:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02981Fu,2u,0x08u,0x9821u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9829u;}
      if(c->pc!=0x9821u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9821u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02981Fu,2u,0x08u,0x9821u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9829u;}
      if(c->pc!=0x9821u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9821u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029821u:
    if(m==0u&&x==0u&&e==0u){ /* A9 A1 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029821u,3u,0x00u,0x9824u);
      sc_v11_op_lda(r,0x00A1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 A1 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029821u,3u,0x00u,0x9824u);
      sc_v11_op_lda(r,0x00A1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029824u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029824u,2u,0x03u,0x9826u);
      if(1){c->pc=0x9829u;}
      if(c->pc!=0x9826u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9826u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029824u,2u,0x03u,0x9826u);
      if(1){c->pc=0x9829u;}
      if(c->pc!=0x9826u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9826u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029826u:
    if(m==0u&&x==0u&&e==0u){ /* A9 43 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029826u,3u,0x00u,0x9829u);
      sc_v11_op_lda(r,0x0043u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 43 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029826u,3u,0x00u,0x9829u);
      sc_v11_op_lda(r,0x0043u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029829u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029829u,3u,0x02u,0x982Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029829u,3u,0x02u,0x982Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02982Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02982Cu,3u,0x0Du,0x982Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D35u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 35 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02982Cu,3u,0x0Du,0x982Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D35u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02982Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 31 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02982Fu,3u,0x00u,0x9832u);
      sc_v11_op_compare(r,c->a,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 31 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02982Fu,3u,0x00u,0x9832u);
      sc_v11_op_compare(r,c->a,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029832u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029832u,2u,0x0Au,0x9834u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x983Eu;}
      if(c->pc!=0x9834u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9834u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029832u,2u,0x0Au,0x9834u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x983Eu;}
      if(c->pc!=0x9834u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9834u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029834u:
    if(m==0u&&x==0u&&e==0u){ /* C9 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029834u,3u,0x00u,0x9837u);
      sc_v11_op_compare(r,c->a,0x007Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029834u,3u,0x00u,0x9837u);
      sc_v11_op_compare(r,c->a,0x007Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029837u:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029837u,2u,0x08u,0x9839u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9841u;}
      if(c->pc!=0x9839u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9839u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029837u,2u,0x08u,0x9839u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9841u;}
      if(c->pc!=0x9839u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9839u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029839u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029839u,3u,0x00u,0x983Cu);
      sc_v11_op_lda(r,0x007Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029839u,3u,0x00u,0x983Cu);
      sc_v11_op_lda(r,0x007Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02983Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02983Cu,2u,0x03u,0x983Eu);
      if(1){c->pc=0x9841u;}
      if(c->pc!=0x983Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x983Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02983Cu,2u,0x03u,0x983Eu);
      if(1){c->pc=0x9841u;}
      if(c->pc!=0x983Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x983Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02983Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 31 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02983Eu,3u,0x00u,0x9841u);
      sc_v11_op_lda(r,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 31 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02983Eu,3u,0x00u,0x9841u);
      sc_v11_op_lda(r,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029841u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029841u,3u,0x02u,0x9844u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029841u,3u,0x02u,0x9844u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029844u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029844u,3u,0x00u,0x9847u);
      sc_v11_op_lda(r,0x001Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 1C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029844u,3u,0x00u,0x9847u);
      sc_v11_op_lda(r,0x001Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029847u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029847u,3u,0x02u,0x984Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029847u,3u,0x02u,0x984Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02984Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02984Au,2u,0x20u,0x984Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02984Au,2u,0x20u,0x984Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02984Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02984Cu,3u,0x00u,0x984Fu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02984Cu,3u,0x00u,0x984Fu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02984Fu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02984Fu,2u,0x00u,0x9851u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9851u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02984Fu,2u,0x00u,0x9851u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9851u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029851u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029851u,2u,0x20u,0x9853u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029851u,2u,0x20u,0x9853u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029853u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029853u,2u,0x00u,0x9855u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029853u,2u,0x00u,0x9855u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029855u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 01 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029855u,4u,0x7Eu,0x9859u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2201u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 01 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029855u,4u,0x7Eu,0x9859u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2201u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029859u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029859u,1u,0x60u,0x985Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029859u,1u,0x60u,0x985Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02985Au:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02985Au,2u,0x30u,0x985Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02985Cu:
    if(m==1u&&x==1u&&e==0u){ /* A2 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02985Cu,2u,0x6Cu,0x985Eu);
      sc_v11_op_ldx(r,0x006Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02985Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02985Eu,2u,0xE0u,0x9860u);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029860u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 01 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029860u,4u,0x7Eu,0x9864u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029864u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029864u,1u,0xCAu,0x9865u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029865u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029865u,1u,0xCAu,0x9866u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029866u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029866u,1u,0xCAu,0x9867u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029867u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029867u,1u,0xCAu,0x9868u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029868u:
    if(m==1u&&x==1u&&e==0u){ /* 10 F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029868u,2u,0xF6u,0x986Au);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x9860u;}
      if(c->pc!=0x986Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x986Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02986Au:
    if(m==1u&&x==1u&&e==0u){ /* A2 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02986Au,2u,0x06u,0x986Cu);
      sc_v11_op_ldx(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02986Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02986Cu,2u,0x55u,0x986Eu);
      sc_v11_op_lda(r,0x0055u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02986Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02986Eu,4u,0x7Eu,0x9872u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029872u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029872u,1u,0xCAu,0x9873u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029873u:
    if(m==1u&&x==1u&&e==0u){ /* 10 F9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029873u,2u,0xF9u,0x9875u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x986Eu;}
      if(c->pc!=0x9875u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9875u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029875u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029875u,1u,0x60u,0x9876u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029876u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029876u,2u,0x30u,0x9878u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029876u,2u,0x30u,0x9878u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029878u:
    if(m==1u&&x==1u&&e==0u){ /* A2 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029878u,2u,0x8Cu,0x987Au);
      sc_v11_op_ldx(r,0x008Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02987Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02987Au,2u,0xE0u,0x987Cu);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02987Cu:
    if(m==1u&&x==1u&&e==0u){ /* 9F 01 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02987Cu,4u,0x7Eu,0x9880u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029880u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029880u,1u,0xCAu,0x9881u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029881u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029881u,1u,0xCAu,0x9882u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029882u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029882u,1u,0xCAu,0x9883u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029883u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029883u,1u,0xCAu,0x9884u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029884u:
    if(m==1u&&x==1u&&e==0u){ /* 10 F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029884u,2u,0xF6u,0x9886u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x987Cu;}
      if(c->pc!=0x9886u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9886u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029886u:
    if(m==1u&&x==1u&&e==0u){ /* A2 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029886u,2u,0x08u,0x9888u);
      sc_v11_op_ldx(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029888u:
    if(m==1u&&x==1u&&e==0u){ /* A9 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029888u,2u,0x55u,0x988Au);
      sc_v11_op_lda(r,0x0055u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02988Au:
    if(m==1u&&x==1u&&e==0u){ /* 9F 00 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02988Au,4u,0x7Eu,0x988Eu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02988Eu:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02988Eu,1u,0xCAu,0x988Fu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02988Fu:
    if(m==1u&&x==1u&&e==0u){ /* 10 F9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02988Fu,2u,0xF9u,0x9891u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x988Au;}
      if(c->pc!=0x9891u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9891u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029891u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029891u,1u,0x60u,0x9892u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029892u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029892u,2u,0x30u,0x9894u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029892u,2u,0x30u,0x9894u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029892u,2u,0x30u,0x9894u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029892u,2u,0x30u,0x9894u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029894u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029894u,2u,0x20u,0x9896u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029896u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029896u,2u,0x10u,0x9898u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029898u:
    if(m==1u&&x==0u&&e==0u){ /* A2 81 D3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029898u,3u,0xD3u,0x989Bu);
      sc_v11_op_ldx(r,0xD381u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02989Bu:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02989Bu,2u,0x09u,0x989Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02989Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02989Du,2u,0x0Au,0x989Fu);
      sc_v11_op_lda(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02989Fu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02989Fu,2u,0x0Bu,0x98A1u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298A1u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298A1u,3u,0x00u,0x98A4u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298A4u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298A4u,2u,0x0Eu,0x98A6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298A6u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298A6u,2u,0x20u,0x98A8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298A8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298A8u,3u,0x00u,0x98ABu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298ABu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298ABu,2u,0x00u,0x98ADu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x98ADu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298ADu:
    if(m==0u&&x==0u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298ADu,3u,0x0Du,0x98B0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298B0u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298B0u,1u,0x0Au,0x98B1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298B1u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298B1u,1u,0xAAu,0x98B2u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298B2u:
    if(m==0u&&x==0u&&e==0u){ /* BF 7E AA 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298B2u,4u,0x00u,0x98B6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x00AA7Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298B6u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298B6u,1u,0xAAu,0x98B7u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298B7u:
    if(m==0u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298B7u,1u,0x8Bu,0x98B8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298B8u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298B8u,3u,0xA0u,0x98BBu);
      sc_v11_op_ldy(r,0xA000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298BBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298BBu,3u,0x03u,0x98BEu);
      sc_v11_op_lda(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298BEu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298BEu,3u,0x7Eu,0x98C1u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x98BEu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298C1u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298C1u,1u,0xABu,0x98C2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298C2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298C2u,2u,0x30u,0x98C4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298C4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298C4u,2u,0x20u,0x98C6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298C6u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298C6u,2u,0x10u,0x98C8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298C8u:
    if(m==1u&&x==0u&&e==0u){ /* A2 0B F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298C8u,3u,0xF8u,0x98CBu);
      sc_v11_op_ldx(r,0xF80Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298CBu:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298CBu,2u,0x09u,0x98CDu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298CDu:
    if(m==1u&&x==0u&&e==0u){ /* A9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298CDu,2u,0x0Au,0x98CFu);
      sc_v11_op_lda(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298CFu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298CFu,2u,0x0Bu,0x98D1u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298D1u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298D1u,3u,0x40u,0x98D4u);
      sc_v11_op_ldx(r,0x4000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298D4u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298D4u,2u,0x0Eu,0x98D6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298D6u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298D6u,2u,0x20u,0x98D8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298D8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298D8u,3u,0x00u,0x98DBu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298DBu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298DBu,2u,0x00u,0x98DDu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x98DDu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298DDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 49 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298DDu,3u,0x0Du,0x98E0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298E0u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298E0u,1u,0x0Au,0x98E1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298E1u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298E1u,1u,0xAAu,0x98E2u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298E2u:
    if(m==0u&&x==0u&&e==0u){ /* BF 9A AA 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298E2u,4u,0x00u,0x98E6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x00AA9Au)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298E6u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298E6u,1u,0xAAu,0x98E7u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298E7u:
    if(m==0u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298E7u,1u,0x8Bu,0x98E8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298E8u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298E8u,3u,0x88u,0x98EBu);
      sc_v11_op_ldy(r,0x8800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298EBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298EBu,3u,0x07u,0x98EEu);
      sc_v11_op_lda(r,0x07FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298EEu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298EEu,3u,0x7Eu,0x98F1u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x98EEu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298F1u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298F1u,1u,0xABu,0x98F2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298F2u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298F2u,1u,0x60u,0x98F3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298F3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298F3u,2u,0x30u,0x98F5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298F3u,2u,0x30u,0x98F5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298F3u,2u,0x30u,0x98F5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298F3u,2u,0x30u,0x98F5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298F5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298F5u,2u,0x20u,0x98F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298F7u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298F7u,2u,0x10u,0x98F9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298F9u:
    if(m==1u&&x==0u&&e==0u){ /* A2 E1 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298F9u,3u,0xFCu,0x98FCu);
      sc_v11_op_ldx(r,0xFCE1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298FCu:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298FCu,2u,0x09u,0x98FEu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0298FEu:
    if(m==1u&&x==0u&&e==0u){ /* A9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0298FEu,2u,0x0Au,0x9900u);
      sc_v11_op_lda(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029900u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029900u,2u,0x0Bu,0x9902u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029902u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029902u,3u,0x00u,0x9905u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029905u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029905u,2u,0x0Eu,0x9907u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029907u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029907u,2u,0x20u,0x9909u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029909u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029909u,3u,0x00u,0x990Cu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02990Cu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02990Cu,2u,0x00u,0x990Eu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x990Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02990Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02990Eu,1u,0x60u,0x990Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02990Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02990Fu,1u,0x60u,0x9910u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02990Fu,1u,0x60u,0x9910u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02990Fu,1u,0x60u,0x9910u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02990Fu,1u,0x60u,0x9910u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029910u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029910u,2u,0x20u,0x9912u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029910u,2u,0x20u,0x9912u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029910u,2u,0x20u,0x9912u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029910u,2u,0x20u,0x9912u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029912u:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029912u,3u,0x00u,0x9915u);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029912u,3u,0x00u,0x9915u);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029915u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029915u,3u,0x02u,0x9918u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029915u,3u,0x02u,0x9918u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029918u:
    if(m==0u&&x==0u&&e==0u){ /* A9 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029918u,3u,0x00u,0x991Bu);
      sc_v11_op_lda(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029918u,3u,0x00u,0x991Bu);
      sc_v11_op_lda(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02991Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02991Bu,3u,0x02u,0x991Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02991Bu,3u,0x02u,0x991Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02991Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02991Eu,3u,0x00u,0x9921u);
      sc_v11_op_lda(r,0x00A9u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02991Eu,3u,0x00u,0x9921u);
      sc_v11_op_lda(r,0x00A9u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029921u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029921u,3u,0x02u,0x9924u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029921u,3u,0x02u,0x9924u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029924u:
    if(m==0u&&x==0u&&e==0u){ /* A9 21 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029924u,3u,0x00u,0x9927u);
      sc_v11_op_lda(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 21 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029924u,3u,0x00u,0x9927u);
      sc_v11_op_lda(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029927u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029927u,3u,0x02u,0x992Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029927u,3u,0x02u,0x992Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02992Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02992Au,2u,0x20u,0x992Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02992Au,2u,0x20u,0x992Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02992Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02992Cu,3u,0x00u,0x992Fu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02992Cu,3u,0x00u,0x992Fu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02992Fu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02992Fu,2u,0x00u,0x9931u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9931u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02992Fu,2u,0x00u,0x9931u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9931u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029931u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029931u,2u,0x20u,0x9933u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029931u,2u,0x20u,0x9933u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029933u:
    if(m==1u&&x==0u&&e==0u){ /* A9 AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029933u,2u,0xAAu,0x9935u);
      sc_v11_op_lda(r,0x00AAu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029933u,2u,0xAAu,0x9935u);
      sc_v11_op_lda(r,0x00AAu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029935u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 01 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029935u,4u,0x7Eu,0x9939u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2201u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 01 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029935u,4u,0x7Eu,0x9939u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2201u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029939u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029939u,4u,0x7Eu,0x993Du);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 02 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029939u,4u,0x7Eu,0x993Du);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02993Du:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02993Du,2u,0x30u,0x993Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02993Du,2u,0x30u,0x993Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02993Fu:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02993Fu,2u,0x00u,0x9941u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029941u:
    if(m==1u&&x==1u&&e==0u){ /* A2 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029941u,2u,0x18u,0x9943u);
      sc_v11_op_ldx(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029943u:
    if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029943u,1u,0xDAu,0x9944u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029943u,1u,0xDAu,0x9944u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029944u:
    if(m==0u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029944u,1u,0x5Au,0x9945u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029944u,1u,0x5Au,0x9945u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029945u:
    if(m==0u&&x==1u&&e==0u){ /* B9 1F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029945u,3u,0x0Bu,0x9948u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0B1Fu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B9 1F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029945u,3u,0x0Bu,0x9948u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0B1Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029948u:
    if(m==0u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029948u,3u,0xA0u,0x994Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x994Au))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029948u,3u,0xA0u,0x994Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x994Au))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02994Bu:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Bu,1u,0x7Au,0x994Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Bu,1u,0x7Au,0x994Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Bu,1u,0x7Au,0x994Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Bu,1u,0x7Au,0x994Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02994Cu:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Cu,1u,0xFAu,0x994Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Cu,1u,0xFAu,0x994Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Cu,1u,0xFAu,0x994Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Cu,1u,0xFAu,0x994Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02994Du:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Du,1u,0xE8u,0x994Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Du,1u,0xE8u,0x994Eu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Du,1u,0xE8u,0x994Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Du,1u,0xE8u,0x994Eu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02994Eu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Eu,1u,0xC8u,0x994Fu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Eu,1u,0xC8u,0x994Fu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Eu,1u,0xC8u,0x994Fu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Eu,1u,0xC8u,0x994Fu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02994Fu:
    if(m==0u&&x==0u&&e==0u){ /* C0 08 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Fu,3u,0x90u,0x9952u);
      sc_v11_op_compare(r,c->y,0x9008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Fu,2u,0x08u,0x9951u);
      sc_v11_op_compare(r,c->y,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C0 08 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Fu,3u,0x90u,0x9952u);
      sc_v11_op_compare(r,c->y,0x9008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02994Fu,2u,0x08u,0x9951u);
      sc_v11_op_compare(r,c->y,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029951u:
    if(m==0u&&x==1u&&e==0u){ /* 90 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029951u,2u,0xF0u,0x9953u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9943u;}
      if(c->pc!=0x9953u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9953u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029951u,2u,0xF0u,0x9953u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9943u;}
      if(c->pc!=0x9953u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9953u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029952u:
    if(m==0u&&x==0u&&e==0u){ /* F0 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029952u,2u,0x22u,0x9954u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9976u;}
      if(c->pc!=0x9954u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9954u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029952u,2u,0x22u,0x9954u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9976u;}
      if(c->pc!=0x9954u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9954u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029953u:
    if(m==0u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029953u,4u,0x01u,0x9957u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9956u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029953u,4u,0x01u,0x9957u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9956u))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029954u:
    if(m==0u&&x==0u&&e==0u){ /* C4 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029954u,2u,0xC8u,0x9956u);
      sc_v11_op_compare(r,c->y,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC8u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C4 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029954u,2u,0xC8u,0x9956u);
      sc_v11_op_compare(r,c->y,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC8u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029957u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029957u,1u,0x60u,0x9958u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029957u,1u,0x60u,0x9958u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029957u,1u,0x60u,0x9958u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029957u,1u,0x60u,0x9958u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029958u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029958u,2u,0x30u,0x995Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02995Au:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02995Au,3u,0x01u,0x995Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02995Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 A8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02995Du,3u,0x00u,0x9960u);
      sc_v11_op_compare(r,c->a,0x00A8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029960u:
    if(m==0u&&x==0u&&e==0u){ /* 90 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029960u,2u,0x14u,0x9962u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9976u;}
      if(c->pc!=0x9962u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9962u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029962u:
    if(m==0u&&x==0u&&e==0u){ /* C9 B8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029962u,3u,0x00u,0x9965u);
      sc_v11_op_compare(r,c->a,0x00B8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029965u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029965u,2u,0x0Fu,0x9967u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9976u;}
      if(c->pc!=0x9967u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9967u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029967u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029967u,3u,0x01u,0x996Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02996Au:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02996Au,1u,0x38u,0x996Bu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02996Bu:
    if(m==0u&&x==0u&&e==0u){ /* E9 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02996Bu,3u,0x00u,0x996Eu);
      sc_v11_op_sbc(r,0x0040u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02996Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02996Eu,2u,0x06u,0x9970u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9976u;}
      if(c->pc!=0x9970u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9970u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029970u:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029970u,3u,0x00u,0x9973u);
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029973u:
    if(m==0u&&x==0u&&e==0u){ /* B0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029973u,2u,0x01u,0x9975u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9976u;}
      if(c->pc!=0x9975u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9975u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029975u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029975u,1u,0x60u,0x9976u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029976u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029976u,1u,0x38u,0x9977u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029976u,1u,0x38u,0x9977u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029977u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029977u,1u,0x60u,0x9978u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029977u,1u,0x60u,0x9978u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029978u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029978u,2u,0x30u,0x997Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029978u,2u,0x30u,0x997Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029978u,2u,0x30u,0x997Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029978u,2u,0x30u,0x997Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02997Au:
    if(m==0u&&x==0u&&e==0u){ /* A2 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02997Au,3u,0xFFu,0x997Du);
      sc_v11_op_ldx(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02997Du:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02997Du,3u,0x01u,0x9980u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029980u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029980u,1u,0x38u,0x9981u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029981u:
    if(m==0u&&x==0u&&e==0u){ /* E9 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029981u,3u,0x00u,0x9984u);
      sc_v11_op_sbc(r,0x0040u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029984u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029984u,1u,0xE8u,0x9985u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029985u:
    if(m==0u&&x==0u&&e==0u){ /* E9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029985u,3u,0x00u,0x9988u);
      sc_v11_op_sbc(r,0x0010u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029988u:
    if(m==0u&&x==0u&&e==0u){ /* B0 FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029988u,2u,0xFAu,0x998Au);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9984u;}
      if(c->pc!=0x998Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x998Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02998Au:
    if(m==0u&&x==0u&&e==0u){ /* 8E AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02998Au,3u,0x0Du,0x998Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DAFu),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02998Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02998Du,2u,0x30u,0x998Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02998Fu:
    if(m==1u&&x==1u&&e==0u){ /* E0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02998Fu,2u,0x06u,0x9991u);
      sc_v11_op_compare(r,c->x,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029991u:
    if(m==1u&&x==1u&&e==0u){ /* 90 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029991u,2u,0x1Du,0x9993u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x99B0u;}
      if(c->pc!=0x9993u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9993u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029993u:
    if(m==1u&&x==1u&&e==0u){ /* BD 1F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029993u,3u,0x0Bu,0x9996u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0B1Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029996u:
    if(m==1u&&x==1u&&e==0u){ /* D0 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029996u,2u,0x3Bu,0x9998u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x99D3u;}
      if(c->pc!=0x9998u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9998u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029998u:
    if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029998u,1u,0x08u,0x9999u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029999u:
    if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029999u,4u,0x00u,0x999Du);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x999Cu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02999Du:
    if(m==0u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02999Du,2u,0x01u,0x999Fu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x999Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02999Du,2u,0x01u,0x999Fu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x999Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02999Du,2u,0x01u,0x999Fu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x999Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02999Du,2u,0x01u,0x999Fu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x999Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02999Fu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02999Fu,1u,0x28u,0x99A0u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02999Fu,1u,0x28u,0x99A0u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02999Fu,1u,0x28u,0x99A0u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02999Fu,1u,0x28u,0x99A0u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299A0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299A0u,2u,0x30u,0x99A2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299A0u,2u,0x30u,0x99A2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299A0u,2u,0x30u,0x99A2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299A0u,2u,0x30u,0x99A2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299A2u:
    if(m==1u&&x==1u&&e==0u){ /* AD 25 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299A2u,3u,0x0Bu,0x99A5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B25u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299A5u:
    if(m==1u&&x==1u&&e==0u){ /* AC 26 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299A5u,3u,0x0Bu,0x99A8u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B26u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299A8u:
    if(m==1u&&x==1u&&e==0u){ /* 8C 25 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299A8u,3u,0x0Bu,0x99ABu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B25u),(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299ABu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 26 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299ABu,3u,0x0Bu,0x99AEu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B26u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299AEu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299AEu,1u,0x18u,0x99AFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299AFu:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299AFu,1u,0x60u,0x99B0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299B0u:
    if(m==1u&&x==1u&&e==0u){ /* BD 1F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299B0u,3u,0x0Bu,0x99B3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0B1Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299B3u:
    if(m==1u&&x==1u&&e==0u){ /* F0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299B3u,2u,0x0Fu,0x99B5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x99C4u;}
      if(c->pc!=0x99B5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x99B5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299B5u:
    if(m==1u&&x==1u&&e==0u){ /* 49 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299B5u,2u,0x01u,0x99B7u);
      sc_v11_op_eor(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299B7u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 1F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299B7u,3u,0x0Bu,0x99BAu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0B1Fu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299BAu:
    if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299BAu,1u,0x08u,0x99BBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299BBu:
    if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299BBu,4u,0x00u,0x99BFu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x99BEu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299BFu:
    if(m==0u&&x==0u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299BFu,2u,0x06u,0x99C1u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x06u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299BFu,2u,0x06u,0x99C1u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x06u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299BFu,2u,0x06u,0x99C1u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x06u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299BFu,2u,0x06u,0x99C1u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x06u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299C1u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C1u,1u,0x28u,0x99C2u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C1u,1u,0x28u,0x99C2u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C1u,1u,0x28u,0x99C2u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C1u,1u,0x28u,0x99C2u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299C2u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C2u,1u,0x38u,0x99C3u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C2u,1u,0x38u,0x99C3u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C2u,1u,0x38u,0x99C3u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C2u,1u,0x38u,0x99C3u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299C3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C3u,1u,0x60u,0x99C4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C3u,1u,0x60u,0x99C4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C3u,1u,0x60u,0x99C4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C3u,1u,0x60u,0x99C4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299C4u:
    if(m==1u&&x==1u&&e==0u){ /* 49 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C4u,2u,0x01u,0x99C6u);
      sc_v11_op_eor(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299C6u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 1F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C6u,3u,0x0Bu,0x99C9u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0B1Fu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299C9u:
    if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299C9u,1u,0x08u,0x99CAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299CAu:
    if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299CAu,4u,0x00u,0x99CEu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x99CDu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299CEu:
    if(m==0u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299CEu,2u,0x01u,0x99D0u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x99D0u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299CEu,2u,0x01u,0x99D0u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x99D0u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299CEu,2u,0x01u,0x99D0u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x99D0u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299CEu,2u,0x01u,0x99D0u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x99D0u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299D0u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D0u,1u,0x28u,0x99D1u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D0u,1u,0x28u,0x99D1u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D0u,1u,0x28u,0x99D1u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D0u,1u,0x28u,0x99D1u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299D1u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D1u,1u,0x18u,0x99D2u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D1u,1u,0x18u,0x99D2u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D1u,1u,0x18u,0x99D2u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D1u,1u,0x18u,0x99D2u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299D2u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D2u,1u,0x60u,0x99D3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D2u,1u,0x60u,0x99D3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D2u,1u,0x60u,0x99D3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D2u,1u,0x60u,0x99D3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299D3u:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D3u,1u,0x38u,0x99D4u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299D4u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D4u,1u,0x60u,0x99D5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299D5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D5u,2u,0x30u,0x99D7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D5u,2u,0x30u,0x99D7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D5u,2u,0x30u,0x99D7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D5u,2u,0x30u,0x99D7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299D7u:
    if(m==1u&&x==1u&&e==0u){ /* AC AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299D7u,3u,0x0Du,0x99DAu);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DAFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299DAu:
    if(m==1u&&x==1u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299DAu,1u,0x98u,0x99DBu);
      c->a=(uint16_t)((c->a&0xff00u)|(c->y&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299DBu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299DBu,1u,0x18u,0x99DCu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299DCu:
    if(m==1u&&x==1u&&e==0u){ /* 69 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299DCu,2u,0x18u,0x99DEu);
      sc_v11_op_adc(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299DEu:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299DEu,1u,0xAAu,0x99DFu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299DFu:
    if(m==1u&&x==1u&&e==0u){ /* B9 1F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299DFu,3u,0x0Bu,0x99E2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0B1Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299E2u:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299E2u,3u,0xA0u,0x99E5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x99E4u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299E5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299E5u,2u,0x30u,0x99E7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299E5u,2u,0x30u,0x99E7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299E5u,2u,0x30u,0x99E7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299E5u,2u,0x30u,0x99E7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299E7u:
    if(m==1u&&x==1u&&e==0u){ /* AD AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299E7u,3u,0x0Du,0x99EAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DAFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299EAu:
    if(m==1u&&x==1u&&e==0u){ /* C9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299EAu,2u,0x06u,0x99ECu);
      sc_v11_op_compare(r,c->a,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299ECu:
    if(m==1u&&x==1u&&e==0u){ /* 90 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299ECu,2u,0x0Bu,0x99EEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x99F9u;}
      if(c->pc!=0x99EEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x99EEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299EEu:
    if(m==1u&&x==1u&&e==0u){ /* 49 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299EEu,2u,0x01u,0x99F0u);
      sc_v11_op_eor(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299F0u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299F0u,1u,0x18u,0x99F1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299F1u:
    if(m==1u&&x==1u&&e==0u){ /* 69 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299F1u,2u,0x18u,0x99F3u);
      sc_v11_op_adc(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299F3u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299F3u,1u,0xAAu,0x99F4u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299F4u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299F4u,2u,0x00u,0x99F6u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299F6u:
    if(m==1u&&x==1u&&e==0u){ /* 20 CB A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299F6u,3u,0xA0u,0x99F9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x99F8u))return 0;c->pc=0xA0CBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299F9u:
    if(m==0u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299F9u,4u,0x01u,0x99FDu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x99FCu))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299F9u,4u,0x01u,0x99FDu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x99FCu))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299F9u,4u,0x01u,0x99FDu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x99FCu))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 C4 C8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299F9u,4u,0x01u,0x99FDu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x99FCu))return 0;
      c->pbr=0x01u;c->pc=0xC8C4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299FDu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299FDu,1u,0x60u,0x99FEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299FDu,1u,0x60u,0x99FEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299FDu,1u,0x60u,0x99FEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299FDu,1u,0x60u,0x99FEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0299FEu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299FEu,2u,0x20u,0x9A00u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299FEu,2u,0x20u,0x9A00u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0299FEu,2u,0x20u,0x9A00u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A00u:
    if(m==1u&&x==0u&&e==0u){ /* AF 02 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A00u,4u,0x7Eu,0x9A04u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2202u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 02 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A00u,4u,0x7Eu,0x9A04u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2202u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A04u:
    if(m==1u&&x==0u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A04u,2u,0x03u,0x9A06u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A04u,2u,0x03u,0x9A06u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A06u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A06u,4u,0x7Eu,0x9A0Au);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 02 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A06u,4u,0x7Eu,0x9A0Au);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A0Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A0Au,2u,0x00u,0x9A0Cu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A0Au,2u,0x00u,0x9A0Cu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A0Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A0Cu,4u,0x7Eu,0x9A10u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 03 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A0Cu,4u,0x7Eu,0x9A10u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A10u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 04 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A10u,4u,0x7Eu,0x9A14u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2204u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 04 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A10u,4u,0x7Eu,0x9A14u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2204u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A14u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 05 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A14u,4u,0x7Eu,0x9A18u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2205u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 05 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A14u,4u,0x7Eu,0x9A18u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2205u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A18u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 06 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A18u,4u,0x7Eu,0x9A1Cu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2206u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 06 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A18u,4u,0x7Eu,0x9A1Cu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2206u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A1Cu:
    if(m==1u&&x==0u&&e==0u){ /* AF 07 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A1Cu,4u,0x7Eu,0x9A20u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2207u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 07 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A1Cu,4u,0x7Eu,0x9A20u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2207u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A20u:
    if(m==1u&&x==0u&&e==0u){ /* 29 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A20u,2u,0xFCu,0x9A22u);
      sc_v11_op_and(r,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A20u,2u,0xFCu,0x9A22u);
      sc_v11_op_and(r,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A22u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 07 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A22u,4u,0x7Eu,0x9A26u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2207u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 07 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A22u,4u,0x7Eu,0x9A26u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2207u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A26u:
    if(m==1u&&x==0u&&e==0u){ /* AD 25 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A26u,3u,0x0Bu,0x9A29u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B25u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 25 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A26u,3u,0x0Bu,0x9A29u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B25u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A29u:
    if(m==1u&&x==0u&&e==0u){ /* F0 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A29u,2u,0x6Du,0x9A2Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9A98u;}
      if(c->pc!=0x9A2Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9A2Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A29u,2u,0x6Du,0x9A2Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9A98u;}
      if(c->pc!=0x9A2Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9A2Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A2Bu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A2Bu,2u,0x20u,0x9A2Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A2Bu,2u,0x20u,0x9A2Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A2Du:
    if(m==0u&&x==0u&&e==0u){ /* AD A9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A2Du,3u,0x0Du,0x9A30u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DA9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD A9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A2Du,3u,0x0Du,0x9A30u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DA9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A30u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A30u,2u,0x79u,0x9A32u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A30u,2u,0x79u,0x9A32u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A32u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A32u,1u,0x4Au,0x9A33u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A32u,1u,0x4Au,0x9A33u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A33u:
    if(m==0u&&x==0u&&e==0u){ /* A9 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A33u,3u,0x00u,0x9A36u);
      sc_v11_op_lda(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A33u,3u,0x00u,0x9A36u);
      sc_v11_op_lda(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A36u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A36u,2u,0x05u,0x9A38u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9A3Du;}
      if(c->pc!=0x9A38u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9A38u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A36u,2u,0x05u,0x9A38u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9A3Du;}
      if(c->pc!=0x9A38u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9A38u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A38u:
    if(m==0u&&x==0u&&e==0u){ /* C6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A38u,2u,0x79u,0x9A3Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A38u,2u,0x79u,0x9A3Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A3Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A3Au,3u,0x00u,0x9A3Du);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A3Au,3u,0x00u,0x9A3Du);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A3Du:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A3Du,1u,0x38u,0x9A3Eu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A3Du,1u,0x38u,0x9A3Eu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A3Eu:
    if(m==0u&&x==0u&&e==0u){ /* ED AD 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A3Eu,3u,0x0Du,0x9A41u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DADu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* ED AD 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A3Eu,3u,0x0Du,0x9A41u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DADu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A41u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A41u,3u,0x00u,0x9A44u);
      sc_v11_op_compare(r,c->a,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A41u,3u,0x00u,0x9A44u);
      sc_v11_op_compare(r,c->a,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A44u:
    if(m==0u&&x==0u&&e==0u){ /* B0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A44u,2u,0x07u,0x9A46u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9A4Du;}
      if(c->pc!=0x9A46u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9A46u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A44u,2u,0x07u,0x9A46u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9A4Du;}
      if(c->pc!=0x9A46u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9A46u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A46u:
    if(m==0u&&x==0u&&e==0u){ /* 69 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A46u,3u,0x00u,0x9A49u);
      sc_v11_op_adc(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A46u,3u,0x00u,0x9A49u);
      sc_v11_op_adc(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A49u:
    if(m==0u&&x==0u&&e==0u){ /* E6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A49u,2u,0x79u,0x9A4Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A49u,2u,0x79u,0x9A4Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A4Bu:
    if(m==0u&&x==0u&&e==0u){ /* E6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A4Bu,2u,0x79u,0x9A4Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A4Bu,2u,0x79u,0x9A4Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A4Du:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A4Du,1u,0x48u,0x9A4Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A4Du,1u,0x48u,0x9A4Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A4Eu:
    if(m==0u&&x==0u&&e==0u){ /* E6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A4Eu,2u,0x79u,0x9A50u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A4Eu,2u,0x79u,0x9A50u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A50u:
    if(m==0u&&x==0u&&e==0u){ /* E6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A50u,2u,0x79u,0x9A52u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A50u,2u,0x79u,0x9A52u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A52u:
    if(m==0u&&x==0u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A52u,2u,0x7Cu,0x9A54u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A52u,2u,0x7Cu,0x9A54u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A54u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A54u,3u,0xB3u,0x9A57u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A56u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A54u,3u,0xB3u,0x9A57u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A56u))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A57u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A57u,2u,0x20u,0x9A59u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A57u,2u,0x20u,0x9A59u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A57u,2u,0x20u,0x9A59u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A57u,2u,0x20u,0x9A59u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A59u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A59u,1u,0x68u,0x9A5Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A59u,1u,0x68u,0x9A5Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A5Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A5Au,2u,0x79u,0x9A5Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A5Au,2u,0x79u,0x9A5Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A5Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A5Cu,2u,0x30u,0x9A5Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A5Cu,2u,0x30u,0x9A5Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A5Eu:
    if(m==1u&&x==1u&&e==0u){ /* A2 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A5Eu,2u,0x24u,0x9A60u);
      sc_v11_op_ldx(r,0x0024u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A60u:
    if(m==1u&&x==1u&&e==0u){ /* 20 95 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A60u,3u,0x9Bu,0x9A63u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A62u))return 0;c->pc=0x9B95u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A63u:
    if(m==0u&&x==0u&&e==0u){ /* 20 33 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A63u,3u,0x9Bu,0x9A66u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A65u))return 0;c->pc=0x9B33u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 33 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A63u,3u,0x9Bu,0x9A66u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A65u))return 0;c->pc=0x9B33u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 33 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A63u,3u,0x9Bu,0x9A66u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A65u))return 0;c->pc=0x9B33u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 33 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A63u,3u,0x9Bu,0x9A66u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9A65u))return 0;c->pc=0x9B33u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A66u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A66u,2u,0x30u,0x9A68u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A66u,2u,0x30u,0x9A68u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A66u,2u,0x30u,0x9A68u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A66u,2u,0x30u,0x9A68u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A68u:
    if(m==1u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A68u,1u,0xDAu,0x9A69u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A69u:
    if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A69u,1u,0x8Bu,0x9A6Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A6Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A6Au,2u,0x02u,0x9A6Cu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A6Cu:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A6Cu,1u,0x48u,0x9A6Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A6Du:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A6Du,1u,0xABu,0x9A6Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A6Eu:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A6Eu,2u,0x00u,0x9A70u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A70u:
    if(m==1u&&x==1u&&e==0u){ /* BD 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A70u,3u,0x0Du,0x9A73u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0D95u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A73u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A73u,1u,0x18u,0x9A74u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A74u:
    if(m==1u&&x==1u&&e==0u){ /* 7D 30 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A74u,3u,0x9Bu,0x9A77u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x9B30u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A77u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A77u,3u,0x0Du,0x9A7Au);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0D95u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A7Au:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A7Au,1u,0x38u,0x9A7Bu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A7Bu:
    if(m==1u&&x==1u&&e==0u){ /* E9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A7Bu,2u,0x0Au,0x9A7Du);
      sc_v11_op_sbc(r,0x000Au,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A7Du:
    if(m==1u&&x==1u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A7Du,2u,0x06u,0x9A7Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9A85u;}
      if(c->pc!=0x9A7Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9A7Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A7Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A7Fu,3u,0x0Du,0x9A82u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0D95u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A82u:
    if(m==1u&&x==1u&&e==0u){ /* FE 96 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A82u,3u,0x0Du,0x9A85u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x0D96u),8u,1);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A85u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A85u,1u,0xE8u,0x9A86u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A86u:
    if(m==1u&&x==1u&&e==0u){ /* E0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A86u,2u,0x03u,0x9A88u);
      sc_v11_op_compare(r,c->x,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A88u:
    if(m==1u&&x==1u&&e==0u){ /* 90 E6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A88u,2u,0xE6u,0x9A8Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9A70u;}
      if(c->pc!=0x9A8Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9A8Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A8Au:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A8Au,1u,0xABu,0x9A8Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A8Bu:
    if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A8Bu,1u,0xFAu,0x9A8Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A8Cu:
    if(m==1u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A8Cu,2u,0x79u,0x9A8Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A8Eu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A8Eu,1u,0x18u,0x9A8Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A8Fu:
    if(m==1u&&x==1u&&e==0u){ /* 69 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A8Fu,2u,0x18u,0x9A91u);
      sc_v11_op_adc(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A91u:
    if(m==1u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A91u,2u,0x79u,0x9A93u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A93u:
    if(m==1u&&x==1u&&e==0u){ /* E0 74 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A93u,2u,0x74u,0x9A95u);
      sc_v11_op_compare(r,c->x,0x0074u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A95u:
    if(m==1u&&x==1u&&e==0u){ /* 90 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A95u,2u,0xC9u,0x9A97u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9A60u;}
      if(c->pc!=0x9A97u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9A97u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A97u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A97u,1u,0x60u,0x9A98u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A98u:
    if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A98u,2u,0x10u,0x9A9Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A98u,2u,0x10u,0x9A9Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A9Au:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A9Au,2u,0x20u,0x9A9Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A9Cu:
    if(m==0u&&x==1u&&e==0u){ /* AD AB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A9Cu,3u,0x0Du,0x9A9Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DABu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029A9Fu:
    if(m==0u&&x==1u&&e==0u){ /* A2 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029A9Fu,2u,0x0Au,0x9AA1u);
      sc_v11_op_ldx(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AA1u:
    if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AA1u,2u,0x10u,0x9AA3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AA3u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AA3u,2u,0x20u,0x9AA5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AA5u:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AA5u,1u,0x48u,0x9AA6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AA6u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AA6u,2u,0x20u,0x9AA8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AA8u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AA8u,2u,0xB3u,0x9AAAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AAAu:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AAAu,2u,0x7Fu,0x9AACu);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AACu:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AACu,2u,0xB1u,0x9AAEu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AAEu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AAEu,2u,0x20u,0x9AB0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AB0u:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AB0u,1u,0x68u,0x9AB1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AB1u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 04 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AB1u,3u,0x42u,0x9AB4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x4204u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AB4u:
    if(m==0u&&x==1u&&e==0u){ /* 8E 06 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AB4u,3u,0x42u,0x9AB7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4206u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AB7u:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AB7u,1u,0x48u,0x9AB8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AB8u:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AB8u,1u,0x68u,0x9AB9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AB9u:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AB9u,1u,0x48u,0x9ABAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029ABAu:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029ABAu,1u,0x68u,0x9ABBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029ABBu:
    if(m==0u&&x==1u&&e==0u){ /* EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029ABBu,1u,0xEAu,0x9ABCu);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029ABCu:
    if(m==0u&&x==1u&&e==0u){ /* EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029ABCu,1u,0xEAu,0x9ABDu);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029ABDu:
    if(m==0u&&x==1u&&e==0u){ /* AD 16 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029ABDu,3u,0x42u,0x9AC0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x4216u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AC0u:
    if(m==0u&&x==1u&&e==0u){ /* AC 14 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AC0u,3u,0x42u,0x9AC3u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x4214u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AC3u:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AC3u,1u,0x48u,0x9AC4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AC4u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AC4u,2u,0x20u,0x9AC6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AC6u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AC6u,2u,0xB3u,0x9AC8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AC8u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AC8u,2u,0xB1u,0x9ACAu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029ACAu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029ACAu,2u,0x20u,0x9ACCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029ACCu:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029ACCu,1u,0x68u,0x9ACDu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029ACDu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029ACDu,2u,0x20u,0x9ACFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029ACFu:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029ACFu,3u,0x00u,0x9AD2u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AD2u:
    if(m==0u&&x==1u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AD2u,2u,0x7Cu,0x9AD4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AD4u:
    if(m==0u&&x==1u&&e==0u){ /* AD AB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AD4u,3u,0x0Du,0x9AD7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DABu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AD7u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AD7u,1u,0x18u,0x9AD8u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AD8u:
    if(m==0u&&x==1u&&e==0u){ /* 69 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AD8u,3u,0x00u,0x9ADBu);
      sc_v11_op_adc(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029ADBu:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029ADBu,1u,0x38u,0x9ADCu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029ADCu:
    if(m==0u&&x==1u&&e==0u){ /* E5 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029ADCu,2u,0x7Cu,0x9ADEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029ADEu:
    if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029ADEu,2u,0x79u,0x9AE0u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AE0u:
    if(m==0u&&x==1u&&e==0u){ /* A9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AE0u,3u,0x00u,0x9AE3u);
      sc_v11_op_lda(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AE3u:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AE3u,1u,0x38u,0x9AE4u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AE4u:
    if(m==0u&&x==1u&&e==0u){ /* E5 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AE4u,2u,0x7Cu,0x9AE6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AE6u:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AE6u,1u,0x48u,0x9AE7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AE7u:
    if(m==0u&&x==1u&&e==0u){ /* 64 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AE7u,2u,0x7Cu,0x9AE9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AE9u:
    if(m==0u&&x==1u&&e==0u){ /* 20 51 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AE9u,3u,0xB3u,0x9AECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9AEBu))return 0;c->pc=0xB351u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AECu:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AECu,2u,0x10u,0x9AEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AECu,2u,0x10u,0x9AEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AECu,2u,0x10u,0x9AEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AECu,2u,0x10u,0x9AEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AEEu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AEEu,2u,0x20u,0x9AF0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AEEu,2u,0x20u,0x9AF0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AF0u:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AF0u,1u,0x68u,0x9AF1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AF1u:
    if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AF1u,2u,0x79u,0x9AF3u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AF3u:
    if(m==0u&&x==1u&&e==0u){ /* A2 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AF3u,2u,0x24u,0x9AF5u);
      sc_v11_op_ldx(r,0x0024u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AF5u:
    if(m==0u&&x==1u&&e==0u){ /* 20 95 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AF5u,3u,0x9Bu,0x9AF8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9AF7u))return 0;c->pc=0x9B95u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 95 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AF5u,3u,0x9Bu,0x9AF8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9AF7u))return 0;c->pc=0x9B95u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AF8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 33 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AF8u,3u,0x9Bu,0x9AFBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9AFAu))return 0;c->pc=0x9B33u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 33 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AF8u,3u,0x9Bu,0x9AFBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9AFAu))return 0;c->pc=0x9B33u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 33 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AF8u,3u,0x9Bu,0x9AFBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9AFAu))return 0;c->pc=0x9B33u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 33 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AF8u,3u,0x9Bu,0x9AFBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9AFAu))return 0;c->pc=0x9B33u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AFBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AFBu,2u,0x30u,0x9AFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AFBu,2u,0x30u,0x9AFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AFBu,2u,0x30u,0x9AFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AFBu,2u,0x30u,0x9AFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AFDu:
    if(m==1u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AFDu,1u,0xDAu,0x9AFEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AFEu:
    if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AFEu,1u,0x8Bu,0x9AFFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029AFFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029AFFu,2u,0x02u,0x9B01u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B01u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B01u,1u,0x48u,0x9B02u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B02u:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B02u,1u,0xABu,0x9B03u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B03u:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B03u,2u,0x00u,0x9B05u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B05u:
    if(m==1u&&x==1u&&e==0u){ /* BD 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B05u,3u,0x0Du,0x9B08u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0D95u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B08u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B08u,1u,0x18u,0x9B09u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B09u:
    if(m==1u&&x==1u&&e==0u){ /* 7D 2D 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B09u,3u,0x9Bu,0x9B0Cu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x9B2Du)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B0Cu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B0Cu,3u,0x0Du,0x9B0Fu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0D95u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B0Fu:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B0Fu,1u,0x38u,0x9B10u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B10u:
    if(m==1u&&x==1u&&e==0u){ /* E9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B10u,2u,0x0Au,0x9B12u);
      sc_v11_op_sbc(r,0x000Au,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B12u:
    if(m==1u&&x==1u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B12u,2u,0x06u,0x9B14u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9B1Au;}
      if(c->pc!=0x9B14u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B14u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B14u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B14u,3u,0x0Du,0x9B17u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0D95u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B17u:
    if(m==1u&&x==1u&&e==0u){ /* FE 96 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B17u,3u,0x0Du,0x9B1Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x0D96u),8u,1);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B1Au:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B1Au,1u,0xE8u,0x9B1Bu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B1Bu:
    if(m==1u&&x==1u&&e==0u){ /* E0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B1Bu,2u,0x03u,0x9B1Du);
      sc_v11_op_compare(r,c->x,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B1Du:
    if(m==1u&&x==1u&&e==0u){ /* 90 E6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B1Du,2u,0xE6u,0x9B1Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9B05u;}
      if(c->pc!=0x9B1Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B1Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B1Fu:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B1Fu,1u,0xABu,0x9B20u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B20u:
    if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B20u,1u,0xFAu,0x9B21u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B21u:
    if(m==1u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B21u,2u,0x79u,0x9B23u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B23u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B23u,1u,0x18u,0x9B24u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B24u:
    if(m==1u&&x==1u&&e==0u){ /* 69 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B24u,2u,0x19u,0x9B26u);
      sc_v11_op_adc(r,0x0019u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B26u:
    if(m==1u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B26u,2u,0x79u,0x9B28u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B28u:
    if(m==1u&&x==1u&&e==0u){ /* E0 74 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B28u,2u,0x74u,0x9B2Au);
      sc_v11_op_compare(r,c->x,0x0074u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B2Au:
    if(m==1u&&x==1u&&e==0u){ /* 90 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B2Au,2u,0xC9u,0x9B2Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9AF5u;}
      if(c->pc!=0x9B2Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B2Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B2Cu:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B2Cu,1u,0x60u,0x9B2Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B33u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B33u,2u,0x30u,0x9B35u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B33u,2u,0x30u,0x9B35u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B33u,2u,0x30u,0x9B35u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B33u,2u,0x30u,0x9B35u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B35u:
    if(m==1u&&x==1u&&e==0u){ /* A9 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B35u,2u,0x38u,0x9B37u);
      sc_v11_op_lda(r,0x0038u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B37u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B37u,1u,0x18u,0x9B38u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B38u:
    if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B38u,2u,0x79u,0x9B3Au);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B3Au:
    if(m==1u&&x==1u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B3Au,4u,0x7Eu,0x9B3Eu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B3Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B3Eu,2u,0x8Bu,0x9B40u);
      sc_v11_op_lda(r,0x008Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B40u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 01 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B40u,4u,0x7Eu,0x9B44u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B44u:
    if(m==1u&&x==1u&&e==0u){ /* AD 98 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B44u,3u,0x0Du,0x9B47u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D98u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B47u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B47u,1u,0x18u,0x9B48u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B48u:
    if(m==1u&&x==1u&&e==0u){ /* 69 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B48u,2u,0x90u,0x9B4Au);
      sc_v11_op_adc(r,0x0090u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B4Au:
    if(m==1u&&x==1u&&e==0u){ /* 20 A8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B4Au,3u,0x9Bu,0x9B4Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B4Cu))return 0;c->pc=0x9BA8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B4Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 3C 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B4Du,3u,0x18u,0x9B50u);
      sc_v11_op_lda(r,0x183Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 3C 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B4Du,3u,0x18u,0x9B50u);
      sc_v11_op_lda(r,0x183Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 3C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B4Du,2u,0x3Cu,0x9B4Fu);
      sc_v11_op_lda(r,0x003Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 3C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B4Du,2u,0x3Cu,0x9B4Fu);
      sc_v11_op_lda(r,0x003Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B4Fu:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B4Fu,1u,0x18u,0x9B50u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B4Fu,1u,0x18u,0x9B50u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B50u:
    if(m==0u&&x==0u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B50u,2u,0x79u,0x9B52u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B50u,2u,0x79u,0x9B52u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B50u,2u,0x79u,0x9B52u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B50u,2u,0x79u,0x9B52u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B52u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B52u,4u,0x7Eu,0x9B56u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B52u,4u,0x7Eu,0x9B56u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B52u,4u,0x7Eu,0x9B56u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B52u,4u,0x7Eu,0x9B56u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B56u:
    if(m==0u&&x==0u&&e==0u){ /* A9 8B 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B56u,3u,0x9Fu,0x9B59u);
      sc_v11_op_lda(r,0x9F8Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 8B 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B56u,3u,0x9Fu,0x9B59u);
      sc_v11_op_lda(r,0x9F8Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B56u,2u,0x8Bu,0x9B58u);
      sc_v11_op_lda(r,0x008Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B56u,2u,0x8Bu,0x9B58u);
      sc_v11_op_lda(r,0x008Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B58u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 01 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B58u,4u,0x7Eu,0x9B5Cu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 01 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B58u,4u,0x7Eu,0x9B5Cu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B5Cu:
    if(m==1u&&x==0u&&e==0u){ /* AD 97 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B5Cu,3u,0x0Du,0x9B5Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D97u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 97 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B5Cu,3u,0x0Du,0x9B5Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D97u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B5Fu:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B5Fu,1u,0x18u,0x9B60u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B5Fu,1u,0x18u,0x9B60u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B60u:
    if(m==1u&&x==0u&&e==0u){ /* 69 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B60u,2u,0x90u,0x9B62u);
      sc_v11_op_adc(r,0x0090u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B60u,2u,0x90u,0x9B62u);
      sc_v11_op_adc(r,0x0090u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B62u:
    if(m==1u&&x==0u&&e==0u){ /* 20 A8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B62u,3u,0x9Bu,0x9B65u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B64u))return 0;c->pc=0x9BA8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B62u,3u,0x9Bu,0x9B65u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B64u))return 0;c->pc=0x9BA8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B65u:
    if(m==0u&&x==0u&&e==0u){ /* A9 40 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B65u,3u,0x18u,0x9B68u);
      sc_v11_op_lda(r,0x1840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 40 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B65u,3u,0x18u,0x9B68u);
      sc_v11_op_lda(r,0x1840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B65u,2u,0x40u,0x9B67u);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B65u,2u,0x40u,0x9B67u);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B67u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B67u,1u,0x18u,0x9B68u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B67u,1u,0x18u,0x9B68u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B68u:
    if(m==0u&&x==0u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B68u,2u,0x79u,0x9B6Au);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B68u,2u,0x79u,0x9B6Au);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B68u,2u,0x79u,0x9B6Au);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B68u,2u,0x79u,0x9B6Au);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B6Au:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B6Au,4u,0x7Eu,0x9B6Eu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B6Au,4u,0x7Eu,0x9B6Eu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B6Au,4u,0x7Eu,0x9B6Eu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B6Au,4u,0x7Eu,0x9B6Eu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B6Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 8B 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B6Eu,3u,0x9Fu,0x9B71u);
      sc_v11_op_lda(r,0x9F8Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 8B 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B6Eu,3u,0x9Fu,0x9B71u);
      sc_v11_op_lda(r,0x9F8Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B6Eu,2u,0x8Bu,0x9B70u);
      sc_v11_op_lda(r,0x008Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B6Eu,2u,0x8Bu,0x9B70u);
      sc_v11_op_lda(r,0x008Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B70u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 01 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B70u,4u,0x7Eu,0x9B74u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 01 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B70u,4u,0x7Eu,0x9B74u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B74u:
    if(m==1u&&x==0u&&e==0u){ /* AD 96 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B74u,3u,0x0Du,0x9B77u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D96u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 96 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B74u,3u,0x0Du,0x9B77u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D96u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B77u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B77u,1u,0x18u,0x9B78u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B77u,1u,0x18u,0x9B78u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B78u:
    if(m==1u&&x==0u&&e==0u){ /* 69 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B78u,2u,0x90u,0x9B7Au);
      sc_v11_op_adc(r,0x0090u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B78u,2u,0x90u,0x9B7Au);
      sc_v11_op_adc(r,0x0090u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B7Au:
    if(m==1u&&x==0u&&e==0u){ /* 20 A8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B7Au,3u,0x9Bu,0x9B7Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B7Cu))return 0;c->pc=0x9BA8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B7Au,3u,0x9Bu,0x9B7Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9B7Cu))return 0;c->pc=0x9BA8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B7Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 44 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B7Du,3u,0x18u,0x9B80u);
      sc_v11_op_lda(r,0x1844u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 44 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B7Du,3u,0x18u,0x9B80u);
      sc_v11_op_lda(r,0x1844u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B7Du,2u,0x44u,0x9B7Fu);
      sc_v11_op_lda(r,0x0044u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B7Du,2u,0x44u,0x9B7Fu);
      sc_v11_op_lda(r,0x0044u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B7Fu:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B7Fu,1u,0x18u,0x9B80u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B7Fu,1u,0x18u,0x9B80u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B80u:
    if(m==0u&&x==0u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B80u,2u,0x79u,0x9B82u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B80u,2u,0x79u,0x9B82u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B80u,2u,0x79u,0x9B82u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B80u,2u,0x79u,0x9B82u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B82u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B82u,4u,0x7Eu,0x9B86u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B82u,4u,0x7Eu,0x9B86u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B82u,4u,0x7Eu,0x9B86u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B82u,4u,0x7Eu,0x9B86u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B86u:
    if(m==0u&&x==0u&&e==0u){ /* A9 8B 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B86u,3u,0x9Fu,0x9B89u);
      sc_v11_op_lda(r,0x9F8Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 8B 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B86u,3u,0x9Fu,0x9B89u);
      sc_v11_op_lda(r,0x9F8Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B86u,2u,0x8Bu,0x9B88u);
      sc_v11_op_lda(r,0x008Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B86u,2u,0x8Bu,0x9B88u);
      sc_v11_op_lda(r,0x008Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B88u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 01 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B88u,4u,0x7Eu,0x9B8Cu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 01 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B88u,4u,0x7Eu,0x9B8Cu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B8Cu:
    if(m==1u&&x==0u&&e==0u){ /* AD 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B8Cu,3u,0x0Du,0x9B8Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D95u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 95 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B8Cu,3u,0x0Du,0x9B8Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0D95u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B8Fu:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B8Fu,1u,0x18u,0x9B90u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B8Fu,1u,0x18u,0x9B90u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B90u:
    if(m==1u&&x==0u&&e==0u){ /* 69 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B90u,2u,0x90u,0x9B92u);
      sc_v11_op_adc(r,0x0090u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B90u,2u,0x90u,0x9B92u);
      sc_v11_op_adc(r,0x0090u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B92u:
    if(m==1u&&x==0u&&e==0u){ /* 4C A8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B92u,3u,0x9Bu,0x9B95u);
      c->pc=0x9BA8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C A8 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B92u,3u,0x9Bu,0x9B95u);
      c->pc=0x9BA8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B95u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B95u,2u,0x30u,0x9B97u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B95u,2u,0x30u,0x9B97u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B97u:
    if(m==1u&&x==1u&&e==0u){ /* A9 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B97u,2u,0x44u,0x9B99u);
      sc_v11_op_lda(r,0x0044u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B99u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B99u,1u,0x18u,0x9B9Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B9Au:
    if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B9Au,2u,0x79u,0x9B9Cu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029B9Cu:
    if(m==1u&&x==1u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029B9Cu,4u,0x7Eu,0x9BA0u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BA0u:
    if(m==1u&&x==1u&&e==0u){ /* A9 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BA0u,2u,0x82u,0x9BA2u);
      sc_v11_op_lda(r,0x0082u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BA2u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 01 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BA2u,4u,0x7Eu,0x9BA6u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2001u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BA6u:
    if(m==1u&&x==1u&&e==0u){ /* A9 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BA6u,2u,0x9Au,0x9BA8u);
      sc_v11_op_lda(r,0x009Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BA8u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 02 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BA8u,4u,0x7Eu,0x9BACu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2002u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 02 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BA8u,4u,0x7Eu,0x9BACu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2002u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BACu:
    if(m==1u&&x==0u&&e==0u){ /* A9 3C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BACu,2u,0x3Cu,0x9BAEu);
      sc_v11_op_lda(r,0x003Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 3C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BACu,2u,0x3Cu,0x9BAEu);
      sc_v11_op_lda(r,0x003Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BAEu:
    if(m==1u&&x==0u&&e==0u){ /* 9F 03 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BAEu,4u,0x7Eu,0x9BB2u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2003u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F 03 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BAEu,4u,0x7Eu,0x9BB2u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2003u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BB2u:
    if(m==1u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB2u,1u,0x8Au,0x9BB3u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB2u,1u,0x8Au,0x9BB3u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BB3u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB3u,1u,0x18u,0x9BB4u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB3u,1u,0x18u,0x9BB4u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BB4u:
    if(m==1u&&x==0u&&e==0u){ /* 69 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB4u,2u,0x04u,0x9BB6u);
      sc_v11_op_adc(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB4u,2u,0x04u,0x9BB6u);
      sc_v11_op_adc(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BB6u:
    if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB6u,1u,0xAAu,0x9BB7u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB6u,1u,0xAAu,0x9BB7u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BB7u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB7u,1u,0x60u,0x9BB8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB7u,1u,0x60u,0x9BB8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BB8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB8u,2u,0x20u,0x9BBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB8u,2u,0x20u,0x9BBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB8u,2u,0x20u,0x9BBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BB8u,2u,0x20u,0x9BBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BBAu:
    if(m==1u&&x==0u&&e==0u){ /* AD AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BBAu,3u,0x0Du,0x9BBDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DAFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BBAu,3u,0x0Du,0x9BBDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DAFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BBDu:
    if(m==1u&&x==0u&&e==0u){ /* C9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BBDu,2u,0x06u,0x9BBFu);
      sc_v11_op_compare(r,c->a,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BBDu,2u,0x06u,0x9BBFu);
      sc_v11_op_compare(r,c->a,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BBFu:
    if(m==1u&&x==0u&&e==0u){ /* B0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BBFu,2u,0x06u,0x9BC1u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9BC7u;}
      if(c->pc!=0x9BC1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9BC1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BBFu,2u,0x06u,0x9BC1u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9BC7u;}
      if(c->pc!=0x9BC1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9BC1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BC1u:
    if(m==1u&&x==0u&&e==0u){ /* 20 F1 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BC1u,3u,0x9Bu,0x9BC4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9BC3u))return 0;c->pc=0x9BF1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F1 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BC1u,3u,0x9Bu,0x9BC4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9BC3u))return 0;c->pc=0x9BF1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BC4u:
    if(m==0u&&x==0u&&e==0u){ /* 4C D5 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BC4u,3u,0x9Du,0x9BC7u);
      c->pc=0x9DD5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C D5 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BC4u,3u,0x9Du,0x9BC7u);
      c->pc=0x9DD5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C D5 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BC4u,3u,0x9Du,0x9BC7u);
      c->pc=0x9DD5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C D5 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BC4u,3u,0x9Du,0x9BC7u);
      c->pc=0x9DD5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BC7u:
    if(m==0u&&x==1u&&e==0u){ /* 20 FE 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BC7u,3u,0x99u,0x9BCAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9BC9u))return 0;c->pc=0x99FEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FE 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BC7u,3u,0x99u,0x9BCAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9BC9u))return 0;c->pc=0x99FEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FE 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BC7u,3u,0x99u,0x9BCAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9BC9u))return 0;c->pc=0x99FEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BCAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F3 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BCAu,3u,0x98u,0x9BCDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9BCCu))return 0;c->pc=0x98F3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F3 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BCAu,3u,0x98u,0x9BCDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9BCCu))return 0;c->pc=0x98F3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F3 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BCAu,3u,0x98u,0x9BCDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9BCCu))return 0;c->pc=0x98F3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F3 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BCAu,3u,0x98u,0x9BCDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9BCCu))return 0;c->pc=0x98F3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BCDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BCDu,2u,0x10u,0x9BCFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BCDu,2u,0x10u,0x9BCFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BCDu,2u,0x10u,0x9BCFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BCDu,2u,0x10u,0x9BCFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BCFu:
    if(m==0u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BCFu,2u,0x00u,0x9BD1u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BCFu,2u,0x00u,0x9BD1u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BD1u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BD1u,2u,0x30u,0x9BD3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BD1u,2u,0x30u,0x9BD3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BD3u:
    if(m==1u&&x==1u&&e==0u){ /* BD 1F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BD3u,3u,0x0Bu,0x9BD6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0B1Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BD6u:
    if(m==1u&&x==1u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BD6u,2u,0x11u,0x9BD8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9BE9u;}
      if(c->pc!=0x9BD8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9BD8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BD8u:
    if(m==1u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BD8u,1u,0xDAu,0x9BD9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BD9u:
    if(m==1u&&x==1u&&e==0u){ /* 8E AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BD9u,3u,0x0Du,0x9BDCu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0DAFu),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BDCu:
    if(m==1u&&x==1u&&e==0u){ /* 20 F1 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BDCu,3u,0x9Bu,0x9BDFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9BDEu))return 0;c->pc=0x9BF1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BDFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BDFu,2u,0x20u,0x9BE1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BDFu,2u,0x20u,0x9BE1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BDFu,2u,0x20u,0x9BE1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BDFu,2u,0x20u,0x9BE1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BE1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BE1u,3u,0x00u,0x9BE4u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BE1u,3u,0x00u,0x9BE4u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BE4u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BE4u,2u,0x00u,0x9BE6u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9BE6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BE4u,2u,0x00u,0x9BE6u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9BE6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BE6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BE6u,2u,0x10u,0x9BE8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BE6u,2u,0x10u,0x9BE8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BE8u:
    if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BE8u,1u,0xFAu,0x9BE9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BE9u:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BE9u,1u,0xE8u,0x9BEAu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BE9u,1u,0xE8u,0x9BEAu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BEAu:
    if(m==0u&&x==1u&&e==0u){ /* E0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BEAu,2u,0x06u,0x9BECu);
      sc_v11_op_compare(r,c->x,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BEAu,2u,0x06u,0x9BECu);
      sc_v11_op_compare(r,c->x,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BECu:
    if(m==0u&&x==1u&&e==0u){ /* 90 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BECu,2u,0xE3u,0x9BEEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9BD1u;}
      if(c->pc!=0x9BEEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9BEEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BECu,2u,0xE3u,0x9BEEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9BD1u;}
      if(c->pc!=0x9BEEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9BEEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BEEu:
    if(m==0u&&x==1u&&e==0u){ /* 4C D5 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BEEu,3u,0x9Du,0x9BF1u);
      c->pc=0x9DD5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C D5 9D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BEEu,3u,0x9Du,0x9BF1u);
      c->pc=0x9DD5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BF1u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BF1u,2u,0x20u,0x9BF3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BF1u,2u,0x20u,0x9BF3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BF3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FA 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BF3u,3u,0x00u,0x9BF6u);
      sc_v11_op_lda(r,0x00FAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FA 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BF3u,3u,0x00u,0x9BF6u);
      sc_v11_op_lda(r,0x00FAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BF6u:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BF6u,2u,0x82u,0x9BF8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BF6u,2u,0x82u,0x9BF8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BF8u:
    if(m==0u&&x==0u&&e==0u){ /* AD AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BF8u,3u,0x0Du,0x9BFBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DAFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD AF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BF8u,3u,0x0Du,0x9BFBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DAFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BFBu:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BFBu,3u,0x00u,0x9BFEu);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BFBu,3u,0x00u,0x9BFEu);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x029BFEu:
    if(m==0u&&x==0u&&e==0u){ /* B0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BFEu,2u,0x12u,0x9C00u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9C12u;}
      if(c->pc!=0x9C00u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9C00u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x029BFEu,2u,0x12u,0x9C00u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x9C12u;}
      if(c->pc!=0x9C00u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9C00u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
