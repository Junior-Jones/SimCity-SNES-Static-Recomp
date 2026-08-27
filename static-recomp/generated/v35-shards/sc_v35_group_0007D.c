/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0007D(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01F401u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F401u,3u,0x04u,0xF404u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F401u,3u,0x04u,0xF404u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F401u,3u,0x04u,0xF404u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F404u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 55 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F404u,3u,0x04u,0xF407u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0455u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 55 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F404u,3u,0x04u,0xF407u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0455u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 55 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F404u,3u,0x04u,0xF407u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0455u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F407u:
    if(m==0u&&x==1u&&e==0u){ /* 20 43 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F407u,3u,0xF8u,0xF40Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF409u))return 0;c->pc=0xF843u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 43 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F407u,3u,0xF8u,0xF40Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF409u))return 0;c->pc=0xF843u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 43 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F407u,3u,0xF8u,0xF40Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF409u))return 0;c->pc=0xF843u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F40Au:
    if(m==0u&&x==1u&&e==0u){ /* B0 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F40Au,2u,0x1Fu,0xF40Cu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF42Bu;}
      if(c->pc!=0xF40Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF40Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F40Au,2u,0x1Fu,0xF40Cu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF42Bu;}
      if(c->pc!=0xF40Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF40Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F40Au,2u,0x1Fu,0xF40Cu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF42Bu;}
      if(c->pc!=0xF40Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF40Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F40Cu:
    if(m==0u&&x==1u&&e==0u){ /* AD 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F40Cu,3u,0x04u,0xF40Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F40Cu,3u,0x04u,0xF40Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F40Cu,3u,0x04u,0xF40Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F40Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F40Fu,3u,0x04u,0xF412u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F40Fu,3u,0x04u,0xF412u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F40Fu,3u,0x04u,0xF412u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F412u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F412u,3u,0x04u,0xF415u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F412u,3u,0x04u,0xF415u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F412u,3u,0x04u,0xF415u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F415u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F415u,3u,0x04u,0xF418u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F415u,3u,0x04u,0xF418u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0451u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F415u,3u,0x04u,0xF418u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0451u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F418u:
    if(m==0u&&x==1u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F418u,3u,0xF8u,0xF41Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF41Au))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F418u,3u,0xF8u,0xF41Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF41Au))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F418u,3u,0xF8u,0xF41Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF41Au))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F41Bu:
    if(m==0u&&x==1u&&e==0u){ /* C9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F41Bu,3u,0x00u,0xF41Eu);
      sc_v11_op_compare(r,c->a,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F41Bu,2u,0x00u,0xF41Du);
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F41Bu,2u,0x00u,0xF41Du);
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F41Eu:
    if(m==0u&&x==1u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F41Eu,2u,0x06u,0xF420u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF426u;}
      if(c->pc!=0xF420u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF420u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F420u:
    if(m==0u&&x==1u&&e==0u){ /* A9 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F420u,3u,0x00u,0xF423u);
      sc_v11_op_lda(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F423u:
    if(m==0u&&x==1u&&e==0u){ /* 20 AF F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F423u,3u,0xF8u,0xF426u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF425u))return 0;c->pc=0xF8AFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F426u:
    if(m==0u&&x==1u&&e==0u){ /* CE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F426u,3u,0x04u,0xF429u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F426u,3u,0x04u,0xF429u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F426u,3u,0x04u,0xF429u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F429u:
    if(m==0u&&x==1u&&e==0u){ /* D0 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F429u,2u,0xC6u,0xF42Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF3F1u;}
      if(c->pc!=0xF42Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF42Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F429u,2u,0xC6u,0xF42Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF3F1u;}
      if(c->pc!=0xF42Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF42Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F429u,2u,0xC6u,0xF42Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF3F1u;}
      if(c->pc!=0xF42Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF42Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F42Bu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F42Bu,1u,0x60u,0xF42Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F42Bu,1u,0x60u,0xF42Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F42Bu,1u,0x60u,0xF42Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F444u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F444u,2u,0x30u,0xF446u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F444u,2u,0x30u,0xF446u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F444u,2u,0x30u,0xF446u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F44Cu:
    if(m==0u&&x==1u&&e==0u){ /* A9 63 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F44Cu,3u,0x00u,0xF44Fu);
      sc_v11_op_lda(r,0x0063u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F44Cu,2u,0x63u,0xF44Eu);
      sc_v11_op_lda(r,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F44Cu,2u,0x63u,0xF44Eu);
      sc_v11_op_lda(r,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F44Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F44Fu,3u,0x04u,0xF452u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0441u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F452u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F452u,3u,0x04u,0xF455u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F452u,3u,0x04u,0xF455u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F452u,3u,0x04u,0xF455u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F455u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F455u,3u,0x04u,0xF458u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F455u,3u,0x04u,0xF458u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F455u,3u,0x04u,0xF458u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F458u:
    if(m==0u&&x==1u&&e==0u){ /* AD 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F458u,3u,0x04u,0xF45Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0441u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F458u,3u,0x04u,0xF45Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F458u,3u,0x04u,0xF45Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F45Bu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F45Bu,3u,0x04u,0xF45Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F45Bu,3u,0x04u,0xF45Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0451u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F45Bu,3u,0x04u,0xF45Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0451u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F45Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F45Eu,3u,0xF8u,0xF461u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF460u))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F45Eu,3u,0xF8u,0xF461u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF460u))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F45Eu,3u,0xF8u,0xF461u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF460u))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F461u:
    if(m==0u&&x==1u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F461u,3u,0x00u,0xF464u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F461u,2u,0x03u,0xF463u);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F461u,2u,0x03u,0xF463u);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F464u:
    if(m==0u&&x==1u&&e==0u){ /* D0 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F464u,2u,0x7Bu,0xF466u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF4E1u;}
      if(c->pc!=0xF466u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF466u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F466u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F466u,3u,0x00u,0xF469u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F469u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F469u,3u,0x04u,0xF46Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x045Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F46Cu:
    if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F46Cu,3u,0x00u,0xF46Fu);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F46Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F46Fu,3u,0x04u,0xF472u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0443u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F472u:
    if(m==0u&&x==1u&&e==0u){ /* 0E 5B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F472u,3u,0x04u,0xF475u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x045Bu),16u,0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0E 5B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F472u,3u,0x04u,0xF475u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x045Bu),8u,0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0E 5B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F472u,3u,0x04u,0xF475u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x045Bu),8u,0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F475u:
    if(m==0u&&x==1u&&e==0u){ /* AE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F475u,3u,0x04u,0xF478u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0443u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F475u,3u,0x04u,0xF478u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0443u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F475u,3u,0x04u,0xF478u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0443u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F478u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F478u,3u,0x00u,0xF47Bu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F478u,2u,0x00u,0xF47Au);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F478u,2u,0x00u,0xF47Au);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F47Bu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F47Bu,2u,0x20u,0xF47Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F47Du:
    if(m==1u&&x==1u&&e==0u){ /* BF 2C F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F47Du,4u,0x01u,0xF481u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01F42Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F481u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F481u,1u,0x18u,0xF482u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F482u:
    if(m==1u&&x==1u&&e==0u){ /* 6D 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F482u,3u,0x04u,0xF485u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F485u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F485u,2u,0x20u,0xF487u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F487u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F487u,3u,0x04u,0xF48Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0453u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F48Au:
    if(m==0u&&x==1u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F48Au,3u,0x04u,0xF48Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F48Du:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F48Du,2u,0x20u,0xF48Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F48Fu:
    if(m==1u&&x==1u&&e==0u){ /* BF 30 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F48Fu,4u,0x01u,0xF493u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01F430u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F493u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F493u,1u,0x18u,0xF494u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F494u:
    if(m==1u&&x==1u&&e==0u){ /* 6D 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F494u,3u,0x04u,0xF497u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F497u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F497u,2u,0x20u,0xF499u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F499u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 55 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F499u,3u,0x04u,0xF49Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0455u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F49Cu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F49Cu,3u,0x04u,0xF49Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F49Fu:
    if(m==0u&&x==1u&&e==0u){ /* 20 43 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F49Fu,3u,0xF8u,0xF4A2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF4A1u))return 0;c->pc=0xF843u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4A2u:
    if(m==0u&&x==1u&&e==0u){ /* B0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4A2u,2u,0x08u,0xF4A4u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF4ACu;}
      if(c->pc!=0xF4A4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4A4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4A2u,2u,0x08u,0xF4A4u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF4ACu;}
      if(c->pc!=0xF4A4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4A4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4A2u,2u,0x08u,0xF4A4u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF4ACu;}
      if(c->pc!=0xF4A4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4A4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4A4u:
    if(m==0u&&x==1u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4A4u,3u,0xF8u,0xF4A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF4A6u))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4A4u,3u,0xF8u,0xF4A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF4A6u))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4A4u,3u,0xF8u,0xF4A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF4A6u))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4A7u:
    if(m==0u&&x==1u&&e==0u){ /* C9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4A7u,3u,0x00u,0xF4AAu);
      sc_v11_op_compare(r,c->a,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4A7u,2u,0x00u,0xF4A9u);
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4A7u,2u,0x00u,0xF4A9u);
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4AAu:
    if(m==0u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4AAu,2u,0x03u,0xF4ACu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF4AFu;}
      if(c->pc!=0xF4ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4ACu:
    if(m==0u&&x==1u&&e==0u){ /* EE 5B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4ACu,3u,0x04u,0xF4AFu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x045Bu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE 5B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4ACu,3u,0x04u,0xF4AFu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x045Bu),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE 5B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4ACu,3u,0x04u,0xF4AFu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x045Bu),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4AFu:
    if(m==0u&&x==1u&&e==0u){ /* CE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4AFu,3u,0x04u,0xF4B2u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4AFu,3u,0x04u,0xF4B2u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4AFu,3u,0x04u,0xF4B2u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4B2u:
    if(m==0u&&x==1u&&e==0u){ /* 10 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4B2u,2u,0xBEu,0xF4B4u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF472u;}
      if(c->pc!=0xF4B4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4B4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 10 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4B2u,2u,0xBEu,0xF4B4u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF472u;}
      if(c->pc!=0xF4B4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4B4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 10 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4B2u,2u,0xBEu,0xF4B4u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF472u;}
      if(c->pc!=0xF4B4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4B4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4B4u:
    if(m==0u&&x==1u&&e==0u){ /* AE 5B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4B4u,3u,0x04u,0xF4B7u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x045Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 5B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4B4u,3u,0x04u,0xF4B7u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x045Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 5B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4B4u,3u,0x04u,0xF4B7u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x045Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4B7u:
    if(m==0u&&x==1u&&e==0u){ /* BF 34 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4B7u,4u,0x01u,0xF4BBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01F434u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF 34 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4B7u,4u,0x01u,0xF4BBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01F434u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF 34 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4B7u,4u,0x01u,0xF4BBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01F434u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4BBu:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4BBu,3u,0x00u,0xF4BEu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4BBu,2u,0xFFu,0xF4BDu);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4BBu,2u,0xFFu,0xF4BDu);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4BEu:
    if(m==0u&&x==1u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4BEu,3u,0x00u,0xF4C1u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4C1u:
    if(m==0u&&x==1u&&e==0u){ /* F0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4C1u,2u,0x0Fu,0xF4C3u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF4D2u;}
      if(c->pc!=0xF4C3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4C3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4C3u:
    if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4C3u,2u,0x79u,0xF4C5u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4C5u:
    if(m==0u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4C5u,4u,0x00u,0xF4C9u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF4C8u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4C9u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4C9u,1u,0x4Au,0xF4CAu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4C9u,1u,0x4Au,0xF4CAu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4C9u,1u,0x4Au,0xF4CAu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4CAu:
    if(m==0u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4CAu,2u,0x79u,0xF4CCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4CAu,2u,0x79u,0xF4CCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4CAu,2u,0x79u,0xF4CCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4CCu:
    if(m==0u&&x==1u&&e==0u){ /* 90 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4CCu,2u,0x04u,0xF4CEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF4D2u;}
      if(c->pc!=0xF4CEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4CEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4CCu,2u,0x04u,0xF4CEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF4D2u;}
      if(c->pc!=0xF4CEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4CEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4CCu,2u,0x04u,0xF4CEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF4D2u;}
      if(c->pc!=0xF4CEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4CEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4CEu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4CEu,1u,0x18u,0xF4CFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4CEu,1u,0x18u,0xF4CFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4CEu,1u,0x18u,0xF4CFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4CFu:
    if(m==0u&&x==1u&&e==0u){ /* 69 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4CFu,3u,0x00u,0xF4D2u);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4CFu,2u,0x08u,0xF4D1u);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4CFu,2u,0x08u,0xF4D1u);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4D2u:
    if(m==0u&&x==1u&&e==0u){ /* AE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4D2u,3u,0x04u,0xF4D5u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4D2u,3u,0x04u,0xF4D5u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4D2u,3u,0x04u,0xF4D5u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4D5u:
    if(m==0u&&x==1u&&e==0u){ /* 8E 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4D5u,3u,0x04u,0xF4D8u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Fu),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8E 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4D5u,3u,0x04u,0xF4D8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Fu),c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8E 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4D5u,3u,0x04u,0xF4D8u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Fu),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4D8u:
    if(m==0u&&x==1u&&e==0u){ /* AE 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4D8u,3u,0x04u,0xF4DBu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4D8u,3u,0x04u,0xF4DBu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0441u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4D8u,3u,0x04u,0xF4DBu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4DBu:
    if(m==0u&&x==1u&&e==0u){ /* 8E 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4DBu,3u,0x04u,0xF4DEu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0451u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8E 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4DBu,3u,0x04u,0xF4DEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8E 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4DBu,3u,0x04u,0xF4DEu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0451u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4DEu:
    if(m==0u&&x==1u&&e==0u){ /* 20 AF F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4DEu,3u,0xF8u,0xF4E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF4E0u))return 0;c->pc=0xF8AFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 AF F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4DEu,3u,0xF8u,0xF4E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF4E0u))return 0;c->pc=0xF8AFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 AF F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4DEu,3u,0xF8u,0xF4E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF4E0u))return 0;c->pc=0xF8AFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4E1u:
    if(m==0u&&x==1u&&e==0u){ /* CE 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4E1u,3u,0x04u,0xF4E4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0441u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4E1u,3u,0x04u,0xF4E4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0441u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4E1u,3u,0x04u,0xF4E4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0441u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4E4u:
    if(m==0u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4E4u,2u,0x03u,0xF4E6u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF4E9u;}
      if(c->pc!=0xF4E6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4E6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4E4u,2u,0x03u,0xF4E6u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF4E9u;}
      if(c->pc!=0xF4E6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4E6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4E4u,2u,0x03u,0xF4E6u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF4E9u;}
      if(c->pc!=0xF4E6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4E6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4E6u:
    if(m==0u&&x==1u&&e==0u){ /* 4C 52 F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4E6u,3u,0xF4u,0xF4E9u);
      c->pc=0xF452u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 52 F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4E6u,3u,0xF4u,0xF4E9u);
      c->pc=0xF452u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 52 F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4E6u,3u,0xF4u,0xF4E9u);
      c->pc=0xF452u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4E9u:
    if(m==0u&&x==1u&&e==0u){ /* CE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4E9u,3u,0x04u,0xF4ECu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x043Fu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4E9u,3u,0x04u,0xF4ECu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x043Fu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4E9u,3u,0x04u,0xF4ECu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x043Fu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4ECu:
    if(m==0u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4ECu,2u,0x03u,0xF4EEu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF4F1u;}
      if(c->pc!=0xF4EEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4EEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4ECu,2u,0x03u,0xF4EEu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF4F1u;}
      if(c->pc!=0xF4EEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4EEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4ECu,2u,0x03u,0xF4EEu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF4F1u;}
      if(c->pc!=0xF4EEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF4EEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4EEu:
    if(m==0u&&x==1u&&e==0u){ /* 4C 4C F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4EEu,3u,0xF4u,0xF4F1u);
      c->pc=0xF44Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 4C F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4EEu,3u,0xF4u,0xF4F1u);
      c->pc=0xF44Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 4C F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4EEu,3u,0xF4u,0xF4F1u);
      c->pc=0xF44Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F4F1u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4F1u,1u,0x60u,0xF4F2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4F1u,1u,0x60u,0xF4F2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F4F1u,1u,0x60u,0xF4F2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F502u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F502u,2u,0x30u,0xF504u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F502u,2u,0x30u,0xF504u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F502u,2u,0x30u,0xF504u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F50Au:
    if(m==0u&&x==1u&&e==0u){ /* A9 63 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F50Au,3u,0x00u,0xF50Du);
      sc_v11_op_lda(r,0x0063u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F50Au,2u,0x63u,0xF50Cu);
      sc_v11_op_lda(r,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F50Au,2u,0x63u,0xF50Cu);
      sc_v11_op_lda(r,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F50Du:
    if(m==0u&&x==1u&&e==0u){ /* 8D 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F50Du,3u,0x04u,0xF510u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0441u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F510u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F510u,3u,0x04u,0xF513u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F510u,3u,0x04u,0xF513u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F510u,3u,0x04u,0xF513u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F513u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F513u,3u,0x04u,0xF516u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F513u,3u,0x04u,0xF516u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F513u,3u,0x04u,0xF516u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F516u:
    if(m==0u&&x==1u&&e==0u){ /* AD 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F516u,3u,0x04u,0xF519u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0441u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F516u,3u,0x04u,0xF519u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F516u,3u,0x04u,0xF519u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F519u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F519u,3u,0x04u,0xF51Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F519u,3u,0x04u,0xF51Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0451u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F519u,3u,0x04u,0xF51Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0451u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F51Cu:
    if(m==0u&&x==1u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F51Cu,3u,0xF8u,0xF51Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF51Eu))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F51Cu,3u,0xF8u,0xF51Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF51Eu))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F51Cu,3u,0xF8u,0xF51Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF51Eu))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F51Fu:
    if(m==0u&&x==1u&&e==0u){ /* C9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F51Fu,3u,0x00u,0xF522u);
      sc_v11_op_compare(r,c->a,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F51Fu,2u,0x14u,0xF521u);
      sc_v11_op_compare(r,c->a,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F51Fu,2u,0x14u,0xF521u);
      sc_v11_op_compare(r,c->a,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F522u:
    if(m==0u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F522u,2u,0x03u,0xF524u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF527u;}
      if(c->pc!=0xF524u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF524u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F524u:
    if(m==0u&&x==1u&&e==0u){ /* 4C A8 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F524u,3u,0xF5u,0xF527u);
      c->pc=0xF5A8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F527u:
    if(m==0u&&x==1u&&e==0u){ /* C9 26 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F527u,3u,0x00u,0xF52Au);
      sc_v11_op_compare(r,c->a,0x0026u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F52Au:
    if(m==0u&&x==1u&&e==0u){ /* B0 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F52Au,2u,0x7Cu,0xF52Cu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF5A8u;}
      if(c->pc!=0xF52Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF52Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F52Cu:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F52Cu,3u,0x00u,0xF52Fu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F52Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F52Fu,3u,0x04u,0xF532u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x045Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F532u:
    if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F532u,3u,0x00u,0xF535u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F535u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F535u,3u,0x04u,0xF538u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0443u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F538u:
    if(m==0u&&x==1u&&e==0u){ /* 0E 5D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F538u,3u,0x04u,0xF53Bu);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x045Du),16u,0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0E 5D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F538u,3u,0x04u,0xF53Bu);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x045Du),8u,0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0E 5D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F538u,3u,0x04u,0xF53Bu);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x045Du),8u,0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F53Bu:
    if(m==0u&&x==1u&&e==0u){ /* AE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F53Bu,3u,0x04u,0xF53Eu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0443u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F53Bu,3u,0x04u,0xF53Eu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0443u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F53Bu,3u,0x04u,0xF53Eu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0443u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F53Eu:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F53Eu,3u,0x00u,0xF541u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F53Eu,2u,0x00u,0xF540u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F53Eu,2u,0x00u,0xF540u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F541u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F541u,2u,0x20u,0xF543u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F543u:
    if(m==1u&&x==1u&&e==0u){ /* BF 2C F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F543u,4u,0x01u,0xF547u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01F42Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F547u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F547u,1u,0x18u,0xF548u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F548u:
    if(m==1u&&x==1u&&e==0u){ /* 6D 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F548u,3u,0x04u,0xF54Bu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F54Bu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F54Bu,2u,0x20u,0xF54Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F54Du:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F54Du,3u,0x04u,0xF550u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0453u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F550u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F550u,3u,0x04u,0xF553u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F553u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F553u,2u,0x20u,0xF555u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F555u:
    if(m==1u&&x==1u&&e==0u){ /* BF 30 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F555u,4u,0x01u,0xF559u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01F430u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F559u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F559u,1u,0x18u,0xF55Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F55Au:
    if(m==1u&&x==1u&&e==0u){ /* 6D 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F55Au,3u,0x04u,0xF55Du);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F55Du:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F55Du,2u,0x20u,0xF55Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F55Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 55 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F55Fu,3u,0x04u,0xF562u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0455u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F562u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F562u,3u,0x04u,0xF565u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F565u:
    if(m==0u&&x==1u&&e==0u){ /* 20 43 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F565u,3u,0xF8u,0xF568u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF567u))return 0;c->pc=0xF843u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F568u:
    if(m==0u&&x==1u&&e==0u){ /* B0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F568u,2u,0x10u,0xF56Au);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF57Au;}
      if(c->pc!=0xF56Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF56Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F568u,2u,0x10u,0xF56Au);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF57Au;}
      if(c->pc!=0xF56Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF56Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F568u,2u,0x10u,0xF56Au);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF57Au;}
      if(c->pc!=0xF56Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF56Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F56Au:
    if(m==0u&&x==1u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F56Au,3u,0xF8u,0xF56Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF56Cu))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F56Au,3u,0xF8u,0xF56Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF56Cu))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F56Au,3u,0xF8u,0xF56Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF56Cu))return 0;c->pc=0xF8E9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F56Du:
    if(m==0u&&x==1u&&e==0u){ /* C9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F56Du,3u,0x00u,0xF570u);
      sc_v11_op_compare(r,c->a,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F56Du,2u,0x14u,0xF56Fu);
      sc_v11_op_compare(r,c->a,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F56Du,2u,0x14u,0xF56Fu);
      sc_v11_op_compare(r,c->a,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F570u:
    if(m==0u&&x==1u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F570u,2u,0x08u,0xF572u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF57Au;}
      if(c->pc!=0xF572u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF572u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F572u:
    if(m==0u&&x==1u&&e==0u){ /* C9 26 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F572u,3u,0x00u,0xF575u);
      sc_v11_op_compare(r,c->a,0x0026u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F575u:
    if(m==0u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F575u,2u,0x03u,0xF577u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF57Au;}
      if(c->pc!=0xF577u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF577u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F577u:
    if(m==0u&&x==1u&&e==0u){ /* EE 5D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F577u,3u,0x04u,0xF57Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x045Du),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F57Au:
    if(m==0u&&x==1u&&e==0u){ /* CE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F57Au,3u,0x04u,0xF57Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F57Au,3u,0x04u,0xF57Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F57Au,3u,0x04u,0xF57Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F57Du:
    if(m==0u&&x==1u&&e==0u){ /* 10 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F57Du,2u,0xB9u,0xF57Fu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF538u;}
      if(c->pc!=0xF57Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF57Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 10 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F57Du,2u,0xB9u,0xF57Fu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF538u;}
      if(c->pc!=0xF57Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF57Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 10 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F57Du,2u,0xB9u,0xF57Fu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF538u;}
      if(c->pc!=0xF57Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF57Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F57Fu:
    if(m==0u&&x==1u&&e==0u){ /* AE 5D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F57Fu,3u,0x04u,0xF582u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x045Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 5D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F57Fu,3u,0x04u,0xF582u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x045Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 5D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F57Fu,3u,0x04u,0xF582u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x045Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F582u:
    if(m==0u&&x==1u&&e==0u){ /* BF F2 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F582u,4u,0x01u,0xF586u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01F4F2u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF F2 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F582u,4u,0x01u,0xF586u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01F4F2u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF F2 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F582u,4u,0x01u,0xF586u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01F4F2u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F586u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F586u,3u,0x00u,0xF589u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F586u,2u,0xFFu,0xF588u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F586u,2u,0xFFu,0xF588u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F589u:
    if(m==0u&&x==1u&&e==0u){ /* F0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F589u,2u,0x0Eu,0xF58Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF599u;}
      if(c->pc!=0xF58Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF58Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F58Bu:
    if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F58Bu,2u,0x79u,0xF58Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F58Du:
    if(m==0u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F58Du,4u,0x00u,0xF591u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF590u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F591u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F591u,1u,0x4Au,0xF592u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F591u,1u,0x4Au,0xF592u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F591u,1u,0x4Au,0xF592u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F592u:
    if(m==0u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F592u,2u,0x79u,0xF594u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F592u,2u,0x79u,0xF594u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F592u,2u,0x79u,0xF594u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F594u:
    if(m==0u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F594u,2u,0x03u,0xF596u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF599u;}
      if(c->pc!=0xF596u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF596u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F594u,2u,0x03u,0xF596u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF599u;}
      if(c->pc!=0xF596u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF596u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F594u,2u,0x03u,0xF596u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF599u;}
      if(c->pc!=0xF596u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF596u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F596u:
    if(m==0u&&x==1u&&e==0u){ /* 69 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F596u,3u,0x00u,0xF599u);
      sc_v11_op_adc(r,0x0009u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F596u,2u,0x09u,0xF598u);
      sc_v11_op_adc(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F596u,2u,0x09u,0xF598u);
      sc_v11_op_adc(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F599u:
    if(m==0u&&x==1u&&e==0u){ /* AE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F599u,3u,0x04u,0xF59Cu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F599u,3u,0x04u,0xF59Cu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F599u,3u,0x04u,0xF59Cu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F59Cu:
    if(m==0u&&x==1u&&e==0u){ /* 8E 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F59Cu,3u,0x04u,0xF59Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Fu),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8E 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F59Cu,3u,0x04u,0xF59Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Fu),c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8E 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F59Cu,3u,0x04u,0xF59Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Fu),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F59Fu:
    if(m==0u&&x==1u&&e==0u){ /* AE 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F59Fu,3u,0x04u,0xF5A2u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F59Fu,3u,0x04u,0xF5A2u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0441u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F59Fu,3u,0x04u,0xF5A2u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5A2u:
    if(m==0u&&x==1u&&e==0u){ /* 8E 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5A2u,3u,0x04u,0xF5A5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0451u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8E 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5A2u,3u,0x04u,0xF5A5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8E 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5A2u,3u,0x04u,0xF5A5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0451u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5A5u:
    if(m==0u&&x==1u&&e==0u){ /* 20 AF F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5A5u,3u,0xF8u,0xF5A8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF5A7u))return 0;c->pc=0xF8AFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 AF F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5A5u,3u,0xF8u,0xF5A8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF5A7u))return 0;c->pc=0xF8AFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 AF F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5A5u,3u,0xF8u,0xF5A8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF5A7u))return 0;c->pc=0xF8AFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5A8u:
    if(m==0u&&x==1u&&e==0u){ /* CE 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5A8u,3u,0x04u,0xF5ABu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0441u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5A8u,3u,0x04u,0xF5ABu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0441u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5A8u,3u,0x04u,0xF5ABu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0441u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5ABu:
    if(m==0u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5ABu,2u,0x03u,0xF5ADu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF5B0u;}
      if(c->pc!=0xF5ADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF5ADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5ABu,2u,0x03u,0xF5ADu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF5B0u;}
      if(c->pc!=0xF5ADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF5ADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5ABu,2u,0x03u,0xF5ADu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF5B0u;}
      if(c->pc!=0xF5ADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF5ADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5ADu:
    if(m==0u&&x==1u&&e==0u){ /* 4C 10 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5ADu,3u,0xF5u,0xF5B0u);
      c->pc=0xF510u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 10 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5ADu,3u,0xF5u,0xF5B0u);
      c->pc=0xF510u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 10 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5ADu,3u,0xF5u,0xF5B0u);
      c->pc=0xF510u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5B0u:
    if(m==0u&&x==1u&&e==0u){ /* CE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B0u,3u,0x04u,0xF5B3u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x043Fu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B0u,3u,0x04u,0xF5B3u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x043Fu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B0u,3u,0x04u,0xF5B3u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x043Fu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5B3u:
    if(m==0u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B3u,2u,0x03u,0xF5B5u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF5B8u;}
      if(c->pc!=0xF5B5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF5B5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B3u,2u,0x03u,0xF5B5u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF5B8u;}
      if(c->pc!=0xF5B5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF5B5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B3u,2u,0x03u,0xF5B5u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF5B8u;}
      if(c->pc!=0xF5B5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF5B5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5B5u:
    if(m==0u&&x==1u&&e==0u){ /* 4C 0A F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B5u,3u,0xF5u,0xF5B8u);
      c->pc=0xF50Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 0A F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B5u,3u,0xF5u,0xF5B8u);
      c->pc=0xF50Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 0A F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B5u,3u,0xF5u,0xF5B8u);
      c->pc=0xF50Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5B8u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B8u,1u,0x60u,0xF5B9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B8u,1u,0x60u,0xF5B9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B8u,1u,0x60u,0xF5B9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5B9u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B9u,2u,0x20u,0xF5BBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B9u,2u,0x20u,0xF5BBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5B9u,2u,0x20u,0xF5BBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5BBu:
    if(m==0u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5BBu,4u,0x00u,0xF5BFu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF5BEu))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5BFu:
    if(m==0u&&x==1u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5BFu,3u,0x00u,0xF5C2u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5BFu,2u,0x03u,0xF5C1u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5BFu,2u,0x03u,0xF5C1u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5C2u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5C2u,3u,0x04u,0xF5C5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x045Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5C5u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5C5u,3u,0x04u,0xF5C8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0461u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5C8u:
    if(m==0u&&x==1u&&e==0u){ /* 20 00 F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5C8u,3u,0xF6u,0xF5CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF5CAu))return 0;c->pc=0xF600u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5CBu:
    if(m==0u&&x==1u&&e==0u){ /* AD 57 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5CBu,3u,0x04u,0xF5CEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0457u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 57 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5CBu,3u,0x04u,0xF5CEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0457u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 57 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5CBu,3u,0x04u,0xF5CEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0457u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5CEu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5CEu,3u,0x04u,0xF5D1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5CEu,3u,0x04u,0xF5D1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x043Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5CEu,3u,0x04u,0xF5D1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x043Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5D1u:
    if(m==0u&&x==1u&&e==0u){ /* AD 59 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5D1u,3u,0x04u,0xF5D4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0459u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 59 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5D1u,3u,0x04u,0xF5D4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0459u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 59 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5D1u,3u,0x04u,0xF5D4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0459u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5D4u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5D4u,3u,0x04u,0xF5D7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5D4u,3u,0x04u,0xF5D7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x043Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5D4u,3u,0x04u,0xF5D7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x043Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5D7u:
    if(m==0u&&x==1u&&e==0u){ /* AD 5F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5D7u,3u,0x04u,0xF5DAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x045Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 5F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5D7u,3u,0x04u,0xF5DAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x045Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 5F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5D7u,3u,0x04u,0xF5DAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x045Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5DAu:
    if(m==0u&&x==1u&&e==0u){ /* 49 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5DAu,3u,0x00u,0xF5DDu);
      sc_v11_op_eor(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5DAu,2u,0x04u,0xF5DCu);
      sc_v11_op_eor(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5DAu,2u,0x04u,0xF5DCu);
      sc_v11_op_eor(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5DDu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5DDu,3u,0x04u,0xF5E0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x045Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5E0u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5E0u,3u,0x04u,0xF5E3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0461u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5E3u:
    if(m==0u&&x==1u&&e==0u){ /* 20 00 F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5E3u,3u,0xF6u,0xF5E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF5E5u))return 0;c->pc=0xF600u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5E6u:
    if(m==0u&&x==1u&&e==0u){ /* AD 57 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5E6u,3u,0x04u,0xF5E9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0457u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 57 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5E6u,3u,0x04u,0xF5E9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0457u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 57 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5E6u,3u,0x04u,0xF5E9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0457u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5E9u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5E9u,3u,0x04u,0xF5ECu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5E9u,3u,0x04u,0xF5ECu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x043Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5E9u,3u,0x04u,0xF5ECu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x043Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5ECu:
    if(m==0u&&x==1u&&e==0u){ /* AD 59 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5ECu,3u,0x04u,0xF5EFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0459u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 59 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5ECu,3u,0x04u,0xF5EFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0459u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 59 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5ECu,3u,0x04u,0xF5EFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0459u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5EFu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5EFu,3u,0x04u,0xF5F2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5EFu,3u,0x04u,0xF5F2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x043Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5EFu,3u,0x04u,0xF5F2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x043Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5F2u:
    if(m==0u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5F2u,4u,0x00u,0xF5F6u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF5F5u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5F2u,4u,0x00u,0xF5F6u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF5F5u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5F2u,4u,0x00u,0xF5F6u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF5F5u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5F6u:
    if(m==0u&&x==1u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5F6u,3u,0x00u,0xF5F9u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5F6u,2u,0x03u,0xF5F8u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5F6u,2u,0x03u,0xF5F8u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5F9u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5F9u,3u,0x04u,0xF5FCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x045Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5FCu:
    if(m==0u&&x==1u&&e==0u){ /* 20 47 F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5FCu,3u,0xF6u,0xF5FFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF5FEu))return 0;c->pc=0xF647u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F5FFu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5FFu,1u,0x60u,0xF600u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5FFu,1u,0x60u,0xF600u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F5FFu,1u,0x60u,0xF600u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F600u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F600u,2u,0x20u,0xF602u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F602u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F602u,3u,0x04u,0xF605u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F602u,3u,0x04u,0xF605u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F602u,3u,0x04u,0xF605u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F605u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F605u,1u,0x18u,0xF606u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F605u,1u,0x18u,0xF606u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F605u,1u,0x18u,0xF606u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F606u:
    if(m==0u&&x==1u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F606u,3u,0x00u,0xF609u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F606u,2u,0x04u,0xF608u);
      sc_v11_op_adc(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F606u,2u,0x04u,0xF608u);
      sc_v11_op_adc(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F609u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F609u,3u,0x04u,0xF60Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0453u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F60Cu:
    if(m==0u&&x==1u&&e==0u){ /* AD 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F60Cu,3u,0x04u,0xF60Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F60Fu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F60Fu,1u,0x18u,0xF610u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F610u:
    if(m==0u&&x==1u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F610u,3u,0x00u,0xF613u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F613u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 55 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F613u,3u,0x04u,0xF616u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0455u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F616u:
    if(m==0u&&x==1u&&e==0u){ /* 20 43 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F616u,3u,0xF8u,0xF619u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF618u))return 0;c->pc=0xF843u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F619u:
    if(m==0u&&x==1u&&e==0u){ /* B0 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F619u,2u,0x2Bu,0xF61Bu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF646u;}
      if(c->pc!=0xF61Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF61Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F619u,2u,0x2Bu,0xF61Bu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF646u;}
      if(c->pc!=0xF61Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF61Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F619u,2u,0x2Bu,0xF61Bu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF646u;}
      if(c->pc!=0xF61Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF61Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F61Bu:
    if(m==0u&&x==1u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F61Bu,3u,0xF7u,0xF61Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF61Du))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F61Bu,3u,0xF7u,0xF61Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF61Du))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F61Bu,3u,0xF7u,0xF61Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF61Du))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F61Eu:
    if(m==0u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F61Eu,4u,0x00u,0xF622u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF621u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F61Eu,4u,0x00u,0xF622u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF621u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F61Eu,4u,0x00u,0xF622u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF621u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F622u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F622u,1u,0x4Au,0xF623u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F622u,1u,0x4Au,0xF623u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F622u,1u,0x4Au,0xF623u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F623u:
    if(m==0u&&x==1u&&e==0u){ /* 90 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F623u,2u,0x0Bu,0xF625u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF630u;}
      if(c->pc!=0xF625u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF625u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F623u,2u,0x0Bu,0xF625u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF630u;}
      if(c->pc!=0xF625u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF625u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F623u,2u,0x0Bu,0xF625u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF630u;}
      if(c->pc!=0xF625u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF625u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F625u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F625u,1u,0x4Au,0xF626u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F625u,1u,0x4Au,0xF626u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F625u,1u,0x4Au,0xF626u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F626u:
    if(m==0u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F626u,2u,0x05u,0xF628u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF62Du;}
      if(c->pc!=0xF628u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF628u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F626u,2u,0x05u,0xF628u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF62Du;}
      if(c->pc!=0xF628u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF628u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F626u,2u,0x05u,0xF628u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF62Du;}
      if(c->pc!=0xF628u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF628u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F628u:
    if(m==0u&&x==1u&&e==0u){ /* EE 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F628u,3u,0x04u,0xF62Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0461u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F628u,3u,0x04u,0xF62Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0461u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F628u,3u,0x04u,0xF62Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0461u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F62Bu:
    if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F62Bu,2u,0x03u,0xF62Du);
      if(1){c->pc=0xF630u;}
      if(c->pc!=0xF62Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF62Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F62Bu,2u,0x03u,0xF62Du);
      if(1){c->pc=0xF630u;}
      if(c->pc!=0xF62Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF62Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F62Bu,2u,0x03u,0xF62Du);
      if(1){c->pc=0xF630u;}
      if(c->pc!=0xF62Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF62Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F62Du:
    if(m==0u&&x==1u&&e==0u){ /* CE 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F62Du,3u,0x04u,0xF630u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0461u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F62Du,3u,0x04u,0xF630u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0461u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F62Du,3u,0x04u,0xF630u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0461u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F630u:
    if(m==0u&&x==1u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F630u,3u,0x00u,0xF633u);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F630u,2u,0x0Au,0xF632u);
      sc_v11_op_lda(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F630u,2u,0x0Au,0xF632u);
      sc_v11_op_lda(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F633u:
    if(m==0u&&x==1u&&e==0u){ /* 20 77 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F633u,3u,0xF8u,0xF636u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF635u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F636u:
    if(m==0u&&x==1u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F636u,2u,0x06u,0xF638u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF63Eu;}
      if(c->pc!=0xF638u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF638u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F636u,2u,0x06u,0xF638u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF63Eu;}
      if(c->pc!=0xF638u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF638u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F636u,2u,0x06u,0xF638u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF63Eu;}
      if(c->pc!=0xF638u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF638u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F638u:
    if(m==0u&&x==1u&&e==0u){ /* AD 5F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F638u,3u,0x04u,0xF63Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x045Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 5F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F638u,3u,0x04u,0xF63Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x045Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 5F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F638u,3u,0x04u,0xF63Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x045Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F63Bu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F63Bu,3u,0x04u,0xF63Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0461u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F63Bu,3u,0x04u,0xF63Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0461u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F63Bu,3u,0x04u,0xF63Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0461u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F63Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F63Eu,3u,0x04u,0xF641u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0461u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F63Eu,3u,0x04u,0xF641u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0461u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F63Eu,3u,0x04u,0xF641u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0461u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F641u:
    if(m==0u&&x==1u&&e==0u){ /* 20 AE F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F641u,3u,0xF6u,0xF644u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF643u))return 0;c->pc=0xF6AEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 AE F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F641u,3u,0xF6u,0xF644u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF643u))return 0;c->pc=0xF6AEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 AE F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F641u,3u,0xF6u,0xF644u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF643u))return 0;c->pc=0xF6AEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F644u:
    if(m==0u&&x==1u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F644u,2u,0xBCu,0xF646u);
      if(1){c->pc=0xF602u;}
      if(c->pc!=0xF646u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF646u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F644u,2u,0xBCu,0xF646u);
      if(1){c->pc=0xF602u;}
      if(c->pc!=0xF646u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF646u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F644u,2u,0xBCu,0xF646u);
      if(1){c->pc=0xF602u;}
      if(c->pc!=0xF646u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF646u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F646u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F646u,1u,0x60u,0xF647u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F646u,1u,0x60u,0xF647u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F646u,1u,0x60u,0xF647u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F647u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F647u,2u,0x20u,0xF649u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F649u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F649u,3u,0x04u,0xF64Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F649u,3u,0x04u,0xF64Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F649u,3u,0x04u,0xF64Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F64Cu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F64Cu,1u,0x18u,0xF64Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F64Cu,1u,0x18u,0xF64Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F64Cu,1u,0x18u,0xF64Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F64Du:
    if(m==0u&&x==1u&&e==0u){ /* 69 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F64Du,3u,0x00u,0xF650u);
      sc_v11_op_adc(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F64Du,2u,0x03u,0xF64Fu);
      sc_v11_op_adc(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F64Du,2u,0x03u,0xF64Fu);
      sc_v11_op_adc(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F650u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F650u,3u,0x04u,0xF653u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0453u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F653u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F653u,3u,0x04u,0xF656u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F656u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F656u,1u,0x18u,0xF657u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F657u:
    if(m==0u&&x==1u&&e==0u){ /* 69 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F657u,3u,0x00u,0xF65Au);
      sc_v11_op_adc(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F65Au:
    if(m==0u&&x==1u&&e==0u){ /* 8D 55 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F65Au,3u,0x04u,0xF65Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0455u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F65Du:
    if(m==0u&&x==1u&&e==0u){ /* 20 43 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F65Du,3u,0xF8u,0xF660u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF65Fu))return 0;c->pc=0xF843u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F660u:
    if(m==0u&&x==1u&&e==0u){ /* B0 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F660u,2u,0x2Bu,0xF662u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF68Du;}
      if(c->pc!=0xF662u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF662u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F660u,2u,0x2Bu,0xF662u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF68Du;}
      if(c->pc!=0xF662u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF662u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F660u,2u,0x2Bu,0xF662u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF68Du;}
      if(c->pc!=0xF662u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF662u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F662u:
    if(m==0u&&x==1u&&e==0u){ /* 20 94 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F662u,3u,0xF7u,0xF665u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF664u))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 94 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F662u,3u,0xF7u,0xF665u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF664u))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 94 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F662u,3u,0xF7u,0xF665u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF664u))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F665u:
    if(m==0u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F665u,4u,0x00u,0xF669u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF668u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F665u,4u,0x00u,0xF669u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF668u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F665u,4u,0x00u,0xF669u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF668u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F669u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F669u,1u,0x4Au,0xF66Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F669u,1u,0x4Au,0xF66Au);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F669u,1u,0x4Au,0xF66Au);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F66Au:
    if(m==0u&&x==1u&&e==0u){ /* 90 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F66Au,2u,0x0Bu,0xF66Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF677u;}
      if(c->pc!=0xF66Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF66Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F66Au,2u,0x0Bu,0xF66Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF677u;}
      if(c->pc!=0xF66Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF66Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F66Au,2u,0x0Bu,0xF66Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF677u;}
      if(c->pc!=0xF66Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF66Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F66Cu:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F66Cu,1u,0x4Au,0xF66Du);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F66Cu,1u,0x4Au,0xF66Du);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F66Cu,1u,0x4Au,0xF66Du);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F66Du:
    if(m==0u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F66Du,2u,0x05u,0xF66Fu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF674u;}
      if(c->pc!=0xF66Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF66Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F66Du,2u,0x05u,0xF66Fu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF674u;}
      if(c->pc!=0xF66Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF66Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F66Du,2u,0x05u,0xF66Fu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF674u;}
      if(c->pc!=0xF66Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF66Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F66Fu:
    if(m==0u&&x==1u&&e==0u){ /* EE 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F66Fu,3u,0x04u,0xF672u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0461u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F66Fu,3u,0x04u,0xF672u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0461u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F66Fu,3u,0x04u,0xF672u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0461u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F672u:
    if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F672u,2u,0x03u,0xF674u);
      if(1){c->pc=0xF677u;}
      if(c->pc!=0xF674u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF674u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F672u,2u,0x03u,0xF674u);
      if(1){c->pc=0xF677u;}
      if(c->pc!=0xF674u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF674u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F672u,2u,0x03u,0xF674u);
      if(1){c->pc=0xF677u;}
      if(c->pc!=0xF674u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF674u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F674u:
    if(m==0u&&x==1u&&e==0u){ /* CE 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F674u,3u,0x04u,0xF677u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0461u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F674u,3u,0x04u,0xF677u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0461u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F674u,3u,0x04u,0xF677u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0461u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F677u:
    if(m==0u&&x==1u&&e==0u){ /* A9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F677u,3u,0x00u,0xF67Au);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F677u,2u,0x0Cu,0xF679u);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F677u,2u,0x0Cu,0xF679u);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F67Au:
    if(m==0u&&x==1u&&e==0u){ /* 20 77 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F67Au,3u,0xF8u,0xF67Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF67Cu))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F67Du:
    if(m==0u&&x==1u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F67Du,2u,0x06u,0xF67Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF685u;}
      if(c->pc!=0xF67Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF67Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F67Du,2u,0x06u,0xF67Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF685u;}
      if(c->pc!=0xF67Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF67Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F67Du,2u,0x06u,0xF67Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF685u;}
      if(c->pc!=0xF67Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF67Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F67Fu:
    if(m==0u&&x==1u&&e==0u){ /* AD 5F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F67Fu,3u,0x04u,0xF682u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x045Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 5F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F67Fu,3u,0x04u,0xF682u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x045Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 5F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F67Fu,3u,0x04u,0xF682u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x045Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F682u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F682u,3u,0x04u,0xF685u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0461u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F682u,3u,0x04u,0xF685u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0461u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F682u,3u,0x04u,0xF685u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0461u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F685u:
    if(m==0u&&x==1u&&e==0u){ /* AD 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F685u,3u,0x04u,0xF688u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0461u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F685u,3u,0x04u,0xF688u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0461u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 61 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F685u,3u,0x04u,0xF688u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0461u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F688u:
    if(m==0u&&x==1u&&e==0u){ /* 20 AE F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F688u,3u,0xF6u,0xF68Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF68Au))return 0;c->pc=0xF6AEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 AE F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F688u,3u,0xF6u,0xF68Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF68Au))return 0;c->pc=0xF6AEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 AE F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F688u,3u,0xF6u,0xF68Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF68Au))return 0;c->pc=0xF6AEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F68Bu:
    if(m==0u&&x==1u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F68Bu,2u,0xBCu,0xF68Du);
      if(1){c->pc=0xF649u;}
      if(c->pc!=0xF68Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF68Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F68Bu,2u,0xBCu,0xF68Du);
      if(1){c->pc=0xF649u;}
      if(c->pc!=0xF68Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF68Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F68Bu,2u,0xBCu,0xF68Du);
      if(1){c->pc=0xF649u;}
      if(c->pc!=0xF68Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF68Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F68Du:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F68Du,1u,0x60u,0xF68Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F68Du,1u,0x60u,0xF68Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F68Du,1u,0x60u,0xF68Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F6AEu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F6AEu,2u,0x30u,0xF6B0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F6AEu,2u,0x30u,0xF6B0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F6AEu,2u,0x30u,0xF6B0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F71Du:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F71Du,2u,0x20u,0xF71Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F71Du,2u,0x20u,0xF71Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F71Du,2u,0x20u,0xF71Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F71Fu:
    if(m==0u&&x==1u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F71Fu,3u,0x00u,0xF722u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F722u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 47 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F722u,3u,0x04u,0xF725u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0447u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F725u:
    if(m==0u&&x==1u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F725u,3u,0x00u,0xF728u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F725u,2u,0x08u,0xF727u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F725u,2u,0x08u,0xF727u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F728u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F728u,3u,0x04u,0xF72Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0449u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F72Bu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F72Bu,2u,0x20u,0xF72Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F72Bu,2u,0x20u,0xF72Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F72Bu,2u,0x20u,0xF72Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F72Du:
    if(m==1u&&x==1u&&e==0u){ /* AD 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F72Du,3u,0x04u,0xF730u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0449u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F730u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F730u,1u,0x48u,0xF731u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F731u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F731u,2u,0xB3u,0xF733u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F733u:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F733u,2u,0x7Fu,0xF735u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F735u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F735u,2u,0xB1u,0xF737u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F737u:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F737u,1u,0x68u,0xF738u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F738u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 02 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F738u,4u,0x00u,0xF73Cu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F73Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F73Cu,2u,0x09u,0xF73Eu);
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F73Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 03 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F73Eu,4u,0x00u,0xF742u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F742u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F742u,1u,0x48u,0xF743u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F743u:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F743u,1u,0x68u,0xF744u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F744u:
    if(m==1u&&x==1u&&e==0u){ /* EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F744u,1u,0xEAu,0xF745u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F745u:
    if(m==1u&&x==1u&&e==0u){ /* AF 17 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F745u,4u,0x00u,0xF749u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F749u:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F749u,1u,0xEBu,0xF74Au);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F74Au:
    if(m==1u&&x==1u&&e==0u){ /* AF 16 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F74Au,4u,0x00u,0xF74Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F74Eu:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F74Eu,1u,0x48u,0xF74Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F74Fu:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F74Fu,2u,0xB3u,0xF751u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F751u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F751u,2u,0xB1u,0xF753u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F753u:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F753u,1u,0x68u,0xF754u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F754u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F754u,2u,0x20u,0xF756u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F756u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F756u,1u,0x18u,0xF757u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F757u:
    if(m==0u&&x==1u&&e==0u){ /* 6D 47 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F757u,3u,0x04u,0xF75Au);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0447u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F75Au:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F75Au,1u,0xAAu,0xF75Bu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F75Bu:
    if(m==0u&&x==1u&&e==0u){ /* BF CC F6 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F75Bu,4u,0x01u,0xF75Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01F6CCu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F75Fu:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F75Fu,3u,0x00u,0xF762u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F762u:
    if(m==0u&&x==1u&&e==0u){ /* 20 E7 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F762u,3u,0xF7u,0xF765u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF764u))return 0;c->pc=0xF7E7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F765u:
    if(m==0u&&x==1u&&e==0u){ /* CE 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F765u,3u,0x04u,0xF768u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0449u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F765u,3u,0x04u,0xF768u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0449u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F765u,3u,0x04u,0xF768u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0449u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F768u:
    if(m==0u&&x==1u&&e==0u){ /* 10 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F768u,2u,0xC1u,0xF76Au);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF72Bu;}
      if(c->pc!=0xF76Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF76Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 10 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F768u,2u,0xC1u,0xF76Au);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF72Bu;}
      if(c->pc!=0xF76Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF76Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 10 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F768u,2u,0xC1u,0xF76Au);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF72Bu;}
      if(c->pc!=0xF76Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF76Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F76Au:
    if(m==0u&&x==1u&&e==0u){ /* CE 47 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F76Au,3u,0x04u,0xF76Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0447u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 47 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F76Au,3u,0x04u,0xF76Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0447u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 47 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F76Au,3u,0x04u,0xF76Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0447u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F76Du:
    if(m==0u&&x==1u&&e==0u){ /* 10 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F76Du,2u,0xB6u,0xF76Fu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF725u;}
      if(c->pc!=0xF76Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF76Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 10 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F76Du,2u,0xB6u,0xF76Fu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF725u;}
      if(c->pc!=0xF76Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF76Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 10 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F76Du,2u,0xB6u,0xF76Fu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF725u;}
      if(c->pc!=0xF76Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF76Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F76Fu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F76Fu,1u,0x60u,0xF770u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F76Fu,1u,0x60u,0xF770u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F76Fu,1u,0x60u,0xF770u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F794u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F794u,2u,0x20u,0xF796u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F794u,2u,0x20u,0xF796u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F794u,2u,0x20u,0xF796u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F796u:
    if(m==0u&&x==1u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F796u,3u,0x00u,0xF799u);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F799u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 47 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F799u,3u,0x04u,0xF79Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0447u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F79Cu:
    if(m==0u&&x==1u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F79Cu,3u,0x00u,0xF79Fu);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F79Cu,2u,0x05u,0xF79Eu);
      sc_v11_op_lda(r,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F79Cu,2u,0x05u,0xF79Eu);
      sc_v11_op_lda(r,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F79Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F79Fu,3u,0x04u,0xF7A2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0449u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7A2u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7A2u,2u,0x20u,0xF7A4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7A2u,2u,0x20u,0xF7A4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7A2u,2u,0x20u,0xF7A4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7A4u:
    if(m==1u&&x==1u&&e==0u){ /* AD 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7A4u,3u,0x04u,0xF7A7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0449u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7A7u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7A7u,1u,0x48u,0xF7A8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7A8u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7A8u,2u,0xB3u,0xF7AAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7AAu:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7AAu,2u,0x7Fu,0xF7ACu);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7ACu:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7ACu,2u,0xB1u,0xF7AEu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7AEu:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7AEu,1u,0x68u,0xF7AFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7AFu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 02 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7AFu,4u,0x00u,0xF7B3u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7B3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7B3u,2u,0x06u,0xF7B5u);
      sc_v11_op_lda(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7B5u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 03 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7B5u,4u,0x00u,0xF7B9u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7B9u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7B9u,1u,0x48u,0xF7BAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7BAu:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7BAu,1u,0x68u,0xF7BBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7BBu:
    if(m==1u&&x==1u&&e==0u){ /* EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7BBu,1u,0xEAu,0xF7BCu);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7BCu:
    if(m==1u&&x==1u&&e==0u){ /* AF 17 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7BCu,4u,0x00u,0xF7C0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7C0u:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7C0u,1u,0xEBu,0xF7C1u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7C1u:
    if(m==1u&&x==1u&&e==0u){ /* AF 16 42 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7C1u,4u,0x00u,0xF7C5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7C5u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7C5u,1u,0x48u,0xF7C6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7C6u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7C6u,2u,0xB3u,0xF7C8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7C8u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7C8u,2u,0xB1u,0xF7CAu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7CAu:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7CAu,1u,0x68u,0xF7CBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7CBu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7CBu,2u,0x20u,0xF7CDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7CDu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7CDu,1u,0x18u,0xF7CEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7CEu:
    if(m==0u&&x==1u&&e==0u){ /* 6D 47 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7CEu,3u,0x04u,0xF7D1u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0447u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7D1u:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7D1u,1u,0xAAu,0xF7D2u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7D2u:
    if(m==0u&&x==1u&&e==0u){ /* BF 70 F7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7D2u,4u,0x01u,0xF7D6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01F770u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7D6u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7D6u,3u,0x00u,0xF7D9u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7D9u:
    if(m==0u&&x==1u&&e==0u){ /* 20 E7 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7D9u,3u,0xF7u,0xF7DCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF7DBu))return 0;c->pc=0xF7E7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7DCu:
    if(m==0u&&x==1u&&e==0u){ /* CE 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7DCu,3u,0x04u,0xF7DFu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0449u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7DCu,3u,0x04u,0xF7DFu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0449u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7DCu,3u,0x04u,0xF7DFu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0449u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7DFu:
    if(m==0u&&x==1u&&e==0u){ /* 10 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7DFu,2u,0xC1u,0xF7E1u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF7A2u;}
      if(c->pc!=0xF7E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF7E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 10 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7DFu,2u,0xC1u,0xF7E1u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF7A2u;}
      if(c->pc!=0xF7E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF7E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 10 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7DFu,2u,0xC1u,0xF7E1u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF7A2u;}
      if(c->pc!=0xF7E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF7E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7E1u:
    if(m==0u&&x==1u&&e==0u){ /* CE 47 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7E1u,3u,0x04u,0xF7E4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0447u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 47 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7E1u,3u,0x04u,0xF7E4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0447u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 47 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7E1u,3u,0x04u,0xF7E4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0447u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7E4u:
    if(m==0u&&x==1u&&e==0u){ /* 10 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7E4u,2u,0xB6u,0xF7E6u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF79Cu;}
      if(c->pc!=0xF7E6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF7E6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 10 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7E4u,2u,0xB6u,0xF7E6u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF79Cu;}
      if(c->pc!=0xF7E6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF7E6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 10 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7E4u,2u,0xB6u,0xF7E6u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF79Cu;}
      if(c->pc!=0xF7E6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF7E6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7E6u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7E6u,1u,0x60u,0xF7E7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7E6u,1u,0x60u,0xF7E7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7E6u,1u,0x60u,0xF7E7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7E7u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7E7u,2u,0x20u,0xF7E9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7E9u:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7E9u,1u,0x48u,0xF7EAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7EAu:
    if(m==0u&&x==1u&&e==0u){ /* C9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7EAu,3u,0x00u,0xF7EDu);
      sc_v11_op_compare(r,c->a,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7EDu:
    if(m==0u&&x==1u&&e==0u){ /* F0 52 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7EDu,2u,0x52u,0xF7EFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF841u;}
      if(c->pc!=0xF7EFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF7EFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7EFu:
    if(m==0u&&x==1u&&e==0u){ /* AD 47 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7EFu,3u,0x04u,0xF7F2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0447u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7F2u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7F2u,1u,0x18u,0xF7F3u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7F3u:
    if(m==0u&&x==1u&&e==0u){ /* 6D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7F3u,3u,0x04u,0xF7F6u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7F6u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7F6u,3u,0x04u,0xF7F9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0453u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7F9u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7F9u,3u,0x04u,0xF7FCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7FCu:
    if(m==0u&&x==1u&&e==0u){ /* AD 49 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7FCu,3u,0x04u,0xF7FFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0449u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F7FFu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F7FFu,1u,0x18u,0xF800u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
