/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000F0(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03C00Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 05 0C Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C00Eu,3u,0x0Cu,0xC011u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C05u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C011u:
    if(m==0u&&x==0u&&e==0u){ /* C9 3C 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C011u,3u,0x00u,0xC014u);
      sc_v11_op_compare(r,c->a,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C014u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C014u,2u,0x05u,0xC016u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC01Bu;}
      if(c->pc!=0xC016u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC016u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C01Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 32 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C01Bu,3u,0x00u,0xC01Eu);
      sc_v11_op_compare(r,c->a,0x0032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C01Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C01Eu,2u,0x06u,0xC020u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC026u;}
      if(c->pc!=0xC020u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC020u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C026u:
    if(m==0u&&x==0u&&e==0u){ /* E0 00 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C026u,3u,0x00u,0xC029u);
      sc_v11_op_compare(r,c->x,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C029u:
    if(m==0u&&x==0u&&e==0u){ /* D0 04 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C029u,2u,0x04u,0xC02Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC02Fu;}
      if(c->pc!=0xC02Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC02Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C02Bu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C02Bu,1u,0xE8u,0xC02Cu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C02Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 96 BE Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C02Cu,3u,0xBEu,0xC02Fu);
      c->pc=0xBE96u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C030u:
    if(m==0u&&x==0u&&e==0u){ /* AC 87 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C030u,3u,0x03u,0xC033u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0387u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C033u:
    if(m==0u&&x==0u&&e==0u){ /* D0 50 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C033u,2u,0x50u,0xC035u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC085u;}
      if(c->pc!=0xC035u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC035u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C035u:
    if(m==0u&&x==0u&&e==0u){ /* C9 06 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C035u,3u,0x00u,0xC038u);
      sc_v11_op_compare(r,c->a,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C038u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C038u,2u,0x05u,0xC03Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC03Fu;}
      if(c->pc!=0xC03Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC03Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C03Fu:
    if(m==0u&&x==0u&&e==0u){ /* CD 81 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C03Fu,3u,0x03u,0xC042u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0381u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C042u:
    if(m==0u&&x==0u&&e==0u){ /* F0 41 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C042u,2u,0x41u,0xC044u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC085u;}
      if(c->pc!=0xC044u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC044u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C044u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C044u,1u,0x1Au,0xC045u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C045u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 89 03 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C045u,3u,0x03u,0xC048u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0389u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C048u:
    if(m==0u&&x==0u&&e==0u){ /* A9 CE 05 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C048u,3u,0x05u,0xC04Bu);
      sc_v11_op_lda(r,0x05CEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C04Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 41 0B Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C04Bu,3u,0x0Bu,0xC04Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B41u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C04Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C04Eu,3u,0x00u,0xC051u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C051u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 43 0B Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C051u,3u,0x0Bu,0xC054u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B43u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C054u:
    if(m==0u&&x==0u&&e==0u){ /* A0 19 00 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C054u,3u,0x00u,0xC057u);
      sc_v11_op_ldy(r,0x0019u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C057u:
    if(m==0u&&x==0u&&e==0u){ /* 8C 45 0B Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C057u,3u,0x0Bu,0xC05Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B45u),c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C05Au:
    if(m==0u&&x==0u&&e==0u){ /* AE 41 0B Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C05Au,3u,0x0Bu,0xC05Du);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B41u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C05Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 4B 01 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C05Du,3u,0x01u,0xC060u);
      sc_v11_op_lda(r,0x014Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C060u:
    if(m==0u&&x==0u&&e==0u){ /* AC D7 00 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C060u,3u,0x00u,0xC063u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x00D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C063u:
    if(m==0u&&x==0u&&e==0u){ /* D0 20 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C063u,2u,0x20u,0xC065u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC085u;}
      if(c->pc!=0xC065u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC065u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C065u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 38 7E Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C065u,4u,0x7Eu,0xC069u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C069u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C069u,1u,0xE8u,0xC06Au);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C06Au:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C06Au,1u,0xE8u,0xC06Bu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C06Bu:
    if(m==0u&&x==0u&&e==0u){ /* CE 45 0B Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C06Bu,3u,0x0Bu,0xC06Eu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B45u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C06Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F0 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C06Eu,2u,0xF0u,0xC070u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC060u;}
      if(c->pc!=0xC070u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC070u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C070u:
    if(m==0u&&x==0u&&e==0u){ /* AD 41 0B Mesen corrected gameplay frame 4256; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C070u,3u,0x0Bu,0xC073u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B41u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C073u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4256; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C073u,1u,0x18u,0xC074u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C074u:
    if(m==0u&&x==0u&&e==0u){ /* 69 40 00 Mesen corrected gameplay frame 4256; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C074u,3u,0x00u,0xC077u);
      sc_v11_op_adc(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C077u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 41 0B Mesen corrected gameplay frame 4256; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C077u,3u,0x0Bu,0xC07Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B41u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C07Au:
    if(m==0u&&x==0u&&e==0u){ /* CE 43 0B Mesen corrected gameplay frame 4256; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C07Au,3u,0x0Bu,0xC07Du);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B43u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C07Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 D5 Mesen corrected gameplay frame 4256; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C07Du,2u,0xD5u,0xC07Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC054u;}
      if(c->pc!=0xC07Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC07Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C07Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 2C 01 Mesen corrected gameplay frame 4256; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C07Fu,3u,0x01u,0xC082u);
      sc_v11_op_lda(r,0x012Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C082u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 8B 03 Mesen corrected gameplay frame 4256; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C082u,3u,0x03u,0xC085u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x038Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C085u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C085u,1u,0x60u,0xC086u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0ADu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0ADu,2u,0x30u,0xC0AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0AFu:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0AFu,3u,0x03u,0xC0B2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0395u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0B2u:
    if(m==0u&&x==0u&&e==0u){ /* 0D D7 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0B2u,3u,0x00u,0xC0B5u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x00D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0B5u:
    if(m==0u&&x==0u&&e==0u){ /* D0 42 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0B5u,2u,0x42u,0xC0B7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC0F9u;}
      if(c->pc!=0xC0B7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0B7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0B7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FA C0 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0B7u,3u,0xC0u,0xC0BAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0B9u))return 0;c->pc=0xC0FAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0BAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 CD C3 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0BAu,3u,0xC3u,0xC0BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0BCu))return 0;c->pc=0xC3CDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0BDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 3E 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0BDu,3u,0x00u,0xC0C0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x003Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0C0u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0C0u,3u,0x00u,0xC0C3u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0C3u:
    if(m==0u&&x==0u&&e==0u){ /* F0 34 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0C3u,2u,0x34u,0xC0C5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC0F9u;}
      if(c->pc!=0xC0C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0C5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 91 C3 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0C5u,3u,0xC3u,0xC0C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0C7u))return 0;c->pc=0xC391u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0C8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 05 C4 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0C8u,3u,0xC4u,0xC0CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0CAu))return 0;c->pc=0xC405u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0CBu:
    if(m==1u&&x==1u&&e==0u){ /* B0 2C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0CBu,2u,0x2Cu,0xC0CDu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC0F9u;}
      if(c->pc!=0xC0CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC0CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0CDu:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0CDu,2u,0x30u,0xC0CFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0CFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 31 C1 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0CFu,3u,0xC1u,0xC0D2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0D1u))return 0;c->pc=0xC131u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0D2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4C C1 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0D2u,3u,0xC1u,0xC0D5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0D4u))return 0;c->pc=0xC14Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0D5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 86 C1 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0D5u,3u,0xC1u,0xC0D8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0D7u))return 0;c->pc=0xC186u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0D8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CE C1 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0D8u,3u,0xC1u,0xC0DBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0DAu))return 0;c->pc=0xC1CEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0DBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 0F C2 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0DBu,3u,0xC2u,0xC0DEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0DDu))return 0;c->pc=0xC20Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0DEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 6B C2 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0DEu,3u,0xC2u,0xC0E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E0u))return 0;c->pc=0xC26Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0E1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 91 C2 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0E1u,3u,0xC2u,0xC0E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E3u))return 0;c->pc=0xC291u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0E4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B7 C2 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0E4u,3u,0xC2u,0xC0E7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E6u))return 0;c->pc=0xC2B7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0E7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 DD C2 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0E7u,3u,0xC2u,0xC0EAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0E9u))return 0;c->pc=0xC2DDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0EAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 03 C3 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0EAu,3u,0xC3u,0xC0EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0ECu))return 0;c->pc=0xC303u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0EDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 27 C3 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0EDu,3u,0xC3u,0xC0F0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0EFu))return 0;c->pc=0xC327u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0F0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4B C3 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F0u,3u,0xC3u,0xC0F3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0F2u))return 0;c->pc=0xC34Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0F3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 69 C3 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F3u,3u,0xC3u,0xC0F6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0F5u))return 0;c->pc=0xC369u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0F6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 AF C3 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F6u,3u,0xC3u,0xC0F9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0F8u))return 0;c->pc=0xC3AFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0F9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0F9u,1u,0x60u,0xC0FAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0FAu:
    if(m==0u&&x==0u&&e==0u){ /* AC A5 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0FAu,3u,0x0Cu,0xC0FDu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C0FDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 1A C1 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C0FDu,3u,0xC1u,0xC100u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC0FFu))return 0;c->pc=0xC11Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C100u:
    if(m==0u&&x==0u&&e==0u){ /* 90 17 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C100u,2u,0x17u,0xC102u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC119u;}
      if(c->pc!=0xC102u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC102u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C119u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C119u,1u,0x60u,0xC11Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C11Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C11Au,2u,0x20u,0xC11Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C11Cu:
    if(m==1u&&x==0u&&e==0u){ /* AD A5 0B Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C11Cu,3u,0x0Bu,0xC11Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0BA5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C11Fu:
    if(m==1u&&x==0u&&e==0u){ /* D9 95 C0 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C11Fu,3u,0xC0u,0xC122u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC095u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C122u:
    if(m==1u&&x==0u&&e==0u){ /* AD A6 0B Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C122u,3u,0x0Bu,0xC125u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0BA6u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C125u:
    if(m==1u&&x==0u&&e==0u){ /* F9 9D C0 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C125u,3u,0xC0u,0xC128u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC09Du)),8u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C128u:
    if(m==1u&&x==0u&&e==0u){ /* AD A7 0B Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C128u,3u,0x0Bu,0xC12Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0BA7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C12Bu:
    if(m==1u&&x==0u&&e==0u){ /* F9 A5 C0 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C12Bu,3u,0xC0u,0xC12Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xC0A5u)),8u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C12Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C12Eu,2u,0x20u,0xC130u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C130u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C130u,1u,0x60u,0xC131u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C131u:
    if(m==0u&&x==0u&&e==0u){ /* AD A7 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C131u,3u,0x0Cu,0xC134u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C134u:
    if(m==0u&&x==0u&&e==0u){ /* D0 15 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C134u,2u,0x15u,0xC136u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC14Bu;}
      if(c->pc!=0xC136u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC136u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C136u:
    if(m==0u&&x==0u&&e==0u){ /* AD A5 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C136u,3u,0x0Cu,0xC139u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C139u:
    if(m==0u&&x==0u&&e==0u){ /* F0 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C139u,2u,0x10u,0xC13Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC14Bu;}
      if(c->pc!=0xC13Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC13Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C14Bu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C14Bu,1u,0x60u,0xC14Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C14Cu:
    if(m==0u&&x==0u&&e==0u){ /* AC A9 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C14Cu,3u,0x0Cu,0xC14Fu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CA9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C14Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 1A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C14Fu,2u,0x1Au,0xC151u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC16Bu;}
      if(c->pc!=0xC151u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC151u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C151u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 0D Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C151u,3u,0x0Du,0xC154u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C154u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C154u,3u,0x00u,0xC157u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C157u:
    if(m==0u&&x==0u&&e==0u){ /* 90 2C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C157u,2u,0x2Cu,0xC159u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC185u;}
      if(c->pc!=0xC159u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC159u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C185u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C185u,1u,0x60u,0xC186u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C186u:
    if(m==0u&&x==0u&&e==0u){ /* AD AB 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C186u,3u,0x0Cu,0xC189u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CABu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C189u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C189u,3u,0x00u,0xC18Cu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C18Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C18Cu,1u,0x0Au,0xC18Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C18Du:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C18Du,1u,0xA8u,0xC18Eu);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C18Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 15 0E Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C18Eu,3u,0x0Eu,0xC191u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E15u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C191u:
    if(m==0u&&x==0u&&e==0u){ /* D9 C0 C1 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C191u,3u,0xC1u,0xC194u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC1C0u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C194u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C194u,2u,0x05u,0xC196u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC19Bu;}
      if(c->pc!=0xC196u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC196u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C19Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD AC 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C19Bu,3u,0x0Cu,0xC19Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CACu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C19Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C19Eu,3u,0x00u,0xC1A1u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1A1u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1A1u,1u,0x0Au,0xC1A2u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1A2u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1A2u,1u,0xA8u,0xC1A3u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1A3u:
    if(m==0u&&x==0u&&e==0u){ /* AD 05 0E Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1A3u,3u,0x0Eu,0xC1A6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E05u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1A6u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1A6u,1u,0x18u,0xC1A7u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1A7u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 03 0E Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1A7u,3u,0x0Eu,0xC1AAu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E03u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1AAu:
    if(m==0u&&x==0u&&e==0u){ /* D9 C8 C1 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1AAu,3u,0xC1u,0xC1ADu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC1C8u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1ADu:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1ADu,2u,0x10u,0xC1AFu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC1BFu;}
      if(c->pc!=0xC1AFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1AFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1BFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1BFu,1u,0x60u,0xC1C0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1CEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1CEu,2u,0x20u,0xC1D0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1D0u:
    if(m==1u&&x==0u&&e==0u){ /* AD AE 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1D0u,3u,0x0Cu,0xC1D3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0CAEu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1D3u:
    if(m==1u&&x==0u&&e==0u){ /* F0 15 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1D3u,2u,0x15u,0xC1D5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC1EAu;}
      if(c->pc!=0xC1D5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1D5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1EAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1EAu,2u,0x20u,0xC1ECu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1ECu:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 0D Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1ECu,3u,0x0Du,0xC1EFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C1EFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 17 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C1EFu,2u,0x17u,0xC1F1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC208u;}
      if(c->pc!=0xC1F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC1F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C208u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C208u,1u,0x60u,0xC209u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C20Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD AF 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C20Fu,3u,0x0Cu,0xC212u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CAFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C212u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C212u,3u,0x00u,0xC215u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C215u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C215u,1u,0x0Au,0xC216u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C216u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C216u,1u,0xA8u,0xC217u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C217u:
    if(m==0u&&x==0u&&e==0u){ /* AD 27 0E Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C217u,3u,0x0Eu,0xC21Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E27u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C21Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 0A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C21Au,2u,0x0Au,0xC21Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC226u;}
      if(c->pc!=0xC21Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC21Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C21Cu:
    if(m==0u&&x==0u&&e==0u){ /* D9 4D C2 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C21Cu,3u,0xC2u,0xC21Fu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC24Du)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C21Fu:
    if(m==0u&&x==0u&&e==0u){ /* B0 05 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C21Fu,2u,0x05u,0xC221u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC226u;}
      if(c->pc!=0xC221u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC221u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C226u:
    if(m==0u&&x==0u&&e==0u){ /* AD B0 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C226u,3u,0x0Cu,0xC229u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C229u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C229u,3u,0x00u,0xC22Cu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C22Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C22Cu,1u,0x0Au,0xC22Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C22Du:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C22Du,1u,0xA8u,0xC22Eu);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C22Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD A5 0B Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C22Eu,3u,0x0Bu,0xC231u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C231u:
    if(m==0u&&x==0u&&e==0u){ /* D9 57 C2 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C231u,3u,0xC2u,0xC234u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC257u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C234u:
    if(m==0u&&x==0u&&e==0u){ /* AD A7 0B Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C234u,3u,0x0Bu,0xC237u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BA7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C237u:
    if(m==0u&&x==0u&&e==0u){ /* F9 61 C2 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C237u,3u,0xC2u,0xC23Au);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC261u)),16u);sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C23Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C23Au,2u,0x10u,0xC23Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC24Cu;}
      if(c->pc!=0xC23Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC23Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C24Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C24Cu,1u,0x60u,0xC24Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C26Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD B1 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C26Bu,3u,0x0Cu,0xC26Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C26Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C26Eu,1u,0x0Au,0xC26Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C26Fu:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C26Fu,1u,0xA8u,0xC270u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C270u:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 0E Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C270u,3u,0x0Eu,0xC273u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E07u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C273u:
    if(m==0u&&x==0u&&e==0u){ /* D9 89 C2 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C273u,3u,0xC2u,0xC276u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC289u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C276u:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C276u,2u,0x10u,0xC278u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC288u;}
      if(c->pc!=0xC278u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC278u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C288u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C288u,1u,0x60u,0xC289u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C291u:
    if(m==0u&&x==0u&&e==0u){ /* AD B3 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C291u,3u,0x0Cu,0xC294u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C294u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C294u,1u,0x0Au,0xC295u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C295u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C295u,1u,0xA8u,0xC296u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C296u:
    if(m==0u&&x==0u&&e==0u){ /* AD 09 0E Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C296u,3u,0x0Eu,0xC299u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E09u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C299u:
    if(m==0u&&x==0u&&e==0u){ /* D9 AF C2 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C299u,3u,0xC2u,0xC29Cu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC2AFu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C29Cu:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C29Cu,2u,0x10u,0xC29Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2AEu;}
      if(c->pc!=0xC29Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC29Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2AEu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2AEu,1u,0x60u,0xC2AFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2B7u:
    if(m==0u&&x==0u&&e==0u){ /* AD B5 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2B7u,3u,0x0Cu,0xC2BAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2BAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BAu,1u,0x0Au,0xC2BBu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2BBu:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BBu,1u,0xA8u,0xC2BCu);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2BCu:
    if(m==0u&&x==0u&&e==0u){ /* AD 05 0E Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BCu,3u,0x0Eu,0xC2BFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E05u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2BFu:
    if(m==0u&&x==0u&&e==0u){ /* D9 D5 C2 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2BFu,3u,0xC2u,0xC2C2u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC2D5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2C2u:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2C2u,2u,0x10u,0xC2C4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2D4u;}
      if(c->pc!=0xC2C4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2C4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2D4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2D4u,1u,0x60u,0xC2D5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2DDu:
    if(m==0u&&x==0u&&e==0u){ /* AD B7 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2DDu,3u,0x0Cu,0xC2E0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2E0u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E0u,1u,0x0Au,0xC2E1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2E1u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E1u,1u,0xA8u,0xC2E2u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2E2u:
    if(m==0u&&x==0u&&e==0u){ /* AD 23 0E Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E2u,3u,0x0Eu,0xC2E5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E23u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2E5u:
    if(m==0u&&x==0u&&e==0u){ /* D9 FB C2 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E5u,3u,0xC2u,0xC2E8u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC2FBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2E8u:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2E8u,2u,0x10u,0xC2EAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC2FAu;}
      if(c->pc!=0xC2EAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC2EAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C2FAu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C2FAu,1u,0x60u,0xC2FBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C303u:
    if(m==0u&&x==0u&&e==0u){ /* AD B9 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C303u,3u,0x0Cu,0xC306u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CB9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C306u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C306u,1u,0x0Au,0xC307u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C307u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C307u,1u,0xA8u,0xC308u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C308u:
    if(m==0u&&x==0u&&e==0u){ /* AD 17 0E Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C308u,3u,0x0Eu,0xC30Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E17u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C30Bu:
    if(m==0u&&x==0u&&e==0u){ /* D9 21 C3 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C30Bu,3u,0xC3u,0xC30Eu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC321u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C30Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C30Eu,2u,0x10u,0xC310u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC320u;}
      if(c->pc!=0xC310u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC310u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C320u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C320u,1u,0x60u,0xC321u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C327u:
    if(m==0u&&x==0u&&e==0u){ /* AD BB 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C327u,3u,0x0Cu,0xC32Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CBBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C32Au:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Au,1u,0x0Au,0xC32Bu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C32Bu:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Bu,1u,0xA8u,0xC32Cu);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C32Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 0E Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Cu,3u,0x0Eu,0xC32Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E1Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C32Fu:
    if(m==0u&&x==0u&&e==0u){ /* D9 45 C3 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C32Fu,3u,0xC3u,0xC332u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC345u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C332u:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C332u,2u,0x10u,0xC334u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC344u;}
      if(c->pc!=0xC334u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC334u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C344u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C344u,1u,0x60u,0xC345u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C34Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD BD 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C34Bu,3u,0x0Cu,0xC34Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CBDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C34Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 18 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C34Eu,2u,0x18u,0xC350u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC368u;}
      if(c->pc!=0xC350u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC350u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C350u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 0D Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C350u,3u,0x0Du,0xC353u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C353u:
    if(m==0u&&x==0u&&e==0u){ /* C9 05 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C353u,3u,0x00u,0xC356u);
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C356u:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C356u,2u,0x10u,0xC358u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC368u;}
      if(c->pc!=0xC358u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC358u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C368u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C368u,1u,0x60u,0xC369u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C369u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 0D Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C369u,3u,0x0Du,0xC36Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C36Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C36Cu,3u,0x00u,0xC36Fu);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C36Fu:
    if(m==0u&&x==0u&&e==0u){ /* 90 1F Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C36Fu,2u,0x1Fu,0xC371u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC390u;}
      if(c->pc!=0xC371u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC371u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C390u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C390u,1u,0x60u,0xC391u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C391u:
    if(m==0u&&x==0u&&e==0u){ /* AD C3 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C391u,3u,0x0Cu,0xC394u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CC3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C394u:
    if(m==0u&&x==0u&&e==0u){ /* D0 18 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C394u,2u,0x18u,0xC396u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC3AEu;}
      if(c->pc!=0xC396u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC396u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C396u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 0D Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C396u,3u,0x0Du,0xC399u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DEBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C399u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C399u,3u,0x00u,0xC39Cu);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C39Cu:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C39Cu,2u,0x10u,0xC39Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3AEu;}
      if(c->pc!=0xC39Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC39Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3AEu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3AEu,1u,0x60u,0xC3AFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3AFu:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3AFu,3u,0x0Cu,0xC3B2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CC1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3B2u:
    if(m==0u&&x==0u&&e==0u){ /* D0 18 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3B2u,2u,0x18u,0xC3B4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC3CCu;}
      if(c->pc!=0xC3B4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3B4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3B4u:
    if(m==0u&&x==0u&&e==0u){ /* AD 53 0B Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3B4u,3u,0x0Bu,0xC3B7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B53u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3B7u:
    if(m==0u&&x==0u&&e==0u){ /* C9 9E 07 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3B7u,3u,0x07u,0xC3BAu);
      sc_v11_op_compare(r,c->a,0x079Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3BAu:
    if(m==0u&&x==0u&&e==0u){ /* 90 10 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3BAu,2u,0x10u,0xC3BCu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC3CCu;}
      if(c->pc!=0xC3BCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3BCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3CCu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3CCu,1u,0x60u,0xC3CDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3CDu:
    if(m==0u&&x==0u&&e==0u){ /* AD C5 0C Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3CDu,3u,0x0Cu,0xC3D0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0CC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3D0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 32 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3D0u,2u,0x32u,0xC3D2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC404u;}
      if(c->pc!=0xC3D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3D2u:
    if(m==0u&&x==0u&&e==0u){ /* A0 06 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3D2u,3u,0x00u,0xC3D5u);
      sc_v11_op_ldy(r,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3D5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3E 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3D5u,3u,0x00u,0xC3D8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x003Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3D8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3D8u,3u,0x00u,0xC3DBu);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3DBu:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3DBu,2u,0x01u,0xC3DDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC3DEu;}
      if(c->pc!=0xC3DDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3DDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3DDu:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3DDu,1u,0xC8u,0xC3DEu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3DEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 1A C1 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3DEu,3u,0xC1u,0xC3E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC3E0u))return 0;c->pc=0xC11Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C3E1u:
    if(m==0u&&x==0u&&e==0u){ /* 90 21 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C3E1u,2u,0x21u,0xC3E3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC404u;}
      if(c->pc!=0xC3E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC3E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
