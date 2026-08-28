/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00070(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01C01Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C01Cu,2u,0x20u,0xC01Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C01Cu,2u,0x20u,0xC01Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C01Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C01Eu,3u,0x01u,0xC021u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C01Eu,3u,0x01u,0xC021u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C021u:
    if(m==0u&&x==0u&&e==0u){ /* 29 80 40 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C021u,3u,0x40u,0xC024u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 80 40 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C021u,3u,0x40u,0xC024u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C024u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C024u,2u,0x06u,0xC026u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC02Cu;}
      if(c->pc!=0xC026u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC026u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C024u,2u,0x06u,0xC026u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC02Cu;}
      if(c->pc!=0xC026u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC026u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C02Cu:
    if(m==0u&&x==0u&&e==0u){ /* 64 E3 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C02Cu,2u,0xE3u,0xC02Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 E3 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C02Cu,2u,0xE3u,0xC02Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C02Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C02Eu,1u,0x60u,0xC02Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C02Eu,1u,0x60u,0xC02Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C033u:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C033u,2u,0x30u,0xC035u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C035u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C035u,3u,0x01u,0xC038u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C038u:
    if(m==0u&&x==0u&&e==0u){ /* 0D F5 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C038u,3u,0x01u,0xC03Bu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C03Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C03Bu,2u,0x01u,0xC03Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC03Eu;}
      if(c->pc!=0xC03Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC03Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C03Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD B3 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C03Eu,3u,0x01u,0xC041u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01B3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C041u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C041u,1u,0x0Au,0xC042u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C042u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C042u,1u,0x18u,0xC043u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C043u:
    if(m==0u&&x==0u&&e==0u){ /* 69 01 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C043u,3u,0x00u,0xC046u);
      sc_v11_op_adc(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C046u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C046u,2u,0x7Cu,0xC048u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C048u:
    if(m==0u&&x==0u&&e==0u){ /* 6D BF 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C048u,3u,0x01u,0xC04Bu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C04Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D D5 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C04Bu,3u,0x01u,0xC04Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C04Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C04Eu,3u,0x01u,0xC051u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C051u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C051u,1u,0x4Au,0xC052u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C052u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C052u,1u,0x4Au,0xC053u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C053u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FE FF Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C053u,3u,0xFFu,0xC056u);
      sc_v11_op_and(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C056u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C056u,1u,0x48u,0xC057u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C057u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C057u,2u,0x79u,0xC059u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C059u:
    if(m==0u&&x==0u&&e==0u){ /* AD 37 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C059u,3u,0x01u,0xC05Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0137u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C05Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C05Cu,1u,0x4Au,0xC05Du);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C05Du:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C05Du,1u,0x4Au,0xC05Eu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C05Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C05Eu,1u,0x4Au,0xC05Fu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C05Fu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C05Fu,1u,0x18u,0xC060u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C060u:
    if(m==0u&&x==0u&&e==0u){ /* 65 7C Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C060u,2u,0x7Cu,0xC062u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C062u:
    if(m==0u&&x==0u&&e==0u){ /* C9 20 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C062u,3u,0x00u,0xC065u);
      sc_v11_op_compare(r,c->a,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C065u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C065u,2u,0x03u,0xC067u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC06Au;}
      if(c->pc!=0xC067u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC067u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C06Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C06Au,2u,0x20u,0xC06Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C06Cu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C06Cu,1u,0x48u,0xC06Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C06Du:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C06Du,2u,0xB3u,0xC06Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C06Fu:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C06Fu,2u,0x7Fu,0xC071u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C071u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C071u,2u,0xB1u,0xC073u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C073u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C073u,1u,0x68u,0xC074u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C074u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C074u,4u,0x00u,0xC078u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C078u:
    if(m==1u&&x==0u&&e==0u){ /* A9 40 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C078u,2u,0x40u,0xC07Au);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C07Au:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C07Au,4u,0x00u,0xC07Eu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C07Eu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C07Eu,1u,0x48u,0xC07Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C07Fu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C07Fu,1u,0x68u,0xC080u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C080u:
    if(m==1u&&x==0u&&e==0u){ /* EA Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C080u,1u,0xEAu,0xC081u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C081u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C081u,4u,0x00u,0xC085u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C085u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C085u,1u,0xEBu,0xC086u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C086u:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C086u,4u,0x00u,0xC08Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C08Au:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C08Au,1u,0x48u,0xC08Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C08Bu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C08Bu,2u,0xB3u,0xC08Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C08Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C08Du,2u,0xB1u,0xC08Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C08Fu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C08Fu,1u,0x68u,0xC090u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C090u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C090u,2u,0x20u,0xC092u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C092u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C092u,1u,0x18u,0xC093u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C093u:
    if(m==0u&&x==0u&&e==0u){ /* 65 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C093u,2u,0x79u,0xC095u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C095u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C095u,1u,0xAAu,0xC096u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C096u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C096u,1u,0x68u,0xC097u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C097u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C097u,1u,0x4Au,0xC098u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C098u:
    if(m==0u&&x==0u&&e==0u){ /* 8D B7 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C098u,3u,0x01u,0xC09Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01B7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C09Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C09Bu,3u,0x00u,0xC09Eu);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C09Eu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C09Eu,1u,0x38u,0xC09Fu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C09Fu:
    if(m==0u&&x==0u&&e==0u){ /* ED B7 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C09Fu,3u,0x01u,0xC0A2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01B7u)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0A2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D B5 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0A2u,3u,0x01u,0xC0A5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01B5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0A5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0A5u,3u,0x00u,0xC0A8u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0A8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D B9 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0A8u,3u,0x01u,0xC0ABu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01B9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0ABu:
    if(m==0u&&x==0u&&e==0u){ /* AD B5 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0ABu,3u,0x01u,0xC0AEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01B5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0AEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D CF 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0AEu,3u,0x01u,0xC0B1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01CFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0B1u:
    if(m==0u&&x==0u&&e==0u){ /* AD B7 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0B1u,3u,0x01u,0xC0B4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01B7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0B4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D1 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0B4u,3u,0x01u,0xC0B7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0B7u:
    if(m==0u&&x==0u&&e==0u){ /* DA Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0B7u,1u,0xDAu,0xC0B8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0B8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 74 B2 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0B8u,3u,0xB2u,0xC0BBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0BAu))return 0;c->pc=0xB274u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0BBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0BBu,2u,0x30u,0xC0BDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0BDu:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0BDu,1u,0xFAu,0xC0BEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0BEu:
    if(m==0u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0BEu,1u,0x8Au,0xC0BFu);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0BFu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0BFu,1u,0x38u,0xC0C0u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0C0u:
    if(m==0u&&x==0u&&e==0u){ /* E9 40 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0C0u,3u,0x00u,0xC0C3u);
      sc_v11_op_sbc(r,0x0040u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0C3u:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0C3u,2u,0x03u,0xC0C5u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC0C8u;}
      if(c->pc!=0xC0C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0C5u:
    if(m==0u&&x==0u&&e==0u){ /* 69 00 08 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0C5u,3u,0x08u,0xC0C8u);
      sc_v11_op_adc(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0C8u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0C8u,1u,0xAAu,0xC0C9u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0C9u:
    if(m==0u&&x==0u&&e==0u){ /* CE D5 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0C9u,3u,0x01u,0xC0CCu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01D5u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0CCu:
    if(m==0u&&x==0u&&e==0u){ /* CE B9 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0CCu,3u,0x01u,0xC0CFu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01B9u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0CFu:
    if(m==0u&&x==0u&&e==0u){ /* D0 DA Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0CFu,2u,0xDAu,0xC0D1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC0ABu;}
      if(c->pc!=0xC0D1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0D1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0D1u:
    if(m==0u&&x==0u&&e==0u){ /* CE B3 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0D1u,3u,0x01u,0xC0D4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01B3u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0D4u:
    if(m==0u&&x==0u&&e==0u){ /* 10 06 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0D4u,2u,0x06u,0xC0D6u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xC0DCu;}
      if(c->pc!=0xC0D6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0D6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0D6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0E 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0D6u,3u,0x00u,0xC0D9u);
      sc_v11_op_lda(r,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0D9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D B3 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0D9u,3u,0x01u,0xC0DCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01B3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0DCu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0DCu,1u,0x60u,0xC0DDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0DDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0DDu,2u,0x30u,0xC0DFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0DFu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0DFu,2u,0xD7u,0xC0E1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0E1u:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0E1u,2u,0x01u,0xC0E3u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC0E4u;}
      if(c->pc!=0xC0E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0E4u:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0E4u,3u,0x01u,0xC0E7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0E7u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0E7u,2u,0x03u,0xC0E9u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC0ECu;}
      if(c->pc!=0xC0E9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0E9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0ECu:
    if(m==0u&&x==0u&&e==0u){ /* AD F3 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0ECu,3u,0x01u,0xC0EFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0EFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0EFu,2u,0x04u,0xC0F1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC0F5u;}
      if(c->pc!=0xC0F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0F1u:
    if(m==0u&&x==0u&&e==0u){ /* CE F3 01 Mesen corrected gameplay frame 4045; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0F1u,3u,0x01u,0xC0F4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x01F3u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0F4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4045; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0F4u,1u,0x60u,0xC0F5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0F5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0F5u,3u,0x02u,0xC0F8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0F8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0F8u,2u,0x03u,0xC0FAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC0FDu;}
      if(c->pc!=0xC0FAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0FAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0FAu:
    if(m==0u&&x==0u&&e==0u){ /* 4C E6 C2 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0FAu,3u,0xC2u,0xC0FDu);
      c->pc=0xC2E6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C0FDu:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C0FDu,3u,0x01u,0xC100u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C100u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C100u,2u,0x03u,0xC102u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC105u;}
      if(c->pc!=0xC102u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC102u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C102u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 95 C1 Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C102u,3u,0xC1u,0xC105u);
      c->pc=0xC195u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C105u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C105u,3u,0x01u,0xC108u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C108u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 80 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C108u,3u,0x80u,0xC10Bu);
      sc_v11_op_and(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C10Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 03 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C10Bu,3u,0x02u,0xC10Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0203u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C10Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C10Eu,3u,0x01u,0xC111u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C111u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C111u,1u,0x4Au,0xC112u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C112u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C112u,1u,0x4Au,0xC113u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C113u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C113u,1u,0x4Au,0xC114u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C114u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7F Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C114u,2u,0x7Fu,0xC116u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C116u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C116u,1u,0x18u,0xC117u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C117u:
    if(m==0u&&x==0u&&e==0u){ /* 6D BD 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C117u,3u,0x01u,0xC11Au);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C11Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C11Au,2u,0x79u,0xC11Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C11Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C11Cu,3u,0x01u,0xC11Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C11Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C11Fu,1u,0x4Au,0xC120u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C120u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C120u,1u,0x4Au,0xC121u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C121u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C121u,1u,0x4Au,0xC122u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C122u:
    if(m==0u&&x==0u&&e==0u){ /* 85 82 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C122u,2u,0x82u,0xC124u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x82u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C124u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C124u,1u,0x18u,0xC125u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C125u:
    if(m==0u&&x==0u&&e==0u){ /* 6D BF 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C125u,3u,0x01u,0xC128u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C128u:
    if(m==0u&&x==0u&&e==0u){ /* 85 7C Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C128u,2u,0x7Cu,0xC12Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C12Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C12Au,3u,0x01u,0xC12Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C12Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 80 40 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C12Du,3u,0x40u,0xC130u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C130u:
    if(m==0u&&x==0u&&e==0u){ /* D0 62 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C130u,2u,0x62u,0xC132u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC194u;}
      if(c->pc!=0xC132u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC132u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C132u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C132u,3u,0x01u,0xC135u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C135u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 0F Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C135u,3u,0x0Fu,0xC138u);
      sc_v11_op_and(r,0x0F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C138u:
    if(m==0u&&x==0u&&e==0u){ /* F0 5A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C138u,2u,0x5Au,0xC13Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC194u;}
      if(c->pc!=0xC13Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC13Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C13Au:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C13Au,1u,0x0Au,0xC13Bu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C13Bu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C13Bu,1u,0x0Au,0xC13Cu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C13Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C13Cu,1u,0x0Au,0xC13Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C13Du:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C13Du,1u,0x0Au,0xC13Eu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C13Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C13Eu,1u,0x0Au,0xC13Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C13Fu:
    if(m==0u&&x==0u&&e==0u){ /* 90 14 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C13Fu,2u,0x14u,0xC141u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC155u;}
      if(c->pc!=0xC141u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC141u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C155u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C155u,1u,0x0Au,0xC156u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C156u:
    if(m==0u&&x==0u&&e==0u){ /* 90 14 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C156u,2u,0x14u,0xC158u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC16Cu;}
      if(c->pc!=0xC158u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC158u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C158u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C158u,1u,0x48u,0xC159u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C159u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 04 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C159u,3u,0x04u,0xC15Cu);
      sc_v11_op_lda(r,0x0400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C15Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C15Cu,3u,0x01u,0xC15Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C15Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F3 C1 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C15Fu,3u,0xC1u,0xC162u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC161u))return 0;c->pc=0xC1F3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C162u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C162u,2u,0x30u,0xC164u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C164u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C164u,1u,0x68u,0xC165u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C165u:
    if(m==0u&&x==0u&&e==0u){ /* AE 03 02 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C165u,3u,0x02u,0xC168u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0203u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C168u:
    if(m==0u&&x==0u&&e==0u){ /* F0 02 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C168u,2u,0x02u,0xC16Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC16Cu;}
      if(c->pc!=0xC16Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC16Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C16Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C16Cu,1u,0x0Au,0xC16Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C16Du:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C16Du,2u,0x10u,0xC16Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC17Fu;}
      if(c->pc!=0xC16Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC16Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C17Fu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C17Fu,1u,0x0Au,0xC180u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C180u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0C Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C180u,2u,0x0Cu,0xC182u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC18Eu;}
      if(c->pc!=0xC182u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC182u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C182u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C182u,3u,0x01u,0xC185u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C185u:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 01 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C185u,3u,0x01u,0xC188u);
      sc_v11_op_ora(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C188u:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C188u,3u,0x01u,0xC18Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C18Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 80 C2 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C18Bu,3u,0xC2u,0xC18Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC18Du))return 0;c->pc=0xC280u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C18Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 C7 C4 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C18Eu,3u,0xC4u,0xC191u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC190u))return 0;c->pc=0xC4C7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C191u:
    if(m==0u&&x==0u&&e==0u){ /* 20 E5 C4 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C191u,3u,0xC4u,0xC194u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC193u))return 0;c->pc=0xC4E5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C194u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C194u,1u,0x60u,0xC195u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C195u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C195u,1u,0x0Au,0xC196u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C196u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C196u,1u,0x0Au,0xC197u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C197u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C197u,1u,0x0Au,0xC198u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C198u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C198u,1u,0x0Au,0xC199u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C199u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C199u,1u,0x0Au,0xC19Au);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C19Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 07 Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C19Au,2u,0x07u,0xC19Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC1A3u;}
      if(c->pc!=0xC19Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC19Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1A3u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1A3u,1u,0x0Au,0xC1A4u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1A4u:
    if(m==0u&&x==0u&&e==0u){ /* 90 07 Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1A4u,2u,0x07u,0xC1A6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC1ADu;}
      if(c->pc!=0xC1A6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1A6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1A6u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 4721; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1A6u,1u,0x48u,0xC1A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1A7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 14 C2 Mesen corrected gameplay frame 4721; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1A7u,3u,0xC2u,0xC1AAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC1A9u))return 0;c->pc=0xC214u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1AAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4721; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1AAu,2u,0x30u,0xC1ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1ACu:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4721; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1ACu,1u,0x68u,0xC1ADu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1ADu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1ADu,1u,0x0Au,0xC1AEu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1AEu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1AEu,2u,0x03u,0xC1B0u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC1B3u;}
      if(c->pc!=0xC1B0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1B0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1B3u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1B3u,1u,0x0Au,0xC1B4u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1B4u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1B4u,2u,0x03u,0xC1B6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC1B9u;}
      if(c->pc!=0xC1B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1B6u:
    if(m==0u&&x==0u&&e==0u){ /* 4C A1 C2 Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1B6u,3u,0xC2u,0xC1B9u);
      c->pc=0xC2A1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1B9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4721; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1B9u,1u,0x60u,0xC1BAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1F3u:
    if(m==0u&&x==0u&&e==0u){ /* AE F9 01 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1F3u,3u,0x01u,0xC1F6u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1F6u:
    if(m==0u&&x==0u&&e==0u){ /* BF C0 80 01 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1F6u,4u,0x01u,0xC1FAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0180C0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1FAu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1FAu,3u,0x00u,0xC1FDu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1FDu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1FDu,1u,0x18u,0xC1FEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C1FEu:
    if(m==0u&&x==0u&&e==0u){ /* 65 7C Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C1FEu,2u,0x7Cu,0xC200u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C200u:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C200u,3u,0x00u,0xC203u);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C203u:
    if(m==0u&&x==0u&&e==0u){ /* B0 34 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C203u,2u,0x34u,0xC205u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC239u;}
      if(c->pc!=0xC205u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC205u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C205u:
    if(m==0u&&x==0u&&e==0u){ /* BF C0 80 01 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C205u,4u,0x01u,0xC209u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0180C0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C209u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C209u,3u,0x00u,0xC20Cu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C20Cu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C20Cu,1u,0x18u,0xC20Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C20Du:
    if(m==0u&&x==0u&&e==0u){ /* 65 82 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C20Du,2u,0x82u,0xC20Fu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x82u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C20Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 19 00 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C20Fu,3u,0x00u,0xC212u);
      sc_v11_op_compare(r,c->a,0x0019u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C212u:
    if(m==0u&&x==0u&&e==0u){ /* B0 13 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C212u,2u,0x13u,0xC214u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC227u;}
      if(c->pc!=0xC214u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC214u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C214u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C214u,3u,0x01u,0xC217u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C217u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C217u,1u,0x1Au,0xC218u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C218u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C218u,1u,0x1Au,0xC219u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C219u:
    if(m==0u&&x==0u&&e==0u){ /* C9 D1 00 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C219u,3u,0x00u,0xC21Cu);
      sc_v11_op_compare(r,c->a,0x00D1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C21Cu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C21Cu,2u,0x03u,0xC21Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC221u;}
      if(c->pc!=0xC21Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC21Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C221u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C221u,3u,0x01u,0xC224u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C224u:
    if(m==0u&&x==0u&&e==0u){ /* 4C D4 C2 Mesen corrected gameplay frame 4720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C224u,3u,0xC2u,0xC227u);
      c->pc=0xC2D4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C280u:
    if(m==0u&&x==0u&&e==0u){ /* AE F9 01 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C280u,3u,0x01u,0xC283u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C283u:
    if(m==0u&&x==0u&&e==0u){ /* BF C0 80 01 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C283u,4u,0x01u,0xC287u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0180C0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C287u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C287u,3u,0x00u,0xC28Au);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C28Au:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C28Au,1u,0x18u,0xC28Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C28Bu:
    if(m==0u&&x==0u&&e==0u){ /* 65 79 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C28Bu,2u,0x79u,0xC28Du);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C28Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C28Du,3u,0x00u,0xC290u);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C290u:
    if(m==0u&&x==0u&&e==0u){ /* B0 36 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C290u,2u,0x36u,0xC292u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC2C8u;}
      if(c->pc!=0xC292u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC292u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C292u:
    if(m==0u&&x==0u&&e==0u){ /* BF C0 80 01 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C292u,4u,0x01u,0xC296u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0180C0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C296u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C296u,3u,0x00u,0xC299u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C299u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C299u,1u,0x18u,0xC29Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C29Au:
    if(m==0u&&x==0u&&e==0u){ /* 65 7F Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C29Au,2u,0x7Fu,0xC29Cu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C29Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 1E 00 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C29Cu,3u,0x00u,0xC29Fu);
      /* The native city view is 30 cells wide. Widescreen exposes six real
         additional map cells, so delay cursor-led camera scrolling by the
         same six cells while retaining the original 4:3 threshold. */
      sc_v11_op_compare(r,c->a,
                        r->host_widescreen_enabled ? 0x0024u : 0x001Eu,
                        16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C29Fu:
    if(m==0u&&x==0u&&e==0u){ /* B0 12 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C29Fu,2u,0x12u,0xC2A1u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC2B3u;}
      if(c->pc!=0xC2A1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2A1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2A1u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2A1u,3u,0x01u,0xC2A4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2A4u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2A4u,1u,0x1Au,0xC2A5u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2A5u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2A5u,1u,0x1Au,0xC2A6u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2A6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 F9 00 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2A6u,3u,0x00u,0xC2A9u);
      sc_v11_op_compare(r,c->a,
                        r->host_widescreen_enabled ? 0x0129u : 0x00F9u,
                        16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2A9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2A9u,2u,0x03u,0xC2ABu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2AEu;}
      if(c->pc!=0xC2ABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2ABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2AEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2AEu,3u,0x01u,0xC2B1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2B1u:
    if(m==0u&&x==0u&&e==0u){ /* 80 21 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2B1u,2u,0x21u,0xC2B3u);
      if(1){c->pc=0xC2D4u;}
      if(c->pc!=0xC2B3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2B3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2D4u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2D4u,3u,0x00u,0xC2D7u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2D7u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2D7u,2u,0x03u,0xC2D9u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC2DCu;}
      if(c->pc!=0xC2D9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2D9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2D9u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 94 C1 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2D9u,3u,0xC1u,0xC2DCu);
      c->pc=0xC194u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2DCu:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 Mesen corrected gameplay frame 4043; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2DCu,3u,0x01u,0xC2DFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2DFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 Mesen corrected gameplay frame 4043; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2DFu,3u,0x00u,0xC2E2u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2E2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F3 01 Mesen corrected gameplay frame 4043; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2E2u,3u,0x01u,0xC2E5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2E5u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4043; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2E5u,1u,0x60u,0xC2E6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2E6u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2E6u,3u,0x01u,0xC2E9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2E9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 15 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2E9u,2u,0x15u,0xC2EBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC300u;}
      if(c->pc!=0xC2EBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2EBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2EBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2EBu,3u,0x01u,0xC2EEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2EEu:
    if(m==0u&&x==0u&&e==0u){ /* 29 80 40 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2EEu,3u,0x40u,0xC2F1u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2F1u:
    if(m==0u&&x==0u&&e==0u){ /* D0 2F Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2F1u,2u,0x2Fu,0xC2F3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC322u;}
      if(c->pc!=0xC2F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2F3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2F3u,3u,0x01u,0xC2F6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2F6u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 0F Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2F6u,3u,0x0Fu,0xC2F9u);
      sc_v11_op_and(r,0x0F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2F9u:
    if(m==0u&&x==0u&&e==0u){ /* F0 27 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2F9u,2u,0x27u,0xC2FBu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC322u;}
      if(c->pc!=0xC2FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2FBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2FBu,3u,0x01u,0xC2FEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C2FEu:
    if(m==0u&&x==0u&&e==0u){ /* F0 22 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C2FEu,2u,0x22u,0xC300u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC322u;}
      if(c->pc!=0xC300u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC300u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C300u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C300u,1u,0x0Au,0xC301u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C301u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C301u,1u,0x0Au,0xC302u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C302u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C302u,1u,0x0Au,0xC303u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C303u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C303u,1u,0x0Au,0xC304u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C304u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C304u,1u,0x0Au,0xC305u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C305u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C305u,2u,0x05u,0xC307u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC30Cu;}
      if(c->pc!=0xC307u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC307u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C307u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C307u,1u,0x48u,0xC308u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C308u:
    if(m==0u&&x==0u&&e==0u){ /* 20 23 C3 Mesen corrected gameplay frame 3720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C308u,3u,0xC3u,0xC30Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC30Au))return 0;c->pc=0xC323u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C30Bu:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Bu,1u,0x68u,0xC30Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C30Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Cu,1u,0x0Au,0xC30Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C30Du:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Du,2u,0x05u,0xC30Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC314u;}
      if(c->pc!=0xC30Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC30Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C30Fu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C30Fu,1u,0x48u,0xC310u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C310u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3C C3 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C310u,3u,0xC3u,0xC313u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC312u))return 0;c->pc=0xC33Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C313u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C313u,1u,0x68u,0xC314u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C314u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C314u,1u,0x0Au,0xC315u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C315u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C315u,2u,0x05u,0xC317u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC31Cu;}
      if(c->pc!=0xC317u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC317u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C31Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Cu,1u,0x0Au,0xC31Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C31Du:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Du,2u,0x03u,0xC31Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC322u;}
      if(c->pc!=0xC31Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC31Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C31Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 6E C3 Mesen corrected gameplay frame 3660; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C31Fu,3u,0xC3u,0xC322u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC321u))return 0;c->pc=0xC36Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C322u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C322u,1u,0x60u,0xC323u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C323u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 3720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C323u,3u,0x01u,0xC326u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C326u:
    if(m==0u&&x==0u&&e==0u){ /* C9 19 00 Mesen corrected gameplay frame 3720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C326u,3u,0x00u,0xC329u);
      sc_v11_op_compare(r,c->a,0x0019u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C329u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0A Mesen corrected gameplay frame 3720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C329u,2u,0x0Au,0xC32Bu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC335u;}
      if(c->pc!=0xC32Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC32Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C335u:
    if(m==0u&&x==0u&&e==0u){ /* 3A Mesen corrected gameplay frame 3720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C335u,1u,0x3Au,0xC336u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C336u:
    if(m==0u&&x==0u&&e==0u){ /* 3A Mesen corrected gameplay frame 3720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C336u,1u,0x3Au,0xC337u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C337u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 Mesen corrected gameplay frame 3720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C337u,3u,0x01u,0xC33Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C33Au:
    if(m==0u&&x==0u&&e==0u){ /* 80 49 Mesen corrected gameplay frame 3720; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C33Au,2u,0x49u,0xC33Cu);
      if(1){c->pc=0xC385u;}
      if(c->pc!=0xC33Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC33Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C33Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C33Cu,3u,0x01u,0xC33Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C33Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 C0 00 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C33Fu,3u,0x00u,0xC342u);
      sc_v11_op_compare(r,c->a,0x00C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C342u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C342u,2u,0x0Au,0xC344u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC34Eu;}
      if(c->pc!=0xC344u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC344u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C34Eu:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C34Eu,1u,0x1Au,0xC34Fu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C34Fu:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C34Fu,1u,0x1Au,0xC350u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C350u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C350u,3u,0x01u,0xC353u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C353u:
    if(m==0u&&x==0u&&e==0u){ /* 80 30 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C353u,2u,0x30u,0xC355u);
      if(1){c->pc=0xC385u;}
      if(c->pc!=0xC355u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC355u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C36Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 3660; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C36Eu,3u,0x01u,0xC371u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C371u:
    if(m==0u&&x==0u&&e==0u){ /* C9 E8 00 Mesen corrected gameplay frame 3660; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C371u,3u,0x00u,0xC374u);
      /* Widescreen connector for the active gameplay route. */
      sc_v11_op_compare(r,c->a,
                        r->host_widescreen_enabled ? 0x0118u : 0x00E8u,
                        16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C374u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A Mesen corrected gameplay frame 3660; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C374u,2u,0x0Au,0xC376u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC380u;}
      if(c->pc!=0xC376u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC376u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C380u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 3660; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C380u,1u,0x1Au,0xC381u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C381u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 3660; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C381u,1u,0x1Au,0xC382u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C382u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 Mesen corrected gameplay frame 3660; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C382u,3u,0x01u,0xC385u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C385u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C385u,3u,0x00u,0xC388u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C388u:
    if(m==0u&&x==0u&&e==0u){ /* D0 98 Mesen corrected gameplay frame 3060; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C388u,2u,0x98u,0xC38Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC322u;}
      if(c->pc!=0xC38Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC38Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C38Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 01 Mesen corrected gameplay frame 3063; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C38Au,3u,0x01u,0xC38Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C38Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3063; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C38Du,1u,0x60u,0xC38Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3CFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3CFu,2u,0x30u,0xC3D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3CFu,2u,0x30u,0xC3D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3D1u:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3D1u,3u,0x02u,0xC3D4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3D4u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3D4u,2u,0x79u,0xC3D6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3D6u:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3D6u,3u,0x01u,0xC3D9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3D9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3D9u,2u,0x08u,0xC3DBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC3E3u;}
      if(c->pc!=0xC3DBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3DBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3DBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3DBu,3u,0x00u,0xC3DEu);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3DEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 01 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3DEu,3u,0x02u,0xC3E1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0201u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3E1u:
    if(m==0u&&x==0u&&e==0u){ /* 80 16 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3E1u,2u,0x16u,0xC3E3u);
      if(1){c->pc=0xC3F9u;}
      if(c->pc!=0xC3E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3E3u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3E3u,3u,0x01u,0xC3E6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3E6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 38 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3E6u,3u,0x00u,0xC3E9u);
      sc_v11_op_compare(r,c->a,0x0038u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3E9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3E9u,2u,0x08u,0xC3EBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3F3u;}
      if(c->pc!=0xC3EBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3EBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3EBu:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3EBu,3u,0x01u,0xC3EEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3EEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 30 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3EEu,3u,0x00u,0xC3F1u);
      sc_v11_op_compare(r,c->a,0x0030u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3F1u:
    if(m==0u&&x==0u&&e==0u){ /* B0 E8 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3F1u,2u,0xE8u,0xC3F3u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC3DBu;}
      if(c->pc!=0xC3F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3F3u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 01 02 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3F3u,3u,0x02u,0xC3F6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0201u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3F6u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 3B 02 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3F6u,3u,0x02u,0xC3F9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3F9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3F9u,3u,0x02u,0xC3FCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3FCu:
    if(m==0u&&x==0u&&e==0u){ /* C5 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3FCu,2u,0x79u,0xC3FEu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C3FEu:
    if(m==0u&&x==0u&&e==0u){ /* F0 33 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C3FEu,2u,0x33u,0xC400u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC433u;}
      if(c->pc!=0xC400u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC400u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
