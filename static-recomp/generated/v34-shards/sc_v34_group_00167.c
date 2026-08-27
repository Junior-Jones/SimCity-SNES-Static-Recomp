/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00167(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x059C31u:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 00 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059C31u,3u,0x00u,0x9C34u);
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C34u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059C34u,2u,0x03u,0x9C36u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9C39u;}
      if(c->pc!=0x9C36u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9C36u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C36u:
    if(m==0u&&x==0u&&e==0u){ /* 4C C3 9C Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059C36u,3u,0x9Cu,0x9C39u);
      c->pc=0x9CC3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CC3u:
    if(m==0u&&x==0u&&e==0u){ /* C9 81 00 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059CC3u,3u,0x00u,0x9CC6u);
      sc_v11_op_compare(r,c->a,0x0081u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CC6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 6E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059CC6u,2u,0x6Eu,0x9CC8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9D36u;}
      if(c->pc!=0x9CC8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9CC8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D36u:
    if(m==0u&&x==0u&&e==0u){ /* C9 82 00 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D36u,3u,0x00u,0x9D39u);
      sc_v11_op_compare(r,c->a,0x0082u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D39u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D39u,2u,0x03u,0x9D3Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9D3Eu;}
      if(c->pc!=0x9D3Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9D3Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D3Bu:
    if(m==0u&&x==0u&&e==0u){ /* 4C D8 9D Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D3Bu,3u,0x9Du,0x9D3Eu);
      c->pc=0x9DD8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D3Eu:
    if(m==0u&&x==0u&&e==0u){ /* A2 B6 04 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D3Eu,3u,0x04u,0x9D41u);
      sc_v11_op_ldx(r,0x04B6u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D41u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D41u,3u,0x01u,0x9D44u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D44u:
    if(m==0u&&x==0u&&e==0u){ /* 10 55 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D44u,2u,0x55u,0x9D46u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x9D9Bu;}
      if(c->pc!=0x9D46u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9D46u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D46u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3C 08 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D46u,3u,0x08u,0x9D49u);
      sc_v11_op_lda(r,0x083Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D49u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D49u,4u,0x7Eu,0x9D4Du);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D4Du:
    if(m==0u&&x==0u&&e==0u){ /* 9F BE 28 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D4Du,4u,0x7Eu,0x9D51u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E28BEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D51u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D51u,1u,0x1Au,0x9D52u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D52u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 42 28 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D52u,4u,0x7Eu,0x9D56u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2842u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D56u:
    if(m==0u&&x==0u&&e==0u){ /* A9 4A 08 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D56u,3u,0x08u,0x9D59u);
      sc_v11_op_lda(r,0x084Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D59u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 28 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D59u,4u,0x7Eu,0x9D5Du);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2880u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D5Du:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D5Du,1u,0x1Au,0x9D5Eu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D5Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9F C2 28 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D5Eu,4u,0x7Eu,0x9D62u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E28C2u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D62u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 82 28 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D62u,4u,0x7Eu,0x9D66u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2882u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D66u:
    if(m==0u&&x==0u&&e==0u){ /* A9 4D 08 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D66u,3u,0x08u,0x9D69u);
      sc_v11_op_lda(r,0x084Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D69u:
    if(m==0u&&x==0u&&e==0u){ /* 9F C0 28 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D69u,4u,0x7Eu,0x9D6Du);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E28C0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D6Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 47 08 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D6Du,3u,0x08u,0x9D70u);
      sc_v11_op_lda(r,0x0847u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D70u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 29 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D70u,4u,0x7Eu,0x9D74u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2900u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D74u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3E 08 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D74u,3u,0x08u,0x9D77u);
      sc_v11_op_lda(r,0x083Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D77u:
    if(m==0u&&x==0u&&e==0u){ /* 9F FE 28 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D77u,4u,0x7Eu,0x9D7Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E28FEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D7Bu:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D7Bu,1u,0x1Au,0x9D7Cu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D7Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 02 29 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D7Cu,4u,0x7Eu,0x9D80u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2902u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D80u:
    if(m==0u&&x==0u&&e==0u){ /* AF BD 21 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D80u,4u,0x7Eu,0x9D84u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E21BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D84u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D84u,1u,0x18u,0x9D85u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D85u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D85u,3u,0x00u,0x9D88u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D88u:
    if(m==0u&&x==0u&&e==0u){ /* 8F BD 21 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D88u,4u,0x7Eu,0x9D8Cu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21BDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D8Cu:
    if(m==0u&&x==0u&&e==0u){ /* AF C1 21 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D8Cu,4u,0x7Eu,0x9D90u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E21C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D90u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D90u,1u,0x18u,0x9D91u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D91u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D91u,3u,0x00u,0x9D94u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D94u:
    if(m==0u&&x==0u&&e==0u){ /* 8F C1 21 7E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D94u,4u,0x7Eu,0x9D98u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21C1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D98u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2B 9E Mesen corrected gameplay frame 2180; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D98u,3u,0x9Eu,0x9D9Bu);
      c->pc=0x9E2Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D9Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 38 08 Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D9Bu,3u,0x08u,0x9D9Eu);
      sc_v11_op_lda(r,0x0838u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059D9Eu,4u,0x7Eu,0x9DA2u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DA2u:
    if(m==0u&&x==0u&&e==0u){ /* 9F BE 28 7E Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DA2u,4u,0x7Eu,0x9DA6u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E28BEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DA6u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DA6u,1u,0x1Au,0x9DA7u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DA7u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 42 28 7E Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DA7u,4u,0x7Eu,0x9DABu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2842u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DABu:
    if(m==0u&&x==0u&&e==0u){ /* A9 48 08 Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DABu,3u,0x08u,0x9DAEu);
      sc_v11_op_lda(r,0x0848u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DAEu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 28 7E Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DAEu,4u,0x7Eu,0x9DB2u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2880u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DB2u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DB2u,1u,0x1Au,0x9DB3u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DB3u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 82 28 7E Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DB3u,4u,0x7Eu,0x9DB7u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2882u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DB7u:
    if(m==0u&&x==0u&&e==0u){ /* 9F C2 28 7E Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DB7u,4u,0x7Eu,0x9DBBu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E28C2u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DBBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 4C 08 Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DBBu,3u,0x08u,0x9DBEu);
      sc_v11_op_lda(r,0x084Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DBEu:
    if(m==0u&&x==0u&&e==0u){ /* 9F C0 28 7E Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DBEu,4u,0x7Eu,0x9DC2u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E28C0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DC2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 45 08 Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DC2u,3u,0x08u,0x9DC5u);
      sc_v11_op_lda(r,0x0845u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DC5u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 29 7E Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DC5u,4u,0x7Eu,0x9DC9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2900u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DC9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3A 08 Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DC9u,3u,0x08u,0x9DCCu);
      sc_v11_op_lda(r,0x083Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DCCu:
    if(m==0u&&x==0u&&e==0u){ /* 9F FE 28 7E Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DCCu,4u,0x7Eu,0x9DD0u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E28FEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DD0u:
    if(m==0u&&x==0u&&e==0u){ /* 1A Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DD0u,1u,0x1Au,0x9DD1u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DD1u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 02 29 7E Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DD1u,4u,0x7Eu,0x9DD5u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2902u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DD5u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2B 9E Mesen corrected gameplay frame 2182; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DD5u,3u,0x9Eu,0x9DD8u);
      c->pc=0x9E2Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DD8u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DD8u,1u,0x0Au,0x9DD9u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DD9u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DD9u,1u,0xA8u,0x9DDAu);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DDAu:
    if(m==0u&&x==0u&&e==0u){ /* BE F9 DB Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DDAu,3u,0xDBu,0x9DDDu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDBF9u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DDDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DDDu,3u,0x01u,0x9DE0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DE0u:
    if(m==0u&&x==0u&&e==0u){ /* 10 2D Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DE0u,2u,0x2Du,0x9DE2u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x9E0Fu;}
      if(c->pc!=0x9DE2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9DE2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DE2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 34 08 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DE2u,3u,0x08u,0x9DE5u);
      sc_v11_op_lda(r,0x0834u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DE5u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DE5u,4u,0x7Eu,0x9DE9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DE9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 35 08 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DE9u,3u,0x08u,0x9DECu);
      sc_v11_op_lda(r,0x0835u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DECu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 42 28 7E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DECu,4u,0x7Eu,0x9DF0u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2842u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DF0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 36 08 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DF0u,3u,0x08u,0x9DF3u);
      sc_v11_op_lda(r,0x0836u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DF3u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 28 7E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DF3u,4u,0x7Eu,0x9DF7u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2880u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DF7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 37 08 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DF7u,3u,0x08u,0x9DFAu);
      sc_v11_op_lda(r,0x0837u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DFAu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 82 28 7E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DFAu,4u,0x7Eu,0x9DFEu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2882u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DFEu:
    if(m==0u&&x==0u&&e==0u){ /* 98 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DFEu,1u,0x98u,0x9DFFu);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059DFFu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059DFFu,1u,0x0Au,0x9E00u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E00u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E00u,1u,0xAAu,0x9E01u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E01u:
    if(m==0u&&x==0u&&e==0u){ /* BF 01 21 7E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E01u,4u,0x7Eu,0x9E05u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E2101u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E05u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E05u,1u,0x18u,0x9E06u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E06u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E06u,3u,0x00u,0x9E09u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E09u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 01 21 7E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E09u,4u,0x7Eu,0x9E0Du);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2101u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E0Du:
    if(m==0u&&x==0u&&e==0u){ /* 80 1C Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E0Du,2u,0x1Cu,0x9E0Fu);
      if(1){c->pc=0x9E2Bu;}
      if(c->pc!=0x9E0Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9E0Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E0Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 30 08 Mesen corrected gameplay frame 1902; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E0Fu,3u,0x08u,0x9E12u);
      sc_v11_op_lda(r,0x0830u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E12u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E Mesen corrected gameplay frame 1902; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E12u,4u,0x7Eu,0x9E16u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E16u:
    if(m==0u&&x==0u&&e==0u){ /* A9 31 08 Mesen corrected gameplay frame 1902; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E16u,3u,0x08u,0x9E19u);
      sc_v11_op_lda(r,0x0831u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E19u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 42 28 7E Mesen corrected gameplay frame 1902; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E19u,4u,0x7Eu,0x9E1Du);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2842u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E1Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 32 08 Mesen corrected gameplay frame 1902; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E1Du,3u,0x08u,0x9E20u);
      sc_v11_op_lda(r,0x0832u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E20u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 28 7E Mesen corrected gameplay frame 1902; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E20u,4u,0x7Eu,0x9E24u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2880u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E24u:
    if(m==0u&&x==0u&&e==0u){ /* A9 33 08 Mesen corrected gameplay frame 1902; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E24u,3u,0x08u,0x9E27u);
      sc_v11_op_lda(r,0x0833u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E27u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 82 28 7E Mesen corrected gameplay frame 1902; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E27u,4u,0x7Eu,0x9E2Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2882u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 2F 9E Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E2Bu,3u,0x9Eu,0x9E2Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9E2Du))return 0;c->pc=0x9E2Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E2Eu:
    if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E2Eu,1u,0x6Bu,0x9E2Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E2Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E2Fu,2u,0x20u,0x9E31u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E31u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 48 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E31u,3u,0x48u,0x9E34u);
      sc_v11_op_ldx(r,0x4800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E34u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 47 01 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E34u,3u,0x01u,0x9E37u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0147u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E37u:
    if(m==1u&&x==0u&&e==0u){ /* A2 18 00 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E37u,3u,0x00u,0x9E3Au);
      sc_v11_op_ldx(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E3Au:
    if(m==1u&&x==0u&&e==0u){ /* 8E 77 01 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E3Au,3u,0x01u,0x9E3Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0177u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E3Du:
    if(m==1u&&x==0u&&e==0u){ /* A2 40 28 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E3Du,3u,0x28u,0x9E40u);
      sc_v11_op_ldx(r,0x2840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E40u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 67 01 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E40u,3u,0x01u,0x9E43u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0167u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E43u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 08 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E43u,3u,0x08u,0x9E46u);
      sc_v11_op_ldx(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E46u:
    if(m==1u&&x==0u&&e==0u){ /* 8E 87 01 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E46u,3u,0x01u,0x9E49u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0187u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E49u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B7 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E49u,2u,0xB7u,0x9E4Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E4Bu:
    if(m==1u&&x==0u&&e==0u){ /* 09 04 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E4Bu,2u,0x04u,0x9E4Du);
      sc_v11_op_ora(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E4Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 B7 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E4Du,2u,0xB7u,0x9E4Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E4Fu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059E4Fu,1u,0x60u,0x9E50u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
