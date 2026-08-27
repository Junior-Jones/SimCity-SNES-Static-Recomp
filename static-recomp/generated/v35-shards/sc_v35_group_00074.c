/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00074(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01D019u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D019u,2u,0x30u,0xD01Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D019u,2u,0x30u,0xD01Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D019u,2u,0x30u,0xD01Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D019u,2u,0x30u,0xD01Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D01Bu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D01Bu,3u,0x00u,0xD01Eu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D01Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D01Eu,1u,0x9Bu,0xD01Fu);
      c->y=c->x;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D01Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D01Fu,3u,0x00u,0xD022u);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D022u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D022u,2u,0x79u,0xD024u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D024u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D024u,1u,0x4Bu,0xD025u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D025u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D025u,1u,0xABu,0xD026u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D026u:
    if(m==0u&&x==0u&&e==0u){ /* B9 D9 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D026u,3u,0xCFu,0xD029u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xCFD9u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D029u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D029u,1u,0xC8u,0xD02Au);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D02Au:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D02Au,1u,0xC8u,0xD02Bu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D02Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9F A0 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D02Bu,4u,0x7Eu,0xD02Fu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E20A0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D02Fu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D02Fu,1u,0xE8u,0xD030u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D030u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D030u,1u,0xE8u,0xD031u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D031u:
    if(m==0u&&x==0u&&e==0u){ /* C6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D031u,2u,0x79u,0xD033u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D033u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D033u,2u,0xF1u,0xD035u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD026u;}
      if(c->pc!=0xD035u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD035u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D035u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D035u,1u,0x60u,0xD036u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D036u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D036u,2u,0x20u,0xD038u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D036u,2u,0x20u,0xD038u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D036u,2u,0x20u,0xD038u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D036u,2u,0x20u,0xD038u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D038u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D038u,3u,0xFFu,0xD03Bu);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D038u,3u,0xFFu,0xD03Bu);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D03Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0A 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D03Bu,4u,0x7Eu,0xD03Fu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 0A 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D03Bu,4u,0x7Eu,0xD03Fu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D03Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0C 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D03Fu,4u,0x7Eu,0xD043u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 0C 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D03Fu,4u,0x7Eu,0xD043u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D043u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D043u,1u,0x60u,0xD044u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D043u,1u,0x60u,0xD044u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D044u:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D044u,2u,0x10u,0xD046u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D044u,2u,0x10u,0xD046u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D046u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D046u,2u,0x20u,0xD048u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D048u:
    if(m==0u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D048u,2u,0x00u,0xD04Au);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D04Au:
    if(m==0u&&x==1u&&e==0u){ /* BF 40 24 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D04Au,4u,0x7Eu,0xD04Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E2440u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D04Eu:
    if(m==0u&&x==1u&&e==0u){ /* 9F 40 26 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D04Eu,4u,0x7Eu,0xD052u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2640u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D052u:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D052u,1u,0xE8u,0xD053u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D053u:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D053u,1u,0xE8u,0xD054u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D054u:
    if(m==0u&&x==1u&&e==0u){ /* D0 F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D054u,2u,0xF4u,0xD056u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD04Au;}
      if(c->pc!=0xD056u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD056u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D056u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D056u,1u,0x60u,0xD057u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D057u:
    if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D057u,2u,0x10u,0xD059u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D057u,2u,0x10u,0xD059u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D059u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D059u,2u,0x20u,0xD05Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D05Bu:
    if(m==0u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D05Bu,2u,0x00u,0xD05Du);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D05Du:
    if(m==0u&&x==1u&&e==0u){ /* BF 40 26 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D05Du,4u,0x7Eu,0xD061u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E2640u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D061u:
    if(m==0u&&x==1u&&e==0u){ /* 9F 40 24 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D061u,4u,0x7Eu,0xD065u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2440u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D065u:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D065u,1u,0xE8u,0xD066u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D066u:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D066u,1u,0xE8u,0xD067u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D067u:
    if(m==0u&&x==1u&&e==0u){ /* D0 F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D067u,2u,0xF4u,0xD069u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD05Du;}
      if(c->pc!=0xD069u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD069u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D069u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D069u,1u,0x60u,0xD06Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D06Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 E2 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D06Au,3u,0xD0u,0xD06Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD06Cu))return 0;c->pc=0xD0E2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D06Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D06Du,2u,0x20u,0xD06Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D06Du,2u,0x20u,0xD06Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D06Du,2u,0x20u,0xD06Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D06Du,2u,0x20u,0xD06Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D06Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 55 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D06Fu,3u,0x55u,0xD072u);
      sc_v11_op_lda(r,0x5555u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 55 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D06Fu,3u,0x55u,0xD072u);
      sc_v11_op_lda(r,0x5555u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D072u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 01 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D072u,4u,0x7Eu,0xD076u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2201u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 01 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D072u,4u,0x7Eu,0xD076u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2201u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D076u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 03 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D076u,4u,0x7Eu,0xD07Au);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2203u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 03 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D076u,4u,0x7Eu,0xD07Au);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2203u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D07Au:
    if(m==0u&&x==0u&&e==0u){ /* 8F 05 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D07Au,4u,0x7Eu,0xD07Eu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2205u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 05 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D07Au,4u,0x7Eu,0xD07Eu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2205u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D07Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 07 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D07Eu,4u,0x7Eu,0xD082u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2207u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 07 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D07Eu,4u,0x7Eu,0xD082u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2207u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D082u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D082u,1u,0x60u,0xD083u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D082u,1u,0x60u,0xD083u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D083u:
    if(m==0u&&x==0u&&e==0u){ /* 20 E2 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D083u,3u,0xD0u,0xD086u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD085u))return 0;c->pc=0xD0E2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D086u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D086u,2u,0x20u,0xD088u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D086u,2u,0x20u,0xD088u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D086u,2u,0x20u,0xD088u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D086u,2u,0x20u,0xD088u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D088u:
    if(m==0u&&x==0u&&e==0u){ /* AD E9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D088u,3u,0x01u,0xD08Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01E9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD E9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D088u,3u,0x01u,0xD08Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01E9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D08Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D08Bu,2u,0x10u,0xD08Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD09Du;}
      if(c->pc!=0xD08Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD08Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D08Bu,2u,0x10u,0xD08Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD09Du;}
      if(c->pc!=0xD08Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD08Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D08Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 47 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D08Du,3u,0xE3u,0xD090u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD08Fu))return 0;c->pc=0xE347u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 47 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D08Du,3u,0xE3u,0xD090u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD08Fu))return 0;c->pc=0xE347u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D090u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9F 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D090u,3u,0x8Fu,0xD093u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD092u))return 0;c->pc=0x8F9Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9F 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D090u,3u,0x8Fu,0xD093u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD092u))return 0;c->pc=0x8F9Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9F 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D090u,3u,0x8Fu,0xD093u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD092u))return 0;c->pc=0x8F9Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9F 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D090u,3u,0x8Fu,0xD093u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD092u))return 0;c->pc=0x8F9Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D093u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D093u,3u,0xA8u,0xD096u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD095u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D093u,3u,0xA8u,0xD096u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD095u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D093u,3u,0xA8u,0xD096u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD095u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D093u,3u,0xA8u,0xD096u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD095u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D096u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D096u,2u,0x20u,0xD098u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D096u,2u,0x20u,0xD098u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D096u,2u,0x20u,0xD098u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D096u,2u,0x20u,0xD098u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D098u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D098u,3u,0x00u,0xD09Bu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D098u,3u,0x00u,0xD09Bu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D09Bu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D09Bu,2u,0x00u,0xD09Du);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD09Du))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D09Bu,2u,0x00u,0xD09Du);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD09Du))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D09Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 CE D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D09Du,3u,0xD6u,0xD0A0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD09Fu))return 0;c->pc=0xD6CEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 CE D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D09Du,3u,0xD6u,0xD0A0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD09Fu))return 0;c->pc=0xD6CEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0A0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4B D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A0u,3u,0xD8u,0xD0A3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0A2u))return 0;c->pc=0xD84Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 4B D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A0u,3u,0xD8u,0xD0A3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0A2u))return 0;c->pc=0xD84Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 4B D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A0u,3u,0xD8u,0xD0A3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0A2u))return 0;c->pc=0xD84Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 4B D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A0u,3u,0xD8u,0xD0A3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0A2u))return 0;c->pc=0xD84Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0A3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7B D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A3u,3u,0xD6u,0xD0A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0A5u))return 0;c->pc=0xD67Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7B D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A3u,3u,0xD6u,0xD0A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0A5u))return 0;c->pc=0xD67Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 7B D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A3u,3u,0xD6u,0xD0A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0A5u))return 0;c->pc=0xD67Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 7B D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A3u,3u,0xD6u,0xD0A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0A5u))return 0;c->pc=0xD67Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0A6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4F D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A6u,3u,0xD9u,0xD0A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0A8u))return 0;c->pc=0xD94Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 4F D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A6u,3u,0xD9u,0xD0A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0A8u))return 0;c->pc=0xD94Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 4F D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A6u,3u,0xD9u,0xD0A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0A8u))return 0;c->pc=0xD94Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 4F D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A6u,3u,0xD9u,0xD0A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0A8u))return 0;c->pc=0xD94Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0A9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A9u,1u,0x60u,0xD0AAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A9u,1u,0x60u,0xD0AAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A9u,1u,0x60u,0xD0AAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0A9u,1u,0x60u,0xD0AAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0AAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 E2 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0AAu,3u,0xD0u,0xD0ADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0ACu))return 0;c->pc=0xD0E2u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E2 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0AAu,3u,0xD0u,0xD0ADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0ACu))return 0;c->pc=0xD0E2u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E2 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0AAu,3u,0xD0u,0xD0ADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0ACu))return 0;c->pc=0xD0E2u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E2 D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0AAu,3u,0xD0u,0xD0ADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0ACu))return 0;c->pc=0xD0E2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0ADu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0ADu,2u,0x20u,0xD0AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0ADu,2u,0x20u,0xD0AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0ADu,2u,0x20u,0xD0AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0ADu,2u,0x20u,0xD0AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0AFu:
    if(m==0u&&x==0u&&e==0u){ /* AD E9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0AFu,3u,0x01u,0xD0B2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01E9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD E9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0AFu,3u,0x01u,0xD0B2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01E9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0B2u:
    if(m==0u&&x==0u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0B2u,2u,0x10u,0xD0B4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD0C4u;}
      if(c->pc!=0xD0B4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD0B4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0B2u,2u,0x10u,0xD0B4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD0C4u;}
      if(c->pc!=0xD0B4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD0B4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0B4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 47 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0B4u,3u,0xE3u,0xD0B7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0B6u))return 0;c->pc=0xE347u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 47 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0B4u,3u,0xE3u,0xD0B7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0B6u))return 0;c->pc=0xE347u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0B7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9F 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0B7u,3u,0x8Fu,0xD0BAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0B9u))return 0;c->pc=0x8F9Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9F 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0B7u,3u,0x8Fu,0xD0BAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0B9u))return 0;c->pc=0x8F9Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9F 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0B7u,3u,0x8Fu,0xD0BAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0B9u))return 0;c->pc=0x8F9Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9F 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0B7u,3u,0x8Fu,0xD0BAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0B9u))return 0;c->pc=0x8F9Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0BAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0BAu,3u,0xA8u,0xD0BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0BCu))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0BAu,3u,0xA8u,0xD0BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0BCu))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0BAu,3u,0xA8u,0xD0BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0BCu))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0BAu,3u,0xA8u,0xD0BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0BCu))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0BDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0BDu,2u,0x20u,0xD0BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0BDu,2u,0x20u,0xD0BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0BDu,2u,0x20u,0xD0BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0BDu,2u,0x20u,0xD0BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0BFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0BFu,3u,0x00u,0xD0C2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0BFu,3u,0x00u,0xD0C2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0C2u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0C2u,2u,0x00u,0xD0C4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD0C4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0C2u,2u,0x00u,0xD0C4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD0C4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0C4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CE D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0C4u,3u,0xD6u,0xD0C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0C6u))return 0;c->pc=0xD6CEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 CE D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0C4u,3u,0xD6u,0xD0C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0C6u))return 0;c->pc=0xD6CEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0C7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4B D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0C7u,3u,0xD8u,0xD0CAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0C9u))return 0;c->pc=0xD84Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 4B D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0C7u,3u,0xD8u,0xD0CAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0C9u))return 0;c->pc=0xD84Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 4B D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0C7u,3u,0xD8u,0xD0CAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0C9u))return 0;c->pc=0xD84Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 4B D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0C7u,3u,0xD8u,0xD0CAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0C9u))return 0;c->pc=0xD84Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0CAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 7B D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0CAu,3u,0xD6u,0xD0CDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0CCu))return 0;c->pc=0xD67Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7B D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0CAu,3u,0xD6u,0xD0CDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0CCu))return 0;c->pc=0xD67Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 7B D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0CAu,3u,0xD6u,0xD0CDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0CCu))return 0;c->pc=0xD67Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 7B D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0CAu,3u,0xD6u,0xD0CDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0CCu))return 0;c->pc=0xD67Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0CDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 EA D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0CDu,3u,0xD9u,0xD0D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0CFu))return 0;c->pc=0xD9EAu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 EA D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0CDu,3u,0xD9u,0xD0D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0CFu))return 0;c->pc=0xD9EAu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 EA D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0CDu,3u,0xD9u,0xD0D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0CFu))return 0;c->pc=0xD9EAu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 EA D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0CDu,3u,0xD9u,0xD0D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD0CFu))return 0;c->pc=0xD9EAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0D0u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0D0u,1u,0x60u,0xD0D1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0D0u,1u,0x60u,0xD0D1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0D0u,1u,0x60u,0xD0D1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0D0u,1u,0x60u,0xD0D1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0D1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0D1u,2u,0x30u,0xD0D3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0D1u,2u,0x30u,0xD0D3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0D1u,2u,0x30u,0xD0D3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0D1u,2u,0x30u,0xD0D3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0D3u:
    if(m==0u&&x==0u&&e==0u){ /* A2 FE 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0D3u,3u,0x1Fu,0xD0D6u);
      sc_v11_op_ldx(r,0x1FFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0D6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0D6u,3u,0x00u,0xD0D9u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0D9u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 C0 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0D9u,4u,0x7Eu,0xD0DDu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7EC000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0DDu:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0DDu,1u,0xCAu,0xD0DEu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0DEu:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0DEu,1u,0xCAu,0xD0DFu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0DFu:
    if(m==0u&&x==0u&&e==0u){ /* 10 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0DFu,2u,0xF8u,0xD0E1u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD0D9u;}
      if(c->pc!=0xD0E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD0E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0E1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0E1u,1u,0x60u,0xD0E2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0E2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0E2u,2u,0x30u,0xD0E4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0E2u,2u,0x30u,0xD0E4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0E2u,2u,0x30u,0xD0E4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0E2u,2u,0x30u,0xD0E4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0E4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 55 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0E4u,3u,0x55u,0xD0E7u);
      sc_v11_op_lda(r,0x5555u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0E7u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 12 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0E7u,4u,0x7Eu,0xD0EBu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2212u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0EBu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 14 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0EBu,4u,0x7Eu,0xD0EFu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2214u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01D0EFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01D0EFu,1u,0x60u,0xD0F0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
