/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000E8(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03A02Fu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A02Fu,2u,0x20u,0xA031u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A02Fu,2u,0x20u,0xA031u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A031u:
    if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A031u,1u,0x0Bu,0xA032u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A032u:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A032u,1u,0x48u,0xA033u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A033u:
    if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A033u,1u,0x7Bu,0xA034u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A034u:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A034u,1u,0x38u,0xA035u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A035u:
    if(m==0u&&x==1u&&e==0u){ /* E9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A035u,3u,0x00u,0xA038u);
      sc_v11_op_sbc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A038u:
    if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A038u,1u,0x5Bu,0xA039u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A039u:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A039u,1u,0x68u,0xA03Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A03Au:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A03Au,2u,0x30u,0xA03Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A04Au:
    if(m==0u&&x==0u&&e==0u){ /* 64 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A04Au,2u,0x05u,0xA04Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x05u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    if(m==0u&&x==1u&&e==0u){ /* 64 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A04Au,2u,0x05u,0xA04Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x05u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }

    else if(m==1u&&x==1u&&e==0u){ /* 64 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A04Au,2u,0x05u,0xA04Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x05u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A04Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A04Cu,3u,0xA4u,0xA04Fu);
      sc_v11_op_lda(r,0xA400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    if(m==0u&&x==1u&&e==0u){ /* A9 00 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A04Cu,3u,0xA4u,0xA04Fu);
      sc_v11_op_lda(r,0xA400u,16u);
      SC_STATIC_CONTEXT_END();
    }

    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A04Cu,2u,0x00u,0xA04Eu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A04Eu:

    if(m==1u&&x==1u&&e==0u){ /* A4 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A04Eu,2u,0x00u,0xA050u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A050u:

    if(m==1u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A050u,2u,0x05u,0xA052u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA057u;}
      if(c->pc!=0xA052u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA052u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A052u:

    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A052u,1u,0x18u,0xA053u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A053u:

    if(m==1u&&x==1u&&e==0u){ /* 7F FF B5 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A053u,4u,0x7Fu,0xA057u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FB5FFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A057u:

    if(m==1u&&x==1u&&e==0u){ /* C0 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A057u,2u,0x3Bu,0xA059u);
      sc_v11_op_compare(r,c->y,0x003Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A063u:
    if(m==1u&&x==0u&&e==0u){ /* E6 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A063u,2u,0x05u,0xA065u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x05u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A096u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FA 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A096u,3u,0x00u,0xA099u);
      sc_v11_op_lda(r,0x00FAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0B5u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B5u,2u,0x20u,0xA0B7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B5u,2u,0x20u,0xA0B7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B5u,2u,0x20u,0xA0B7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0B7u:
    if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B7u,1u,0x0Bu,0xA0B8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0B8u:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B8u,1u,0x48u,0xA0B9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0B9u:
    if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B9u,1u,0x7Bu,0xA0BAu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0BAu:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0BAu,1u,0x38u,0xA0BBu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0BBu:
    if(m==0u&&x==1u&&e==0u){ /* E9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0BBu,3u,0x00u,0xA0BEu);
      sc_v11_op_sbc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0BEu:
    if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0BEu,1u,0x5Bu,0xA0BFu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0BFu:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0BFu,1u,0x68u,0xA0C0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0C0u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0C0u,2u,0x30u,0xA0C2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0D0u:
    if(m==0u&&x==0u&&e==0u){ /* 64 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D0u,2u,0x05u,0xA0D2u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x05u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D0u,2u,0x05u,0xA0D2u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x05u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D0u,2u,0x05u,0xA0D2u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x05u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0D2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D2u,3u,0xA4u,0xA0D5u);
      sc_v11_op_lda(r,0xA400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D2u,3u,0xA4u,0xA0D5u);
      sc_v11_op_lda(r,0xA400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D2u,2u,0x00u,0xA0D4u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0D4u:
    if(m==1u&&x==1u&&e==0u){ /* A4 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D4u,2u,0x00u,0xA0D6u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0D6u:
    if(m==1u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D6u,2u,0x05u,0xA0D8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA0DDu;}
      if(c->pc!=0xA0D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA0D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0D8u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D8u,1u,0x18u,0xA0D9u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0D9u:
    if(m==1u&&x==1u&&e==0u){ /* 7F B7 C1 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D9u,4u,0x7Fu,0xA0DDu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FC1B7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0DDu:
    if(m==1u&&x==1u&&e==0u){ /* C0 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0DDu,2u,0x3Bu,0xA0DFu);
      sc_v11_op_compare(r,c->y,0x003Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0E9u:
    if(m==1u&&x==0u&&e==0u){ /* E6 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0E9u,2u,0x05u,0xA0EBu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x05u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A11Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FA 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A11Cu,3u,0x00u,0xA11Fu);
      sc_v11_op_lda(r,0x00FAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A14Du:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A14Du,2u,0x20u,0xA14Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A14Du,2u,0x20u,0xA14Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A14Fu:
    if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A14Fu,1u,0x0Bu,0xA150u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A150u:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A150u,1u,0x48u,0xA151u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A151u:
    if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A151u,1u,0x7Bu,0xA152u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A152u:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A152u,1u,0x38u,0xA153u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A153u:
    if(m==0u&&x==1u&&e==0u){ /* E9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A153u,3u,0x00u,0xA156u);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A156u:
    if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A156u,1u,0x5Bu,0xA157u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A157u:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A157u,1u,0x68u,0xA158u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A158u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A158u,2u,0x20u,0xA15Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A15Au:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A15Au,2u,0x10u,0xA15Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A16Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A16Cu,2u,0x20u,0xA16Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A16Cu,2u,0x20u,0xA16Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A16Cu,2u,0x20u,0xA16Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A16Eu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A16Eu,1u,0x0Au,0xA16Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A16Fu:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A16Fu,1u,0xAAu,0xA170u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A170u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A170u,3u,0x00u,0xA173u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A173u:
    if(m==0u&&x==1u&&e==0u){ /* A4 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A173u,2u,0x00u,0xA175u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A175u:
    if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A175u,2u,0x05u,0xA177u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA17Cu;}
      if(c->pc!=0xA177u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA177u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A177u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A177u,1u,0x18u,0xA178u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A178u:
    if(m==0u&&x==1u&&e==0u){ /* 7F 6C B1 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A178u,4u,0x7Fu,0xA17Cu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB16Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A17Cu:
    if(m==0u&&x==1u&&e==0u){ /* C0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A17Cu,2u,0x0Eu,0xA17Eu);
      sc_v11_op_compare(r,c->y,0x000Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1CCu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1CCu,2u,0x20u,0xA1CEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1CCu,2u,0x20u,0xA1CEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1CCu,2u,0x20u,0xA1CEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1CEu:
    if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1CEu,1u,0x0Bu,0xA1CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1CFu:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1CFu,1u,0x48u,0xA1D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D0u:
    if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D0u,1u,0x7Bu,0xA1D1u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D1u:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D1u,1u,0x38u,0xA1D2u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D2u:
    if(m==0u&&x==1u&&e==0u){ /* E9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D2u,3u,0x00u,0xA1D5u);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D5u:
    if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D5u,1u,0x5Bu,0xA1D6u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D6u:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D6u,1u,0x68u,0xA1D7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D7u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D7u,2u,0x20u,0xA1D9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D9u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D9u,2u,0x10u,0xA1DBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1EBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1EBu,2u,0x20u,0xA1EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1EBu,2u,0x20u,0xA1EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1EBu,2u,0x20u,0xA1EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1EDu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1EDu,1u,0x0Au,0xA1EEu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1EEu:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1EEu,1u,0xAAu,0xA1EFu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1EFu:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1EFu,3u,0x00u,0xA1F2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1F2u:
    if(m==0u&&x==1u&&e==0u){ /* A4 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1F2u,2u,0x00u,0xA1F4u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1F4u:
    if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1F4u,2u,0x05u,0xA1F6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA1FBu;}
      if(c->pc!=0xA1F6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA1F6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1F6u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1F6u,1u,0x18u,0xA1F7u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1F7u:
    if(m==0u&&x==1u&&e==0u){ /* 7F F2 B2 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1F7u,4u,0x7Fu,0xA1FBu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB2F2u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1FBu:
    if(m==0u&&x==1u&&e==0u){ /* C0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1FBu,2u,0x0Eu,0xA1FDu);
      sc_v11_op_compare(r,c->y,0x000Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A25Au:
    if(m==1u&&x==1u&&e==0u){ /* 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A25Au,2u,0x00u,0xA25Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A25Cu:
    if(m==1u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A25Cu,2u,0x02u,0xA25Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A25Eu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A25Eu,1u,0x0Au,0xA25Fu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A25Fu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A25Fu,1u,0x0Au,0xA260u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A260u:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A260u,1u,0xEBu,0xA261u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A261u:
    if(m==1u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A261u,2u,0x00u,0xA263u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A263u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A263u,1u,0x0Au,0xA264u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A264u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A264u,1u,0x0Au,0xA265u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A265u:
    if(m==1u&&x==1u&&e==0u){ /* 20 61 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A265u,3u,0x9Eu,0xA268u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA267u))return 0;c->pc=0x9E61u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A268u:
    if(m==0u&&x==0u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A268u,2u,0x06u,0xA26Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A268u,2u,0x06u,0xA26Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A268u,2u,0x06u,0xA26Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A26Au:
    if(m==0u&&x==0u&&e==0u){ /* 64 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Au,2u,0x07u,0xA26Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x07u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Au,2u,0x07u,0xA26Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x07u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Au,2u,0x07u,0xA26Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x07u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A26Cu:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Cu,2u,0x02u,0xA26Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Cu,2u,0x02u,0xA26Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Cu,2u,0x02u,0xA26Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A26Eu:
    if(m==0u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Eu,1u,0xEBu,0xA26Fu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Eu,1u,0xEBu,0xA26Fu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Eu,1u,0xEBu,0xA26Fu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A26Fu:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Fu,2u,0x00u,0xA271u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Fu,2u,0x00u,0xA271u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Fu,2u,0x00u,0xA271u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A271u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D7 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A271u,3u,0xA2u,0xA274u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA273u))return 0;c->pc=0xA2D7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 D7 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A271u,3u,0xA2u,0xA274u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA273u))return 0;c->pc=0xA2D7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 D7 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A271u,3u,0xA2u,0xA274u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA273u))return 0;c->pc=0xA2D7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A274u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A274u,2u,0x20u,0xA276u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A274u,2u,0x20u,0xA276u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A274u,2u,0x20u,0xA276u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A276u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A276u,1u,0x0Au,0xA277u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A277u:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A277u,1u,0xAAu,0xA278u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A278u:
    if(m==0u&&x==1u&&e==0u){ /* 06 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A278u,2u,0x06u,0xA27Au);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x06u),16u,0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A27Au:
    if(m==0u&&x==1u&&e==0u){ /* 06 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A27Au,2u,0x06u,0xA27Cu);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x06u),16u,0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A27Cu:
    if(m==0u&&x==1u&&e==0u){ /* A9 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A27Cu,3u,0x00u,0xA27Fu);
      sc_v11_op_lda(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A27Fu:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A27Fu,1u,0x38u,0xA280u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A280u:
    if(m==0u&&x==1u&&e==0u){ /* E5 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A280u,2u,0x06u,0xA282u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A282u:
    if(m==0u&&x==1u&&e==0u){ /* 9F 7A B4 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A282u,4u,0x7Fu,0xA286u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7FB47Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A286u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A286u,2u,0x20u,0xA288u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A288u:
    if(m==1u&&x==1u&&e==0u){ /* E6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A288u,2u,0x00u,0xA28Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A28Au:
    if(m==1u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A28Au,2u,0x00u,0xA28Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A28Cu:
    if(m==1u&&x==1u&&e==0u){ /* C9 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A28Cu,2u,0x0Fu,0xA28Eu);
      sc_v11_op_compare(r,c->a,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A28Eu:
    if(m==1u&&x==1u&&e==0u){ /* D0 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A28Eu,2u,0xCCu,0xA290u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA25Cu;}
      if(c->pc!=0xA290u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA290u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A290u:
    if(m==1u&&x==1u&&e==0u){ /* E6 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A290u,2u,0x02u,0xA292u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A292u:
    if(m==1u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A292u,2u,0x02u,0xA294u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A294u:
    if(m==1u&&x==1u&&e==0u){ /* C9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A294u,2u,0x0Du,0xA296u);
      sc_v11_op_compare(r,c->a,0x000Du,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A296u:
    if(m==1u&&x==1u&&e==0u){ /* D0 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A296u,2u,0xC2u,0xA298u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA25Au;}
      if(c->pc!=0xA298u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA298u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A298u:
    if(m==1u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A298u,1u,0x2Bu,0xA299u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A299u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A299u,1u,0x60u,0xA29Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A29Au:

    if(m==1u&&x==1u&&e==0u){ /* 8D 3F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A29Au,3u,0x0Bu,0xA29Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B3Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A29Du:

    if(m==1u&&x==1u&&e==0u){ /* 9C 40 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A29Du,3u,0x0Bu,0xA2A0u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B40u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2A0u:

    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2A0u,2u,0x00u,0xA2A2u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2A2u:

    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2A2u,1u,0xEBu,0xA2A3u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2A3u:

    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2A3u,2u,0x20u,0xA2A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2A5u:

    if(m==0u&&x==1u&&e==0u){ /* 8D 3D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2A5u,3u,0x0Bu,0xA2A8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B3Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2A8u:

    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2A8u,1u,0x0Au,0xA2A9u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2A9u:

    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2A9u,1u,0x0Au,0xA2AAu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2AAu:

    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2AAu,1u,0x0Au,0xA2ABu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2ABu:

    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2ABu,1u,0x0Au,0xA2ACu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2ACu:

    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2ACu,1u,0x38u,0xA2ADu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2ADu:

    if(m==0u&&x==1u&&e==0u){ /* ED 3D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2ADu,3u,0x0Bu,0xA2B0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Du)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B0u:

    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B0u,1u,0x0Au,0xA2B1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B1u:

    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B1u,1u,0x0Au,0xA2B2u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B2u:

    if(m==0u&&x==1u&&e==0u){ /* 6D 3F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B2u,3u,0x0Bu,0xA2B5u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B5u:

    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B5u,1u,0xAAu,0xA2B6u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B6u:

    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B6u,2u,0x20u,0xA2B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B8u:

    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B8u,1u,0x60u,0xA2B9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B9u,3u,0x0Bu,0xA2BCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B3Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B9u,3u,0x0Bu,0xA2BCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B3Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 3F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B9u,3u,0x0Bu,0xA2BCu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B3Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2BCu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 40 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2BCu,3u,0x0Bu,0xA2BFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B40u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 40 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2BCu,3u,0x0Bu,0xA2BFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B40u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 40 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2BCu,3u,0x0Bu,0xA2BFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B40u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2BFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2BFu,3u,0xEBu,0xA2C2u);
      sc_v11_op_lda(r,0xEB00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2BFu,3u,0xEBu,0xA2C2u);
      sc_v11_op_lda(r,0xEB00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2BFu,2u,0x00u,0xA2C1u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2C1u:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C1u,1u,0xEBu,0xA2C2u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2C2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C2u,2u,0x20u,0xA2C4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C2u,2u,0x20u,0xA2C4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C2u,2u,0x20u,0xA2C4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2C4u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C4u,3u,0x0Bu,0xA2C7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B3Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2C7u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C7u,1u,0x0Au,0xA2C8u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2C8u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C8u,1u,0x0Au,0xA2C9u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2C9u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C9u,1u,0x0Au,0xA2CAu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2CAu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2CAu,1u,0x0Au,0xA2CBu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2CBu:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2CBu,1u,0x38u,0xA2CCu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2CCu:
    if(m==0u&&x==1u&&e==0u){ /* ED 3D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2CCu,3u,0x0Bu,0xA2CFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Du)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2CFu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2CFu,1u,0x0Au,0xA2D0u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2D0u:
    if(m==0u&&x==1u&&e==0u){ /* 6D 3F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2D0u,3u,0x0Bu,0xA2D3u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2D3u:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2D3u,1u,0xAAu,0xA2D4u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2D4u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2D4u,2u,0x20u,0xA2D6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2D6u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2D6u,1u,0x60u,0xA2D7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2D7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2D7u,3u,0x0Bu,0xA2DAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B3Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 3F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2D7u,3u,0x0Bu,0xA2DAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B3Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 3F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2D7u,3u,0x0Bu,0xA2DAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B3Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2DAu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 40 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2DAu,3u,0x0Bu,0xA2DDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B40u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 40 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2DAu,3u,0x0Bu,0xA2DDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B40u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 40 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2DAu,3u,0x0Bu,0xA2DDu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B40u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2DDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2DDu,3u,0xEBu,0xA2E0u);
      sc_v11_op_lda(r,0xEB00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2DDu,3u,0xEBu,0xA2E0u);
      sc_v11_op_lda(r,0xEB00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2DDu,2u,0x00u,0xA2DFu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2DFu:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2DFu,1u,0xEBu,0xA2E0u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E0u,2u,0x20u,0xA2E2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E0u,2u,0x20u,0xA2E2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E0u,2u,0x20u,0xA2E2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E2u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E2u,3u,0x0Bu,0xA2E5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B3Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E5u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E5u,1u,0x0Au,0xA2E6u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E6u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E6u,1u,0x0Au,0xA2E7u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E7u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E7u,1u,0x0Au,0xA2E8u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E8u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E8u,1u,0x0Au,0xA2E9u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E9u:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E9u,1u,0x38u,0xA2EAu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2EAu:
    if(m==0u&&x==1u&&e==0u){ /* ED 3D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2EAu,3u,0x0Bu,0xA2EDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Du)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2EDu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2EDu,1u,0x18u,0xA2EEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2EEu:
    if(m==0u&&x==1u&&e==0u){ /* 6D 3F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2EEu,3u,0x0Bu,0xA2F1u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2F1u:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F1u,1u,0xAAu,0xA2F2u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2F2u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F2u,2u,0x20u,0xA2F4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2F4u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F4u,1u,0x60u,0xA2F5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2F5u:

    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F5u,2u,0x30u,0xA2F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F5u,2u,0x30u,0xA2F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F5u,2u,0x30u,0xA2F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A33Fu:
    if(m==0u&&x==0u&&e==0u){ /* E6 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A33Fu,2u,0x08u,0xA341u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x08u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A350u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A350u,2u,0x30u,0xA352u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A352u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A352u,1u,0x68u,0xA353u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A353u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A353u,1u,0xA8u,0xA354u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A354u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A354u,1u,0x18u,0xA355u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A355u:
    if(m==0u&&x==0u&&e==0u){ /* 69 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A355u,3u,0x00u,0xA358u);
      sc_v11_op_adc(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A358u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A358u,1u,0x48u,0xA359u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A359u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A359u,2u,0x20u,0xA35Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A35Bu:
    if(m==0u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A35Bu,1u,0x0Bu,0xA35Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A35Cu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A35Cu,1u,0x48u,0xA35Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A35Du:
    if(m==0u&&x==0u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A35Du,1u,0x7Bu,0xA35Eu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A35Eu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A35Eu,1u,0x38u,0xA35Fu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A35Fu:
    if(m==0u&&x==0u&&e==0u){ /* E9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A35Fu,3u,0x00u,0xA362u);
      sc_v11_op_sbc(r,0x0014u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A362u:
    if(m==0u&&x==0u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A362u,1u,0x5Bu,0xA363u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A363u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A363u,1u,0x68u,0xA364u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A364u:
    if(m==0u&&x==0u&&e==0u){ /* B9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A364u,3u,0x00u,0xA367u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0001u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A367u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A367u,3u,0x00u,0xA36Au);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A36Au:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A36Au,1u,0xAAu,0xA36Bu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A36Bu:
    if(m==0u&&x==0u&&e==0u){ /* B5 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A36Bu,2u,0x14u,0xA36Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x14u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A36Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A36Du,2u,0x04u,0xA36Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A36Fu:
    if(m==0u&&x==0u&&e==0u){ /* B5 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A36Fu,2u,0x16u,0xA371u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x16u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A371u:
    if(m==0u&&x==0u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A371u,2u,0x06u,0xA373u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A373u:
    if(m==0u&&x==0u&&e==0u){ /* B9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A373u,3u,0x00u,0xA376u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0002u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A376u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A376u,3u,0x00u,0xA379u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A379u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A379u,1u,0xAAu,0xA37Au);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A37Au:
    if(m==0u&&x==0u&&e==0u){ /* B5 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A37Au,2u,0x14u,0xA37Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x14u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A37Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A37Cu,2u,0x08u,0xA37Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A37Eu:
    if(m==0u&&x==0u&&e==0u){ /* B5 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A37Eu,2u,0x16u,0xA380u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x16u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A380u:
    if(m==0u&&x==0u&&e==0u){ /* 85 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A380u,2u,0x0Au,0xA382u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Au),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A382u:
    if(m==0u&&x==0u&&e==0u){ /* B9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A382u,3u,0x00u,0xA385u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0003u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A385u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A385u,3u,0x00u,0xA388u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A388u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A388u,2u,0x00u,0xA38Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A38Au:
    if(m==0u&&x==0u&&e==0u){ /* 64 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A38Au,2u,0x0Cu,0xA38Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A38Cu:
    if(m==0u&&x==0u&&e==0u){ /* 64 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A38Cu,2u,0x0Eu,0xA38Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A38Eu:
    if(m==0u&&x==0u&&e==0u){ /* 64 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A38Eu,2u,0x10u,0xA390u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x10u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A390u:
    if(m==0u&&x==0u&&e==0u){ /* 64 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A390u,2u,0x12u,0xA392u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x12u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A392u:
    if(m==0u&&x==0u&&e==0u){ /* A2 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A392u,3u,0x00u,0xA395u);
      sc_v11_op_ldx(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A395u:
    if(m==0u&&x==0u&&e==0u){ /* 06 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A395u,2u,0x0Cu,0xA397u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x0Cu),16u,0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A397u:
    if(m==0u&&x==0u&&e==0u){ /* 26 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A397u,2u,0x0Eu,0xA399u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x0Eu),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A399u:
    if(m==0u&&x==0u&&e==0u){ /* 26 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A399u,2u,0x10u,0xA39Bu);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x10u),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A39Bu:
    if(m==0u&&x==0u&&e==0u){ /* 26 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A39Bu,2u,0x12u,0xA39Du);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x12u),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A39Du:
    if(m==0u&&x==0u&&e==0u){ /* 06 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A39Du,2u,0x08u,0xA39Fu);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x08u),16u,0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A39Fu:
    if(m==0u&&x==0u&&e==0u){ /* 26 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A39Fu,2u,0x0Au,0xA3A1u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x0Au),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3A1u:
    if(m==0u&&x==0u&&e==0u){ /* 90 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3A1u,2u,0x15u,0xA3A3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA3B8u;}
      if(c->pc!=0xA3A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA3A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3A3u:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3A3u,2u,0x0Cu,0xA3A5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3A5u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3A5u,1u,0x18u,0xA3A6u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3A6u:
    if(m==0u&&x==0u&&e==0u){ /* 65 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3A6u,2u,0x04u,0xA3A8u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3A8u:
    if(m==0u&&x==0u&&e==0u){ /* 85 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3A8u,2u,0x0Cu,0xA3AAu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3AAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3AAu,2u,0x0Eu,0xA3ACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3ACu:
    if(m==0u&&x==0u&&e==0u){ /* 65 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3ACu,2u,0x06u,0xA3AEu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3AEu:
    if(m==0u&&x==0u&&e==0u){ /* 85 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3AEu,2u,0x0Eu,0xA3B0u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3B0u:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3B0u,2u,0x06u,0xA3B2u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA3B8u;}
      if(c->pc!=0xA3B2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA3B2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3B2u:
    if(m==0u&&x==0u&&e==0u){ /* E6 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3B2u,2u,0x10u,0xA3B4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x10u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3B4u:
    if(m==0u&&x==0u&&e==0u){ /* D0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3B4u,2u,0x02u,0xA3B6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA3B8u;}
      if(c->pc!=0xA3B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA3B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3B6u:
    if(m==0u&&x==0u&&e==0u){ /* E6 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3B6u,2u,0x12u,0xA3B8u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x12u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3B8u:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3B8u,1u,0xCAu,0xA3B9u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3B9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3B9u,2u,0xDAu,0xA3BBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA395u;}
      if(c->pc!=0xA3BBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA3BBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3BBu:
    if(m==0u&&x==0u&&e==0u){ /* A6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3BBu,2u,0x00u,0xA3BDu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3BDu:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3BDu,2u,0x0Cu,0xA3BFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3BFu:
    if(m==0u&&x==0u&&e==0u){ /* 95 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3BFu,2u,0x14u,0xA3C1u);
      sc_v11_bus_write16(r,sc_v11_ea_dpx(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3C1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3C1u,2u,0x0Eu,0xA3C3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3C3u:
    if(m==0u&&x==0u&&e==0u){ /* 95 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3C3u,2u,0x16u,0xA3C5u);
      sc_v11_bus_write16(r,sc_v11_ea_dpx(r,0x16u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3C5u:
    if(m==0u&&x==0u&&e==0u){ /* A5 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3C5u,2u,0x10u,0xA3C7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x10u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3C7u:
    if(m==0u&&x==0u&&e==0u){ /* 95 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3C7u,2u,0x18u,0xA3C9u);
      sc_v11_bus_write16(r,sc_v11_ea_dpx(r,0x18u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3C9u:
    if(m==0u&&x==0u&&e==0u){ /* A5 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3C9u,2u,0x12u,0xA3CBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x12u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3CBu:
    if(m==0u&&x==0u&&e==0u){ /* 95 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3CBu,2u,0x1Au,0xA3CDu);
      sc_v11_bus_write16(r,sc_v11_ea_dpx(r,0x1Au),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3CDu:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3CDu,1u,0x2Bu,0xA3CEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3CEu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3CEu,1u,0x60u,0xA3CFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
