/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0007C(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01F001u:
    if(m==0u&&x==0u&&e==0u){ /* 20 38 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F001u,3u,0xF0u,0xF004u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF003u))return 0;c->pc=0xF038u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F004u:
    if(m==0u&&x==0u&&e==0u){ /* A0 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F004u,3u,0x00u,0xF007u);
      sc_v11_op_ldy(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F004u,2u,0x1Eu,0xF006u);
      sc_v11_op_ldy(r,0x001Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F004u,3u,0x00u,0xF007u);
      sc_v11_op_ldy(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F004u,2u,0x1Eu,0xF006u);
      sc_v11_op_ldy(r,0x001Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F007u:
    if(m==0u&&x==0u&&e==0u){ /* A9 A8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F007u,3u,0x00u,0xF00Au);
      sc_v11_op_lda(r,0x00A8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F007u,2u,0xA8u,0xF009u);
      sc_v11_op_lda(r,0x00A8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F00Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 38 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F00Au,3u,0xF0u,0xF00Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF00Cu))return 0;c->pc=0xF038u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F00Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F00Du,2u,0x30u,0xF00Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F00Du,2u,0x30u,0xF00Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F00Du,2u,0x30u,0xF00Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F00Du,2u,0x30u,0xF00Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F00Fu:
    if(m==1u&&x==1u&&e==0u){ /* A0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F00Fu,2u,0x11u,0xF011u);
      sc_v11_op_ldy(r,0x0011u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F011u:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F011u,2u,0x00u,0xF013u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F013u:
    if(m==1u&&x==1u&&e==0u){ /* BF BE EE 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F013u,4u,0x01u,0xF017u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01EEBEu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F017u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 0A 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F017u,4u,0x7Eu,0xF01Bu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E220Au),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F01Bu:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F01Bu,1u,0xE8u,0xF01Cu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F01Cu:
    if(m==1u&&x==1u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F01Cu,1u,0x88u,0xF01Du);
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F01Du:
    if(m==1u&&x==1u&&e==0u){ /* D0 F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F01Du,2u,0xF4u,0xF01Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF013u;}
      if(c->pc!=0xF01Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF01Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F01Fu:
    if(m==1u&&x==1u&&e==0u){ /* AF 09 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F01Fu,4u,0x7Eu,0xF023u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2209u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F023u:
    if(m==1u&&x==1u&&e==0u){ /* 29 3F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F023u,2u,0x3Fu,0xF025u);
      sc_v11_op_and(r,0x003Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F025u:
    if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F025u,2u,0x80u,0xF027u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F027u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 09 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F027u,4u,0x7Eu,0xF02Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2209u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F02Bu:
    if(m==1u&&x==1u&&e==0u){ /* AF 1B 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F02Bu,4u,0x7Eu,0xF02Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E221Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F02Fu:
    if(m==1u&&x==1u&&e==0u){ /* 29 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F02Fu,2u,0xFCu,0xF031u);
      sc_v11_op_and(r,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F031u:
    if(m==1u&&x==1u&&e==0u){ /* 09 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F031u,2u,0x02u,0xF033u);
      sc_v11_op_ora(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F033u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 1B 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F033u,4u,0x7Eu,0xF037u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E221Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F037u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F037u,1u,0x60u,0xF038u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F038u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F038u,2u,0x20u,0xF03Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F038u,2u,0x20u,0xF03Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F03Au:
    if(m==0u&&x==0u&&e==0u){ /* 9F 9C 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F03Au,4u,0x7Eu,0xF03Eu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E209Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F03Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F03Eu,2u,0x20u,0xF040u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F040u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F040u,1u,0x18u,0xF041u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F041u:
    if(m==1u&&x==0u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F041u,2u,0x79u,0xF043u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F043u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F043u,1u,0xE8u,0xF044u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F044u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F044u,1u,0xE8u,0xF045u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F045u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F045u,1u,0xE8u,0xF046u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F046u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F046u,1u,0xE8u,0xF047u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F047u:
    if(m==1u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F047u,1u,0x88u,0xF048u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F048u:
    if(m==1u&&x==0u&&e==0u){ /* D0 EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F048u,2u,0xEEu,0xF04Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF038u;}
      if(c->pc!=0xF04Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF04Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F04Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F04Au,2u,0x20u,0xF04Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F04Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F04Cu,1u,0x60u,0xF04Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F04Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F04Du,2u,0x30u,0xF04Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F04Du,2u,0x30u,0xF04Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F04Fu:
    if(m==0u&&x==0u&&e==0u){ /* A0 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F04Fu,3u,0x00u,0xF052u);
      sc_v11_op_ldy(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F052u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 9C 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F052u,4u,0x7Eu,0xF056u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E209Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F056u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F056u,1u,0x18u,0xF057u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F057u:
    if(m==0u&&x==0u&&e==0u){ /* 69 00 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F057u,3u,0x10u,0xF05Au);
      sc_v11_op_adc(r,0x1000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F05Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F05Au,2u,0x20u,0xF05Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F05Cu:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F05Cu,1u,0x38u,0xF05Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F05Du:
    if(m==1u&&x==0u&&e==0u){ /* E9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F05Du,2u,0x04u,0xF05Fu);
      sc_v11_op_sbc(r,0x0004u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F05Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F05Fu,2u,0x20u,0xF061u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F061u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F061u,1u,0xE8u,0xF062u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F062u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F062u,1u,0xE8u,0xF063u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F063u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F063u,1u,0xE8u,0xF064u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F064u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F064u,1u,0xE8u,0xF065u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F065u:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F065u,1u,0x88u,0xF066u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F066u:
    if(m==0u&&x==0u&&e==0u){ /* D0 EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F066u,2u,0xEAu,0xF068u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF052u;}
      if(c->pc!=0xF068u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF068u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F068u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F068u,1u,0x60u,0xF069u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F069u:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F069u,2u,0x10u,0xF06Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F069u,2u,0x10u,0xF06Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F069u,2u,0x10u,0xF06Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F06Bu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F06Bu,2u,0x20u,0xF06Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F076u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F076u,1u,0x60u,0xF077u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F07Bu:
    if(m==0u&&x==1u&&e==0u){ /* 4C D1 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F07Bu,3u,0xF0u,0xF07Eu);
      c->pc=0xF0D1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F08Au:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F08Au,2u,0x20u,0xF08Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F08Cu:
    if(m==1u&&x==1u&&e==0u){ /* AD 1C 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F08Cu,3u,0x01u,0xF08Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x011Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F08Fu:
    if(m==1u&&x==1u&&e==0u){ /* 29 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F08Fu,2u,0x0Fu,0xF091u);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F091u:
    if(m==1u&&x==1u&&e==0u){ /* F0 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F091u,2u,0x3Au,0xF093u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF0CDu;}
      if(c->pc!=0xF093u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF093u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F093u:
    if(m==1u&&x==1u&&e==0u){ /* A0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F093u,2u,0x01u,0xF095u);
      sc_v11_op_ldy(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F095u:
    if(m==1u&&x==1u&&e==0u){ /* 8C C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F095u,3u,0x01u,0xF098u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01C3u),(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F098u:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F098u,2u,0x00u,0xF09Au);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F09Au:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F09Au,1u,0x4Au,0xF09Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F09Au,1u,0x4Au,0xF09Bu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F09Bu:
    if(m==0u&&x==1u&&e==0u){ /* 90 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F09Bu,2u,0x28u,0xF09Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF0C5u;}
      if(c->pc!=0xF09Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF09Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F09Bu,2u,0x28u,0xF09Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF0C5u;}
      if(c->pc!=0xF09Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF09Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F09Du:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F09Du,1u,0x48u,0xF09Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F09Du,1u,0x48u,0xF09Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F09Eu:
    if(m==0u&&x==1u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F09Eu,1u,0x98u,0xF09Fu);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F09Eu,1u,0x98u,0xF09Fu);
      c->a=(uint16_t)((c->a&0xff00u)|(c->y&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F09Fu:
    if(m==0u&&x==1u&&e==0u){ /* 29 02 AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F09Fu,3u,0xAAu,0xF0A2u);
      sc_v11_op_and(r,0xAA02u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F09Fu,2u,0x02u,0xF0A1u);
      sc_v11_op_and(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0A1u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0A1u,1u,0xAAu,0xF0A2u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0A2u:
    if(m==0u&&x==1u&&e==0u){ /* BD BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0A2u,3u,0x01u,0xF0A5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x01BDu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BD BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0A2u,3u,0x01u,0xF0A5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x01BDu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0A5u:
    if(m==0u&&x==1u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0A5u,1u,0xBBu,0xF0A6u);
      c->x=(uint16_t)(c->y&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0A5u,1u,0xBBu,0xF0A6u);
      c->x=(uint16_t)(c->y&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0A6u:
    if(m==0u&&x==1u&&e==0u){ /* DF D0 F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0A6u,4u,0x01u,0xF0AAu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01F1D0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* DF D0 F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0A6u,4u,0x01u,0xF0AAu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01F1D0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0AAu:
    if(m==0u&&x==1u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0AAu,2u,0x0Au,0xF0ACu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF0B6u;}
      if(c->pc!=0xF0ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0AAu,2u,0x0Au,0xF0ACu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF0B6u;}
      if(c->pc!=0xF0ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0ACu:
    if(m==0u&&x==1u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0ACu,3u,0x01u,0xF0AFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0ACu,3u,0x01u,0xF0AFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01C1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0AFu:
    if(m==0u&&x==1u&&e==0u){ /* F0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0AFu,2u,0x13u,0xF0B1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF0C4u;}
      if(c->pc!=0xF0B1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0B1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0AFu,2u,0x13u,0xF0B1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF0C4u;}
      if(c->pc!=0xF0B1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0B1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0B1u:
    if(m==0u&&x==1u&&e==0u){ /* 2D C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0B1u,3u,0x01u,0xF0B4u);
      sc_v11_op_and(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2D C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0B1u,3u,0x01u,0xF0B4u);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01C3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0B4u:
    if(m==0u&&x==1u&&e==0u){ /* F0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0B4u,2u,0x0Eu,0xF0B6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF0C4u;}
      if(c->pc!=0xF0B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0B4u,2u,0x0Eu,0xF0B6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF0C4u;}
      if(c->pc!=0xF0B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0B6u:
    if(m==0u&&x==1u&&e==0u){ /* BF D4 F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0B6u,4u,0x01u,0xF0BAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01F1D4u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF D4 F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0B6u,4u,0x01u,0xF0BAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01F1D4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0BAu:
    if(m==0u&&x==1u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0BAu,2u,0x7Cu,0xF0BCu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0BAu,2u,0x7Cu,0xF0BCu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0BCu:
    if(m==0u&&x==1u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0BCu,1u,0x98u,0xF0BDu);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0BCu,1u,0x98u,0xF0BDu);
      c->a=(uint16_t)((c->a&0xff00u)|(c->y&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0BDu:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0BDu,1u,0x4Au,0xF0BEu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0BDu,1u,0x4Au,0xF0BEu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0BEu:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0BEu,1u,0xAAu,0xF0BFu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0BEu,1u,0xAAu,0xF0BFu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0BFu:
    if(m==0u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0BFu,1u,0x5Au,0xF0C0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0BFu,1u,0x5Au,0xF0C0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0C0u:
    if(m==0u&&x==1u&&e==0u){ /* 20 1A F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C0u,3u,0xF1u,0xF0C3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF0C2u))return 0;c->pc=0xF11Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1A F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C0u,3u,0xF1u,0xF0C3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF0C2u))return 0;c->pc=0xF11Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0C3u:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C3u,1u,0x7Au,0xF0C4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C3u,1u,0x7Au,0xF0C4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C3u,1u,0x7Au,0xF0C4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C3u,1u,0x7Au,0xF0C4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0C4u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C4u,1u,0x68u,0xF0C5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C4u,1u,0x68u,0xF0C5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C4u,1u,0x68u,0xF0C5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C4u,1u,0x68u,0xF0C5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0C5u:
    if(m==0u&&x==0u&&e==0u){ /* 0E C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C5u,3u,0x01u,0xF0C8u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x01C3u),16u,0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0E C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C5u,3u,0x01u,0xF0C8u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x01C3u),16u,0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0E C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C5u,3u,0x01u,0xF0C8u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x01C3u),8u,0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0E C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C5u,3u,0x01u,0xF0C8u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x01C3u),8u,0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0C8u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C8u,1u,0xC8u,0xF0C9u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C8u,1u,0xC8u,0xF0C9u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C8u,1u,0xC8u,0xF0C9u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C8u,1u,0xC8u,0xF0C9u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0C9u:
    if(m==0u&&x==0u&&e==0u){ /* C0 04 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C9u,3u,0x90u,0xF0CCu);
      sc_v11_op_compare(r,c->y,0x9004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C9u,2u,0x04u,0xF0CBu);
      sc_v11_op_compare(r,c->y,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C0 04 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C9u,3u,0x90u,0xF0CCu);
      sc_v11_op_compare(r,c->y,0x9004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0C9u,2u,0x04u,0xF0CBu);
      sc_v11_op_compare(r,c->y,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0CBu:
    if(m==0u&&x==1u&&e==0u){ /* 90 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0CBu,2u,0xCDu,0xF0CDu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF09Au;}
      if(c->pc!=0xF0CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 CD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0CBu,2u,0xCDu,0xF0CDu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF09Au;}
      if(c->pc!=0xF0CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0CCu:
    if(m==0u&&x==0u&&e==0u){ /* CD 9C C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0CCu,3u,0xC3u,0xF0CFu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0xC39Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CD 9C C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0CCu,3u,0xC3u,0xF0CFu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0xC39Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0CDu:

    if(m==1u&&x==1u&&e==0u){ /* 9C C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0CDu,3u,0x01u,0xF0D0u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01C3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0D0u:

    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0D0u,1u,0x60u,0xF0D1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0D1u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0D1u,2u,0x30u,0xF0D3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0D3u:
    if(m==1u&&x==1u&&e==0u){ /* AD 1C 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0D3u,3u,0x01u,0xF0D6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x011Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0D6u:
    if(m==1u&&x==1u&&e==0u){ /* 29 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0D6u,2u,0x0Fu,0xF0D8u);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0D8u:
    if(m==1u&&x==1u&&e==0u){ /* F0 3C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0D8u,2u,0x3Cu,0xF0DAu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF116u;}
      if(c->pc!=0xF0DAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0DAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0DAu:
    if(m==1u&&x==1u&&e==0u){ /* A0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0DAu,2u,0x01u,0xF0DCu);
      sc_v11_op_ldy(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0DCu:
    if(m==1u&&x==1u&&e==0u){ /* 8C C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0DCu,3u,0x01u,0xF0DFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01C3u),(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0DFu:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0DFu,2u,0x00u,0xF0E1u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0E1u:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0E1u,1u,0x4Au,0xF0E2u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0E2u:
    if(m==1u&&x==1u&&e==0u){ /* 90 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0E2u,2u,0x2Au,0xF0E4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF10Eu;}
      if(c->pc!=0xF0E4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0E4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0E4u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0E4u,1u,0x48u,0xF0E5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0E5u:
    if(m==1u&&x==1u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0E5u,1u,0x98u,0xF0E6u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->y&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0E6u:
    if(m==1u&&x==1u&&e==0u){ /* 29 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0E6u,2u,0x02u,0xF0E8u);
      sc_v11_op_and(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0E8u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0E8u,1u,0xAAu,0xF0E9u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0E9u:
    if(m==1u&&x==1u&&e==0u){ /* BD BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0E9u,3u,0x01u,0xF0ECu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x01BDu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0ECu:
    if(m==1u&&x==1u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0ECu,1u,0xBBu,0xF0EDu);
      c->x=(uint16_t)(c->y&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0EDu:
    if(m==1u&&x==1u&&e==0u){ /* DF C8 F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0EDu,4u,0x01u,0xF0F1u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01F1C8u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0F1u:
    if(m==1u&&x==1u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0F1u,2u,0x0Au,0xF0F3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF0FDu;}
      if(c->pc!=0xF0F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0F3u:
    if(m==1u&&x==1u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0F3u,3u,0x01u,0xF0F6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01C1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0F6u:
    if(m==1u&&x==1u&&e==0u){ /* F0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0F6u,2u,0x13u,0xF0F8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF10Bu;}
      if(c->pc!=0xF0F8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0F8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0F8u:
    if(m==1u&&x==1u&&e==0u){ /* 2D C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0F8u,3u,0x01u,0xF0FBu);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01C3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0FBu:
    if(m==1u&&x==1u&&e==0u){ /* F0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0FBu,2u,0x0Eu,0xF0FDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF10Bu;}
      if(c->pc!=0xF0FDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF0FDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F0FDu:
    if(m==1u&&x==1u&&e==0u){ /* BF CC F1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F0FDu,4u,0x01u,0xF101u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01F1CCu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F101u:
    if(m==1u&&x==1u&&e==0u){ /* 85 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F101u,2u,0x7Cu,0xF103u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F103u:
    if(m==1u&&x==1u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F103u,1u,0x98u,0xF104u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->y&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F104u:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F104u,1u,0x4Au,0xF105u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F105u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F105u,1u,0xAAu,0xF106u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F106u:
    if(m==1u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F106u,1u,0x5Au,0xF107u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F107u:
    if(m==1u&&x==1u&&e==0u){ /* 20 7D F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F107u,3u,0xF1u,0xF10Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF109u))return 0;c->pc=0xF17Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F10Au:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F10Au,1u,0x7Au,0xF10Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F10Au,1u,0x7Au,0xF10Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F10Au,1u,0x7Au,0xF10Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F10Au,1u,0x7Au,0xF10Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F10Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F10Bu,2u,0x20u,0xF10Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F10Bu,2u,0x20u,0xF10Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F10Bu,2u,0x20u,0xF10Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F10Bu,2u,0x20u,0xF10Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F10Du:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F10Du,1u,0x68u,0xF10Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F10Du,1u,0x68u,0xF10Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F10Eu:
    if(m==1u&&x==0u&&e==0u){ /* 0E C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F10Eu,3u,0x01u,0xF111u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x01C3u),8u,0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0E C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F10Eu,3u,0x01u,0xF111u);
      sc_v11_op_shift_memory(r,sc_v11_ea_abs(r,0x01C3u),8u,0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F111u:
    if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F111u,1u,0xC8u,0xF112u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F111u,1u,0xC8u,0xF112u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F112u:
    if(m==1u&&x==0u&&e==0u){ /* C0 04 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F112u,3u,0x90u,0xF115u);
      sc_v11_op_compare(r,c->y,0x9004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F112u,2u,0x04u,0xF114u);
      sc_v11_op_compare(r,c->y,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F114u:
    if(m==1u&&x==1u&&e==0u){ /* 90 CB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F114u,2u,0xCBu,0xF116u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF0E1u;}
      if(c->pc!=0xF116u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF116u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F116u:
    if(m==1u&&x==1u&&e==0u){ /* 9C C3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F116u,3u,0x01u,0xF119u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01C3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F119u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F119u,1u,0x60u,0xF11Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F11Au:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F11Au,2u,0x30u,0xF11Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F11Au,2u,0x30u,0xF11Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F11Cu:
    if(m==1u&&x==1u&&e==0u){ /* A0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F11Cu,2u,0x13u,0xF11Eu);
      sc_v11_op_ldy(r,0x0013u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F11Eu:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F11Eu,2u,0x30u,0xF120u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F120u:
    if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F120u,1u,0x8Au,0xF121u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F121u:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F121u,1u,0x4Au,0xF122u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F122u:
    if(m==1u&&x==1u&&e==0u){ /* B0 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F122u,2u,0x42u,0xF124u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF166u;}
      if(c->pc!=0xF124u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF124u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F124u:
    if(m==1u&&x==1u&&e==0u){ /* BF B5 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F124u,4u,0x7Eu,0xF128u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E21B5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F128u:
    if(m==1u&&x==1u&&e==0u){ /* C9 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F128u,2u,0xE0u,0xF12Au);
      sc_v11_op_compare(r,c->a,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F12Au:
    if(m==1u&&x==1u&&e==0u){ /* F0 49 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F12Au,2u,0x49u,0xF12Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF175u;}
      if(c->pc!=0xF12Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF12Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F12Cu:
    if(m==1u&&x==1u&&e==0u){ /* A5 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F12Cu,2u,0x7Cu,0xF12Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F12Eu:
    if(m==1u&&x==1u&&e==0u){ /* 30 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F12Eu,2u,0x19u,0xF130u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF149u;}
      if(c->pc!=0xF130u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF130u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F130u:
    if(m==1u&&x==1u&&e==0u){ /* BF B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F130u,4u,0x7Eu,0xF134u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E21B4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F134u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F134u,1u,0x18u,0xF135u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F135u:
    if(m==1u&&x==1u&&e==0u){ /* 65 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F135u,2u,0x7Cu,0xF137u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F137u:
    if(m==1u&&x==1u&&e==0u){ /* 9F B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F137u,4u,0x7Eu,0xF13Bu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E21B4u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F13Bu:
    if(m==1u&&x==1u&&e==0u){ /* 90 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F13Bu,2u,0x38u,0xF13Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF175u;}
      if(c->pc!=0xF13Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF13Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F13Du:
    if(m==1u&&x==1u&&e==0u){ /* 84 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F13Du,2u,0x7Fu,0xF13Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),(uint8_t)c->y);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F13Fu:
    if(m==1u&&x==1u&&e==0u){ /* 22 2C C2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F13Fu,4u,0x00u,0xF143u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF142u))return 0;
      c->pbr=0x00u;c->pc=0xC22Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F143u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F143u,2u,0x30u,0xF145u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F143u,2u,0x30u,0xF145u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F143u,2u,0x30u,0xF145u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F143u,2u,0x30u,0xF145u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F145u:
    if(m==1u&&x==1u&&e==0u){ /* A4 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F145u,2u,0x7Fu,0xF147u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F147u:
    if(m==1u&&x==1u&&e==0u){ /* 80 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F147u,2u,0x2Cu,0xF149u);
      if(1){c->pc=0xF175u;}
      if(c->pc!=0xF149u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF149u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F149u:
    if(m==1u&&x==1u&&e==0u){ /* BF B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F149u,4u,0x7Eu,0xF14Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E21B4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F14Du:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F14Du,1u,0x18u,0xF14Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F14Eu:
    if(m==1u&&x==1u&&e==0u){ /* 65 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F14Eu,2u,0x7Cu,0xF150u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F150u:
    if(m==1u&&x==1u&&e==0u){ /* 9F B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F150u,4u,0x7Eu,0xF154u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E21B4u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F154u:
    if(m==1u&&x==1u&&e==0u){ /* F0 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F154u,2u,0x1Fu,0xF156u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF175u;}
      if(c->pc!=0xF156u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF156u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F156u:
    if(m==1u&&x==1u&&e==0u){ /* C9 FD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F156u,2u,0xFDu,0xF158u);
      sc_v11_op_compare(r,c->a,0x00FDu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F158u:
    if(m==1u&&x==1u&&e==0u){ /* 90 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F158u,2u,0x1Bu,0xF15Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF175u;}
      if(c->pc!=0xF15Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF15Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F15Au:
    if(m==1u&&x==1u&&e==0u){ /* 84 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F15Au,2u,0x7Fu,0xF15Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x7Fu),(uint8_t)c->y);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F15Cu:
    if(m==1u&&x==1u&&e==0u){ /* 22 2C C2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F15Cu,4u,0x00u,0xF160u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF15Fu))return 0;
      c->pbr=0x00u;c->pc=0xC22Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F160u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F160u,2u,0x30u,0xF162u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F160u,2u,0x30u,0xF162u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F160u,2u,0x30u,0xF162u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F160u,2u,0x30u,0xF162u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F162u:
    if(m==1u&&x==1u&&e==0u){ /* A4 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F162u,2u,0x7Fu,0xF164u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F164u:
    if(m==1u&&x==1u&&e==0u){ /* 80 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F164u,2u,0x0Fu,0xF166u);
      if(1){c->pc=0xF175u;}
      if(c->pc!=0xF166u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF166u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F166u:
    if(m==1u&&x==1u&&e==0u){ /* BF B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F166u,4u,0x7Eu,0xF16Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E21B4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F16Au:
    if(m==1u&&x==1u&&e==0u){ /* C9 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F16Au,2u,0xE0u,0xF16Cu);
      sc_v11_op_compare(r,c->a,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F16Cu:
    if(m==1u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F16Cu,2u,0x03u,0xF16Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF171u;}
      if(c->pc!=0xF16Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF16Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F16Eu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F16Eu,1u,0x18u,0xF16Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F16Fu:
    if(m==1u&&x==1u&&e==0u){ /* 65 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F16Fu,2u,0x7Cu,0xF171u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F171u:
    if(m==1u&&x==1u&&e==0u){ /* 9F B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F171u,4u,0x7Eu,0xF175u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E21B4u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F175u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F175u,1u,0xE8u,0xF176u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F176u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F176u,1u,0xE8u,0xF177u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F177u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F177u,1u,0xE8u,0xF178u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F178u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F178u,1u,0xE8u,0xF179u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F179u:
    if(m==1u&&x==1u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F179u,1u,0x88u,0xF17Au);
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F17Au:
    if(m==1u&&x==1u&&e==0u){ /* D0 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F17Au,2u,0xA2u,0xF17Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF11Eu;}
      if(c->pc!=0xF17Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF17Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F17Cu:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F17Cu,1u,0x60u,0xF17Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F17Du:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F17Du,2u,0x30u,0xF17Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F17Fu:
    if(m==1u&&x==1u&&e==0u){ /* A0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F17Fu,2u,0x13u,0xF181u);
      sc_v11_op_ldy(r,0x0013u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F181u:
    if(m==1u&&x==1u&&e==0u){ /* E0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F181u,2u,0x00u,0xF183u);
      sc_v11_op_compare(r,c->x,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F183u:
    if(m==1u&&x==1u&&e==0u){ /* D0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F183u,2u,0x0Du,0xF185u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF192u;}
      if(c->pc!=0xF185u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF185u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F185u:
    if(m==1u&&x==1u&&e==0u){ /* BF B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F185u,4u,0x7Eu,0xF189u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E21B4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F189u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F189u,1u,0x18u,0xF18Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F18Au:
    if(m==1u&&x==1u&&e==0u){ /* 65 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F18Au,2u,0x7Cu,0xF18Cu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F18Cu:
    if(m==1u&&x==1u&&e==0u){ /* 9F B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F18Cu,4u,0x7Eu,0xF190u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E21B4u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F190u:
    if(m==1u&&x==1u&&e==0u){ /* 80 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F190u,2u,0x2Eu,0xF192u);
      if(1){c->pc=0xF1C0u;}
      if(c->pc!=0xF192u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF192u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F192u:
    if(m==1u&&x==1u&&e==0u){ /* A5 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F192u,2u,0x7Cu,0xF194u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F194u:
    if(m==1u&&x==1u&&e==0u){ /* 30 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F194u,2u,0x0Du,0xF196u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xF1A3u;}
      if(c->pc!=0xF196u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF196u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F196u:
    if(m==1u&&x==1u&&e==0u){ /* BF B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F196u,4u,0x7Eu,0xF19Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E21B4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F19Au:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F19Au,1u,0x18u,0xF19Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F19Bu:
    if(m==1u&&x==1u&&e==0u){ /* 65 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F19Bu,2u,0x7Cu,0xF19Du);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F19Du:
    if(m==1u&&x==1u&&e==0u){ /* C9 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F19Du,2u,0xCFu,0xF19Fu);
      sc_v11_op_compare(r,c->a,0x00CFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F19Fu:
    if(m==1u&&x==1u&&e==0u){ /* 90 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F19Fu,2u,0x0Du,0xF1A1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF1AEu;}
      if(c->pc!=0xF1A1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF1A1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1A1u:
    if(m==1u&&x==1u&&e==0u){ /* B0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1A1u,2u,0x11u,0xF1A3u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF1B4u;}
      if(c->pc!=0xF1A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF1A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1A3u:
    if(m==1u&&x==1u&&e==0u){ /* BF B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1A3u,4u,0x7Eu,0xF1A7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E21B4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1A7u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1A7u,1u,0x18u,0xF1A8u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1A8u:
    if(m==1u&&x==1u&&e==0u){ /* 65 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1A8u,2u,0x7Cu,0xF1AAu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1AAu:
    if(m==1u&&x==1u&&e==0u){ /* C9 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1AAu,2u,0x20u,0xF1ACu);
      sc_v11_op_compare(r,c->a,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1ACu:
    if(m==1u&&x==1u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1ACu,2u,0x06u,0xF1AEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF1B4u;}
      if(c->pc!=0xF1AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF1AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1AEu:
    if(m==1u&&x==1u&&e==0u){ /* 9F B4 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1AEu,4u,0x7Eu,0xF1B2u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E21B4u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1B2u:
    if(m==1u&&x==1u&&e==0u){ /* 80 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1B2u,2u,0x0Cu,0xF1B4u);
      if(1){c->pc=0xF1C0u;}
      if(c->pc!=0xF1B4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF1B4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1B4u:
    if(m==1u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1B4u,1u,0xDAu,0xF1B5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1B5u:
    if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1B5u,1u,0x8Au,0xF1B6u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1B6u:
    if(m==1u&&x==1u&&e==0u){ /* 29 FE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1B6u,2u,0xFEu,0xF1B8u);
      sc_v11_op_and(r,0x00FEu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1B8u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1B8u,1u,0xAAu,0xF1B9u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1B9u:
    if(m==1u&&x==1u&&e==0u){ /* A9 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1B9u,2u,0xE0u,0xF1BBu);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1BBu:
    if(m==1u&&x==1u&&e==0u){ /* 9F B5 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1BBu,4u,0x7Eu,0xF1BFu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E21B5u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1BFu:
    if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1BFu,1u,0xFAu,0xF1C0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1C0u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1C0u,1u,0xE8u,0xF1C1u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1C1u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1C1u,1u,0xE8u,0xF1C2u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1C2u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1C2u,1u,0xE8u,0xF1C3u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1C3u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1C3u,1u,0xE8u,0xF1C4u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1C4u:
    if(m==1u&&x==1u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1C4u,1u,0x88u,0xF1C5u);
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1C5u:
    if(m==1u&&x==1u&&e==0u){ /* D0 BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1C5u,2u,0xBAu,0xF1C7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF181u;}
      if(c->pc!=0xF1C7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF1C7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1C7u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1C7u,1u,0x60u,0xF1C8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1DCu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1DCu,2u,0x30u,0xF1DEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1EDu:
    if(m==0u&&x==1u&&e==0u){ /* 20 F1 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1EDu,3u,0xF1u,0xF1F0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF1EFu))return 0;c->pc=0xF1F1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F1 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1EDu,3u,0xF1u,0xF1F0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF1EFu))return 0;c->pc=0xF1F1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F1 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1EDu,3u,0xF1u,0xF1F0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF1EFu))return 0;c->pc=0xF1F1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1F0u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F0u,1u,0x6Bu,0xF1F1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F0u,1u,0x6Bu,0xF1F1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F0u,1u,0x6Bu,0xF1F1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1F1u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F1u,2u,0x20u,0xF1F3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F1u,2u,0x20u,0xF1F3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F1u,2u,0x20u,0xF1F3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1F3u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F3u,2u,0x20u,0xF1F5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1F5u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F5u,2u,0xB3u,0xF1F7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1F7u:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F7u,2u,0x7Fu,0xF1F9u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1F9u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1F9u,2u,0xB1u,0xF1FBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1FBu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1FBu,2u,0x20u,0xF1FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F1FDu:
    if(m==0u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F1FDu,4u,0x00u,0xF201u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF200u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F201u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F201u,3u,0x00u,0xF204u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F201u,2u,0xFFu,0xF203u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F201u,2u,0xFFu,0xF203u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F204u:
    if(m==0u&&x==1u&&e==0u){ /* C9 56 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F204u,3u,0x00u,0xF207u);
      sc_v11_op_compare(r,c->a,0x0056u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F207u:
    if(m==0u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F207u,2u,0x05u,0xF209u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF20Eu;}
      if(c->pc!=0xF209u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF209u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F209u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2C F2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F209u,3u,0xF2u,0xF20Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF20Bu))return 0;c->pc=0xF22Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2C F2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F209u,3u,0xF2u,0xF20Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF20Bu))return 0;c->pc=0xF22Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F20Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F20Cu,2u,0x13u,0xF20Eu);
      if(1){c->pc=0xF221u;}
      if(c->pc!=0xF20Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF20Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F20Cu,2u,0x13u,0xF20Eu);
      if(1){c->pc=0xF221u;}
      if(c->pc!=0xF20Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF20Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F20Cu,2u,0x13u,0xF20Eu);
      if(1){c->pc=0xF221u;}
      if(c->pc!=0xF20Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF20Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F20Cu,2u,0x13u,0xF20Eu);
      if(1){c->pc=0xF221u;}
      if(c->pc!=0xF20Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF20Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F20Eu:
    if(m==0u&&x==1u&&e==0u){ /* 22 BC 94 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F20Eu,4u,0x00u,0xF212u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF211u))return 0;
      c->pbr=0x00u;c->pc=0x94BCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F212u:
    if(m==0u&&x==0u&&e==0u){ /* 20 80 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F212u,3u,0xF3u,0xF215u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF214u))return 0;c->pc=0xF380u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 80 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F212u,3u,0xF3u,0xF215u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF214u))return 0;c->pc=0xF380u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 80 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F212u,3u,0xF3u,0xF215u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF214u))return 0;c->pc=0xF380u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F215u:
    if(m==0u&&x==1u&&e==0u){ /* 20 B9 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F215u,3u,0xF5u,0xF218u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF217u))return 0;c->pc=0xF5B9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B9 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F215u,3u,0xF5u,0xF218u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF217u))return 0;c->pc=0xF5B9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B9 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F215u,3u,0xF5u,0xF218u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF217u))return 0;c->pc=0xF5B9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F218u:
    if(m==0u&&x==1u&&e==0u){ /* 20 11 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F218u,3u,0xF3u,0xF21Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF21Au))return 0;c->pc=0xF311u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 11 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F218u,3u,0xF3u,0xF21Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF21Au))return 0;c->pc=0xF311u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 11 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F218u,3u,0xF3u,0xF21Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF21Au))return 0;c->pc=0xF311u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F21Bu:
    if(m==0u&&x==1u&&e==0u){ /* 20 44 F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F21Bu,3u,0xF4u,0xF21Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF21Du))return 0;c->pc=0xF444u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 44 F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F21Bu,3u,0xF4u,0xF21Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF21Du))return 0;c->pc=0xF444u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 44 F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F21Bu,3u,0xF4u,0xF21Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF21Du))return 0;c->pc=0xF444u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F21Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 A3 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F21Eu,3u,0xF3u,0xF221u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF220u))return 0;c->pc=0xF3A3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A3 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F21Eu,3u,0xF3u,0xF221u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF220u))return 0;c->pc=0xF3A3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A3 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F21Eu,3u,0xF3u,0xF221u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF220u))return 0;c->pc=0xF3A3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F221u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F221u,2u,0x20u,0xF223u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F221u,2u,0x20u,0xF223u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F221u,2u,0x20u,0xF223u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F223u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F223u,2u,0x20u,0xF225u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F225u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F225u,2u,0xB3u,0xF227u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F227u:
    if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F227u,2u,0x80u,0xF229u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F229u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F229u,2u,0xB1u,0xF22Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F22Bu:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F22Bu,1u,0x60u,0xF22Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F22Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F22Cu,2u,0x20u,0xF22Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F22Cu,2u,0x20u,0xF22Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F22Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 77 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F22Eu,3u,0x00u,0xF231u);
      sc_v11_op_lda(r,0x0077u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 77 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F22Eu,3u,0x00u,0xF231u);
      sc_v11_op_lda(r,0x0077u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F231u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F231u,3u,0x04u,0xF234u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F231u,3u,0x04u,0xF234u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F234u:
    if(m==0u&&x==0u&&e==0u){ /* A9 63 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F234u,3u,0x00u,0xF237u);
      sc_v11_op_lda(r,0x0063u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 63 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F234u,3u,0x00u,0xF237u);
      sc_v11_op_lda(r,0x0063u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F234u,2u,0x63u,0xF236u);
      sc_v11_op_lda(r,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F234u,2u,0x63u,0xF236u);
      sc_v11_op_lda(r,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F237u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F237u,3u,0x04u,0xF23Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F237u,3u,0x04u,0xF23Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F23Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F23Au,3u,0x00u,0xF23Du);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F23Au,3u,0x00u,0xF23Du);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F23Au,2u,0x01u,0xF23Cu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F23Au,2u,0x01u,0xF23Cu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F23Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 AF F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F23Du,3u,0xF8u,0xF240u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF23Fu))return 0;c->pc=0xF8AFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 AF F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F23Du,3u,0xF8u,0xF240u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF23Fu))return 0;c->pc=0xF8AFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F240u:
    if(m==0u&&x==0u&&e==0u){ /* CE 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F240u,3u,0x04u,0xF243u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0451u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CE 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F240u,3u,0x04u,0xF243u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0451u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F240u,3u,0x04u,0xF243u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0451u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F240u,3u,0x04u,0xF243u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0451u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F243u:
    if(m==0u&&x==0u&&e==0u){ /* 10 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F243u,2u,0xF5u,0xF245u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF23Au;}
      if(c->pc!=0xF245u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF245u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 10 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F243u,2u,0xF5u,0xF245u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF23Au;}
      if(c->pc!=0xF245u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF245u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 10 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F243u,2u,0xF5u,0xF245u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF23Au;}
      if(c->pc!=0xF245u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF245u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 10 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F243u,2u,0xF5u,0xF245u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF23Au;}
      if(c->pc!=0xF245u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF245u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F245u:
    if(m==0u&&x==0u&&e==0u){ /* CE 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F245u,3u,0x04u,0xF248u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x044Fu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CE 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F245u,3u,0x04u,0xF248u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x044Fu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F245u,3u,0x04u,0xF248u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x044Fu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F245u,3u,0x04u,0xF248u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x044Fu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F248u:
    if(m==0u&&x==0u&&e==0u){ /* 10 EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F248u,2u,0xEAu,0xF24Au);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF234u;}
      if(c->pc!=0xF24Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF24Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 10 EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F248u,2u,0xEAu,0xF24Au);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF234u;}
      if(c->pc!=0xF24Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF24Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 10 EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F248u,2u,0xEAu,0xF24Au);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF234u;}
      if(c->pc!=0xF24Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF24Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 10 EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F248u,2u,0xEAu,0xF24Au);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xF234u;}
      if(c->pc!=0xF24Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF24Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F24Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F24Au,3u,0x00u,0xF24Du);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F24Au,3u,0x00u,0xF24Du);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F24Au,2u,0x05u,0xF24Cu);
      sc_v11_op_lda(r,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F24Au,2u,0x05u,0xF24Cu);
      sc_v11_op_lda(r,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F24Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F24Du,3u,0x04u,0xF250u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F24Du,3u,0x04u,0xF250u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F250u:
    if(m==0u&&x==0u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F250u,3u,0x00u,0xF253u);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F250u,3u,0x00u,0xF253u);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F253u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F253u,3u,0x04u,0xF256u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F253u,3u,0x04u,0xF256u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0451u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F256u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F256u,3u,0x00u,0xF259u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F256u,3u,0x00u,0xF259u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F259u:
    if(m==0u&&x==0u&&e==0u){ /* 20 AF F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F259u,3u,0xF8u,0xF25Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF25Bu))return 0;c->pc=0xF8AFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 AF F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F259u,3u,0xF8u,0xF25Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF25Bu))return 0;c->pc=0xF8AFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F25Cu:
    if(m==0u&&x==0u&&e==0u){ /* EE 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F25Cu,3u,0x04u,0xF25Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0451u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F25Cu,3u,0x04u,0xF25Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0451u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* EE 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F25Cu,3u,0x04u,0xF25Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0451u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EE 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F25Cu,3u,0x04u,0xF25Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0451u),8u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F25Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F25Fu,3u,0x04u,0xF262u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0451u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F25Fu,3u,0x04u,0xF262u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0451u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F25Fu,3u,0x04u,0xF262u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0451u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 51 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F25Fu,3u,0x04u,0xF262u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0451u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F262u:
    if(m==0u&&x==0u&&e==0u){ /* C9 5F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F262u,3u,0x00u,0xF265u);
      sc_v11_op_compare(r,c->a,0x005Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 5F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F262u,3u,0x00u,0xF265u);
      sc_v11_op_compare(r,c->a,0x005Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 5F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F262u,2u,0x5Fu,0xF264u);
      sc_v11_op_compare(r,c->a,0x005Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 5F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F262u,2u,0x5Fu,0xF264u);
      sc_v11_op_compare(r,c->a,0x005Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F265u:
    if(m==0u&&x==0u&&e==0u){ /* 90 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F265u,2u,0xEFu,0xF267u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF256u;}
      if(c->pc!=0xF267u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF267u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F265u,2u,0xEFu,0xF267u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF256u;}
      if(c->pc!=0xF267u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF267u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F267u:
    if(m==0u&&x==0u&&e==0u){ /* EE 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F267u,3u,0x04u,0xF26Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x044Fu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F267u,3u,0x04u,0xF26Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x044Fu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F26Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F26Au,3u,0x04u,0xF26Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x044Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 4F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F26Au,3u,0x04u,0xF26Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x044Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F26Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 73 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F26Du,3u,0x00u,0xF270u);
      sc_v11_op_compare(r,c->a,0x0073u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 73 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F26Du,3u,0x00u,0xF270u);
      sc_v11_op_compare(r,c->a,0x0073u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F270u:
    if(m==0u&&x==0u&&e==0u){ /* 90 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F270u,2u,0xDEu,0xF272u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF250u;}
      if(c->pc!=0xF272u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF272u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F270u,2u,0xDEu,0xF272u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xF250u;}
      if(c->pc!=0xF272u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF272u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F272u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F272u,3u,0x00u,0xF275u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F272u,3u,0x00u,0xF275u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F275u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F275u,3u,0x04u,0xF278u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F275u,3u,0x04u,0xF278u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F278u:
    if(m==0u&&x==0u&&e==0u){ /* 80 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F278u,2u,0x0Du,0xF27Au);
      if(1){c->pc=0xF287u;}
      if(c->pc!=0xF27Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF27Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F278u,2u,0x0Du,0xF27Au);
      if(1){c->pc=0xF287u;}
      if(c->pc!=0xF27Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF27Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F27Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Au,3u,0x04u,0xF27Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Au,3u,0x04u,0xF27Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Au,3u,0x04u,0xF27Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Au,3u,0x04u,0xF27Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F27Du:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Du,1u,0x1Au,0xF27Eu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Du,1u,0x1Au,0xF27Eu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Du,1u,0x1Au,0xF27Eu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Du,1u,0x1Au,0xF27Eu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F27Eu:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Eu,1u,0x1Au,0xF27Fu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Eu,1u,0x1Au,0xF27Fu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Eu,1u,0x1Au,0xF27Fu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Eu,1u,0x1Au,0xF27Fu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F27Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 73 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Fu,3u,0x00u,0xF282u);
      sc_v11_op_compare(r,c->a,0x0073u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 73 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Fu,3u,0x00u,0xF282u);
      sc_v11_op_compare(r,c->a,0x0073u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 73 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Fu,2u,0x73u,0xF281u);
      sc_v11_op_compare(r,c->a,0x0073u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 73 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F27Fu,2u,0x73u,0xF281u);
      sc_v11_op_compare(r,c->a,0x0073u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F282u:
    if(m==0u&&x==0u&&e==0u){ /* B0 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F282u,2u,0x3Au,0xF284u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF2BEu;}
      if(c->pc!=0xF284u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF284u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F282u,2u,0x3Au,0xF284u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF2BEu;}
      if(c->pc!=0xF284u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF284u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F284u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F284u,3u,0x04u,0xF287u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F284u,3u,0x04u,0xF287u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F287u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F287u,3u,0x04u,0xF28Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F287u,3u,0x04u,0xF28Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F28Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F28Au,3u,0x00u,0xF28Du);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F28Au,3u,0x00u,0xF28Du);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F28Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 5D F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F28Du,3u,0xF8u,0xF290u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF28Fu))return 0;c->pc=0xF85Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 5D F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F28Du,3u,0xF8u,0xF290u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF28Fu))return 0;c->pc=0xF85Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F290u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F290u,3u,0x04u,0xF293u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F290u,3u,0x04u,0xF293u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F290u,3u,0x04u,0xF293u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x043Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F290u,3u,0x04u,0xF293u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x043Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F293u:
    if(m==0u&&x==0u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F293u,3u,0xF7u,0xF296u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF295u))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F293u,3u,0xF7u,0xF296u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF295u))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F293u,3u,0xF7u,0xF296u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF295u))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F293u,3u,0xF7u,0xF296u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF295u))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F296u:
    if(m==0u&&x==0u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F296u,3u,0x00u,0xF299u);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F296u,3u,0x00u,0xF299u);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F296u,2u,0x12u,0xF298u);
      sc_v11_op_lda(r,0x0012u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F296u,2u,0x12u,0xF298u);
      sc_v11_op_lda(r,0x0012u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F299u:
    if(m==0u&&x==0u&&e==0u){ /* 20 5D F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F299u,3u,0xF8u,0xF29Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF29Bu))return 0;c->pc=0xF85Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 5D F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F299u,3u,0xF8u,0xF29Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF29Bu))return 0;c->pc=0xF85Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F29Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F29Cu,2u,0x79u,0xF29Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F29Cu,2u,0x79u,0xF29Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F29Cu,2u,0x79u,0xF29Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F29Cu,2u,0x79u,0xF29Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F29Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 5A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F29Eu,3u,0x00u,0xF2A1u);
      sc_v11_op_lda(r,0x005Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 5A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F29Eu,3u,0x00u,0xF2A1u);
      sc_v11_op_lda(r,0x005Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F29Eu,2u,0x5Au,0xF2A0u);
      sc_v11_op_lda(r,0x005Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F29Eu,2u,0x5Au,0xF2A0u);
      sc_v11_op_lda(r,0x005Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2A1u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2A1u,1u,0x38u,0xF2A2u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2A1u,1u,0x38u,0xF2A2u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2A2u:
    if(m==0u&&x==0u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2A2u,2u,0x79u,0xF2A4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2A2u,2u,0x79u,0xF2A4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2A4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2A4u,3u,0x04u,0xF2A7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2A4u,3u,0x04u,0xF2A7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2A7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2A7u,3u,0xF7u,0xF2AAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2A9u))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2A7u,3u,0xF7u,0xF2AAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2A9u))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2AAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2AAu,3u,0x00u,0xF2ADu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2AAu,3u,0x00u,0xF2ADu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2AAu,2u,0x00u,0xF2ACu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2AAu,2u,0x00u,0xF2ACu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2ADu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2ADu,3u,0x04u,0xF2B0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2ADu,3u,0x04u,0xF2B0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2B0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 94 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2B0u,3u,0xF7u,0xF2B3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2B2u))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 94 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2B0u,3u,0xF7u,0xF2B3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2B2u))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2B3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 5E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2B3u,3u,0x00u,0xF2B6u);
      sc_v11_op_lda(r,0x005Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 5E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2B3u,3u,0x00u,0xF2B6u);
      sc_v11_op_lda(r,0x005Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 5E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2B3u,2u,0x5Eu,0xF2B5u);
      sc_v11_op_lda(r,0x005Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 5E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2B3u,2u,0x5Eu,0xF2B5u);
      sc_v11_op_lda(r,0x005Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2B6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2B6u,3u,0x04u,0xF2B9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2B6u,3u,0x04u,0xF2B9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2B9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 94 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2B9u,3u,0xF7u,0xF2BCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2BBu))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 94 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2B9u,3u,0xF7u,0xF2BCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2BBu))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2BCu:
    if(m==0u&&x==0u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2BCu,2u,0xBCu,0xF2BEu);
      if(1){c->pc=0xF27Au;}
      if(c->pc!=0xF2BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF2BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2BCu,2u,0xBCu,0xF2BEu);
      if(1){c->pc=0xF27Au;}
      if(c->pc!=0xF2BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF2BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2BCu,2u,0xBCu,0xF2BEu);
      if(1){c->pc=0xF27Au;}
      if(c->pc!=0xF2BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF2BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2BCu,2u,0xBCu,0xF2BEu);
      if(1){c->pc=0xF27Au;}
      if(c->pc!=0xF2BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF2BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2BEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2BEu,3u,0x00u,0xF2C1u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2BEu,3u,0x00u,0xF2C1u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2C1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2C1u,3u,0x04u,0xF2C4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0441u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2C1u,3u,0x04u,0xF2C4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0441u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2C4u:
    if(m==0u&&x==0u&&e==0u){ /* 80 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2C4u,2u,0x0Du,0xF2C6u);
      if(1){c->pc=0xF2D3u;}
      if(c->pc!=0xF2C6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF2C6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2C4u,2u,0x0Du,0xF2C6u);
      if(1){c->pc=0xF2D3u;}
      if(c->pc!=0xF2C6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF2C6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2C6u:
    if(m==0u&&x==0u&&e==0u){ /* AD 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2C6u,3u,0x04u,0xF2C9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0441u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2C6u,3u,0x04u,0xF2C9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0441u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2C6u,3u,0x04u,0xF2C9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2C6u,3u,0x04u,0xF2C9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2C9u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2C9u,1u,0x1Au,0xF2CAu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2C9u,1u,0x1Au,0xF2CAu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2C9u,1u,0x1Au,0xF2CAu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2C9u,1u,0x1Au,0xF2CAu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2CAu:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2CAu,1u,0x1Au,0xF2CBu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2CAu,1u,0x1Au,0xF2CBu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2CAu,1u,0x1Au,0xF2CBu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2CAu,1u,0x1Au,0xF2CBu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2CBu:
    if(m==0u&&x==0u&&e==0u){ /* C9 5F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2CBu,3u,0x00u,0xF2CEu);
      sc_v11_op_compare(r,c->a,0x005Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 5F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2CBu,3u,0x00u,0xF2CEu);
      sc_v11_op_compare(r,c->a,0x005Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 5F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2CBu,2u,0x5Fu,0xF2CDu);
      sc_v11_op_compare(r,c->a,0x005Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 5F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2CBu,2u,0x5Fu,0xF2CDu);
      sc_v11_op_compare(r,c->a,0x005Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2CEu:
    if(m==0u&&x==0u&&e==0u){ /* B0 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2CEu,2u,0x3Au,0xF2D0u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF30Au;}
      if(c->pc!=0xF2D0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF2D0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2CEu,2u,0x3Au,0xF2D0u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xF30Au;}
      if(c->pc!=0xF2D0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF2D0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2D0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2D0u,3u,0x04u,0xF2D3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0441u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2D0u,3u,0x04u,0xF2D3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0441u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2D3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2D3u,3u,0x04u,0xF2D6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2D3u,3u,0x04u,0xF2D6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2D6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2D6u,3u,0x00u,0xF2D9u);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2D6u,3u,0x00u,0xF2D9u);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2D9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 5D F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2D9u,3u,0xF8u,0xF2DCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2DBu))return 0;c->pc=0xF85Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 5D F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2D9u,3u,0xF8u,0xF2DCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2DBu))return 0;c->pc=0xF85Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2DCu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2DCu,3u,0x04u,0xF2DFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2DCu,3u,0x04u,0xF2DFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2DCu,3u,0x04u,0xF2DFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x043Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2DCu,3u,0x04u,0xF2DFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x043Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2DFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2DFu,3u,0xF7u,0xF2E2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2E1u))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2DFu,3u,0xF7u,0xF2E2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2E1u))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2DFu,3u,0xF7u,0xF2E2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2E1u))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2DFu,3u,0xF7u,0xF2E2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2E1u))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2E2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2E2u,3u,0x00u,0xF2E5u);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2E2u,3u,0x00u,0xF2E5u);
      sc_v11_op_lda(r,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2E2u,2u,0x12u,0xF2E4u);
      sc_v11_op_lda(r,0x0012u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2E2u,2u,0x12u,0xF2E4u);
      sc_v11_op_lda(r,0x0012u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2E5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 5D F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2E5u,3u,0xF8u,0xF2E8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2E7u))return 0;c->pc=0xF85Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 5D F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2E5u,3u,0xF8u,0xF2E8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2E7u))return 0;c->pc=0xF85Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2E8u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2E8u,2u,0x79u,0xF2EAu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2E8u,2u,0x79u,0xF2EAu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2E8u,2u,0x79u,0xF2EAu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2E8u,2u,0x79u,0xF2EAu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2EAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 6E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2EAu,3u,0x00u,0xF2EDu);
      sc_v11_op_lda(r,0x006Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 6E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2EAu,3u,0x00u,0xF2EDu);
      sc_v11_op_lda(r,0x006Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 6E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2EAu,2u,0x6Eu,0xF2ECu);
      sc_v11_op_lda(r,0x006Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 6E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2EAu,2u,0x6Eu,0xF2ECu);
      sc_v11_op_lda(r,0x006Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2EDu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2EDu,1u,0x38u,0xF2EEu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2EDu,1u,0x38u,0xF2EEu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2EEu:
    if(m==0u&&x==0u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2EEu,2u,0x79u,0xF2F0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2EEu,2u,0x79u,0xF2F0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2F0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2F0u,3u,0x04u,0xF2F3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2F0u,3u,0x04u,0xF2F3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2F3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2F3u,3u,0xF7u,0xF2F6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2F5u))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2F3u,3u,0xF7u,0xF2F6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2F5u))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2F6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2F6u,3u,0x00u,0xF2F9u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2F6u,3u,0x00u,0xF2F9u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2F6u,2u,0x00u,0xF2F8u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2F6u,2u,0x00u,0xF2F8u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2F9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2F9u,3u,0x04u,0xF2FCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2F9u,3u,0x04u,0xF2FCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2FCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 94 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2FCu,3u,0xF7u,0xF2FFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2FEu))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 94 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2FCu,3u,0xF7u,0xF2FFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF2FEu))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F2FFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 72 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2FFu,3u,0x00u,0xF302u);
      sc_v11_op_lda(r,0x0072u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 72 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2FFu,3u,0x00u,0xF302u);
      sc_v11_op_lda(r,0x0072u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2FFu,2u,0x72u,0xF301u);
      sc_v11_op_lda(r,0x0072u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F2FFu,2u,0x72u,0xF301u);
      sc_v11_op_lda(r,0x0072u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F302u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F302u,3u,0x04u,0xF305u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F302u,3u,0x04u,0xF305u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F305u:
    if(m==0u&&x==0u&&e==0u){ /* 20 94 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F305u,3u,0xF7u,0xF308u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF307u))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 94 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F305u,3u,0xF7u,0xF308u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF307u))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F308u:
    if(m==0u&&x==0u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F308u,2u,0xBCu,0xF30Au);
      if(1){c->pc=0xF2C6u;}
      if(c->pc!=0xF30Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF30Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F308u,2u,0xBCu,0xF30Au);
      if(1){c->pc=0xF2C6u;}
      if(c->pc!=0xF30Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF30Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F308u,2u,0xBCu,0xF30Au);
      if(1){c->pc=0xF2C6u;}
      if(c->pc!=0xF30Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF30Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F308u,2u,0xBCu,0xF30Au);
      if(1){c->pc=0xF2C6u;}
      if(c->pc!=0xF30Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF30Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F30Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 44 F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F30Au,3u,0xF4u,0xF30Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF30Cu))return 0;c->pc=0xF444u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 44 F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F30Au,3u,0xF4u,0xF30Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF30Cu))return 0;c->pc=0xF444u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F30Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 A3 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F30Du,3u,0xF3u,0xF310u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF30Fu))return 0;c->pc=0xF3A3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A3 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F30Du,3u,0xF3u,0xF310u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF30Fu))return 0;c->pc=0xF3A3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A3 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F30Du,3u,0xF3u,0xF310u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF30Fu))return 0;c->pc=0xF3A3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A3 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F30Du,3u,0xF3u,0xF310u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF30Fu))return 0;c->pc=0xF3A3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F310u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F310u,1u,0x60u,0xF311u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F310u,1u,0x60u,0xF311u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F310u,1u,0x60u,0xF311u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F310u,1u,0x60u,0xF311u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F311u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F311u,2u,0x30u,0xF313u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F311u,2u,0x30u,0xF313u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F311u,2u,0x30u,0xF313u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F319u:
    if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F319u,1u,0x1Au,0xF31Au);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F319u,1u,0x1Au,0xF31Au);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F319u,1u,0x1Au,0xF31Au);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F31Au:
    if(m==0u&&x==1u&&e==0u){ /* 8D 45 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F31Au,3u,0x04u,0xF31Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0445u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 45 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F31Au,3u,0x04u,0xF31Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0445u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 45 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F31Au,3u,0x04u,0xF31Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0445u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F31Du:
    if(m==0u&&x==1u&&e==0u){ /* A9 63 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F31Du,3u,0x00u,0xF320u);
      sc_v11_op_lda(r,0x0063u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F31Du,2u,0x63u,0xF31Fu);
      sc_v11_op_lda(r,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F31Du,2u,0x63u,0xF31Fu);
      sc_v11_op_lda(r,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F320u:
    if(m==0u&&x==1u&&e==0u){ /* 20 77 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F320u,3u,0xF8u,0xF323u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF322u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F323u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F323u,1u,0x18u,0xF324u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F323u,1u,0x18u,0xF324u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F323u,1u,0x18u,0xF324u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F324u:
    if(m==0u&&x==1u&&e==0u){ /* 69 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F324u,3u,0x00u,0xF327u);
      sc_v11_op_adc(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F324u,2u,0x0Au,0xF326u);
      sc_v11_op_adc(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F324u,2u,0x0Au,0xF326u);
      sc_v11_op_adc(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F327u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F327u,3u,0x04u,0xF32Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F32Au:
    if(m==0u&&x==1u&&e==0u){ /* A9 50 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F32Au,3u,0x00u,0xF32Du);
      sc_v11_op_lda(r,0x0050u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F32Du:
    if(m==0u&&x==1u&&e==0u){ /* 20 77 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F32Du,3u,0xF8u,0xF330u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF32Fu))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F330u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F330u,1u,0x18u,0xF331u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F330u,1u,0x18u,0xF331u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F330u,1u,0x18u,0xF331u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F331u:
    if(m==0u&&x==1u&&e==0u){ /* 69 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F331u,3u,0x00u,0xF334u);
      sc_v11_op_adc(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F331u,2u,0x0Au,0xF333u);
      sc_v11_op_adc(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F331u,2u,0x0Au,0xF333u);
      sc_v11_op_adc(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F334u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F334u,3u,0x04u,0xF337u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0441u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F337u:
    if(m==0u&&x==1u&&e==0u){ /* A9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F337u,3u,0x00u,0xF33Au);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F33Au:
    if(m==0u&&x==1u&&e==0u){ /* 20 77 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Au,3u,0xF8u,0xF33Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF33Cu))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F33Du:
    if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Du,1u,0x1Au,0xF33Eu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Du,1u,0x1Au,0xF33Eu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Du,1u,0x1Au,0xF33Eu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F33Eu:
    if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Eu,1u,0x1Au,0xF33Fu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Eu,1u,0x1Au,0xF33Fu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Eu,1u,0x1Au,0xF33Fu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F33Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Fu,3u,0x04u,0xF342u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0443u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Fu,3u,0x04u,0xF342u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0443u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F33Fu,3u,0x04u,0xF342u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0443u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F342u:
    if(m==0u&&x==1u&&e==0u){ /* A9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F342u,3u,0x00u,0xF345u);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F342u,2u,0x0Cu,0xF344u);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F342u,2u,0x0Cu,0xF344u);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F345u:
    if(m==0u&&x==1u&&e==0u){ /* 20 77 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F345u,3u,0xF8u,0xF348u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF347u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F348u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F348u,1u,0x18u,0xF349u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F348u,1u,0x18u,0xF349u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F348u,1u,0x18u,0xF349u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F349u:
    if(m==0u&&x==1u&&e==0u){ /* 6D 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F349u,3u,0x04u,0xF34Cu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6D 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F349u,3u,0x04u,0xF34Cu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6D 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F349u,3u,0x04u,0xF34Cu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F34Cu:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F34Cu,1u,0x38u,0xF34Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F34Cu,1u,0x38u,0xF34Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F34Cu,1u,0x38u,0xF34Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F34Du:
    if(m==0u&&x==1u&&e==0u){ /* E9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F34Du,3u,0x00u,0xF350u);
      sc_v11_op_sbc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F34Du,2u,0x06u,0xF34Fu);
      sc_v11_op_sbc(r,0x0006u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F34Du,2u,0x06u,0xF34Fu);
      sc_v11_op_sbc(r,0x0006u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F350u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F350u,3u,0x04u,0xF353u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F353u:
    if(m==0u&&x==1u&&e==0u){ /* A9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F353u,3u,0x00u,0xF356u);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F356u:
    if(m==0u&&x==1u&&e==0u){ /* 20 77 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F356u,3u,0xF8u,0xF359u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF358u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F359u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F359u,1u,0x18u,0xF35Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F359u,1u,0x18u,0xF35Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F359u,1u,0x18u,0xF35Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F35Au:
    if(m==0u&&x==1u&&e==0u){ /* 6D 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F35Au,3u,0x04u,0xF35Du);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0441u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6D 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F35Au,3u,0x04u,0xF35Du);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6D 41 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F35Au,3u,0x04u,0xF35Du);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0441u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F35Du:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F35Du,1u,0x38u,0xF35Eu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F35Du,1u,0x38u,0xF35Eu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F35Du,1u,0x38u,0xF35Eu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F35Eu:
    if(m==0u&&x==1u&&e==0u){ /* E9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F35Eu,3u,0x00u,0xF361u);
      sc_v11_op_sbc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F35Eu,2u,0x06u,0xF360u);
      sc_v11_op_sbc(r,0x0006u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F35Eu,2u,0x06u,0xF360u);
      sc_v11_op_sbc(r,0x0006u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F361u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F361u,3u,0x04u,0xF364u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F364u:
    if(m==0u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F364u,4u,0x00u,0xF368u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF367u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F368u:
    if(m==0u&&x==1u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F368u,3u,0x00u,0xF36Bu);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F368u,2u,0x03u,0xF36Au);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F368u,2u,0x03u,0xF36Au);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F36Bu:
    if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F36Bu,2u,0x05u,0xF36Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xF372u;}
      if(c->pc!=0xF36Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF36Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F36Du:
    if(m==0u&&x==1u&&e==0u){ /* 20 1D F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F36Du,3u,0xF7u,0xF370u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF36Fu))return 0;c->pc=0xF71Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F370u:
    if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F370u,2u,0x03u,0xF372u);
      if(1){c->pc=0xF375u;}
      if(c->pc!=0xF372u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF372u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F370u,2u,0x03u,0xF372u);
      if(1){c->pc=0xF375u;}
      if(c->pc!=0xF372u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF372u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F370u,2u,0x03u,0xF372u);
      if(1){c->pc=0xF375u;}
      if(c->pc!=0xF372u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF372u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F372u:
    if(m==0u&&x==1u&&e==0u){ /* 20 94 F7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F372u,3u,0xF7u,0xF375u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF374u))return 0;c->pc=0xF794u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F375u:
    if(m==0u&&x==1u&&e==0u){ /* CE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F375u,3u,0x04u,0xF378u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F375u,3u,0x04u,0xF378u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F375u,3u,0x04u,0xF378u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0443u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F378u:
    if(m==0u&&x==1u&&e==0u){ /* D0 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F378u,2u,0xC8u,0xF37Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF342u;}
      if(c->pc!=0xF37Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF37Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F378u,2u,0xC8u,0xF37Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF342u;}
      if(c->pc!=0xF37Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF37Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F378u,2u,0xC8u,0xF37Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF342u;}
      if(c->pc!=0xF37Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF37Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F37Au:
    if(m==0u&&x==1u&&e==0u){ /* CE 45 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F37Au,3u,0x04u,0xF37Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0445u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 45 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F37Au,3u,0x04u,0xF37Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0445u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 45 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F37Au,3u,0x04u,0xF37Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0445u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F37Du:
    if(m==0u&&x==1u&&e==0u){ /* D0 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F37Du,2u,0x9Eu,0xF37Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF31Du;}
      if(c->pc!=0xF37Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF37Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F37Du,2u,0x9Eu,0xF37Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF31Du;}
      if(c->pc!=0xF37Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF37Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F37Du,2u,0x9Eu,0xF37Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF31Du;}
      if(c->pc!=0xF37Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF37Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F37Fu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F37Fu,1u,0x60u,0xF380u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F37Fu,1u,0x60u,0xF380u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F37Fu,1u,0x60u,0xF380u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F380u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F380u,2u,0x20u,0xF382u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F380u,2u,0x20u,0xF382u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F380u,2u,0x20u,0xF382u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F382u:
    if(m==0u&&x==1u&&e==0u){ /* A9 28 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F382u,3u,0x00u,0xF385u);
      sc_v11_op_lda(r,0x0028u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F385u:
    if(m==0u&&x==1u&&e==0u){ /* 20 77 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F385u,3u,0xF8u,0xF388u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF387u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F388u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F388u,1u,0x18u,0xF389u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F388u,1u,0x18u,0xF389u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F388u,1u,0x18u,0xF389u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F389u:
    if(m==0u&&x==1u&&e==0u){ /* 69 28 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F389u,3u,0x00u,0xF38Cu);
      sc_v11_op_adc(r,0x0028u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F389u,2u,0x28u,0xF38Bu);
      sc_v11_op_adc(r,0x0028u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F389u,2u,0x28u,0xF38Bu);
      sc_v11_op_adc(r,0x0028u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F38Cu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 57 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F38Cu,3u,0x04u,0xF38Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0457u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F38Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F38Fu,3u,0x04u,0xF392u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F392u:
    if(m==0u&&x==1u&&e==0u){ /* A9 21 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F392u,3u,0x00u,0xF395u);
      sc_v11_op_lda(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F395u:
    if(m==0u&&x==1u&&e==0u){ /* 20 77 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F395u,3u,0xF8u,0xF398u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF397u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F398u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F398u,1u,0x18u,0xF399u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F398u,1u,0x18u,0xF399u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F398u,1u,0x18u,0xF399u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F399u:
    if(m==0u&&x==1u&&e==0u){ /* 69 21 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F399u,3u,0x00u,0xF39Cu);
      sc_v11_op_adc(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F399u,2u,0x21u,0xF39Bu);
      sc_v11_op_adc(r,0x0021u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F399u,2u,0x21u,0xF39Bu);
      sc_v11_op_adc(r,0x0021u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F39Cu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 59 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F39Cu,3u,0x04u,0xF39Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0459u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F39Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F39Fu,3u,0x04u,0xF3A2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3A2u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3A2u,1u,0x60u,0xF3A3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3A3u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3A3u,2u,0x30u,0xF3A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3A3u,2u,0x30u,0xF3A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3A3u,2u,0x30u,0xF3A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3ABu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3ABu,1u,0x18u,0xF3ACu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3ABu,1u,0x18u,0xF3ACu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3ABu,1u,0x18u,0xF3ACu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3ACu:
    if(m==0u&&x==1u&&e==0u){ /* 69 32 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3ACu,3u,0x00u,0xF3AFu);
      sc_v11_op_adc(r,0x0032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3ACu,2u,0x32u,0xF3AEu);
      sc_v11_op_adc(r,0x0032u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3ACu,2u,0x32u,0xF3AEu);
      sc_v11_op_adc(r,0x0032u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3AFu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3AFu,3u,0x04u,0xF3B2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3B2u:
    if(m==0u&&x==1u&&e==0u){ /* A9 77 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3B2u,3u,0x00u,0xF3B5u);
      sc_v11_op_lda(r,0x0077u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 77 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3B2u,2u,0x77u,0xF3B4u);
      sc_v11_op_lda(r,0x0077u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 77 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3B2u,2u,0x77u,0xF3B4u);
      sc_v11_op_lda(r,0x0077u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3B5u:
    if(m==0u&&x==1u&&e==0u){ /* 20 77 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3B5u,3u,0xF8u,0xF3B8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3B7u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3B8u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 4B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3B8u,3u,0x04u,0xF3BBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 4B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3B8u,3u,0x04u,0xF3BBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 4B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3B8u,3u,0x04u,0xF3BBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3BBu:
    if(m==0u&&x==1u&&e==0u){ /* A9 63 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3BBu,3u,0x00u,0xF3BEu);
      sc_v11_op_lda(r,0x0063u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3BBu,2u,0x63u,0xF3BDu);
      sc_v11_op_lda(r,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3BBu,2u,0x63u,0xF3BDu);
      sc_v11_op_lda(r,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3BEu:
    if(m==0u&&x==1u&&e==0u){ /* 20 77 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3BEu,3u,0xF8u,0xF3C1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3C0u))return 0;c->pc=0xF877u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3C1u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 4D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3C1u,3u,0x04u,0xF3C4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x044Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 4D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3C1u,3u,0x04u,0xF3C4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 4D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3C1u,3u,0x04u,0xF3C4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x044Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3C4u:
    if(m==0u&&x==1u&&e==0u){ /* 20 D3 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3C4u,3u,0xF3u,0xF3C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3C6u))return 0;c->pc=0xF3D3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 D3 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3C4u,3u,0xF3u,0xF3C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3C6u))return 0;c->pc=0xF3D3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 D3 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3C4u,3u,0xF3u,0xF3C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3C6u))return 0;c->pc=0xF3D3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3C7u:
    if(m==0u&&x==1u&&e==0u){ /* CE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3C7u,3u,0x04u,0xF3CAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x043Fu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3C7u,3u,0x04u,0xF3CAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x043Fu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 3F 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3C7u,3u,0x04u,0xF3CAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x043Fu),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3CAu:
    if(m==0u&&x==1u&&e==0u){ /* D0 E6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3CAu,2u,0xE6u,0xF3CCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF3B2u;}
      if(c->pc!=0xF3CCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF3CCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 E6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3CAu,2u,0xE6u,0xF3CCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF3B2u;}
      if(c->pc!=0xF3CCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF3CCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 E6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3CAu,2u,0xE6u,0xF3CCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xF3B2u;}
      if(c->pc!=0xF3CCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xF3CCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3CCu:
    if(m==0u&&x==1u&&e==0u){ /* 20 02 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3CCu,3u,0xF5u,0xF3CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3CEu))return 0;c->pc=0xF502u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 02 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3CCu,3u,0xF5u,0xF3CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3CEu))return 0;c->pc=0xF502u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 02 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3CCu,3u,0xF5u,0xF3CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3CEu))return 0;c->pc=0xF502u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3CFu:
    if(m==0u&&x==1u&&e==0u){ /* 20 02 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3CFu,3u,0xF5u,0xF3D2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3D1u))return 0;c->pc=0xF502u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 02 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3CFu,3u,0xF5u,0xF3D2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3D1u))return 0;c->pc=0xF502u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 02 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3CFu,3u,0xF5u,0xF3D2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3D1u))return 0;c->pc=0xF502u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3D2u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3D2u,1u,0x60u,0xF3D3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3D2u,1u,0x60u,0xF3D3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3D2u,1u,0x60u,0xF3D3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3D3u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3D3u,2u,0x30u,0xF3D5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3D3u,2u,0x30u,0xF3D5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3D3u,2u,0x30u,0xF3D5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3DEu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3DEu,1u,0x18u,0xF3DFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3DEu,1u,0x18u,0xF3DFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3DEu,1u,0x18u,0xF3DFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3DFu:
    if(m==0u&&x==1u&&e==0u){ /* 69 32 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3DFu,3u,0x00u,0xF3E2u);
      sc_v11_op_adc(r,0x0032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3DFu,2u,0x32u,0xF3E1u);
      sc_v11_op_adc(r,0x0032u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3DFu,2u,0x32u,0xF3E1u);
      sc_v11_op_adc(r,0x0032u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3E2u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 43 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3E2u,3u,0x04u,0xF3E5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0443u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3E5u:
    if(m==0u&&x==1u&&e==0u){ /* AD 4B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3E5u,3u,0x04u,0xF3E8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x044Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3E8u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3E8u,3u,0x04u,0xF3EBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3EBu:
    if(m==0u&&x==1u&&e==0u){ /* AD 4D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3EBu,3u,0x04u,0xF3EEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x044Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3EEu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3D 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3EEu,3u,0x04u,0xF3F1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x043Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3F1u:
    if(m==0u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3F1u,4u,0x00u,0xF3F5u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF3F4u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3F1u,4u,0x00u,0xF3F5u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF3F4u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3F1u,4u,0x00u,0xF3F5u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xF3F4u))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3F5u:
    if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3F5u,3u,0x00u,0xF3F8u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3F5u,2u,0x07u,0xF3F7u);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3F5u,2u,0x07u,0xF3F7u);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3F8u:
    if(m==0u&&x==1u&&e==0u){ /* 20 AE F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3F8u,3u,0xF6u,0xF3FBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xF3FAu))return 0;c->pc=0xF6AEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3FBu:
    if(m==0u&&x==1u&&e==0u){ /* AD 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3FBu,3u,0x04u,0xF3FEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x043Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3FBu,3u,0x04u,0xF3FEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 3B 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3FBu,3u,0x04u,0xF3FEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x043Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01F3FEu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 53 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3FEu,3u,0x04u,0xF401u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0453u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 53 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3FEu,3u,0x04u,0xF401u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0453u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 53 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01F3FEu,3u,0x04u,0xF401u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0453u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
