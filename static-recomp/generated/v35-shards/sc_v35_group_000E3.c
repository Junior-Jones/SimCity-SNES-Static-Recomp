/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000E3(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x038C9Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038C9Au,3u,0x00u,0x8C9Du);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038CBCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038CBCu,3u,0x00u,0x8CBFu);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038CE0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038CE0u,3u,0x00u,0x8CE3u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038CE3u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038CE3u,2u,0x03u,0x8CE5u);
      if(1){c->pc=0x8CE8u;}
      if(c->pc!=0x8CE5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CE5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038CE5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038CE5u,3u,0x00u,0x8CE8u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D01u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D01u,2u,0x0Au,0x8D03u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8D0Du;}
      if(c->pc!=0x8D03u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D03u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D03u:
    if(m==0u&&x==0u&&e==0u){ /* A0 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D03u,3u,0xFFu,0x8D06u);
      sc_v11_op_ldy(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D06u:
    if(m==0u&&x==0u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D06u,2u,0x05u,0x8D08u);
      if(1){c->pc=0x8D0Du;}
      if(c->pc!=0x8D08u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D08u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D18u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D18u,2u,0x0Au,0x8D1Au);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8D24u;}
      if(c->pc!=0x8D1Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D1Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D1Au:
    if(m==0u&&x==0u&&e==0u){ /* A0 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D1Au,3u,0xFFu,0x8D1Du);
      sc_v11_op_ldy(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D1Du:
    if(m==0u&&x==0u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D1Du,2u,0x05u,0x8D1Fu);
      if(1){c->pc=0x8D24u;}
      if(c->pc!=0x8D1Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D1Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D29u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D29u,2u,0x20u,0x8D2Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D29u,2u,0x20u,0x8D2Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D2Bu,1u,0x0Bu,0x8D2Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D2Bu,1u,0x0Bu,0x8D2Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D2Cu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D2Cu,1u,0x48u,0x8D2Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D2Cu,1u,0x48u,0x8D2Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D2Du:
    if(m==0u&&x==0u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D2Du,1u,0x7Bu,0x8D2Eu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D2Du,1u,0x7Bu,0x8D2Eu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D2Eu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D2Eu,1u,0x38u,0x8D2Fu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D2Eu,1u,0x38u,0x8D2Fu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D2Fu:
    if(m==0u&&x==0u&&e==0u){ /* E9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D2Fu,3u,0x00u,0x8D32u);
      sc_v11_op_sbc(r,0x000Cu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D2Fu,3u,0x00u,0x8D32u);
      sc_v11_op_sbc(r,0x000Cu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D32u:
    if(m==0u&&x==0u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D32u,1u,0x5Bu,0x8D33u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D32u,1u,0x5Bu,0x8D33u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D33u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D33u,1u,0x68u,0x8D34u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D33u,1u,0x68u,0x8D34u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D34u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D34u,2u,0x30u,0x8D36u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D34u,2u,0x30u,0x8D36u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D36u:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D36u,2u,0x00u,0x8D38u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D38u:
    if(m==0u&&x==0u&&e==0u){ /* 64 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D38u,2u,0x04u,0x8D3Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D3Au:
    if(m==0u&&x==0u&&e==0u){ /* 64 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D3Au,2u,0x08u,0x8D3Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D3Cu:
    if(m==0u&&x==0u&&e==0u){ /* A2 EC 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D3Cu,3u,0x00u,0x8D3Fu);
      sc_v11_op_ldx(r,0x00ECu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D3Fu:
    if(m==0u&&x==0u&&e==0u){ /* BF 60 65 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D3Fu,4u,0x7Fu,0x8D43u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F6560u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D43u:
    if(m==0u&&x==0u&&e==0u){ /* C5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D43u,2u,0x00u,0x8D45u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D45u:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D45u,2u,0x02u,0x8D47u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D49u;}
      if(c->pc!=0x8D47u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D47u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D47u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D47u,2u,0x00u,0x8D49u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D49u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 62 65 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D49u,4u,0x7Fu,0x8D4Du);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6562u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D4Du:
    if(m==0u&&x==0u&&e==0u){ /* BF 50 66 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D4Du,4u,0x7Fu,0x8D51u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F6650u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D51u:
    if(m==0u&&x==0u&&e==0u){ /* C5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D51u,2u,0x04u,0x8D53u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D53u:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D53u,2u,0x02u,0x8D55u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D57u;}
      if(c->pc!=0x8D55u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D55u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D55u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D55u,2u,0x04u,0x8D57u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D57u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 52 66 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D57u,4u,0x7Fu,0x8D5Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6652u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D5Bu:
    if(m==0u&&x==0u&&e==0u){ /* BF 40 67 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D5Bu,4u,0x7Fu,0x8D5Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F6740u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D5Fu:
    if(m==0u&&x==0u&&e==0u){ /* C5 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D5Fu,2u,0x08u,0x8D61u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D61u:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D61u,2u,0x02u,0x8D63u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D65u;}
      if(c->pc!=0x8D63u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D63u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D63u:
    if(m==0u&&x==0u&&e==0u){ /* 85 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D63u,2u,0x08u,0x8D65u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D65u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 42 67 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D65u,4u,0x7Fu,0x8D69u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6742u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D69u:
    if(m==0u&&x==0u&&e==0u){ /* BF 10 6A 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D69u,4u,0x7Fu,0x8D6Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F6A10u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D6Du:
    if(m==0u&&x==0u&&e==0u){ /* 9F 12 6A 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D6Du,4u,0x7Fu,0x8D71u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6A12u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D71u:
    if(m==0u&&x==0u&&e==0u){ /* BF 20 69 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D71u,4u,0x7Fu,0x8D75u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F6920u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D75u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 22 69 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D75u,4u,0x7Fu,0x8D79u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6922u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D79u:
    if(m==0u&&x==0u&&e==0u){ /* BF 30 68 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D79u,4u,0x7Fu,0x8D7Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F6830u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D7Du:
    if(m==0u&&x==0u&&e==0u){ /* 9F 32 68 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D7Du,4u,0x7Fu,0x8D81u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6832u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D81u:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D81u,1u,0xCAu,0x8D82u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D82u:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D82u,1u,0xCAu,0x8D83u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D83u:
    if(m==0u&&x==0u&&e==0u){ /* 10 BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D83u,2u,0xBAu,0x8D85u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x8D3Fu;}
      if(c->pc!=0x8D85u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D85u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D85u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D85u,2u,0x00u,0x8D87u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D87u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 65 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D87u,3u,0x0Cu,0x8D8Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C65u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D8Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 6B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D8Au,3u,0x0Cu,0x8D8Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D8Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D8Du,2u,0x04u,0x8D8Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D8Fu:
    if(m==0u&&x==0u&&e==0u){ /* CD 6B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D8Fu,3u,0x0Cu,0x8D92u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D92u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D92u,2u,0x03u,0x8D94u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D97u;}
      if(c->pc!=0x8D94u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D94u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D94u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 6B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D94u,3u,0x0Cu,0x8D97u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D97u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 67 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D97u,3u,0x0Cu,0x8D9Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C67u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D9Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D9Au,2u,0x08u,0x8D9Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D9Cu:
    if(m==0u&&x==0u&&e==0u){ /* CD 6B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D9Cu,3u,0x0Cu,0x8D9Fu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038D9Fu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038D9Fu,2u,0x03u,0x8DA1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DA4u;}
      if(c->pc!=0x8DA1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DA1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DA1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 6B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DA1u,3u,0x0Cu,0x8DA4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DA4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 69 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DA4u,3u,0x0Cu,0x8DA7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C69u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DA7u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DA7u,3u,0x0Bu,0x8DAAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DAAu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DAAu,1u,0x4Au,0x8DABu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DABu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DABu,1u,0x4Au,0x8DACu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DACu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DACu,1u,0x4Au,0x8DADu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DADu:
    if(m==0u&&x==0u&&e==0u){ /* CD 6B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DADu,3u,0x0Cu,0x8DB0u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DB0u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DB0u,2u,0x03u,0x8DB2u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DB5u;}
      if(c->pc!=0x8DB2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DB2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DB2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 6B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DB2u,3u,0x0Cu,0x8DB5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DB5u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 60 65 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DB5u,4u,0x7Fu,0x8DB9u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7F6560u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DB9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DB9u,3u,0x0Bu,0x8DBCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B93u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DBCu:
    if(m==0u&&x==0u&&e==0u){ /* CD 6B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DBCu,3u,0x0Cu,0x8DBFu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DBFu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DBFu,2u,0x03u,0x8DC1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DC4u;}
      if(c->pc!=0x8DC1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DC1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DC1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 6B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DC1u,3u,0x0Cu,0x8DC4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DC4u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 50 66 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DC4u,4u,0x7Fu,0x8DC8u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7F6650u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DC8u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DC8u,3u,0x0Bu,0x8DCBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DCBu:
    if(m==0u&&x==0u&&e==0u){ /* CD 6B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DCBu,3u,0x0Cu,0x8DCEu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C6Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DCEu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DCEu,2u,0x03u,0x8DD0u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DD3u;}
      if(c->pc!=0x8DD0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DD0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DD0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 6B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DD0u,3u,0x0Cu,0x8DD3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DD3u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 40 67 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DD3u,4u,0x7Fu,0x8DD7u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7F6740u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DD7u:
    if(m==0u&&x==0u&&e==0u){ /* AF 70 64 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DD7u,4u,0x7Fu,0x8DDBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7F6470u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DDBu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 10 6A 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DDBu,4u,0x7Fu,0x8DDFu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7F6A10u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DDFu:
    if(m==0u&&x==0u&&e==0u){ /* AF 90 62 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DDFu,4u,0x7Fu,0x8DE3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7F6290u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DE3u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 30 68 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DE3u,4u,0x7Fu,0x8DE7u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7F6830u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DE7u:
    if(m==0u&&x==0u&&e==0u){ /* AF 80 63 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DE7u,4u,0x7Fu,0x8DEBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7F6380u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DEBu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 20 69 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DEBu,4u,0x7Fu,0x8DEFu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7F6920u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DEFu:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DEFu,1u,0x2Bu,0x8DF0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DF0u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF0u,1u,0x60u,0x8DF1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DF1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF1u,2u,0x20u,0x8DF3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF1u,2u,0x20u,0x8DF3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DF3u:
    if(m==0u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF3u,1u,0x0Bu,0x8DF4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF3u,1u,0x0Bu,0x8DF4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DF4u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF4u,1u,0x48u,0x8DF5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF4u,1u,0x48u,0x8DF5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DF5u:
    if(m==0u&&x==0u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF5u,1u,0x7Bu,0x8DF6u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF5u,1u,0x7Bu,0x8DF6u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DF6u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF6u,1u,0x38u,0x8DF7u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF6u,1u,0x38u,0x8DF7u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DF7u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF7u,3u,0x00u,0x8DFAu);
      sc_v11_op_sbc(r,0x000Cu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DF7u,3u,0x00u,0x8DFAu);
      sc_v11_op_sbc(r,0x000Cu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DFAu:
    if(m==0u&&x==0u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DFAu,1u,0x5Bu,0x8DFBu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DFAu,1u,0x5Bu,0x8DFBu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DFBu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DFBu,1u,0x68u,0x8DFCu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DFBu,1u,0x68u,0x8DFCu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DFCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DFCu,2u,0x30u,0x8DFEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DFCu,2u,0x30u,0x8DFEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038DFEu:
    if(m==0u&&x==0u&&e==0u){ /* 9C C1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038DFEu,3u,0x0Bu,0x8E01u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E01u:
    if(m==0u&&x==0u&&e==0u){ /* AD C3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E01u,3u,0x0Du,0x8E04u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E04u:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E04u,2u,0x01u,0x8E06u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8E07u;}
      if(c->pc!=0x8E06u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E06u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E06u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E06u,1u,0x60u,0x8E07u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E07u:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E07u,3u,0x0Eu,0x8E0Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E07u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E0Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E0Au,2u,0x00u,0x8E0Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E0Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E0Cu,3u,0x00u,0x8E0Fu);
      sc_v11_op_lda(r,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E0Fu,2u,0x04u,0x8E11u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E11u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E11u,3u,0xA2u,0x8E14u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E13u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E17u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E17u,2u,0x00u,0x8E19u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E19u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E19u,3u,0x27u,0x8E1Cu);
      sc_v11_op_compare(r,c->a,0x270Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E1Cu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E1Cu,2u,0x03u,0x8E1Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8E21u;}
      if(c->pc!=0x8E1Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E1Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E1Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0F 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E1Eu,3u,0x27u,0x8E21u);
      sc_v11_op_lda(r,0x270Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E21u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D5 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E21u,3u,0x0Du,0x8E24u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E24u:
    if(m==0u&&x==0u&&e==0u){ /* AD 09 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E24u,3u,0x0Eu,0x8E27u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E09u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E27u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E27u,2u,0x00u,0x8E29u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E29u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E29u,3u,0xA2u,0x8E2Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E2Bu))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E2Fu:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E2Fu,2u,0x00u,0x8E31u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E31u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E31u,3u,0x27u,0x8E34u);
      sc_v11_op_compare(r,c->a,0x270Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E34u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E34u,2u,0x03u,0x8E36u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8E39u;}
      if(c->pc!=0x8E36u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E36u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E36u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0F 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E36u,3u,0x27u,0x8E39u);
      sc_v11_op_lda(r,0x270Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E39u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E39u,3u,0x0Du,0x8E3Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E3Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 17 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E3Cu,3u,0x0Eu,0x8E3Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E17u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E3Fu,1u,0x0Au,0x8E40u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E40u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 15 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E40u,3u,0x0Eu,0x8E43u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E15u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E43u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E43u,2u,0x00u,0x8E45u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E45u:
    if(m==0u&&x==0u&&e==0u){ /* AD 57 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E45u,3u,0x0Bu,0x8E48u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B57u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E48u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E48u,1u,0x0Au,0x8E49u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E49u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E49u,1u,0xAAu,0x8E4Au);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E4Au:
    if(m==0u&&x==0u&&e==0u){ /* BD E8 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E4Au,3u,0x8Fu,0x8E4Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x8FE8u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E4Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E4Du,2u,0x04u,0x8E4Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E4Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E4Fu,3u,0xA2u,0x8E52u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E51u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E55u:
    if(m==0u&&x==0u&&e==0u){ /* A5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E55u,2u,0x01u,0x8E57u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x01u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E57u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E57u,3u,0x27u,0x8E5Au);
      sc_v11_op_compare(r,c->a,0x270Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E5Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E5Au,2u,0x03u,0x8E5Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8E5Fu;}
      if(c->pc!=0x8E5Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E5Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E5Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0F 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E5Cu,3u,0x27u,0x8E5Fu);
      sc_v11_op_lda(r,0x270Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E5Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D D3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E5Fu,3u,0x0Du,0x8E62u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E62u:
    if(m==0u&&x==0u&&e==0u){ /* AD C7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E62u,3u,0x0Du,0x8E65u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E65u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E65u,2u,0x00u,0x8E67u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E67u:
    if(m==0u&&x==0u&&e==0u){ /* A9 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E67u,3u,0x00u,0x8E6Au);
      sc_v11_op_lda(r,0x0030u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E6Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E6Au,2u,0x04u,0x8E6Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E6Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 CF A3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E6Cu,3u,0xA3u,0x8E6Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E6Eu))return 0;c->pc=0xA3CFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E72u:
    if(m==0u&&x==0u&&e==0u){ /* AD FB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E72u,3u,0x0Du,0x8E75u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E75u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E75u,2u,0x00u,0x8E77u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E77u:
    if(m==0u&&x==0u&&e==0u){ /* AD 03 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E77u,3u,0x0Cu,0x8E7Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C03u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E7Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E7Au,2u,0x04u,0x8E7Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E7Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E7Cu,3u,0xA2u,0x8E7Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E7Eu))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E82u:
    if(m==0u&&x==0u&&e==0u){ /* A9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E82u,3u,0x00u,0x8E85u);
      sc_v11_op_lda(r,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E85u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E85u,2u,0x04u,0x8E87u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E87u:
    if(m==0u&&x==0u&&e==0u){ /* 64 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E87u,2u,0x06u,0x8E89u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E89u:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E89u,3u,0xA4u,0x8E8Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E8Bu))return 0;c->pc=0xA421u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E8Fu,3u,0xA2u,0x8E92u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E91u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E95u:
    if(m==0u&&x==0u&&e==0u){ /* AD DD 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E95u,3u,0x0Du,0x8E98u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DDDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E98u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E98u,3u,0x0Du,0x8E9Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E9Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 57 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E9Bu,3u,0x0Bu,0x8E9Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B57u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E9Eu,1u,0x0Au,0x8E9Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038E9Fu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038E9Fu,1u,0xAAu,0x8EA0u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EA0u:
    if(m==0u&&x==0u&&e==0u){ /* BD EE 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EA0u,3u,0x8Fu,0x8EA3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x8FEEu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EA3u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EA3u,2u,0x04u,0x8EA5u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EA5u:
    if(m==0u&&x==0u&&e==0u){ /* 64 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EA5u,2u,0x06u,0x8EA7u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EA7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 50 A3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EA7u,3u,0xA3u,0x8EAAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8EA9u))return 0;c->pc=0xA350u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EADu:
    if(m==0u&&x==0u&&e==0u){ /* A5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EADu,2u,0x01u,0x8EAFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x01u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EAFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D C9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EAFu,3u,0x0Du,0x8EB2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EB2u:
    if(m==0u&&x==0u&&e==0u){ /* A5 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EB2u,2u,0x03u,0x8EB4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x03u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EB4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EB4u,3u,0x0Du,0x8EB7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DCBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EB7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C C7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EB7u,3u,0x0Du,0x8EBAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EBAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EBAu,3u,0xFFu,0x8EBDu);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EBDu:
    if(m==0u&&x==0u&&e==0u){ /* 8D C3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EBDu,3u,0x0Du,0x8EC0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EC0u:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EC0u,3u,0x01u,0x8EC3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0195u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EC3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EC3u,3u,0x00u,0x8EC6u);
      sc_v11_op_and(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EC6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EC6u,2u,0x06u,0x8EC8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8ECEu;}
      if(c->pc!=0x8EC8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EC8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EC8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EC8u,3u,0x00u,0x8ECBu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038ECBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D C3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038ECBu,3u,0x0Du,0x8ECEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038ECEu:
    if(m==0u&&x==0u&&e==0u){ /* AD C3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038ECEu,3u,0x0Du,0x8ED1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038ED1u:
    if(m==0u&&x==0u&&e==0u){ /* D0 FB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038ED1u,2u,0xFBu,0x8ED3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8ECEu;}
      if(c->pc!=0x8ED3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8ED3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038ED3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038ED3u,3u,0x00u,0x8ED6u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038ED6u:
    if(m==0u&&x==0u&&e==0u){ /* AC 1D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038ED6u,3u,0x0Bu,0x8ED9u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B1Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038ED9u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038ED9u,2u,0x06u,0x8EDBu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8EE1u;}
      if(c->pc!=0x8EDBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EDBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EDBu:
    if(m==0u&&x==0u&&e==0u){ /* CE 1D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EDBu,3u,0x0Bu,0x8EDEu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B1Du),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EDEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 F4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EDEu,3u,0x01u,0x8EE1u);
      sc_v11_op_lda(r,0x01F4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EE1u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EE1u,1u,0x18u,0x8EE2u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EE2u:
    if(m==0u&&x==0u&&e==0u){ /* 6D CF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EE2u,3u,0x0Du,0x8EE5u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DCFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EE5u:
    if(m==0u&&x==0u&&e==0u){ /* 6D D1 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EE5u,3u,0x0Du,0x8EE8u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DD1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EE8u:
    if(m==0u&&x==0u&&e==0u){ /* 6D CD 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EE8u,3u,0x0Du,0x8EEBu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DCDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EEBu:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EEBu,2u,0x00u,0x8EEDu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EEDu:
    if(m==0u&&x==0u&&e==0u){ /* AD C9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EEDu,3u,0x0Du,0x8EF0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EF0u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EF0u,1u,0x18u,0x8EF1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EF1u:
    if(m==0u&&x==0u&&e==0u){ /* 6D D9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EF1u,3u,0x0Du,0x8EF4u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DD9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EF4u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EF4u,1u,0x38u,0x8EF5u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EF5u:
    if(m==0u&&x==0u&&e==0u){ /* E5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EF5u,2u,0x00u,0x8EF7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EF7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D C1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EF7u,3u,0x0Bu,0x8EFAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EFAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EFAu,3u,0x0Bu,0x8EFDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EFDu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EFDu,1u,0x18u,0x8EFEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038EFEu:
    if(m==0u&&x==0u&&e==0u){ /* 6D C9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038EFEu,3u,0x0Du,0x8F01u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F01u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F01u,2u,0x04u,0x8F03u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F03u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F03u,3u,0x0Bu,0x8F06u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F06u:
    if(m==0u&&x==0u&&e==0u){ /* 6D CB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F06u,3u,0x0Du,0x8F09u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DCBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F09u:
    if(m==0u&&x==0u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F09u,2u,0x06u,0x8F0Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F0Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F0Bu,2u,0x04u,0x8F0Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F0Du:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F0Du,1u,0x18u,0x8F0Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F0Eu:
    if(m==0u&&x==0u&&e==0u){ /* 6D D9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F0Eu,3u,0x0Du,0x8F11u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DD9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F11u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F11u,2u,0x04u,0x8F13u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F13u:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F13u,2u,0x02u,0x8F15u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8F17u;}
      if(c->pc!=0x8F15u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F15u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F15u:
    if(m==0u&&x==0u&&e==0u){ /* E6 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F15u,2u,0x06u,0x8F17u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x06u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F17u:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F17u,2u,0x04u,0x8F19u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F19u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F19u,1u,0x38u,0x8F1Au);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F1Au:
    if(m==0u&&x==0u&&e==0u){ /* E5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F1Au,2u,0x00u,0x8F1Cu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F1Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F1Cu,3u,0x0Bu,0x8F1Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F1Fu:
    if(m==0u&&x==0u&&e==0u){ /* A5 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F1Fu,2u,0x06u,0x8F21u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F21u:
    if(m==0u&&x==0u&&e==0u){ /* E9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F21u,3u,0x00u,0x8F24u);
      sc_v11_op_sbc(r,0x0000u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F24u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F24u,3u,0x0Bu,0x8F27u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F27u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F27u,3u,0x0Bu,0x8F2Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F2Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 3F 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F2Au,3u,0x42u,0x8F2Du);
      sc_v11_op_compare(r,c->a,0x423Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F2Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F2Du,3u,0x0Bu,0x8F30u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F30u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F30u,3u,0x00u,0x8F33u);
      sc_v11_op_sbc(r,0x000Fu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F33u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F33u,2u,0x0Cu,0x8F35u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8F41u;}
      if(c->pc!=0x8F35u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F35u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F35u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3F 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F35u,3u,0x42u,0x8F38u);
      sc_v11_op_lda(r,0x423Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F38u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F38u,3u,0x0Bu,0x8F3Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F3Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F3Bu,3u,0x00u,0x8F3Eu);
      sc_v11_op_lda(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F3Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F3Eu,3u,0x0Bu,0x8F41u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F41u:
    if(m==0u&&x==0u&&e==0u){ /* AD D3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F41u,3u,0x0Du,0x8F44u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DD3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F44u:
    if(m==0u&&x==0u&&e==0u){ /* F0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F44u,2u,0x2Cu,0x8F46u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8F72u;}
      if(c->pc!=0x8F46u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F46u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F46u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F46u,2u,0x20u,0x8F48u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F48u:
    if(m==1u&&x==0u&&e==0u){ /* 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F48u,2u,0x00u,0x8F4Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F4Au:
    if(m==1u&&x==0u&&e==0u){ /* 64 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F4Au,2u,0x03u,0x8F4Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F4Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F4Cu,2u,0x20u,0x8F4Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F4Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD CD 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F4Eu,3u,0x0Du,0x8F51u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DCDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F51u:
    if(m==0u&&x==0u&&e==0u){ /* 85 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F51u,2u,0x01u,0x8F53u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x01u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F53u:
    if(m==0u&&x==0u&&e==0u){ /* AD D3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F53u,3u,0x0Du,0x8F56u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DD3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F56u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F56u,2u,0x04u,0x8F58u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F58u:
    if(m==0u&&x==0u&&e==0u){ /* 64 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F58u,2u,0x06u,0x8F5Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F5Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F5Au,3u,0xA4u,0x8F5Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8F5Cu))return 0;c->pc=0xA421u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F60u:
    if(m==0u&&x==0u&&e==0u){ /* A9 21 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F60u,3u,0x00u,0x8F63u);
      sc_v11_op_lda(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F63u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F63u,2u,0x04u,0x8F65u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F65u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F65u,3u,0xA2u,0x8F68u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8F67u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F6Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F6Bu,2u,0x01u,0x8F6Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x01u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F6Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F6Du,3u,0x0Bu,0x8F70u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F70u:
    if(m==0u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F70u,2u,0x06u,0x8F72u);
      if(1){c->pc=0x8F78u;}
      if(c->pc!=0x8F72u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F72u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F72u:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F72u,3u,0x00u,0x8F75u);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F75u:
    if(m==0u&&x==0u&&e==0u){ /* 8D C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F75u,3u,0x0Bu,0x8F78u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F78u:
    if(m==0u&&x==0u&&e==0u){ /* AD D5 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F78u,3u,0x0Du,0x8F7Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DD5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F7Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F7Bu,2u,0x2Cu,0x8F7Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8FA9u;}
      if(c->pc!=0x8F7Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F7Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F7Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F7Du,2u,0x20u,0x8F7Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F7Fu:
    if(m==1u&&x==0u&&e==0u){ /* 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F7Fu,2u,0x00u,0x8F81u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F81u:
    if(m==1u&&x==0u&&e==0u){ /* 64 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F81u,2u,0x03u,0x8F83u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F83u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F83u,2u,0x20u,0x8F85u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F85u:
    if(m==0u&&x==0u&&e==0u){ /* AD CF 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F85u,3u,0x0Du,0x8F88u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DCFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F88u:
    if(m==0u&&x==0u&&e==0u){ /* 85 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F88u,2u,0x01u,0x8F8Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x01u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F8Au:
    if(m==0u&&x==0u&&e==0u){ /* AD D5 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F8Au,3u,0x0Du,0x8F8Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DD5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F8Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F8Du,2u,0x04u,0x8F8Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 64 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F8Fu,2u,0x06u,0x8F91u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038F91u:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038F91u,3u,0xA4u,0x8F94u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8F93u))return 0;c->pc=0xA421u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FA9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 E8 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FA9u,3u,0x03u,0x8FACu);
      sc_v11_op_lda(r,0x03E8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FACu:
    if(m==0u&&x==0u&&e==0u){ /* 8D C7 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FACu,3u,0x0Bu,0x8FAFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FAFu:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FAFu,3u,0x0Du,0x8FB2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DD7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FB2u:
    if(m==0u&&x==0u&&e==0u){ /* F0 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FB2u,2u,0x2Cu,0x8FB4u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8FE0u;}
      if(c->pc!=0x8FB4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8FB4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FB4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FB4u,2u,0x20u,0x8FB6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FB6u:
    if(m==1u&&x==0u&&e==0u){ /* 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FB6u,2u,0x00u,0x8FB8u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FB8u:
    if(m==1u&&x==0u&&e==0u){ /* 64 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FB8u,2u,0x03u,0x8FBAu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FBAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FBAu,2u,0x20u,0x8FBCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FBCu:
    if(m==0u&&x==0u&&e==0u){ /* AD D1 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FBCu,3u,0x0Du,0x8FBFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DD1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FBFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FBFu,2u,0x01u,0x8FC1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x01u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FC1u:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FC1u,3u,0x0Du,0x8FC4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DD7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FC4u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FC4u,2u,0x04u,0x8FC6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FC6u:
    if(m==0u&&x==0u&&e==0u){ /* 64 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FC6u,2u,0x06u,0x8FC8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FC8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FC8u,3u,0xA4u,0x8FCBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8FCAu))return 0;c->pc=0xA421u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FE0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 E8 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FE0u,3u,0x03u,0x8FE3u);
      sc_v11_op_lda(r,0x03E8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FE3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D C9 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FE3u,3u,0x0Bu,0x8FE6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FE6u:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FE6u,1u,0x2Bu,0x8FE7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FE7u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FE7u,1u,0x60u,0x8FE8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x038FF4u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FF4u,2u,0x30u,0x8FF6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FF4u,2u,0x30u,0x8FF6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x038FF4u,2u,0x30u,0x8FF6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
