/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00031(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00C400u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C400u,2u,0x0Fu,0xC402u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC411u;}
      if(c->pc!=0xC402u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC402u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C402u:
    if(m==0u&&x==0u&&e==0u){ /* AD F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C402u,3u,0x0Au,0xC405u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C405u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C405u,2u,0x0Au,0xC407u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC411u;}
      if(c->pc!=0xC407u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC407u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C407u:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C407u,3u,0x0Au,0xC40Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C40Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C40Au,2u,0x05u,0xC40Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC411u;}
      if(c->pc!=0xC40Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC40Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C40Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD B5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C40Cu,3u,0x0Au,0xC40Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C40Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C40Fu,2u,0x01u,0xC411u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC412u;}
      if(c->pc!=0xC411u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC411u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C411u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C411u,1u,0x60u,0xC412u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C412u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C412u,2u,0x20u,0xC414u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C414u:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C414u,3u,0x0Au,0xC417u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C417u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C417u,2u,0x10u,0xC419u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C419u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C419u,1u,0x0Au,0xC41Au);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C41Au:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C41Au,1u,0xAAu,0xC41Bu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C41Bu:
    if(m==0u&&x==0u&&e==0u){ /* FC 2E C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C41Bu,3u,0xC4u,0xC41Eu);
      {uint32_t q=((uint32_t)c->pbr<<16)|((0xC42Eu+c->x)&0xffffu);uint16_t t=sc_v11_bus_read16(r,q);sc_v11_scheduler_internal_cycle(r,2u);if(!sc_v11_push16(r,0xC41Du))return 0;c->pc=t;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C41Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C41Eu,2u,0x20u,0xC420u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C41Eu,2u,0x20u,0xC420u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C41Eu,2u,0x20u,0xC420u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C41Eu,2u,0x20u,0xC420u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C420u:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C420u,3u,0x0Au,0xC423u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C420u,3u,0x0Au,0xC423u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C423u:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C423u,2u,0x08u,0xC425u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC42Du;}
      if(c->pc!=0xC425u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC425u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C423u,2u,0x08u,0xC425u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC42Du;}
      if(c->pc!=0xC425u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC425u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C425u:
    if(m==0u&&x==0u&&e==0u){ /* AD 03 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C425u,3u,0x0Bu,0xC428u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B03u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 03 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C425u,3u,0x0Bu,0xC428u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B03u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C428u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C428u,2u,0x03u,0xC42Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC42Du;}
      if(c->pc!=0xC42Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC42Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C428u,2u,0x03u,0xC42Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC42Du;}
      if(c->pc!=0xC42Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC42Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C42Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 13 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C42Au,3u,0xC7u,0xC42Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC42Cu))return 0;c->pc=0xC713u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 13 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C42Au,3u,0xC7u,0xC42Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC42Cu))return 0;c->pc=0xC713u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C42Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C42Du,1u,0x60u,0xC42Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C42Du,1u,0x60u,0xC42Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C42Du,1u,0x60u,0xC42Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C42Du,1u,0x60u,0xC42Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C440u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C440u,2u,0x20u,0xC442u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C442u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 03 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C442u,3u,0x0Bu,0xC445u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B03u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C445u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 04 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C445u,3u,0x0Bu,0xC448u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B04u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C448u:
    if(m==1u&&x==0u&&e==0u){ /* AD 95 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C448u,3u,0x01u,0xC44Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0195u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C44Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8D EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C44Bu,3u,0x0Au,0xC44Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AEFu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C44Eu:
    if(m==1u&&x==0u&&e==0u){ /* 29 FB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C44Eu,2u,0xFBu,0xC450u);
      sc_v11_op_and(r,0x00FBu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C450u:
    if(m==1u&&x==0u&&e==0u){ /* 09 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C450u,2u,0x04u,0xC452u);
      sc_v11_op_ora(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C452u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 95 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C452u,3u,0x01u,0xC455u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0195u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C455u:
    if(m==1u&&x==0u&&e==0u){ /* AD F9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C455u,3u,0x0Au,0xC458u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C458u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C458u,3u,0x04u,0xC45Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0400u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C45Bu:
    if(m==1u&&x==0u&&e==0u){ /* AD F7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C45Bu,3u,0x0Au,0xC45Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C45Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C45Eu,3u,0x04u,0xC461u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0402u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C461u:
    if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C461u,2u,0xFFu,0xC463u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C463u:
    if(m==1u&&x==0u&&e==0u){ /* 8D FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C463u,3u,0x03u,0xC466u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x03FEu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C466u:
    if(m==1u&&x==0u&&e==0u){ /* EE F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C466u,3u,0x0Au,0xC469u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AF5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C469u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C469u,2u,0x20u,0xC46Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C46Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 E0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C46Bu,3u,0x00u,0xC46Eu);
      sc_v11_op_lda(r,0x00E0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C46Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C46Eu,1u,0x0Au,0xC46Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C46Fu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C46Fu,1u,0x0Au,0xC470u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C470u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C470u,1u,0x0Au,0xC471u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C471u:
    if(m==0u&&x==0u&&e==0u){ /* 8D FB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C471u,3u,0x0Au,0xC474u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AFBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C474u:
    if(m==0u&&x==0u&&e==0u){ /* 20 98 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C474u,3u,0xC7u,0xC477u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC476u))return 0;c->pc=0xC798u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C477u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C477u,1u,0x60u,0xC478u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C477u,1u,0x60u,0xC478u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C477u,1u,0x60u,0xC478u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C477u,1u,0x60u,0xC478u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C478u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C478u,2u,0x20u,0xC47Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C47Au:
    if(m==1u&&x==0u&&e==0u){ /* AD FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C47Au,3u,0x03u,0xC47Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x03FEu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C47Du:
    if(m==1u&&x==0u&&e==0u){ /* D0 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C47Du,2u,0x40u,0xC47Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC4BFu;}
      if(c->pc!=0xC47Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC47Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C47Fu:
    if(m==1u&&x==0u&&e==0u){ /* AD EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C47Fu,3u,0x0Au,0xC482u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AEFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C482u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 95 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C482u,3u,0x01u,0xC485u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0195u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C485u:
    if(m==1u&&x==0u&&e==0u){ /* 9C EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C485u,3u,0x0Au,0xC488u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AEFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C488u:
    if(m==1u&&x==0u&&e==0u){ /* EE F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C488u,3u,0x0Au,0xC48Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AF5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C48Bu:
    if(m==1u&&x==0u&&e==0u){ /* 20 4F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C48Bu,3u,0x82u,0xC48Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC48Du))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C48Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C48Eu,2u,0x10u,0xC490u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C48Eu,2u,0x10u,0xC490u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C48Eu,2u,0x10u,0xC490u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C48Eu,2u,0x10u,0xC490u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C490u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C490u,2u,0x20u,0xC492u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C490u,2u,0x20u,0xC492u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C492u:
    if(m==0u&&x==1u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C492u,3u,0x00u,0xC495u);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C495u:
    if(m==0u&&x==1u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C495u,3u,0x00u,0xC498u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C498u:
    if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C498u,2u,0x05u,0xC49Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC49Fu;}
      if(c->pc!=0xC49Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC49Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C49Au:
    if(m==0u&&x==1u&&e==0u){ /* C9 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C49Au,3u,0x00u,0xC49Du);
      sc_v11_op_compare(r,c->a,0x0009u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C49Du:
    if(m==0u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C49Du,2u,0x01u,0xC49Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC4A0u;}
      if(c->pc!=0xC49Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC49Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C49Fu:
    if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C49Fu,1u,0x1Au,0xC4A0u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4A0u:
    if(m==0u&&x==1u&&e==0u){ /* 8D FF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4A0u,3u,0x0Au,0xC4A3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AFFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4A3u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4A3u,1u,0x0Au,0xC4A4u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4A4u:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4A4u,1u,0xAAu,0xC4A5u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4A5u:
    if(m==0u&&x==1u&&e==0u){ /* AD F9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4A5u,3u,0x0Au,0xC4A8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4A8u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4A8u,1u,0x0Au,0xC4A9u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4A9u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4A9u,1u,0x0Au,0xC4AAu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4AAu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4AAu,1u,0x0Au,0xC4ABu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4ABu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4ABu,1u,0x18u,0xC4ACu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4ACu:
    if(m==0u&&x==1u&&e==0u){ /* 7D C5 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4ACu,3u,0xC2u,0xC4AFu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xC2C5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4AFu:
    if(m==0u&&x==1u&&e==0u){ /* 8D FD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4AFu,3u,0x0Au,0xC4B2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AFDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4B2u:
    if(m==0u&&x==1u&&e==0u){ /* AD F7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4B2u,3u,0x0Au,0xC4B5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4B5u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4B5u,1u,0x0Au,0xC4B6u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4B6u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4B6u,1u,0x0Au,0xC4B7u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4B7u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4B7u,1u,0x0Au,0xC4B8u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4B8u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4B8u,1u,0x18u,0xC4B9u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4B9u:
    if(m==0u&&x==1u&&e==0u){ /* 7D E5 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4B9u,3u,0xC2u,0xC4BCu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xC2E5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4BCu:
    if(m==0u&&x==1u&&e==0u){ /* 8D FB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4BCu,3u,0x0Au,0xC4BFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AFBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4BFu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4BFu,1u,0x60u,0xC4C0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4BFu,1u,0x60u,0xC4C0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4C0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4C0u,2u,0x30u,0xC4C2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4C0u,2u,0x30u,0xC4C2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4C2u:
    if(m==1u&&x==1u&&e==0u){ /* AD F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4C2u,3u,0x0Au,0xC4C5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4C5u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4C5u,1u,0x0Au,0xC4C6u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4C6u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4C6u,1u,0xAAu,0xC4C7u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4C7u:
    if(m==1u&&x==1u&&e==0u){ /* BD A9 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4C7u,3u,0xC3u,0xC4CAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xC3A9u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4CAu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4CAu,1u,0x18u,0xC4CBu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4CBu:
    if(m==1u&&x==1u&&e==0u){ /* 6D FB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4CBu,3u,0x0Au,0xC4CEu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AFBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4CEu:
    if(m==1u&&x==1u&&e==0u){ /* 8D FB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4CEu,3u,0x0Au,0xC4D1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AFBu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4D1u:
    if(m==1u&&x==1u&&e==0u){ /* BD AA C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4D1u,3u,0xC3u,0xC4D4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xC3AAu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4D4u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4D4u,1u,0x18u,0xC4D5u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4D5u:
    if(m==1u&&x==1u&&e==0u){ /* 6D FD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4D5u,3u,0x0Au,0xC4D8u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AFDu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4D8u:
    if(m==1u&&x==1u&&e==0u){ /* 8D FD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4D8u,3u,0x0Au,0xC4DBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AFDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4DBu:
    if(m==1u&&x==1u&&e==0u){ /* 20 E6 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4DBu,3u,0xC6u,0xC4DEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC4DDu))return 0;c->pc=0xC6E6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4DEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4DEu,2u,0x30u,0xC4E0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4DEu,2u,0x30u,0xC4E0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4DEu,2u,0x30u,0xC4E0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4DEu,2u,0x30u,0xC4E0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4E0u:
    if(m==1u&&x==1u&&e==0u){ /* AD F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4E0u,3u,0x0Au,0xC4E3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4E3u:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4E3u,1u,0x1Au,0xC4E4u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4E4u:
    if(m==1u&&x==1u&&e==0u){ /* C9 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4E4u,2u,0x28u,0xC4E6u);
      sc_v11_op_compare(r,c->a,0x0028u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4E6u:
    if(m==1u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4E6u,2u,0x03u,0xC4E8u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC4EBu;}
      if(c->pc!=0xC4E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4E8u:
    if(m==1u&&x==1u&&e==0u){ /* 8D F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4E8u,3u,0x0Au,0xC4EBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AF3u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4EBu:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4EBu,1u,0x60u,0xC4ECu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4ECu:
    if(m==0u&&x==0u&&e==0u){ /* 20 C0 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4ECu,3u,0xC4u,0xC4EFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC4EEu))return 0;c->pc=0xC4C0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4EFu:
    if(m==0u&&x==0u&&e==0u){ /* 90 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4EFu,2u,0x23u,0xC4F1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC514u;}
      if(c->pc!=0xC4F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4EFu,2u,0x23u,0xC4F1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC514u;}
      if(c->pc!=0xC4F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4EFu,2u,0x23u,0xC4F1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC514u;}
      if(c->pc!=0xC4F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4EFu,2u,0x23u,0xC4F1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC514u;}
      if(c->pc!=0xC4F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4F1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4F1u,2u,0x20u,0xC4F3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4F1u,2u,0x20u,0xC4F3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4F1u,2u,0x20u,0xC4F3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4F1u,2u,0x20u,0xC4F3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4F3u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4F3u,2u,0x10u,0xC4F5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4F3u,2u,0x10u,0xC4F5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4F5u:
    if(m==1u&&x==0u&&e==0u){ /* EE F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4F5u,3u,0x0Au,0xC4F8u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AF5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4F8u:
    if(m==1u&&x==0u&&e==0u){ /* 9C F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4F8u,3u,0x0Au,0xC4FBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AF3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4FBu:
    if(m==1u&&x==0u&&e==0u){ /* AD F7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4FBu,3u,0x0Au,0xC4FEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4FEu:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4FEu,1u,0xEBu,0xC4FFu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C4FFu:
    if(m==1u&&x==0u&&e==0u){ /* AD F9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C4FFu,3u,0x0Au,0xC502u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C502u:
    if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C502u,3u,0x00u,0xC505u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C505u:
    if(m==1u&&x==0u&&e==0u){ /* 22 C2 A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C505u,4u,0x03u,0xC509u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC508u))return 0;
      c->pbr=0x03u;c->pc=0xA9C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C509u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C509u,2u,0x10u,0xC50Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C509u,2u,0x10u,0xC50Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C509u,2u,0x10u,0xC50Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C509u,2u,0x10u,0xC50Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C50Bu:
    if(m==0u&&x==0u&&e==0u){ /* A2 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C50Bu,3u,0x00u,0xC50Eu);
      sc_v11_op_ldx(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C50Bu,3u,0x00u,0xC50Eu);
      sc_v11_op_ldx(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C50Eu:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C50Eu,3u,0x00u,0xC511u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C50Eu,3u,0x00u,0xC511u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C511u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2E AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C511u,3u,0xAEu,0xC514u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC513u))return 0;c->pc=0xAE2Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 2E AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C511u,3u,0xAEu,0xC514u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC513u))return 0;c->pc=0xAE2Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C514u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C514u,1u,0x60u,0xC515u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C514u,1u,0x60u,0xC515u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C514u,1u,0x60u,0xC515u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C514u,1u,0x60u,0xC515u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C515u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C515u,2u,0x20u,0xC517u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C517u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C517u,2u,0x10u,0xC519u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C519u:
    if(m==1u&&x==0u&&e==0u){ /* 20 C0 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C519u,3u,0xC4u,0xC51Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC51Bu))return 0;c->pc=0xC4C0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C51Cu:
    if(m==0u&&x==0u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C51Cu,2u,0x31u,0xC51Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC54Fu;}
      if(c->pc!=0xC51Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC51Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C51Cu,2u,0x31u,0xC51Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC54Fu;}
      if(c->pc!=0xC51Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC51Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C51Cu,2u,0x31u,0xC51Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC54Fu;}
      if(c->pc!=0xC51Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC51Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C51Cu,2u,0x31u,0xC51Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC54Fu;}
      if(c->pc!=0xC51Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC51Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C51Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C51Eu,2u,0x20u,0xC520u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C51Eu,2u,0x20u,0xC520u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C51Eu,2u,0x20u,0xC520u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C51Eu,2u,0x20u,0xC520u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C520u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C520u,2u,0x10u,0xC522u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C520u,2u,0x10u,0xC522u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C522u:
    if(m==1u&&x==0u&&e==0u){ /* EE F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C522u,3u,0x0Au,0xC525u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AF5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C525u:
    if(m==1u&&x==0u&&e==0u){ /* 9C F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C525u,3u,0x0Au,0xC528u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AF3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C528u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C528u,3u,0x00u,0xC52Bu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C52Bu:
    if(m==1u&&x==0u&&e==0u){ /* BD 85 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C52Bu,3u,0xC3u,0xC52Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xC385u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C52Eu:
    if(m==1u&&x==0u&&e==0u){ /* C9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C52Eu,2u,0x80u,0xC530u);
      sc_v11_op_compare(r,c->a,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C530u:
    if(m==1u&&x==0u&&e==0u){ /* F0 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C530u,2u,0x1Du,0xC532u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC54Fu;}
      if(c->pc!=0xC532u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC532u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C532u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C532u,1u,0x18u,0xC533u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C533u:
    if(m==1u&&x==0u&&e==0u){ /* 6D F7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C533u,3u,0x0Au,0xC536u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C536u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C536u,1u,0xEBu,0xC537u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C537u:
    if(m==1u&&x==0u&&e==0u){ /* AD F9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C537u,3u,0x0Au,0xC53Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C53Au:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C53Au,1u,0x18u,0xC53Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C53Bu:
    if(m==1u&&x==0u&&e==0u){ /* 7D 86 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C53Bu,3u,0xC3u,0xC53Eu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xC386u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C53Eu:
    if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C53Eu,3u,0x00u,0xC541u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C541u:
    if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C541u,1u,0xDAu,0xC542u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C542u:
    if(m==1u&&x==0u&&e==0u){ /* 22 C2 A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C542u,4u,0x03u,0xC546u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC545u))return 0;
      c->pbr=0x03u;c->pc=0xA9C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C546u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C546u,2u,0x20u,0xC548u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C546u,2u,0x20u,0xC548u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C546u,2u,0x20u,0xC548u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C546u,2u,0x20u,0xC548u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C548u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C548u,2u,0x10u,0xC54Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C548u,2u,0x10u,0xC54Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C54Au:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C54Au,1u,0xFAu,0xC54Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C54Bu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C54Bu,1u,0xE8u,0xC54Cu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C54Cu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C54Cu,1u,0xE8u,0xC54Du);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C54Du:
    if(m==1u&&x==0u&&e==0u){ /* 80 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C54Du,2u,0xDCu,0xC54Fu);
      if(1){c->pc=0xC52Bu;}
      if(c->pc!=0xC54Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC54Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C54Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C54Fu,1u,0x60u,0xC550u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C54Fu,1u,0x60u,0xC550u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C54Fu,1u,0x60u,0xC550u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C54Fu,1u,0x60u,0xC550u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C550u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C550u,2u,0x20u,0xC552u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C552u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C552u,2u,0x10u,0xC554u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C554u:
    if(m==1u&&x==0u&&e==0u){ /* 20 C0 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C554u,3u,0xC4u,0xC557u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC556u))return 0;c->pc=0xC4C0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C557u:
    if(m==0u&&x==0u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C557u,2u,0x31u,0xC559u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC58Au;}
      if(c->pc!=0xC559u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC559u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C557u,2u,0x31u,0xC559u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC58Au;}
      if(c->pc!=0xC559u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC559u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C557u,2u,0x31u,0xC559u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC58Au;}
      if(c->pc!=0xC559u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC559u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C557u,2u,0x31u,0xC559u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC58Au;}
      if(c->pc!=0xC559u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC559u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C559u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C559u,2u,0x20u,0xC55Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C559u,2u,0x20u,0xC55Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C559u,2u,0x20u,0xC55Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C559u,2u,0x20u,0xC55Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C55Bu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C55Bu,2u,0x10u,0xC55Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C55Bu,2u,0x10u,0xC55Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C55Du:
    if(m==1u&&x==0u&&e==0u){ /* EE F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C55Du,3u,0x0Au,0xC560u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AF5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C560u:
    if(m==1u&&x==0u&&e==0u){ /* 9C F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C560u,3u,0x0Au,0xC563u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AF3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C563u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C563u,3u,0x00u,0xC566u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C566u:
    if(m==1u&&x==0u&&e==0u){ /* BD 8E C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C566u,3u,0xC3u,0xC569u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xC38Eu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C569u:
    if(m==1u&&x==0u&&e==0u){ /* C9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C569u,2u,0x80u,0xC56Bu);
      sc_v11_op_compare(r,c->a,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C56Bu:
    if(m==1u&&x==0u&&e==0u){ /* F0 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C56Bu,2u,0x1Du,0xC56Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC58Au;}
      if(c->pc!=0xC56Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC56Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C56Du:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C56Du,1u,0x18u,0xC56Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C56Eu:
    if(m==1u&&x==0u&&e==0u){ /* 6D F7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C56Eu,3u,0x0Au,0xC571u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C571u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C571u,1u,0xEBu,0xC572u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C572u:
    if(m==1u&&x==0u&&e==0u){ /* AD F9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C572u,3u,0x0Au,0xC575u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C575u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C575u,1u,0x18u,0xC576u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C576u:
    if(m==1u&&x==0u&&e==0u){ /* 7D 8F C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C576u,3u,0xC3u,0xC579u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xC38Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C579u:
    if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C579u,3u,0x00u,0xC57Cu);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C57Cu:
    if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C57Cu,1u,0xDAu,0xC57Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C57Du:
    if(m==1u&&x==0u&&e==0u){ /* 22 C2 A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C57Du,4u,0x03u,0xC581u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC580u))return 0;
      c->pbr=0x03u;c->pc=0xA9C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C581u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C581u,2u,0x20u,0xC583u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C581u,2u,0x20u,0xC583u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C581u,2u,0x20u,0xC583u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C581u,2u,0x20u,0xC583u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C583u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C583u,2u,0x10u,0xC585u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C583u,2u,0x10u,0xC585u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C585u:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C585u,1u,0xFAu,0xC586u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C586u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C586u,1u,0xE8u,0xC587u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C587u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C587u,1u,0xE8u,0xC588u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C588u:
    if(m==1u&&x==0u&&e==0u){ /* 80 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C588u,2u,0xDCu,0xC58Au);
      if(1){c->pc=0xC566u;}
      if(c->pc!=0xC58Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC58Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C58Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C58Au,1u,0x60u,0xC58Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C58Au,1u,0x60u,0xC58Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C58Au,1u,0x60u,0xC58Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C58Au,1u,0x60u,0xC58Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C58Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C58Bu,2u,0x20u,0xC58Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C58Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C58Du,2u,0x10u,0xC58Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C58Fu:
    if(m==1u&&x==0u&&e==0u){ /* 20 C0 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C58Fu,3u,0xC4u,0xC592u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC591u))return 0;c->pc=0xC4C0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C592u:
    if(m==0u&&x==0u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C592u,2u,0x31u,0xC594u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC5C5u;}
      if(c->pc!=0xC594u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC594u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C592u,2u,0x31u,0xC594u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC5C5u;}
      if(c->pc!=0xC594u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC594u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C592u,2u,0x31u,0xC594u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC5C5u;}
      if(c->pc!=0xC594u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC594u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C592u,2u,0x31u,0xC594u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC5C5u;}
      if(c->pc!=0xC594u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC594u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C594u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C594u,2u,0x20u,0xC596u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C594u,2u,0x20u,0xC596u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C594u,2u,0x20u,0xC596u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C594u,2u,0x20u,0xC596u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C596u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C596u,2u,0x10u,0xC598u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C596u,2u,0x10u,0xC598u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C598u:
    if(m==1u&&x==0u&&e==0u){ /* EE F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C598u,3u,0x0Au,0xC59Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AF5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C59Bu:
    if(m==1u&&x==0u&&e==0u){ /* 9C F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C59Bu,3u,0x0Au,0xC59Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AF3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C59Eu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C59Eu,3u,0x00u,0xC5A1u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5A1u:
    if(m==1u&&x==0u&&e==0u){ /* BD 97 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5A1u,3u,0xC3u,0xC5A4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xC397u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5A4u:
    if(m==1u&&x==0u&&e==0u){ /* C9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5A4u,2u,0x80u,0xC5A6u);
      sc_v11_op_compare(r,c->a,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5A6u:
    if(m==1u&&x==0u&&e==0u){ /* F0 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5A6u,2u,0x1Du,0xC5A8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC5C5u;}
      if(c->pc!=0xC5A8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5A8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5A8u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5A8u,1u,0x18u,0xC5A9u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5A9u:
    if(m==1u&&x==0u&&e==0u){ /* 6D F7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5A9u,3u,0x0Au,0xC5ACu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5ACu:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5ACu,1u,0xEBu,0xC5ADu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5ADu:
    if(m==1u&&x==0u&&e==0u){ /* AD F9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5ADu,3u,0x0Au,0xC5B0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5B0u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5B0u,1u,0x18u,0xC5B1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5B1u:
    if(m==1u&&x==0u&&e==0u){ /* 7D 98 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5B1u,3u,0xC3u,0xC5B4u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xC398u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5B4u:
    if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5B4u,3u,0x00u,0xC5B7u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5B7u:
    if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5B7u,1u,0xDAu,0xC5B8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5B8u:
    if(m==1u&&x==0u&&e==0u){ /* 22 C2 A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5B8u,4u,0x03u,0xC5BCu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC5BBu))return 0;
      c->pbr=0x03u;c->pc=0xA9C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5BCu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5BCu,2u,0x20u,0xC5BEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5BCu,2u,0x20u,0xC5BEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5BCu,2u,0x20u,0xC5BEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5BCu,2u,0x20u,0xC5BEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5BEu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5BEu,2u,0x10u,0xC5C0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5BEu,2u,0x10u,0xC5C0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5C0u:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5C0u,1u,0xFAu,0xC5C1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5C1u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5C1u,1u,0xE8u,0xC5C2u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5C2u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5C2u,1u,0xE8u,0xC5C3u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5C3u:
    if(m==1u&&x==0u&&e==0u){ /* 80 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5C3u,2u,0xDCu,0xC5C5u);
      if(1){c->pc=0xC5A1u;}
      if(c->pc!=0xC5C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5C5u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5C5u,1u,0x60u,0xC5C6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5C5u,1u,0x60u,0xC5C6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5C5u,1u,0x60u,0xC5C6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5C5u,1u,0x60u,0xC5C6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5C6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5C6u,2u,0x20u,0xC5C8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5C8u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5C8u,2u,0x10u,0xC5CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5CAu:
    if(m==1u&&x==0u&&e==0u){ /* 20 C0 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5CAu,3u,0xC4u,0xC5CDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC5CCu))return 0;c->pc=0xC4C0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5CDu:
    if(m==0u&&x==0u&&e==0u){ /* B0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5CDu,2u,0x0Bu,0xC5CFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC5DAu;}
      if(c->pc!=0xC5CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5CDu,2u,0x0Bu,0xC5CFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC5DAu;}
      if(c->pc!=0xC5CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5CDu,2u,0x0Bu,0xC5CFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC5DAu;}
      if(c->pc!=0xC5CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5CDu,2u,0x0Bu,0xC5CFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC5DAu;}
      if(c->pc!=0xC5CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5CFu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5CFu,2u,0x20u,0xC5D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5CFu,2u,0x20u,0xC5D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5CFu,2u,0x20u,0xC5D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5CFu,2u,0x20u,0xC5D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5D1u:
    if(m==1u&&x==0u&&e==0u){ /* AD F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5D1u,3u,0x0Au,0xC5D4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5D1u,3u,0x0Au,0xC5D4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5D4u:
    if(m==1u&&x==0u&&e==0u){ /* C9 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5D4u,2u,0x23u,0xC5D6u);
      sc_v11_op_compare(r,c->a,0x0023u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5D4u,2u,0x23u,0xC5D6u);
      sc_v11_op_compare(r,c->a,0x0023u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5D6u:
    if(m==1u&&x==0u&&e==0u){ /* D0 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5D6u,2u,0x4Bu,0xC5D8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC623u;}
      if(c->pc!=0xC5D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5D6u,2u,0x4Bu,0xC5D8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC623u;}
      if(c->pc!=0xC5D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5D8u:
    if(m==1u&&x==0u&&e==0u){ /* F0 33 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5D8u,2u,0x33u,0xC5DAu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC60Du;}
      if(c->pc!=0xC5DAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5DAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 33 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5D8u,2u,0x33u,0xC5DAu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC60Du;}
      if(c->pc!=0xC5DAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5DAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5DAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5DAu,2u,0x20u,0xC5DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5DAu,2u,0x20u,0xC5DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5DAu,2u,0x20u,0xC5DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5DAu,2u,0x20u,0xC5DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5DCu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5DCu,2u,0x10u,0xC5DEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5DCu,2u,0x10u,0xC5DEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5DEu:
    if(m==1u&&x==0u&&e==0u){ /* EE F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5DEu,3u,0x0Au,0xC5E1u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AF5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5E1u:
    if(m==1u&&x==0u&&e==0u){ /* A9 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5E1u,2u,0x30u,0xC5E3u);
      sc_v11_op_lda(r,0x0030u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5E3u:
    if(m==1u&&x==0u&&e==0u){ /* 8D F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5E3u,3u,0x0Au,0xC5E6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AF3u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5E6u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5E6u,3u,0x00u,0xC5E9u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5E9u:
    if(m==1u&&x==0u&&e==0u){ /* BD A0 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5E9u,3u,0xC3u,0xC5ECu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xC3A0u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5ECu:
    if(m==1u&&x==0u&&e==0u){ /* C9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5ECu,2u,0x80u,0xC5EEu);
      sc_v11_op_compare(r,c->a,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5EEu:
    if(m==1u&&x==0u&&e==0u){ /* F0 33 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5EEu,2u,0x33u,0xC5F0u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC623u;}
      if(c->pc!=0xC5F0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5F0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5F0u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5F0u,1u,0x18u,0xC5F1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5F1u:
    if(m==1u&&x==0u&&e==0u){ /* 6D F7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5F1u,3u,0x0Au,0xC5F4u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5F4u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5F4u,1u,0xEBu,0xC5F5u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5F5u:
    if(m==1u&&x==0u&&e==0u){ /* AD F9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5F5u,3u,0x0Au,0xC5F8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5F8u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5F8u,1u,0x18u,0xC5F9u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5F9u:
    if(m==1u&&x==0u&&e==0u){ /* 7D A1 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5F9u,3u,0xC3u,0xC5FCu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xC3A1u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5FCu:
    if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5FCu,3u,0x00u,0xC5FFu);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C5FFu:
    if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C5FFu,1u,0xDAu,0xC600u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C600u:
    if(m==1u&&x==0u&&e==0u){ /* 22 C2 A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C600u,4u,0x03u,0xC604u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC603u))return 0;
      c->pbr=0x03u;c->pc=0xA9C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C604u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C604u,2u,0x20u,0xC606u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C604u,2u,0x20u,0xC606u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C604u,2u,0x20u,0xC606u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C604u,2u,0x20u,0xC606u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C606u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C606u,2u,0x10u,0xC608u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C606u,2u,0x10u,0xC608u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C608u:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C608u,1u,0xFAu,0xC609u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C609u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C609u,1u,0xE8u,0xC60Au);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C60Au:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C60Au,1u,0xE8u,0xC60Bu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C60Bu:
    if(m==1u&&x==0u&&e==0u){ /* 80 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C60Bu,2u,0xDCu,0xC60Du);
      if(1){c->pc=0xC5E9u;}
      if(c->pc!=0xC60Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC60Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C60Du:
    if(m==1u&&x==0u&&e==0u){ /* 20 4F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C60Du,3u,0x82u,0xC610u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC60Fu))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 4F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C60Du,3u,0x82u,0xC610u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC60Fu))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C610u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C610u,2u,0x30u,0xC612u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C610u,2u,0x30u,0xC612u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C610u,2u,0x30u,0xC612u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C610u,2u,0x30u,0xC612u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C612u:
    if(m==1u&&x==1u&&e==0u){ /* 29 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C612u,2u,0x0Fu,0xC614u);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C614u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C614u,1u,0xAAu,0xC615u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C615u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C615u,1u,0x18u,0xC616u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C616u:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C616u,2u,0x08u,0xC618u);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C618u:
    if(m==1u&&x==1u&&e==0u){ /* 29 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C618u,2u,0x0Fu,0xC61Au);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C61Au:
    if(m==1u&&x==1u&&e==0u){ /* CD FF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C61Au,3u,0x0Au,0xC61Du);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AFFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C61Du:
    if(m==1u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C61Du,2u,0x01u,0xC61Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC620u;}
      if(c->pc!=0xC61Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC61Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C61Fu:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C61Fu,1u,0xAAu,0xC620u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C620u:
    if(m==1u&&x==1u&&e==0u){ /* 8E FF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C620u,3u,0x0Au,0xC623u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AFFu),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C623u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C623u,1u,0x60u,0xC624u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C623u,1u,0x60u,0xC624u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C624u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C624u,2u,0x30u,0xC626u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C626u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C626u,3u,0xFFu,0xC629u);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C629u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 03 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C629u,3u,0x0Bu,0xC62Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B03u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C62Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C62Cu,3u,0x0Au,0xC62Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AFFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C62Fu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C62Fu,1u,0x0Au,0xC630u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C630u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C630u,3u,0x00u,0xC633u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C633u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C633u,1u,0xA8u,0xC634u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C634u:
    if(m==0u&&x==0u&&e==0u){ /* A2 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C634u,3u,0x00u,0xC637u);
      sc_v11_op_ldx(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C637u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D7 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C637u,3u,0xC6u,0xC63Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC639u))return 0;c->pc=0xC6D7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C63Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C63Au,2u,0x30u,0xC63Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C63Au,2u,0x30u,0xC63Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C63Au,2u,0x30u,0xC63Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C63Au,2u,0x30u,0xC63Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C63Cu:
    if(m==0u&&x==0u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C63Cu,1u,0x98u,0xC63Du);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C63Du:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C63Du,1u,0x18u,0xC63Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C63Eu:
    if(m==0u&&x==0u&&e==0u){ /* 69 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C63Eu,3u,0x00u,0xC641u);
      sc_v11_op_adc(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C641u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C641u,1u,0xA8u,0xC642u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C642u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C642u,3u,0x00u,0xC645u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C645u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D7 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C645u,3u,0xC6u,0xC648u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC647u))return 0;c->pc=0xC6D7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C648u:
    if(m==0u&&x==0u&&e==0u){ /* 20 E6 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C648u,3u,0xC6u,0xC64Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC64Au))return 0;c->pc=0xC6E6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E6 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C648u,3u,0xC6u,0xC64Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC64Au))return 0;c->pc=0xC6E6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E6 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C648u,3u,0xC6u,0xC64Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC64Au))return 0;c->pc=0xC6E6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E6 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C648u,3u,0xC6u,0xC64Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC64Au))return 0;c->pc=0xC6E6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C64Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C64Bu,2u,0x20u,0xC64Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C64Bu,2u,0x20u,0xC64Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C64Bu,2u,0x20u,0xC64Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C64Bu,2u,0x20u,0xC64Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C64Du:
    if(m==1u&&x==0u&&e==0u){ /* AD 67 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C64Du,3u,0x0Au,0xC650u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A67u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 67 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C64Du,3u,0x0Au,0xC650u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A67u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C650u:
    if(m==1u&&x==0u&&e==0u){ /* CD F7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C650u,3u,0x0Au,0xC653u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CD F7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C650u,3u,0x0Au,0xC653u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C653u:
    if(m==1u&&x==0u&&e==0u){ /* D0 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C653u,2u,0x16u,0xC655u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC66Bu;}
      if(c->pc!=0xC655u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC655u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C653u,2u,0x16u,0xC655u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC66Bu;}
      if(c->pc!=0xC655u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC655u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C655u:
    if(m==1u&&x==0u&&e==0u){ /* AD 69 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C655u,3u,0x0Au,0xC658u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A69u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 69 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C655u,3u,0x0Au,0xC658u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A69u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C658u:
    if(m==1u&&x==0u&&e==0u){ /* CD F9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C658u,3u,0x0Au,0xC65Bu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CD F9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C658u,3u,0x0Au,0xC65Bu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C65Bu:
    if(m==1u&&x==0u&&e==0u){ /* D0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C65Bu,2u,0x0Eu,0xC65Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC66Bu;}
      if(c->pc!=0xC65Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC65Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C65Bu,2u,0x0Eu,0xC65Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC66Bu;}
      if(c->pc!=0xC65Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC65Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C65Du:
    if(m==1u&&x==0u&&e==0u){ /* EE F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C65Du,3u,0x0Au,0xC660u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AF5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C65Du,3u,0x0Au,0xC660u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AF5u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C660u:
    if(m==1u&&x==0u&&e==0u){ /* 9C F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C660u,3u,0x0Au,0xC663u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AF3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C660u,3u,0x0Au,0xC663u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AF3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C663u:
    if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C663u,1u,0x08u,0xC664u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C663u,1u,0x08u,0xC664u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C664u:
    if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C664u,4u,0x00u,0xC668u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC667u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C664u,4u,0x00u,0xC668u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC667u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C668u:
    if(m==0u&&x==0u&&e==0u){ /* 03 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C668u,2u,0x1Cu,0xC66Au);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x1Cu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C668u,2u,0x1Cu,0xC66Au);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x1Cu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C668u,2u,0x1Cu,0xC66Au);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x1Cu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C668u,2u,0x1Cu,0xC66Au);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x1Cu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C66Au:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C66Au,1u,0x28u,0xC66Bu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C66Au,1u,0x28u,0xC66Bu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C66Au,1u,0x28u,0xC66Bu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C66Au,1u,0x28u,0xC66Bu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C66Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C66Bu,1u,0x60u,0xC66Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C66Bu,1u,0x60u,0xC66Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C66Bu,1u,0x60u,0xC66Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C66Bu,1u,0x60u,0xC66Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C66Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C66Cu,2u,0x20u,0xC66Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C66Eu:
    if(m==1u&&x==0u&&e==0u){ /* CE F3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C66Eu,3u,0x0Au,0xC671u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AF3u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C671u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C671u,2u,0x03u,0xC673u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC676u;}
      if(c->pc!=0xC673u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC673u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C673u:
    if(m==1u&&x==0u&&e==0u){ /* 4C C9 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C673u,3u,0xC6u,0xC676u);
      c->pc=0xC6C9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C676u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C676u,2u,0x30u,0xC678u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C678u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C678u,3u,0x0Au,0xC67Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AFFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C67Bu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C67Bu,1u,0x18u,0xC67Cu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C67Cu:
    if(m==0u&&x==0u&&e==0u){ /* 69 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C67Cu,3u,0x00u,0xC67Fu);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C67Fu:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C67Fu,3u,0x00u,0xC682u);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C682u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C682u,1u,0x0Au,0xC683u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C683u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C683u,1u,0xA8u,0xC684u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C684u:
    if(m==0u&&x==0u&&e==0u){ /* A2 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C684u,3u,0x00u,0xC687u);
      sc_v11_op_ldx(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C687u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D7 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C687u,3u,0xC6u,0xC68Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC689u))return 0;c->pc=0xC6D7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C68Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C68Au,2u,0x30u,0xC68Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C68Au,2u,0x30u,0xC68Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C68Au,2u,0x30u,0xC68Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C68Au,2u,0x30u,0xC68Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C68Cu:
    if(m==0u&&x==0u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C68Cu,1u,0x98u,0xC68Du);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C68Du:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C68Du,1u,0x18u,0xC68Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C68Eu:
    if(m==0u&&x==0u&&e==0u){ /* 69 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C68Eu,3u,0x00u,0xC691u);
      sc_v11_op_adc(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C691u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C691u,1u,0xA8u,0xC692u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C692u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C692u,3u,0x00u,0xC695u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C695u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D7 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C695u,3u,0xC6u,0xC698u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC697u))return 0;c->pc=0xC6D7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C698u:
    if(m==0u&&x==0u&&e==0u){ /* 20 E6 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C698u,3u,0xC6u,0xC69Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC69Au))return 0;c->pc=0xC6E6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E6 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C698u,3u,0xC6u,0xC69Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC69Au))return 0;c->pc=0xC6E6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E6 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C698u,3u,0xC6u,0xC69Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC69Au))return 0;c->pc=0xC6E6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E6 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C698u,3u,0xC6u,0xC69Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC69Au))return 0;c->pc=0xC6E6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C69Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C69Bu,2u,0x20u,0xC69Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C69Bu,2u,0x20u,0xC69Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C69Bu,2u,0x20u,0xC69Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C69Bu,2u,0x20u,0xC69Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C69Du:
    if(m==1u&&x==0u&&e==0u){ /* AD 67 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C69Du,3u,0x0Au,0xC6A0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A67u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 67 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C69Du,3u,0x0Au,0xC6A0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A67u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6A0u:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6A0u,1u,0x38u,0xC6A1u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6A0u,1u,0x38u,0xC6A1u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6A1u:
    if(m==1u&&x==0u&&e==0u){ /* ED BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6A1u,3u,0x01u,0xC6A4u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01BFu)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* ED BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6A1u,3u,0x01u,0xC6A4u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01BFu)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6A4u:
    if(m==1u&&x==0u&&e==0u){ /* 30 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6A4u,2u,0x07u,0xC6A6u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC6ADu;}
      if(c->pc!=0xC6A6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6A6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6A4u,2u,0x07u,0xC6A6u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC6ADu;}
      if(c->pc!=0xC6A6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6A6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6A6u:
    if(m==1u&&x==0u&&e==0u){ /* C9 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6A6u,2u,0x20u,0xC6A8u);
      sc_v11_op_compare(r,c->a,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6A6u,2u,0x20u,0xC6A8u);
      sc_v11_op_compare(r,c->a,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6A8u:
    if(m==1u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6A8u,2u,0x0Au,0xC6AAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC6B4u;}
      if(c->pc!=0xC6AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6AAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6A8u,2u,0x0Au,0xC6AAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC6B4u;}
      if(c->pc!=0xC6AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6AAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6AAu:
    if(m==1u&&x==0u&&e==0u){ /* 4C C9 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6AAu,3u,0xC6u,0xC6ADu);
      c->pc=0xC6C9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C C9 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6AAu,3u,0xC6u,0xC6ADu);
      c->pc=0xC6C9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6ADu:
    if(m==1u&&x==0u&&e==0u){ /* C9 FD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6ADu,2u,0xFDu,0xC6AFu);
      sc_v11_op_compare(r,c->a,0x00FDu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 FD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6ADu,2u,0xFDu,0xC6AFu);
      sc_v11_op_compare(r,c->a,0x00FDu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6AFu:
    if(m==1u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6AFu,2u,0x03u,0xC6B1u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC6B4u;}
      if(c->pc!=0xC6B1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6B1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6AFu,2u,0x03u,0xC6B1u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC6B4u;}
      if(c->pc!=0xC6B1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6B1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6B1u:
    if(m==1u&&x==0u&&e==0u){ /* 4C C9 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6B1u,3u,0xC6u,0xC6B4u);
      c->pc=0xC6C9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C C9 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6B1u,3u,0xC6u,0xC6B4u);
      c->pc=0xC6C9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6B4u:
    if(m==1u&&x==0u&&e==0u){ /* AD 69 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6B4u,3u,0x0Au,0xC6B7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A69u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 69 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6B4u,3u,0x0Au,0xC6B7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A69u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6B7u:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6B7u,1u,0x38u,0xC6B8u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6B7u,1u,0x38u,0xC6B8u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6B8u:
    if(m==1u&&x==0u&&e==0u){ /* ED BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6B8u,3u,0x01u,0xC6BBu);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01BDu)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* ED BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6B8u,3u,0x01u,0xC6BBu);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01BDu)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6BBu:
    if(m==1u&&x==0u&&e==0u){ /* 30 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6BBu,2u,0x07u,0xC6BDu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC6C4u;}
      if(c->pc!=0xC6BDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6BDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6BBu,2u,0x07u,0xC6BDu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC6C4u;}
      if(c->pc!=0xC6BDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6BDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6BDu:
    if(m==1u&&x==0u&&e==0u){ /* C9 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6BDu,2u,0x22u,0xC6BFu);
      sc_v11_op_compare(r,c->a,0x0022u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6BDu,2u,0x22u,0xC6BFu);
      sc_v11_op_compare(r,c->a,0x0022u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6BFu:
    if(m==1u&&x==0u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6BFu,2u,0x07u,0xC6C1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC6C8u;}
      if(c->pc!=0xC6C1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6C1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6BFu,2u,0x07u,0xC6C1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC6C8u;}
      if(c->pc!=0xC6C1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6C1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6C1u:
    if(m==1u&&x==0u&&e==0u){ /* 4C C9 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6C1u,3u,0xC6u,0xC6C4u);
      c->pc=0xC6C9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C C9 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6C1u,3u,0xC6u,0xC6C4u);
      c->pc=0xC6C9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6C4u:
    if(m==1u&&x==0u&&e==0u){ /* C9 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6C4u,2u,0xFCu,0xC6C6u);
      sc_v11_op_compare(r,c->a,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6C4u,2u,0xFCu,0xC6C6u);
      sc_v11_op_compare(r,c->a,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6C6u:
    if(m==1u&&x==0u&&e==0u){ /* 90 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6C6u,2u,0x01u,0xC6C8u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC6C9u;}
      if(c->pc!=0xC6C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6C6u,2u,0x01u,0xC6C8u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC6C9u;}
      if(c->pc!=0xC6C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6C8u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6C8u,1u,0x60u,0xC6C9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6C8u,1u,0x60u,0xC6C9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6C9u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6C9u,2u,0x20u,0xC6CBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6C9u,2u,0x20u,0xC6CBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6CBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6CBu,3u,0x00u,0xC6CEu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6CBu,3u,0x00u,0xC6CEu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6CEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6CEu,3u,0x0Au,0xC6D1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AEFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6CEu,3u,0x0Au,0xC6D1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AEFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6D1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 03 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6D1u,3u,0x0Bu,0xC6D4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B03u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 03 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6D1u,3u,0x0Bu,0xC6D4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B03u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6D4u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 80 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6D4u,3u,0xC1u,0xC6D7u);
      c->pc=0xC180u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 80 C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6D4u,3u,0xC1u,0xC6D7u);
      c->pc=0xC180u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6D7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6D7u,2u,0x10u,0xC6D9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6D9u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6D9u,2u,0x20u,0xC6DBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6DBu:
    if(m==0u&&x==1u&&e==0u){ /* BD FB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6DBu,3u,0x0Au,0xC6DEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0AFBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6DEu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6DEu,1u,0x18u,0xC6DFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6DFu:
    if(m==0u&&x==1u&&e==0u){ /* 79 75 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6DFu,3u,0xC2u,0xC6E2u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC275u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6E2u:
    if(m==0u&&x==1u&&e==0u){ /* 9D FB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6E2u,3u,0x0Au,0xC6E5u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0AFBu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6E5u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6E5u,1u,0x60u,0xC6E6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6E6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6E6u,2u,0x20u,0xC6E8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6E6u,2u,0x20u,0xC6E8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6E6u,2u,0x20u,0xC6E8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6E6u,2u,0x20u,0xC6E8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6E8u:
    if(m==0u&&x==0u&&e==0u){ /* AD FB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6E8u,3u,0x0Au,0xC6EBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AFBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6E8u,3u,0x0Au,0xC6EBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AFBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6EBu:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6EBu,3u,0x00u,0xC6EEu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6EBu,3u,0x00u,0xC6EEu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6EEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 83 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6EEu,3u,0x0Au,0xC6F1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A83u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 83 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6EEu,3u,0x0Au,0xC6F1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A83u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6F1u:
    if(m==0u&&x==0u&&e==0u){ /* AD FB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6F1u,3u,0x0Au,0xC6F4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AFBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6F1u,3u,0x0Au,0xC6F4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AFBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6F4u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6F4u,1u,0x4Au,0xC6F5u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6F4u,1u,0x4Au,0xC6F5u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6F5u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6F5u,1u,0x4Au,0xC6F6u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6F5u,1u,0x4Au,0xC6F6u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6F6u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6F6u,1u,0x4Au,0xC6F7u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6F6u,1u,0x4Au,0xC6F7u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6F7u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6F7u,3u,0x00u,0xC6FAu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6F7u,3u,0x00u,0xC6FAu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6FAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 67 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6FAu,3u,0x0Au,0xC6FDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A67u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 67 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6FAu,3u,0x0Au,0xC6FDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A67u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C6FDu:
    if(m==0u&&x==0u&&e==0u){ /* AD FD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6FDu,3u,0x0Au,0xC700u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AFDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C6FDu,3u,0x0Au,0xC700u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AFDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C700u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C700u,3u,0x00u,0xC703u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C700u,3u,0x00u,0xC703u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C703u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C703u,3u,0x0Au,0xC706u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 85 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C703u,3u,0x0Au,0xC706u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C706u:
    if(m==0u&&x==0u&&e==0u){ /* AD FD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C706u,3u,0x0Au,0xC709u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AFDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C706u,3u,0x0Au,0xC709u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AFDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C709u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C709u,1u,0x4Au,0xC70Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C709u,1u,0x4Au,0xC70Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C70Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C70Au,1u,0x4Au,0xC70Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C70Au,1u,0x4Au,0xC70Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C70Bu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C70Bu,1u,0x4Au,0xC70Cu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C70Bu,1u,0x4Au,0xC70Cu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C70Cu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C70Cu,3u,0x00u,0xC70Fu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C70Cu,3u,0x00u,0xC70Fu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C70Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 69 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C70Fu,3u,0x0Au,0xC712u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A69u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 69 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C70Fu,3u,0x0Au,0xC712u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A69u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C712u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C712u,1u,0x60u,0xC713u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C712u,1u,0x60u,0xC713u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C713u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C713u,2u,0x20u,0xC715u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C713u,2u,0x20u,0xC715u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C715u:
    if(m==1u&&x==0u&&e==0u){ /* AD F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C715u,3u,0x0Au,0xC718u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C715u,3u,0x0Au,0xC718u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C718u:
    if(m==1u&&x==0u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C718u,2u,0x02u,0xC71Au);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C718u,2u,0x02u,0xC71Au);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C71Au:
    if(m==1u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C71Au,2u,0x03u,0xC71Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC71Fu;}
      if(c->pc!=0xC71Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC71Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C71Au,2u,0x03u,0xC71Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC71Fu;}
      if(c->pc!=0xC71Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC71Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C71Cu:
    if(m==1u&&x==0u&&e==0u){ /* EE EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C71Cu,3u,0x0Au,0xC71Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AEFu),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C71Cu,3u,0x0Au,0xC71Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0AEFu),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C71Fu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C71Fu,2u,0x30u,0xC721u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C71Fu,2u,0x30u,0xC721u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C71Fu,2u,0x30u,0xC721u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C721u:
    if(m==0u&&x==0u&&e==0u){ /* A9 18 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C721u,3u,0x00u,0xC724u);
      sc_v11_op_lda(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C724u:
    if(m==0u&&x==0u&&e==0u){ /* 20 80 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C724u,3u,0xBFu,0xC727u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC726u))return 0;c->pc=0xBF80u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C727u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C727u,2u,0x30u,0xC729u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C727u,2u,0x30u,0xC729u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C727u,2u,0x30u,0xC729u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C727u,2u,0x30u,0xC729u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C729u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C729u,3u,0x3Au,0xC72Cu);
      sc_v11_op_lda(r,0x3A00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C72Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8F F2 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C72Cu,4u,0x7Eu,0xC730u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21F2u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C730u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C730u,1u,0x1Au,0xC731u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C731u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C731u,1u,0x1Au,0xC732u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C732u:
    if(m==0u&&x==0u&&e==0u){ /* 8F F6 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C732u,4u,0x7Eu,0xC736u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21F6u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C736u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C736u,1u,0x1Au,0xC737u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C737u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C737u,1u,0x1Au,0xC738u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C738u:
    if(m==0u&&x==0u&&e==0u){ /* 8F FE 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C738u,4u,0x7Eu,0xC73Cu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21FEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C73Cu:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C73Cu,1u,0x1Au,0xC73Du);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C73Du:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C73Du,1u,0x1Au,0xC73Eu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C73Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8F FA 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C73Eu,4u,0x7Eu,0xC742u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21FAu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C742u:
    if(m==0u&&x==0u&&e==0u){ /* 20 98 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C742u,3u,0xC7u,0xC745u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC744u))return 0;c->pc=0xC798u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C745u:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C745u,3u,0x0Au,0xC748u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C745u,3u,0x0Au,0xC748u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C745u,3u,0x0Au,0xC748u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C745u,3u,0x0Au,0xC748u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C748u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C748u,3u,0x00u,0xC74Bu);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C748u,3u,0x00u,0xC74Bu);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C748u,2u,0x03u,0xC74Au);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C748u,2u,0x03u,0xC74Au);
      sc_v11_op_compare(r,c->a,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C74Bu:
    if(m==0u&&x==0u&&e==0u){ /* 90 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C74Bu,2u,0x14u,0xC74Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC761u;}
      if(c->pc!=0xC74Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC74Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C74Bu,2u,0x14u,0xC74Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC761u;}
      if(c->pc!=0xC74Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC74Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C74Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C74Du,3u,0x00u,0xC750u);
      sc_v11_op_compare(r,c->a,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C74Du,3u,0x00u,0xC750u);
      sc_v11_op_compare(r,c->a,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C750u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C750u,2u,0x0Fu,0xC752u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC761u;}
      if(c->pc!=0xC752u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC752u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C750u,2u,0x0Fu,0xC752u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC761u;}
      if(c->pc!=0xC752u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC752u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C752u:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C752u,3u,0x0Au,0xC755u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C752u,3u,0x0Au,0xC755u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C755u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C755u,3u,0x00u,0xC758u);
      sc_v11_op_and(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C755u,3u,0x00u,0xC758u);
      sc_v11_op_and(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C758u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C758u,1u,0x4Au,0xC759u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C758u,1u,0x4Au,0xC759u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C759u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C759u,1u,0x4Au,0xC75Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C759u,1u,0x4Au,0xC75Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C75Au:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C75Au,1u,0x18u,0xC75Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C75Au,1u,0x18u,0xC75Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C75Bu:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C75Bu,3u,0x00u,0xC75Eu);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C75Bu,3u,0x00u,0xC75Eu);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C75Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 6B C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C75Eu,3u,0xC7u,0xC761u);
      c->pc=0xC76Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 6B C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C75Eu,3u,0xC7u,0xC761u);
      c->pc=0xC76Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C761u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C761u,2u,0x30u,0xC763u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C761u,2u,0x30u,0xC763u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C763u:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C763u,3u,0x0Au,0xC766u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C766u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C766u,3u,0x00u,0xC769u);
      sc_v11_op_and(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C769u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C769u,1u,0x4Au,0xC76Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C76Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C76Au,1u,0x4Au,0xC76Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C76Bu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C76Bu,1u,0x0Au,0xC76Cu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C76Bu,1u,0x0Au,0xC76Cu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C76Cu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C76Cu,1u,0xAAu,0xC76Du);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C76Cu,1u,0xAAu,0xC76Du);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C76Du:
    if(m==0u&&x==0u&&e==0u){ /* BD B5 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C76Du,3u,0xC2u,0xC770u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xC2B5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BD B5 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C76Du,3u,0xC2u,0xC770u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xC2B5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C770u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C770u,1u,0xAAu,0xC771u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C770u,1u,0xAAu,0xC771u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C771u:
    if(m==0u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C771u,1u,0x8Bu,0xC772u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C771u,1u,0x8Bu,0xC772u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C772u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C772u,3u,0x70u,0xC775u);
      sc_v11_op_ldy(r,0x7000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C772u,2u,0x00u,0xC774u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C774u:
    if(m==0u&&x==1u&&e==0u){ /* 70 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C774u,2u,0xA9u,0xC776u);
      if((c->p&SC_FLAG_V)!=0u){c->pc=0xC71Fu;}
      if(c->pc!=0xC776u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC776u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C775u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C775u,3u,0x00u,0xC778u);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C776u:
    if(m==0u&&x==1u&&e==0u){ /* 7F 00 54 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C776u,4u,0x7Eu,0xC77Au);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E5400u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C778u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C778u,3u,0x05u,0xC77Bu);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x05u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xC778u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C77Au:
    if(m==0u&&x==1u&&e==0u){ /* 05 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C77Au,2u,0xA0u,0xC77Cu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xA0u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C77Bu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C77Bu,3u,0x72u,0xC77Eu);
      sc_v11_op_ldy(r,0x7200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C77Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C77Eu,3u,0x00u,0xC781u);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C781u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C781u,3u,0x05u,0xC784u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x05u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xC781u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C784u:
    if(m==0u&&x==0u&&e==0u){ /* A0 80 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C784u,3u,0x70u,0xC787u);
      sc_v11_op_ldy(r,0x7080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C787u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C787u,3u,0x00u,0xC78Au);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C78Au:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C78Au,3u,0x05u,0xC78Du);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x05u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xC78Au;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C78Du:
    if(m==0u&&x==0u&&e==0u){ /* A0 80 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C78Du,3u,0x72u,0xC790u);
      sc_v11_op_ldy(r,0x7280u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C790u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C790u,3u,0x00u,0xC793u);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C793u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C793u,3u,0x05u,0xC796u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x05u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xC793u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C796u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C796u,1u,0xABu,0xC797u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C797u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C797u,1u,0x60u,0xC798u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C798u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C798u,2u,0x30u,0xC79Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C79Au:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C79Au,3u,0x0Au,0xC79Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C79Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C79Du,3u,0x00u,0xC7A0u);
      sc_v11_op_and(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7A0u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7A0u,1u,0x4Au,0xC7A1u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7A1u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7A1u,1u,0x4Au,0xC7A2u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7A2u:
    if(m==0u&&x==0u&&e==0u){ /* AE F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7A2u,3u,0x0Au,0xC7A5u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7A5u:
    if(m==0u&&x==0u&&e==0u){ /* E0 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7A5u,3u,0x00u,0xC7A8u);
      sc_v11_op_compare(r,c->x,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7A8u:
    if(m==0u&&x==0u&&e==0u){ /* 90 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7A8u,2u,0x09u,0xC7AAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC7B3u;}
      if(c->pc!=0xC7AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC7AAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7AAu:
    if(m==0u&&x==0u&&e==0u){ /* E0 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7AAu,3u,0x00u,0xC7ADu);
      sc_v11_op_compare(r,c->x,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7ADu:
    if(m==0u&&x==0u&&e==0u){ /* B0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7ADu,2u,0x04u,0xC7AFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC7B3u;}
      if(c->pc!=0xC7AFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC7AFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7AFu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7AFu,1u,0x18u,0xC7B0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7B0u:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7B0u,3u,0x00u,0xC7B3u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7B3u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7B3u,1u,0x0Au,0xC7B4u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7B4u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7B4u,1u,0x0Au,0xC7B5u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7B5u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7B5u,1u,0x0Au,0xC7B6u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7B6u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7B6u,1u,0x0Au,0xC7B7u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7B7u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7B7u,1u,0xA8u,0xC7B8u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7B8u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7B8u,3u,0x00u,0xC7BBu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7BBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7BBu,3u,0x00u,0xC7BEu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7BEu:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7BEu,2u,0x91u,0xC7C0u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7C0u:
    if(m==0u&&x==0u&&e==0u){ /* B9 05 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7C0u,3u,0xC3u,0xC7C3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC305u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7C3u:
    if(m==0u&&x==0u&&e==0u){ /* 9F F0 25 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7C3u,4u,0x7Eu,0xC7C7u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E25F0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7C7u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7C7u,1u,0xE8u,0xC7C8u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7C8u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7C8u,1u,0xE8u,0xC7C9u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7C9u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7C9u,1u,0xC8u,0xC7CAu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7CAu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7CAu,1u,0xC8u,0xC7CBu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7CBu:
    if(m==0u&&x==0u&&e==0u){ /* C6 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7CBu,2u,0x91u,0xC7CDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x91u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7CDu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7CDu,2u,0xF1u,0xC7CFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC7C0u;}
      if(c->pc!=0xC7CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC7CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7CFu:
    if(m==0u&&x==0u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7CFu,2u,0xBBu,0xC7D1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xBBu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7D1u:
    if(m==0u&&x==0u&&e==0u){ /* 09 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7D1u,3u,0x00u,0xC7D4u);
      sc_v11_op_ora(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7D4u:
    if(m==0u&&x==0u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7D4u,2u,0xBBu,0xC7D6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xBBu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7D6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A6 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7D6u,3u,0x8Du,0xC7D9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7D8u))return 0;c->pc=0x8DA6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7D9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7D9u,1u,0x60u,0xC7DAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7D9u,1u,0x60u,0xC7DAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7D9u,1u,0x60u,0xC7DAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7D9u,1u,0x60u,0xC7DAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7DAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 A1 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7DAu,3u,0xCAu,0xC7DDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7DCu))return 0;c->pc=0xCAA1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A1 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7DAu,3u,0xCAu,0xC7DDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7DCu))return 0;c->pc=0xCAA1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7DDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 E0 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7DDu,3u,0xCAu,0xC7E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7DFu))return 0;c->pc=0xCAE0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E0 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7DDu,3u,0xCAu,0xC7E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7DFu))return 0;c->pc=0xCAE0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E0 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7DDu,3u,0xCAu,0xC7E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7DFu))return 0;c->pc=0xCAE0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E0 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7DDu,3u,0xCAu,0xC7E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7DFu))return 0;c->pc=0xCAE0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7E0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7E0u,2u,0x30u,0xC7E2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7E0u,2u,0x30u,0xC7E2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7E0u,2u,0x30u,0xC7E2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7E0u,2u,0x30u,0xC7E2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7E2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 A0 9A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7E2u,3u,0x9Au,0xC7E5u);
      sc_v11_op_lda(r,0x9AA0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7E5u:
    if(m==0u&&x==0u&&e==0u){ /* A2 0B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7E5u,3u,0x00u,0xC7E8u);
      sc_v11_op_ldx(r,0x000Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7E8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 12 CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7E8u,3u,0xCBu,0xC7EBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7EAu))return 0;c->pc=0xCB12u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7EBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 44 CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7EBu,3u,0xCBu,0xC7EEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7EDu))return 0;c->pc=0xCB44u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 44 CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7EBu,3u,0xCBu,0xC7EEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7EDu))return 0;c->pc=0xCB44u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 44 CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7EBu,3u,0xCBu,0xC7EEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7EDu))return 0;c->pc=0xCB44u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 44 CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7EBu,3u,0xCBu,0xC7EEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7EDu))return 0;c->pc=0xCB44u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7EEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 6C CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7EEu,3u,0xCBu,0xC7F1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F0u))return 0;c->pc=0xCB6Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 6C CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7EEu,3u,0xCBu,0xC7F1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F0u))return 0;c->pc=0xCB6Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 6C CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7EEu,3u,0xCBu,0xC7F1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F0u))return 0;c->pc=0xCB6Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 6C CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7EEu,3u,0xCBu,0xC7F1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F0u))return 0;c->pc=0xCB6Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7F1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F4 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7F1u,3u,0xCDu,0xC7F4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F3u))return 0;c->pc=0xCDF4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F4 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7F1u,3u,0xCDu,0xC7F4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F3u))return 0;c->pc=0xCDF4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F4 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7F1u,3u,0xCDu,0xC7F4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F3u))return 0;c->pc=0xCDF4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F4 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7F1u,3u,0xCDu,0xC7F4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F3u))return 0;c->pc=0xCDF4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7F4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B8 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7F4u,3u,0xCFu,0xC7F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F6u))return 0;c->pc=0xCFB8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B8 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7F4u,3u,0xCFu,0xC7F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F6u))return 0;c->pc=0xCFB8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B8 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7F4u,3u,0xCFu,0xC7F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F6u))return 0;c->pc=0xCFB8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B8 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7F4u,3u,0xCFu,0xC7F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F6u))return 0;c->pc=0xCFB8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7F7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F0 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7F7u,3u,0xD0u,0xC7FAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F9u))return 0;c->pc=0xD0F0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F0 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7F7u,3u,0xD0u,0xC7FAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F9u))return 0;c->pc=0xD0F0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F0 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7F7u,3u,0xD0u,0xC7FAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F9u))return 0;c->pc=0xD0F0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F0 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7F7u,3u,0xD0u,0xC7FAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7F9u))return 0;c->pc=0xD0F0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7FAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 99 D1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7FAu,3u,0xD1u,0xC7FDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7FCu))return 0;c->pc=0xD199u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 99 D1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7FAu,3u,0xD1u,0xC7FDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7FCu))return 0;c->pc=0xD199u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 99 D1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7FAu,3u,0xD1u,0xC7FDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7FCu))return 0;c->pc=0xD199u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 99 D1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7FAu,3u,0xD1u,0xC7FDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7FCu))return 0;c->pc=0xD199u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7FDu:
    if(m==0u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7FDu,2u,0x14u,0xC7FFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC813u;}
      if(c->pc!=0xC7FFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC7FFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7FDu,2u,0x14u,0xC7FFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC813u;}
      if(c->pc!=0xC7FFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC7FFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7FDu,2u,0x14u,0xC7FFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC813u;}
      if(c->pc!=0xC7FFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC7FFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7FDu,2u,0x14u,0xC7FFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC813u;}
      if(c->pc!=0xC7FFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC7FFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00C7FFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 15 D2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7FFu,3u,0xD2u,0xC802u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC801u))return 0;c->pc=0xD215u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 15 D2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7FFu,3u,0xD2u,0xC802u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC801u))return 0;c->pc=0xD215u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 15 D2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7FFu,3u,0xD2u,0xC802u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC801u))return 0;c->pc=0xD215u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 15 D2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00C7FFu,3u,0xD2u,0xC802u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC801u))return 0;c->pc=0xD215u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
