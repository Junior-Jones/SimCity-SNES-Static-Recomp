/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000F1(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03C400u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C400u,3u,0x03u,0xC403u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C400u,3u,0x03u,0xC403u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C403u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C403u,1u,0x68u,0xC404u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C403u,1u,0x68u,0xC404u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C404u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C404u,1u,0x60u,0xC405u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C404u,1u,0x60u,0xC405u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C404u,1u,0x60u,0xC405u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C405u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C405u,2u,0x30u,0xC407u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C405u,2u,0x30u,0xC407u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C405u,2u,0x30u,0xC407u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C40Eu:
    if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C40Eu,1u,0xC8u,0xC40Fu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C40Fu:
    if(m==1u&&x==1u&&e==0u){ /* C0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C40Fu,2u,0x04u,0xC411u);
      sc_v11_op_compare(r,c->y,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C411u:
    if(m==1u&&x==1u&&e==0u){ /* D0 F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C411u,2u,0xF6u,0xC413u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC409u;}
      if(c->pc!=0xC413u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC413u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C418u:
    if(m==1u&&x==1u&&e==0u){ /* C0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C418u,2u,0x04u,0xC41Au);
      sc_v11_op_compare(r,c->y,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C41Au:
    if(m==1u&&x==1u&&e==0u){ /* B0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C41Au,2u,0x08u,0xC41Cu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC424u;}
      if(c->pc!=0xC41Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC41Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C41Cu:
    if(m==1u&&x==1u&&e==0u){ /* 90 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C41Cu,2u,0x04u,0xC41Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC422u;}
      if(c->pc!=0xC41Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC41Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C424u:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C424u,1u,0x38u,0xC425u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C425u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C425u,1u,0x60u,0xC426u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C426u:
    if(m==1u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C426u,3u,0xC4u,0xC429u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC428u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C426u,3u,0xC4u,0xC429u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC428u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C429u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C429u,1u,0x6Bu,0xC42Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C429u,1u,0x6Bu,0xC42Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C429u,1u,0x6Bu,0xC42Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C429u,1u,0x6Bu,0xC42Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C42Au:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C42Au,2u,0x30u,0xC42Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C42Au,2u,0x30u,0xC42Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C42Au,2u,0x30u,0xC42Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C474u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C474u,2u,0x30u,0xC476u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C474u,2u,0x30u,0xC476u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C474u,2u,0x30u,0xC476u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C47Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C47Eu,3u,0x03u,0xC481u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0395u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C481u:
    if(m==0u&&x==0u&&e==0u){ /* 0D D7 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C481u,3u,0x00u,0xC484u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x00D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C484u:
    if(m==0u&&x==0u&&e==0u){ /* D0 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C484u,2u,0x55u,0xC486u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC4DBu;}
      if(c->pc!=0xC486u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC486u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C486u:
    if(m==0u&&x==0u&&e==0u){ /* AD C7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C486u,3u,0x0Cu,0xC489u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CC7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C489u:
    if(m==0u&&x==0u&&e==0u){ /* C9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C489u,3u,0x00u,0xC48Cu);
      sc_v11_op_compare(r,c->a,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C48Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 4D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C48Cu,2u,0x4Du,0xC48Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC4DBu;}
      if(c->pc!=0xC48Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC48Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C48Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C48Eu,1u,0x0Au,0xC48Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C48Fu:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C48Fu,1u,0xA8u,0xC490u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C490u:
    if(m==0u&&x==0u&&e==0u){ /* AD 53 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C490u,3u,0x0Bu,0xC493u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B53u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C493u:
    if(m==0u&&x==0u&&e==0u){ /* D9 DC C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C493u,3u,0xC4u,0xC496u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC4DCu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C496u:
    if(m==0u&&x==0u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C496u,2u,0x04u,0xC498u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC49Cu;}
      if(c->pc!=0xC498u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC498u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C498u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C498u,2u,0x0Au,0xC49Au);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC4A4u;}
      if(c->pc!=0xC49Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC49Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C49Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 3F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C49Au,2u,0x3Fu,0xC49Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4DBu;}
      if(c->pc!=0xC49Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC49Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C49Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 55 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C49Cu,3u,0x0Bu,0xC49Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C49Fu:
    if(m==0u&&x==0u&&e==0u){ /* D9 E8 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C49Fu,3u,0xC4u,0xC4A2u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC4E8u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4A2u:
    if(m==0u&&x==0u&&e==0u){ /* 90 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4A2u,2u,0x37u,0xC4A4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4DBu;}
      if(c->pc!=0xC4A4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4A4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4A4u:
    if(m==0u&&x==0u&&e==0u){ /* EE C7 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4A4u,3u,0x0Cu,0xC4A7u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CC7u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4A7u:
    if(m==0u&&x==0u&&e==0u){ /* C0 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4A7u,3u,0x00u,0xC4AAu);
      sc_v11_op_compare(r,c->y,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4AAu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4AAu,2u,0x0Du,0xC4ACu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC4B9u;}
      if(c->pc!=0xC4ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4ACu:
    if(m==0u&&x==0u&&e==0u){ /* B9 F4 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4ACu,3u,0xC4u,0xC4AFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC4F4u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4AFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4AFu,3u,0x03u,0xC4B2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4B2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4B2u,3u,0x00u,0xC4B5u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4B5u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4B5u,3u,0x03u,0xC4B8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4B8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4B8u,1u,0x60u,0xC4B9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4B9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 27 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4B9u,3u,0x00u,0xC4BCu);
      sc_v11_op_lda(r,0x0027u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4BCu:
    if(m==0u&&x==0u&&e==0u){ /* AE A7 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4BCu,3u,0x0Bu,0xC4BFu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4BFu:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4BFu,2u,0x08u,0xC4C1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC4C9u;}
      if(c->pc!=0xC4C1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4C1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4C1u:
    if(m==0u&&x==0u&&e==0u){ /* AE A5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4C1u,3u,0x0Bu,0xC4C4u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4C4u:
    if(m==0u&&x==0u&&e==0u){ /* E0 30 75 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4C4u,3u,0x75u,0xC4C7u);
      sc_v11_op_compare(r,c->x,0x7530u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4C7u:
    if(m==0u&&x==0u&&e==0u){ /* 90 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4C7u,2u,0x09u,0xC4C9u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4D2u;}
      if(c->pc!=0xC4C9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4C9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4C9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4C9u,3u,0x00u,0xC4CCu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4CCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4CCu,3u,0xC4u,0xC4CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC4CEu))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4CFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 26 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4CFu,3u,0x00u,0xC4D2u);
      sc_v11_op_lda(r,0x0026u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 26 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4CFu,3u,0x00u,0xC4D2u);
      sc_v11_op_lda(r,0x0026u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4CFu,2u,0x26u,0xC4D1u);
      sc_v11_op_lda(r,0x0026u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4CFu,2u,0x26u,0xC4D1u);
      sc_v11_op_lda(r,0x0026u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4D2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4D2u,3u,0x03u,0xC4D5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4D2u,3u,0x03u,0xC4D5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4D5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4D5u,3u,0x00u,0xC4D8u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4D5u,3u,0x00u,0xC4D8u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4D8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4D8u,3u,0x03u,0xC4DBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4D8u,3u,0x03u,0xC4DBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4DBu:

    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4DBu,1u,0x60u,0xC4DCu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C500u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C500u,2u,0x30u,0xC502u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C500u,2u,0x30u,0xC502u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C500u,2u,0x30u,0xC502u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C50Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD CB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C50Bu,3u,0x0Cu,0xC50Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CCBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C50Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C50Eu,1u,0x0Au,0xC50Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C50Fu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C50Fu,1u,0xAAu,0xC510u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C510u:
    if(m==0u&&x==0u&&e==0u){ /* AD 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C510u,3u,0x00u,0xC513u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0040u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C513u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C513u,1u,0x0Au,0xC514u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C514u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C514u,1u,0xA8u,0xC515u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C515u:
    if(m==0u&&x==0u&&e==0u){ /* B9 B3 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C515u,3u,0xC5u,0xC518u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC5B3u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C518u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C518u,1u,0x38u,0xC519u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C519u:
    if(m==0u&&x==0u&&e==0u){ /* ED 53 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C519u,3u,0x0Bu,0xC51Cu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B53u)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C51Cu:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C51Cu,2u,0x03u,0xC51Eu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC521u;}
      if(c->pc!=0xC51Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC51Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C51Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C51Eu,3u,0x00u,0xC521u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C521u:
    if(m==0u&&x==0u&&e==0u){ /* DD C3 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C521u,3u,0xC5u,0xC524u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xC5C3u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C524u:
    if(m==0u&&x==0u&&e==0u){ /* F0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C524u,2u,0x02u,0xC526u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC528u;}
      if(c->pc!=0xC526u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC526u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C526u:
    if(m==0u&&x==0u&&e==0u){ /* B0 E2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C526u,2u,0xE2u,0xC528u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC50Au;}
      if(c->pc!=0xC528u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC528u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C528u:
    if(m==0u&&x==0u&&e==0u){ /* EE CB 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C528u,3u,0x0Cu,0xC52Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0CCBu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C52Bu:
    if(m==0u&&x==0u&&e==0u){ /* E0 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C52Bu,3u,0x00u,0xC52Eu);
      sc_v11_op_compare(r,c->x,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C52Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C52Eu,2u,0x18u,0xC530u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC548u;}
      if(c->pc!=0xC530u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC530u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C530u:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C530u,3u,0x00u,0xC533u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x00D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C533u:
    if(m==0u&&x==0u&&e==0u){ /* 0D B5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C533u,3u,0x0Au,0xC536u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C536u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C536u,2u,0x0Fu,0xC538u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC547u;}
      if(c->pc!=0xC538u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC538u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C538u:
    if(m==0u&&x==0u&&e==0u){ /* BD DB C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C538u,3u,0xC5u,0xC53Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xC5DBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C53Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 30 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C53Bu,3u,0xC0u,0xC53Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC53Du))return 0;c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C53Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C53Eu,2u,0x20u,0xC540u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C53Eu,2u,0x20u,0xC540u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C53Eu,2u,0x20u,0xC540u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C53Eu,2u,0x20u,0xC540u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C540u:
    if(m==1u&&x==0u&&e==0u){ /* A9 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C540u,2u,0x26u,0xC542u);
      sc_v11_op_lda(r,0x0026u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C540u,2u,0x26u,0xC542u);
      sc_v11_op_lda(r,0x0026u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C542u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C542u,3u,0x00u,0xC545u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C542u,3u,0x00u,0xC545u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C545u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C545u,2u,0x20u,0xC547u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C545u,2u,0x20u,0xC547u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C547u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C547u,1u,0x60u,0xC548u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C547u,1u,0x60u,0xC548u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C548u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C548u,3u,0x0Du,0xC54Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C54Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C54Bu,3u,0x00u,0xC54Eu);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C54Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 5C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C54Eu,2u,0x5Cu,0xC550u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC5ACu;}
      if(c->pc!=0xC550u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC550u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C550u:
    if(m==0u&&x==0u&&e==0u){ /* AC 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C550u,3u,0x00u,0xC553u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0040u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C553u:
    if(m==0u&&x==0u&&e==0u){ /* D0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C553u,2u,0x02u,0xC555u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC557u;}
      if(c->pc!=0xC555u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC555u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C555u:
    if(m==0u&&x==0u&&e==0u){ /* 80 50 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C555u,2u,0x50u,0xC557u);
      if(1){c->pc=0xC5A7u;}
      if(c->pc!=0xC557u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC557u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C557u:
    if(m==0u&&x==0u&&e==0u){ /* C0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C557u,3u,0x00u,0xC55Au);
      sc_v11_op_compare(r,c->y,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C55Au:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C55Au,2u,0x0Au,0xC55Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC566u;}
      if(c->pc!=0xC55Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC55Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C55Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 05 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C55Cu,3u,0x0Cu,0xC55Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C05u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C55Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 50 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C55Fu,3u,0x00u,0xC562u);
      sc_v11_op_compare(r,c->a,0x0050u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C562u:
    if(m==0u&&x==0u&&e==0u){ /* 90 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C562u,2u,0x43u,0xC564u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC5A7u;}
      if(c->pc!=0xC564u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC564u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C564u:
    if(m==0u&&x==0u&&e==0u){ /* 80 46 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C564u,2u,0x46u,0xC566u);
      if(1){c->pc=0xC5ACu;}
      if(c->pc!=0xC566u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC566u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C566u:
    if(m==0u&&x==0u&&e==0u){ /* C0 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C566u,3u,0x00u,0xC569u);
      sc_v11_op_compare(r,c->y,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C569u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C569u,2u,0x0Au,0xC56Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC575u;}
      if(c->pc!=0xC56Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC56Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C56Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C56Bu,3u,0x0Du,0xC56Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C56Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C56Eu,3u,0x01u,0xC571u);
      sc_v11_op_compare(r,c->a,0x01F4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C571u:
    if(m==0u&&x==0u&&e==0u){ /* B0 34 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C571u,2u,0x34u,0xC573u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC5A7u;}
      if(c->pc!=0xC573u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC573u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C573u:
    if(m==0u&&x==0u&&e==0u){ /* 80 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C573u,2u,0x37u,0xC575u);
      if(1){c->pc=0xC5ACu;}
      if(c->pc!=0xC575u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC575u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C575u:
    if(m==0u&&x==0u&&e==0u){ /* C0 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C575u,3u,0x00u,0xC578u);
      sc_v11_op_compare(r,c->y,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C578u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C578u,2u,0x0Au,0xC57Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC584u;}
      if(c->pc!=0xC57Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC57Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C57Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C57Au,3u,0x0Cu,0xC57Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C01u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C57Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 3C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C57Du,3u,0x00u,0xC580u);
      sc_v11_op_compare(r,c->a,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C580u:
    if(m==0u&&x==0u&&e==0u){ /* 90 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C580u,2u,0x25u,0xC582u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC5A7u;}
      if(c->pc!=0xC582u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC582u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C582u:
    if(m==0u&&x==0u&&e==0u){ /* 80 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C582u,2u,0x28u,0xC584u);
      if(1){c->pc=0xC5ACu;}
      if(c->pc!=0xC584u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC584u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C584u:
    if(m==0u&&x==0u&&e==0u){ /* C0 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C584u,3u,0x00u,0xC587u);
      sc_v11_op_compare(r,c->y,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C587u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C587u,2u,0x0Au,0xC589u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC593u;}
      if(c->pc!=0xC589u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC589u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C589u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C589u,3u,0x0Du,0xC58Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C58Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C58Cu,3u,0x01u,0xC58Fu);
      sc_v11_op_compare(r,c->a,0x01F4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C58Fu:
    if(m==0u&&x==0u&&e==0u){ /* B0 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C58Fu,2u,0x16u,0xC591u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC5A7u;}
      if(c->pc!=0xC591u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC591u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C591u:
    if(m==0u&&x==0u&&e==0u){ /* 80 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C591u,2u,0x19u,0xC593u);
      if(1){c->pc=0xC5ACu;}
      if(c->pc!=0xC593u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC593u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C593u:
    if(m==0u&&x==0u&&e==0u){ /* C0 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C593u,3u,0x00u,0xC596u);
      sc_v11_op_compare(r,c->y,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C596u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C596u,2u,0x0Au,0xC598u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC5A2u;}
      if(c->pc!=0xC598u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC598u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C598u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C598u,3u,0x0Du,0xC59Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C59Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C59Bu,3u,0x01u,0xC59Eu);
      sc_v11_op_compare(r,c->a,0x01F4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C59Eu:
    if(m==0u&&x==0u&&e==0u){ /* B0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C59Eu,2u,0x07u,0xC5A0u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC5A7u;}
      if(c->pc!=0xC5A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5A0u:
    if(m==0u&&x==0u&&e==0u){ /* 80 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5A0u,2u,0x0Au,0xC5A2u);
      if(1){c->pc=0xC5ACu;}
      if(c->pc!=0xC5A2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5A2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5A2u:
    if(m==0u&&x==0u&&e==0u){ /* C0 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5A2u,3u,0x00u,0xC5A5u);
      sc_v11_op_compare(r,c->y,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5A5u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5A5u,2u,0x0Bu,0xC5A7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC5B2u;}
      if(c->pc!=0xC5A7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5A7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5A7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5A7u,3u,0x00u,0xC5AAu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5AAu:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5AAu,2u,0x03u,0xC5ACu);
      if(1){c->pc=0xC5AFu;}
      if(c->pc!=0xC5ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC5ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5ACu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5ACu,3u,0x00u,0xC5AFu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5AFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 87 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5AFu,3u,0x0Du,0xC5B2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D87u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5B2u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5B2u,1u,0x60u,0xC5B3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5E5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5E5u,2u,0x30u,0xC5E7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5E5u,2u,0x30u,0xC5E7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5E7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A1 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5E7u,3u,0xC8u,0xC5EAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC5E9u))return 0;c->pc=0xC8A1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5EAu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5EAu,1u,0x60u,0xC5EBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5EAu,1u,0x60u,0xC5EBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5EAu,1u,0x60u,0xC5EBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5EAu,1u,0x60u,0xC5EBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5EBu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5EBu,2u,0x30u,0xC5EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5FAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5FAu,2u,0x30u,0xC5FCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5FAu,2u,0x30u,0xC5FCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C5FAu,2u,0x30u,0xC5FCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C606u:
    if(m==0u&&x==1u&&e==0u){ /* A9 6C 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C606u,3u,0x07u,0xC609u);
      sc_v11_op_lda(r,0x076Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C606u,2u,0x6Cu,0xC608u);
      sc_v11_op_lda(r,0x006Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C606u,2u,0x6Cu,0xC608u);
      sc_v11_op_lda(r,0x006Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C609u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C609u,3u,0x0Bu,0xC60Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B53u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C60Cu:
    if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C60Cu,3u,0x00u,0xC60Fu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C60Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 55 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C60Fu,3u,0x0Bu,0xC612u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B55u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C612u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 57 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C612u,3u,0x0Bu,0xC615u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B57u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C615u:
    if(m==0u&&x==1u&&e==0u){ /* A9 20 4E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C615u,3u,0x4Eu,0xC618u);
      sc_v11_op_lda(r,0x4E20u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C618u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C618u,3u,0x0Bu,0xC61Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C61Bu:
    if(m==0u&&x==1u&&e==0u){ /* 9C 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C61Bu,3u,0x0Bu,0xC61Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C61Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 A1 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C61Eu,3u,0xC6u,0xC621u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC620u))return 0;c->pc=0xC6A1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C621u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C621u,3u,0x00u,0xC624u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C621u,2u,0x00u,0xC623u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C621u,2u,0x00u,0xC623u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C624u:
    if(m==0u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C624u,3u,0xC4u,0xC627u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC626u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C627u:
    if(m==0u&&x==1u&&e==0u){ /* A9 2F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C627u,3u,0x00u,0xC62Au);
      sc_v11_op_lda(r,0x002Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C627u,2u,0x2Fu,0xC629u);
      sc_v11_op_lda(r,0x002Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C627u,2u,0x2Fu,0xC629u);
      sc_v11_op_lda(r,0x002Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C62Au:
    if(m==0u&&x==1u&&e==0u){ /* 8D BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C62Au,3u,0x01u,0xC62Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C62Du:
    if(m==0u&&x==1u&&e==0u){ /* A9 22 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C62Du,3u,0x00u,0xC630u);
      sc_v11_op_lda(r,0x0022u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C630u:
    if(m==0u&&x==1u&&e==0u){ /* 8D BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C630u,3u,0x01u,0xC633u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C633u:
    if(m==0u&&x==1u&&e==0u){ /* 20 9D C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C633u,3u,0xC7u,0xC636u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC635u))return 0;c->pc=0xC79Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C636u:
    if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C636u,3u,0x00u,0xC639u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C636u,2u,0x01u,0xC638u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C636u,2u,0x01u,0xC638u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C639u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 38 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C639u,3u,0x00u,0xC63Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0038u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C63Cu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C63Cu,1u,0x60u,0xC63Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C63Du:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C63Du,2u,0x30u,0xC63Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C664u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 57 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C664u,3u,0x0Bu,0xC667u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B57u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C66Au:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C66Au,3u,0x00u,0xC66Du);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C66Au,2u,0x00u,0xC66Cu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C66Au,2u,0x00u,0xC66Cu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C66Du:
    if(m==0u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C66Du,3u,0xC4u,0xC670u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC66Fu))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C670u:
    if(m==0u&&x==1u&&e==0u){ /* 20 9D C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C670u,3u,0xC7u,0xC673u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC672u))return 0;c->pc=0xC79Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9D C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C670u,3u,0xC7u,0xC673u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC672u))return 0;c->pc=0xC79Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9D C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C670u,3u,0xC7u,0xC673u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC672u))return 0;c->pc=0xC79Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C673u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C673u,1u,0x60u,0xC674u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C673u,1u,0x60u,0xC674u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C673u,1u,0x60u,0xC674u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C674u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C674u,2u,0x30u,0xC676u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C674u,2u,0x30u,0xC676u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C676u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2E CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C676u,3u,0xCEu,0xC679u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC678u))return 0;c->pc=0xCE2Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C679u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A1 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C679u,3u,0xC6u,0xC67Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC67Bu))return 0;c->pc=0xC6A1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A1 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C679u,3u,0xC6u,0xC67Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC67Bu))return 0;c->pc=0xC6A1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A1 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C679u,3u,0xC6u,0xC67Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC67Bu))return 0;c->pc=0xC6A1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A1 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C679u,3u,0xC6u,0xC67Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC67Bu))return 0;c->pc=0xC6A1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C67Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 8B CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C67Cu,3u,0xCEu,0xC67Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC67Eu))return 0;c->pc=0xCE8Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 8B CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C67Cu,3u,0xCEu,0xC67Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC67Eu))return 0;c->pc=0xCE8Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 8B CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C67Cu,3u,0xCEu,0xC67Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC67Eu))return 0;c->pc=0xCE8Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 8B CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C67Cu,3u,0xCEu,0xC67Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC67Eu))return 0;c->pc=0xCE8Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C67Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C67Fu,3u,0x00u,0xC682u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C67Fu,3u,0x00u,0xC682u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C67Fu,2u,0x00u,0xC681u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C67Fu,2u,0x00u,0xC681u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C682u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C682u,3u,0xC4u,0xC685u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC684u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C682u,3u,0xC4u,0xC685u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC684u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C685u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C685u,2u,0x30u,0xC687u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C685u,2u,0x30u,0xC687u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C685u,2u,0x30u,0xC687u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C685u,2u,0x30u,0xC687u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C687u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C687u,3u,0x00u,0xC68Au);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C68Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D E7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C68Au,3u,0x01u,0xC68Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C68Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 9D C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C68Du,3u,0xC7u,0xC690u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC68Fu))return 0;c->pc=0xC79Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C690u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C690u,1u,0x60u,0xC691u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C690u,1u,0x60u,0xC691u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C690u,1u,0x60u,0xC691u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C690u,1u,0x60u,0xC691u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6A1u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C6A1u,2u,0x30u,0xC6A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C6A1u,2u,0x30u,0xC6A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C6A1u,2u,0x30u,0xC6A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C79Du:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C79Du,2u,0x30u,0xC79Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C79Du,2u,0x30u,0xC79Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C79Du,2u,0x30u,0xC79Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7A2u:
    if(m==0u&&x==1u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7A2u,3u,0x00u,0xC7A5u);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7A2u,2u,0x20u,0xC7A4u);
      sc_v11_op_lda(r,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7A2u,2u,0x20u,0xC7A4u);
      sc_v11_op_lda(r,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7A5u:
    if(m==0u&&x==1u&&e==0u){ /* 8D C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7A5u,3u,0x0Bu,0xC7A8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7A8u:
    if(m==0u&&x==1u&&e==0u){ /* A9 E8 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7A8u,3u,0x03u,0xC7ABu);
      sc_v11_op_lda(r,0x03E8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7ABu:
    if(m==0u&&x==1u&&e==0u){ /* 8D C7 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7ABu,3u,0x0Bu,0xC7AEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7AEu:
    if(m==0u&&x==1u&&e==0u){ /* 8D C9 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7AEu,3u,0x0Bu,0xC7B1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7B1u:
    if(m==0u&&x==1u&&e==0u){ /* 9C D3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7B1u,3u,0x0Du,0xC7B4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7B4u:
    if(m==0u&&x==1u&&e==0u){ /* 9C D5 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7B4u,3u,0x0Du,0xC7B7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7B7u:
    if(m==0u&&x==1u&&e==0u){ /* 9C D7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7B7u,3u,0x0Du,0xC7BAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7BAu:
    if(m==0u&&x==1u&&e==0u){ /* 9C C3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7BAu,3u,0x0Du,0xC7BDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7BDu:
    if(m==0u&&x==1u&&e==0u){ /* 9C B3 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7BDu,3u,0x0Bu,0xC7C0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7C0u:
    if(m==0u&&x==1u&&e==0u){ /* 9C B5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7C0u,3u,0x0Bu,0xC7C3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7C3u:
    if(m==0u&&x==1u&&e==0u){ /* 9C B7 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7C3u,3u,0x0Bu,0xC7C6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7C6u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 91 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7C6u,3u,0x0Au,0xC7C9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A91u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7C9u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 8B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7C9u,3u,0x0Au,0xC7CCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A8Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7CCu:
    if(m==0u&&x==1u&&e==0u){ /* 9C 8F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7CCu,3u,0x0Au,0xC7CFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A8Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7CFu:
    if(m==0u&&x==1u&&e==0u){ /* 9C 8D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7CFu,3u,0x0Au,0xC7D2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A8Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7D2u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 93 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7D2u,3u,0x0Au,0xC7D5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A93u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7D5u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 95 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7D5u,3u,0x0Au,0xC7D8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A95u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7D8u:
    if(m==0u&&x==1u&&e==0u){ /* 9C EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7D8u,3u,0x0Au,0xC7DBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AEFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7DBu:
    if(m==0u&&x==1u&&e==0u){ /* 9C F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7DBu,3u,0x0Au,0xC7DEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7DEu:
    if(m==0u&&x==1u&&e==0u){ /* 9C 87 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7DEu,3u,0x0Du,0xC7E1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D87u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7E1u:
    if(m==0u&&x==1u&&e==0u){ /* 9C C9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7E1u,3u,0x0Du,0xC7E4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC9u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7E4u:
    if(m==0u&&x==1u&&e==0u){ /* 9C CB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7E4u,3u,0x0Du,0xC7E7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DCBu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7E7u:
    if(m==0u&&x==1u&&e==0u){ /* A9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7E7u,3u,0x00u,0xC7EAu);
      sc_v11_op_lda(r,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7EAu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 79 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7EAu,3u,0x0Du,0xC7EDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D79u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7EDu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 7B 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7EDu,3u,0x0Du,0xC7F0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D7Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7F0u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 7D 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7F0u,3u,0x0Du,0xC7F3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D7Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7F3u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 73 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7F3u,3u,0x0Cu,0xC7F6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C73u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7F6u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 75 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7F6u,3u,0x0Cu,0xC7F9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C75u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7F9u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 77 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7F9u,3u,0x0Cu,0xC7FCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C77u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7FCu:
    if(m==0u&&x==1u&&e==0u){ /* 9C 7F 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7FCu,3u,0x0Cu,0xC7FFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C7Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7FFu:
    if(m==0u&&x==1u&&e==0u){ /* 9C 81 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03C7FFu,3u,0x0Cu,0xC802u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C81u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
