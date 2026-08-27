/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000EF(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03BE12u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE12u,2u,0x30u,0xBE14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE14u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE14u,3u,0x00u,0xBE17u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE17u:
    if(m==0u&&x==0u&&e==0u){ /* AD 51 0B Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE17u,3u,0x0Bu,0xBE1Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B51u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE1Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 3F 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE1Au,3u,0x00u,0xBE1Du);
      sc_v11_op_and(r,0x003Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE1Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 3F 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE1Du,3u,0x00u,0xBE20u);
      sc_v11_op_compare(r,c->a,0x003Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE20u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE20u,2u,0x03u,0xBE22u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBE25u;}
      if(c->pc!=0xBE22u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE22u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE25u:
    if(m==0u&&x==0u&&e==0u){ /* C9 3C 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE25u,3u,0x00u,0xBE28u);
      sc_v11_op_compare(r,c->a,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE28u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE28u,2u,0x03u,0xBE2Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBE2Du;}
      if(c->pc!=0xBE2Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE2Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE2Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 39 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE2Du,3u,0x00u,0xBE30u);
      sc_v11_op_compare(r,c->a,0x0039u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE30u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE30u,2u,0x03u,0xBE32u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBE35u;}
      if(c->pc!=0xBE32u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE32u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE35u:
    if(m==0u&&x==0u&&e==0u){ /* C9 36 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE35u,3u,0x00u,0xBE38u);
      sc_v11_op_compare(r,c->a,0x0036u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE38u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE38u,2u,0x03u,0xBE3Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBE3Du;}
      if(c->pc!=0xBE3Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE3Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE3Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 33 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE3Du,3u,0x00u,0xBE40u);
      sc_v11_op_compare(r,c->a,0x0033u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE40u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE40u,2u,0x03u,0xBE42u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBE45u;}
      if(c->pc!=0xBE42u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE42u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE45u:
    if(m==0u&&x==0u&&e==0u){ /* C9 30 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE45u,3u,0x00u,0xBE48u);
      sc_v11_op_compare(r,c->a,0x0030u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE48u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE48u,2u,0x03u,0xBE4Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBE4Du;}
      if(c->pc!=0xBE4Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE4Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE4Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 2D 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE4Du,3u,0x00u,0xBE50u);
      sc_v11_op_compare(r,c->a,0x002Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE50u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE50u,2u,0x03u,0xBE52u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBE55u;}
      if(c->pc!=0xBE52u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE52u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE55u:
    if(m==0u&&x==0u&&e==0u){ /* C9 2A 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE55u,3u,0x00u,0xBE58u);
      sc_v11_op_compare(r,c->a,0x002Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE58u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE58u,2u,0x03u,0xBE5Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBE5Du;}
      if(c->pc!=0xBE5Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE5Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE5Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 23 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE5Du,3u,0x00u,0xBE60u);
      sc_v11_op_compare(r,c->a,0x0023u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE60u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE60u,2u,0x03u,0xBE62u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBE65u;}
      if(c->pc!=0xBE62u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE62u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE65u:
    if(m==0u&&x==0u&&e==0u){ /* C9 1E 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE65u,3u,0x00u,0xBE68u);
      sc_v11_op_compare(r,c->a,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE68u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE68u,2u,0x03u,0xBE6Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBE6Du;}
      if(c->pc!=0xBE6Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE6Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE6Au:
    if(m==0u&&x==0u&&e==0u){ /* 4C 47 BF Mesen corrected gameplay frame 9334; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE6Au,3u,0xBFu,0xBE6Du);
      c->pc=0xBF47u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE6Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 1C 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE6Du,3u,0x00u,0xBE70u);
      sc_v11_op_compare(r,c->a,0x001Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE70u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE70u,2u,0x03u,0xBE72u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBE75u;}
      if(c->pc!=0xBE72u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE72u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE72u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2B BF Mesen corrected gameplay frame 8936; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE72u,3u,0xBFu,0xBE75u);
      c->pc=0xBF2Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE75u:
    if(m==0u&&x==0u&&e==0u){ /* C9 1A 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE75u,3u,0x00u,0xBE78u);
      sc_v11_op_compare(r,c->a,0x001Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE78u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE78u,2u,0x03u,0xBE7Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBE7Du;}
      if(c->pc!=0xBE7Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE7Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE7Au:
    if(m==0u&&x==0u&&e==0u){ /* 4C 0F BF Mesen corrected gameplay frame 8538; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE7Au,3u,0xBFu,0xBE7Du);
      c->pc=0xBF0Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE7Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 16 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE7Du,3u,0x00u,0xBE80u);
      sc_v11_op_compare(r,c->a,0x0016u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE80u:
    if(m==0u&&x==0u&&e==0u){ /* B0 7A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE80u,2u,0x7Au,0xBE82u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBEFCu;}
      if(c->pc!=0xBE82u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE82u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE82u:
    if(m==0u&&x==0u&&e==0u){ /* C9 12 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE82u,3u,0x00u,0xBE85u);
      sc_v11_op_compare(r,c->a,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE85u:
    if(m==0u&&x==0u&&e==0u){ /* B0 62 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE85u,2u,0x62u,0xBE87u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBEE9u;}
      if(c->pc!=0xBE87u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE87u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE87u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0E 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE87u,3u,0x00u,0xBE8Au);
      sc_v11_op_compare(r,c->a,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE8Au:
    if(m==0u&&x==0u&&e==0u){ /* B0 49 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE8Au,2u,0x49u,0xBE8Cu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBED5u;}
      if(c->pc!=0xBE8Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE8Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE8Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 0A 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE8Cu,3u,0x00u,0xBE8Fu);
      sc_v11_op_compare(r,c->a,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE8Fu:
    if(m==0u&&x==0u&&e==0u){ /* B0 33 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE8Fu,2u,0x33u,0xBE91u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBEC4u;}
      if(c->pc!=0xBE91u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE91u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE91u:
    if(m==0u&&x==0u&&e==0u){ /* C9 05 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE91u,3u,0x00u,0xBE94u);
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE94u:
    if(m==0u&&x==0u&&e==0u){ /* B0 1D Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE94u,2u,0x1Du,0xBE96u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBEB3u;}
      if(c->pc!=0xBE96u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE96u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE96u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8D 0B Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE96u,3u,0x0Bu,0xBE99u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE99u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE99u,1u,0x18u,0xBE9Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE9Au:
    if(m==0u&&x==0u&&e==0u){ /* 6D 95 0B Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE9Au,3u,0x0Bu,0xBE9Du);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE9Du:
    if(m==0u&&x==0u&&e==0u){ /* 6D 91 0B Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE9Du,3u,0x0Bu,0xBEA0u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B91u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEA0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D FF 0D Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEA0u,3u,0x0Du,0xBEA3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DFFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEA3u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 0D Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEA3u,3u,0x0Du,0xBEA6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEA6u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEA6u,1u,0x4Au,0xBEA7u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEA7u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEA7u,1u,0x4Au,0xBEA8u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEA8u:
    if(m==0u&&x==0u&&e==0u){ /* CD 8D 0B Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEA8u,3u,0x0Bu,0xBEABu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEABu:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEABu,2u,0x06u,0xBEADu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBEB3u;}
      if(c->pc!=0xBEADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEADu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEADu,3u,0x00u,0xBEB0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEB0u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEB0u,3u,0xC0u,0xBEB3u);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEB3u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 0D Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEB3u,3u,0x0Du,0xBEB6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEB6u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEB6u,1u,0x4Au,0xBEB7u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEB7u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEB7u,1u,0x4Au,0xBEB8u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEB8u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEB8u,1u,0x4Au,0xBEB9u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEB9u:
    if(m==0u&&x==0u&&e==0u){ /* CD 95 0B Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEB9u,3u,0x0Bu,0xBEBCu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEBCu:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEBCu,2u,0x06u,0xBEBEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBEC4u;}
      if(c->pc!=0xBEBEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEBEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEBEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEBEu,3u,0x00u,0xBEC1u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEC1u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 Mesen corrected gameplay frame 4255; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEC1u,3u,0xC0u,0xBEC4u);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEC4u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 0D Mesen corrected gameplay frame 5357; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEC4u,3u,0x0Du,0xBEC7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEC7u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 5357; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEC7u,1u,0x4Au,0xBEC8u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEC8u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 5357; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEC8u,1u,0x4Au,0xBEC9u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEC9u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 5357; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEC9u,1u,0x4Au,0xBECAu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BECAu:
    if(m==0u&&x==0u&&e==0u){ /* CD 91 0B Mesen corrected gameplay frame 5357; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BECAu,3u,0x0Bu,0xBECDu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B91u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BECDu:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 Mesen corrected gameplay frame 5357; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BECDu,2u,0x06u,0xBECFu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBED5u;}
      if(c->pc!=0xBECFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBECFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BECFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 5357; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BECFu,3u,0x00u,0xBED2u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BED2u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 Mesen corrected gameplay frame 5357; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BED2u,3u,0xC0u,0xBED5u);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BED5u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 0D Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BED5u,3u,0x0Du,0xBED8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BED8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0A 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BED8u,3u,0x00u,0xBEDBu);
      sc_v11_op_compare(r,c->a,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEDBu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0C Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEDBu,2u,0x0Cu,0xBEDDu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBEE9u;}
      if(c->pc!=0xBEDDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEDDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEE9u:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 0D Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEE9u,3u,0x0Du,0xBEECu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEECu:
    if(m==0u&&x==0u&&e==0u){ /* C9 32 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEECu,3u,0x00u,0xBEEFu);
      sc_v11_op_compare(r,c->a,0x0032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEEFu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0B Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEEFu,2u,0x0Bu,0xBEF1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBEFCu;}
      if(c->pc!=0xBEF1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEF1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEFCu:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 0D Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEFCu,3u,0x0Du,0xBEFFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEFFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 0A 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEFFu,3u,0x00u,0xBF02u);
      sc_v11_op_compare(r,c->a,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF02u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0B Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF02u,2u,0x0Bu,0xBF04u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBF0Fu;}
      if(c->pc!=0xBF04u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF04u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C B3 0B Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF0Fu,3u,0x0Bu,0xBF12u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF12u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8B 0B Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF12u,3u,0x0Bu,0xBF15u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF15u:
    if(m==0u&&x==0u&&e==0u){ /* C9 F4 01 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF15u,3u,0x01u,0xBF18u);
      sc_v11_op_compare(r,c->a,0x01F4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF18u:
    if(m==0u&&x==0u&&e==0u){ /* 90 11 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF18u,2u,0x11u,0xBF1Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBF2Bu;}
      if(c->pc!=0xBF1Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF1Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C B7 0B Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF2Bu,3u,0x0Bu,0xBF2Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF2Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 8F 0B Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF2Eu,3u,0x0Bu,0xBF31u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF31u:
    if(m==0u&&x==0u&&e==0u){ /* C9 46 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF31u,3u,0x00u,0xBF34u);
      sc_v11_op_compare(r,c->a,0x0046u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF34u:
    if(m==0u&&x==0u&&e==0u){ /* 90 11 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF34u,2u,0x11u,0xBF36u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBF47u;}
      if(c->pc!=0xBF36u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF36u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF47u:
    if(m==0u&&x==0u&&e==0u){ /* 9C B5 0B Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF47u,3u,0x0Bu,0xBF4Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF4Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 0B Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF4Au,3u,0x0Bu,0xBF4Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B93u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF4Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF4Du,3u,0x00u,0xBF50u);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF50u:
    if(m==0u&&x==0u&&e==0u){ /* 90 11 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF50u,2u,0x11u,0xBF52u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBF63u;}
      if(c->pc!=0xBF52u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF52u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF63u:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 0C Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF63u,3u,0x0Cu,0xBF66u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C07u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF66u:
    if(m==0u&&x==0u&&e==0u){ /* C9 50 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF66u,3u,0x00u,0xBF69u);
      sc_v11_op_compare(r,c->a,0x0050u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF69u:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF69u,2u,0x06u,0xBF6Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBF71u;}
      if(c->pc!=0xBF6Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF6Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF71u:
    if(m==0u&&x==0u&&e==0u){ /* C9 41 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF71u,3u,0x00u,0xBF74u);
      sc_v11_op_compare(r,c->a,0x0041u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF74u:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF74u,2u,0x06u,0xBF76u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBF7Cu;}
      if(c->pc!=0xBF76u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF76u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF7Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD FB 0D Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF7Cu,3u,0x0Du,0xBF7Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF7Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 14 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF7Fu,3u,0x00u,0xBF82u);
      sc_v11_op_compare(r,c->a,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF82u:
    if(m==0u&&x==0u&&e==0u){ /* 90 19 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF82u,2u,0x19u,0xBF84u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBF9Du;}
      if(c->pc!=0xBF84u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF84u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF9Du:
    if(m==0u&&x==0u&&e==0u){ /* AD FB 0D Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF9Du,3u,0x0Du,0xBFA0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFA0u:
    if(m==0u&&x==0u&&e==0u){ /* C9 3C 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFA0u,3u,0x00u,0xBFA3u);
      sc_v11_op_compare(r,c->a,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFA3u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0B Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFA3u,2u,0x0Bu,0xBFA5u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBFB0u;}
      if(c->pc!=0xBFA5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFA5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFB0u:
    if(m==0u&&x==0u&&e==0u){ /* AD FB 0D Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFB0u,3u,0x0Du,0xBFB3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFB3u:
    if(m==0u&&x==0u&&e==0u){ /* C9 3C 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFB3u,3u,0x00u,0xBFB6u);
      sc_v11_op_compare(r,c->a,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFB6u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFB6u,2u,0x0Au,0xBFB8u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBFC2u;}
      if(c->pc!=0xBFB8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFB8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFC2u:
    if(m==0u&&x==0u&&e==0u){ /* AD C5 0D Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFC2u,3u,0x0Du,0xBFC5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFC5u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0D 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFC5u,3u,0x00u,0xBFC8u);
      sc_v11_op_compare(r,c->a,0x000Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFC8u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFC8u,2u,0x05u,0xBFCAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBFCFu;}
      if(c->pc!=0xBFCAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFCAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFCFu:
    if(m==0u&&x==0u&&e==0u){ /* AD C5 0B Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFCFu,3u,0x0Bu,0xBFD2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFD2u:
    if(m==0u&&x==0u&&e==0u){ /* C9 14 00 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFD2u,3u,0x00u,0xBFD5u);
      sc_v11_op_compare(r,c->a,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFD5u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0D Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFD5u,2u,0x0Du,0xBFD7u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBFE4u;}
      if(c->pc!=0xBFD7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFD7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFE4u:
    if(m==0u&&x==0u&&e==0u){ /* AD C9 0B Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFE4u,3u,0x0Bu,0xBFE7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFE7u:
    if(m==0u&&x==0u&&e==0u){ /* C9 BC 02 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFE7u,3u,0x02u,0xBFEAu);
      sc_v11_op_compare(r,c->a,0x02BCu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFEAu:
    if(m==0u&&x==0u&&e==0u){ /* B0 0D Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFEAu,2u,0x0Du,0xBFECu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBFF9u;}
      if(c->pc!=0xBFECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFF9u:
    if(m==0u&&x==0u&&e==0u){ /* AD C7 0B Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFF9u,3u,0x0Bu,0xBFFCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFFCu:
    if(m==0u&&x==0u&&e==0u){ /* C9 BC 02 Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFFCu,3u,0x02u,0xBFFFu);
      sc_v11_op_compare(r,c->a,0x02BCu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFFFu:
    if(m==0u&&x==0u&&e==0u){ /* B0 0D Mesen corrected gameplay frame 6152; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFFFu,2u,0x0Du,0xC001u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC00Eu;}
      if(c->pc!=0xC001u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC001u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
