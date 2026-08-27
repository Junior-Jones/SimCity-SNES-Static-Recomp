/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00071(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01C400u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C400u,3u,0xFFu,0xC403u);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C403u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EF 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C403u,3u,0x01u,0xC406u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C406u:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C406u,3u,0x02u,0xC409u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C409u:
    if(m==0u&&x==0u&&e==0u){ /* F0 28 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C409u,2u,0x28u,0xC40Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC433u;}
      if(c->pc!=0xC40Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC40Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C40Bu:
    if(m==0u&&x==0u&&e==0u){ /* AE 0D 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C40Bu,3u,0x02u,0xC40Eu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C40Eu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 80 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C40Eu,4u,0x01u,0xC412u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C412u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C412u,3u,0x00u,0xC415u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C415u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F9 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C415u,3u,0x01u,0xC418u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C418u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C418u,3u,0x01u,0xC41Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C41Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 F8 FF Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C41Bu,3u,0xFFu,0xC41Eu);
      sc_v11_op_and(r,0xFFF8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C41Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C41Eu,3u,0x01u,0xC421u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C421u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C421u,3u,0x01u,0xC424u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C424u:
    if(m==0u&&x==0u&&e==0u){ /* 29 F8 FF Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C424u,3u,0xFFu,0xC427u);
      sc_v11_op_and(r,0xFFF8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C427u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C427u,3u,0x01u,0xC42Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C42Au:
    if(m==0u&&x==0u&&e==0u){ /* 9C F5 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C42Au,3u,0x01u,0xC42Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C42Du:
    if(m==0u&&x==0u&&e==0u){ /* 9C FF 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C42Du,3u,0x01u,0xC430u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C430u:
    if(m==0u&&x==0u&&e==0u){ /* 20 75 B3 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C430u,3u,0xB3u,0xC433u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC432u))return 0;c->pc=0xB375u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C433u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C433u,1u,0x60u,0xC434u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C434u:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C434u,2u,0x10u,0xC436u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C436u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C436u,2u,0x20u,0xC438u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C438u:
    if(m==0u&&x==1u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C438u,3u,0x02u,0xC43Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C43Bu:
    if(m==0u&&x==1u&&e==0u){ /* F0 52 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C43Bu,2u,0x52u,0xC43Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC48Fu;}
      if(c->pc!=0xC43Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC43Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C43Du:
    if(m==0u&&x==1u&&e==0u){ /* AE F9 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C43Du,3u,0x01u,0xC440u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01F9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C440u:
    if(m==0u&&x==1u&&e==0u){ /* BF C0 80 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C440u,4u,0x01u,0xC444u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0180C0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C444u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C444u,3u,0x00u,0xC447u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C447u:
    if(m==0u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C447u,1u,0x0Au,0xC448u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C448u:
    if(m==0u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C448u,1u,0x0Au,0xC449u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C449u:
    if(m==0u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C449u,1u,0x0Au,0xC44Au);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C44Au:
    if(m==0u&&x==1u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C44Au,2u,0x79u,0xC44Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C44Cu:
    if(m==0u&&x==1u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C44Cu,3u,0x01u,0xC44Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C44Fu:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C44Fu,3u,0x00u,0xC452u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C452u:
    if(m==0u&&x==1u&&e==0u){ /* C9 10 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C452u,3u,0x00u,0xC455u);
      sc_v11_op_compare(r,c->a,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C455u:
    if(m==0u&&x==1u&&e==0u){ /* B0 05 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C455u,2u,0x05u,0xC457u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC45Cu;}
      if(c->pc!=0xC457u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC457u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C45Cu:
    if(m==0u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C45Cu,1u,0x18u,0xC45Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C45Du:
    if(m==0u&&x==1u&&e==0u){ /* 65 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C45Du,2u,0x79u,0xC45Fu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C45Fu:
    if(m==0u&&x==1u&&e==0u){ /* C9 F1 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C45Fu,3u,0x00u,0xC462u);
      sc_v11_op_compare(r,c->a,0x00F1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C462u:
    if(m==0u&&x==1u&&e==0u){ /* 90 09 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C462u,2u,0x09u,0xC464u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC46Du;}
      if(c->pc!=0xC464u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC464u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C46Du:
    if(m==0u&&x==1u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C46Du,3u,0x01u,0xC470u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C470u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C470u,3u,0x00u,0xC473u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C473u:
    if(m==0u&&x==1u&&e==0u){ /* C9 18 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C473u,3u,0x00u,0xC476u);
      sc_v11_op_compare(r,c->a,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C476u:
    if(m==0u&&x==1u&&e==0u){ /* B0 05 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C476u,2u,0x05u,0xC478u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC47Du;}
      if(c->pc!=0xC478u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC478u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C47Du:
    if(m==0u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C47Du,1u,0x18u,0xC47Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C47Eu:
    if(m==0u&&x==1u&&e==0u){ /* 65 79 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C47Eu,2u,0x79u,0xC480u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C480u:
    if(m==0u&&x==1u&&e==0u){ /* C9 C9 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C480u,3u,0x00u,0xC483u);
      sc_v11_op_compare(r,c->a,0x00C9u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C483u:
    if(m==0u&&x==1u&&e==0u){ /* 90 09 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C483u,2u,0x09u,0xC485u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC48Eu;}
      if(c->pc!=0xC485u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC485u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C48Eu:
    if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C48Eu,1u,0x60u,0xC48Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C48Fu:
    if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C48Fu,1u,0x60u,0xC490u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4C7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4C7u,2u,0x30u,0xC4C9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4C9u:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 01 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4C9u,3u,0x01u,0xC4CCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4CCu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4CCu,1u,0x4Au,0xC4CDu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4CDu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4CDu,2u,0x03u,0xC4CFu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4D2u;}
      if(c->pc!=0xC4CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4D2u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4D2u,1u,0x4Au,0xC4D3u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4D3u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4D3u,2u,0x03u,0xC4D5u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4D8u;}
      if(c->pc!=0xC4D5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4D5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4D8u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4D8u,1u,0x4Au,0xC4D9u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4D9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4D9u,2u,0x03u,0xC4DBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4DEu;}
      if(c->pc!=0xC4DBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4DBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4DEu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4DEu,1u,0x4Au,0xC4DFu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4DFu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4DFu,2u,0x03u,0xC4E1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4E4u;}
      if(c->pc!=0xC4E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4E4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4E4u,1u,0x60u,0xC4E5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4E5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4E5u,2u,0x30u,0xC4E7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4E7u:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 01 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4E7u,3u,0x01u,0xC4EAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4EAu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4EAu,1u,0x4Au,0xC4EBu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4EBu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0D Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4EBu,2u,0x0Du,0xC4EDu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC4FAu;}
      if(c->pc!=0xC4EDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4EDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4FAu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4FAu,1u,0x4Au,0xC4FBu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C4FBu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0D Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C4FBu,2u,0x0Du,0xC4FDu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC50Au;}
      if(c->pc!=0xC4FDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC4FDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C50Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C50Au,1u,0x4Au,0xC50Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C50Bu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0D Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C50Bu,2u,0x0Du,0xC50Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC51Au;}
      if(c->pc!=0xC50Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC50Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C51Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C51Au,1u,0x4Au,0xC51Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C51Bu:
    if(m==0u&&x==0u&&e==0u){ /* 90 0B Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C51Bu,2u,0x0Bu,0xC51Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC528u;}
      if(c->pc!=0xC51Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC51Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C528u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4040; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C528u,1u,0x60u,0xC529u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C529u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C529u,2u,0x30u,0xC52Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C52Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C52Bu,3u,0x01u,0xC52Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C52Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 7F Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C52Eu,2u,0x7Fu,0xC530u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC5AFu;}
      if(c->pc!=0xC530u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC530u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C530u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C530u,2u,0x20u,0xC532u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C532u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C532u,2u,0xC9u,0xC534u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C534u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C534u,3u,0x20u,0xC537u);
      sc_v11_op_and(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C537u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C537u,2u,0x03u,0xC539u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC53Cu;}
      if(c->pc!=0xC539u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC539u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C53Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C53Cu,3u,0x02u,0xC53Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C53Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 40 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C53Fu,2u,0x40u,0xC541u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC581u;}
      if(c->pc!=0xC541u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC541u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C541u:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C541u,3u,0x01u,0xC544u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C544u:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C544u,2u,0x05u,0xC546u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC54Bu;}
      if(c->pc!=0xC546u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC546u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C54Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C54Bu,3u,0x01u,0xC54Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C54Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D EF 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C54Eu,3u,0x01u,0xC551u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C551u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C551u,3u,0x01u,0xC554u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C554u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F1 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C554u,3u,0x01u,0xC557u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C557u:
    if(m==0u&&x==0u&&e==0u){ /* A2 1A 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C557u,3u,0x00u,0xC55Au);
      sc_v11_op_ldx(r,0x001Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C55Au:
    if(m==0u&&x==0u&&e==0u){ /* AD DD 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C55Au,3u,0x01u,0xC55Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C55Du:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C55Du,1u,0x4Au,0xC55Eu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C55Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C55Eu,2u,0x03u,0xC560u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xC563u;}
      if(c->pc!=0xC560u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC560u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C560u:
    if(m==0u&&x==0u&&e==0u){ /* A2 2A 00 Mesen corrected gameplay frame 4500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C560u,3u,0x00u,0xC563u);
      sc_v11_op_ldx(r,0x002Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C563u:
    if(m==0u&&x==0u&&e==0u){ /* 8E EB 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C563u,3u,0x01u,0xC566u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C566u:
    if(m==0u&&x==0u&&e==0u){ /* AD DD 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C566u,3u,0x01u,0xC569u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C569u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FE 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C569u,3u,0x00u,0xC56Cu);
      sc_v11_op_and(r,0x00FEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C56Cu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C56Cu,1u,0x0Au,0xC56Du);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C56Du:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C56Du,1u,0x0Au,0xC56Eu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C56Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C56Eu,1u,0x0Au,0xC56Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C56Fu:
    if(m==0u&&x==0u&&e==0u){ /* 69 38 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C56Fu,3u,0x00u,0xC572u);
      sc_v11_op_adc(r,0x0038u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C572u:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C572u,3u,0x01u,0xC575u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C575u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 01 02 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C575u,3u,0x02u,0xC578u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0201u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C578u:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C578u,1u,0x08u,0xC579u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C579u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C579u,4u,0x00u,0xC57Du);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC57Cu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C57Fu:
    if(m==1u&&x==1u&&e==0u){ /* 28 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C57Fu,1u,0x28u,0xC580u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C580u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C580u,1u,0x60u,0xC581u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C581u:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 01 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C581u,3u,0x01u,0xC584u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C584u:
    if(m==0u&&x==0u&&e==0u){ /* 30 29 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C584u,2u,0x29u,0xC586u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xC5AFu;}
      if(c->pc!=0xC586u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC586u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C586u:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C586u,1u,0x08u,0xC587u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C587u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C587u,4u,0x00u,0xC58Bu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC58Au))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C58Du:
    if(m==1u&&x==1u&&e==0u){ /* 28 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C58Du,1u,0x28u,0xC58Eu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C58Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 01 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C58Eu,3u,0x01u,0xC591u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C591u:
    if(m==0u&&x==0u&&e==0u){ /* 29 F8 00 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C591u,3u,0x00u,0xC594u);
      sc_v11_op_and(r,0x00F8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C594u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EB 01 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C594u,3u,0x01u,0xC597u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C597u:
    if(m==0u&&x==0u&&e==0u){ /* AD F1 01 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C597u,3u,0x01u,0xC59Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C59Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 F8 00 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C59Au,3u,0x00u,0xC59Du);
      sc_v11_op_and(r,0x00F8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C59Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D ED 01 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C59Du,3u,0x01u,0xC5A0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5A0u:
    if(m==0u&&x==0u&&e==0u){ /* 9C FF 01 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5A0u,3u,0x01u,0xC5A3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5A3u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 3B 02 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5A3u,3u,0x02u,0xC5A6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5A6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5A6u,3u,0x00u,0xC5A9u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5A9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 01 02 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5A9u,3u,0x02u,0xC5ACu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0201u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5ACu:
    if(m==0u&&x==0u&&e==0u){ /* 20 75 B3 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5ACu,3u,0xB3u,0xC5AFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC5AEu))return 0;c->pc=0xB375u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C5AFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3460; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C5AFu,1u,0x60u,0xC5B0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C616u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C616u,2u,0x30u,0xC618u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C618u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C618u,3u,0x00u,0xC61Bu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C61Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C61Bu,3u,0x02u,0xC61Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C61Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C61Eu,3u,0x02u,0xC621u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C621u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1E Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C621u,2u,0x1Eu,0xC623u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC641u;}
      if(c->pc!=0xC623u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC623u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C623u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C623u,2u,0xD7u,0xC625u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C625u:
    if(m==0u&&x==0u&&e==0u){ /* D0 19 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C625u,2u,0x19u,0xC627u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC640u;}
      if(c->pc!=0xC627u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC627u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C627u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C627u,3u,0x01u,0xC62Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C62Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C62Au,3u,0x02u,0xC62Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C62Du:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C62Du,3u,0x01u,0xC630u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C630u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C630u,3u,0x02u,0xC633u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C633u:
    if(m==0u&&x==0u&&e==0u){ /* AD F9 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C633u,3u,0x01u,0xC636u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C636u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C636u,3u,0x02u,0xC639u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C639u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C639u,2u,0x20u,0xC63Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C63Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C63Bu,3u,0x00u,0xC63Eu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C63Eu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C63Eu,2u,0x00u,0xC640u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xC640u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C640u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C640u,1u,0x60u,0xC641u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C641u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C641u,2u,0x20u,0xC643u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C643u:
    if(m==1u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C643u,3u,0x01u,0xC646u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EDu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C646u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C646u,1u,0xEBu,0xC647u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C647u:
    if(m==1u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C647u,3u,0x01u,0xC64Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01EBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C64Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C64Au,2u,0x20u,0xC64Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C64Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 00 20 7E Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C64Cu,4u,0x7Eu,0xC650u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C650u:
    if(m==0u&&x==0u&&e==0u){ /* A9 EC 31 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C650u,3u,0x31u,0xC653u);
      sc_v11_op_lda(r,0x31ECu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C653u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 02 20 7E Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C653u,4u,0x7Eu,0xC657u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2002u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C657u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C657u,2u,0x20u,0xC659u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C659u:
    if(m==1u&&x==0u&&e==0u){ /* A9 56 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C659u,2u,0x56u,0xC65Bu);
      sc_v11_op_lda(r,0x0056u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C65Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 00 22 7E Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C65Bu,4u,0x7Eu,0xC65Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C65Fu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3000; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C65Fu,1u,0x60u,0xC660u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C660u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C660u,2u,0x20u,0xC662u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C660u,2u,0x20u,0xC662u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C662u:
    if(m==0u&&x==0u&&e==0u){ /* AD E5 01 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C662u,3u,0x01u,0xC665u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01E5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD E5 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C662u,3u,0x01u,0xC665u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01E5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C665u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C665u,2u,0x01u,0xC667u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC668u;}
      if(c->pc!=0xC667u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC667u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C665u,2u,0x01u,0xC667u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC668u;}
      if(c->pc!=0xC667u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC667u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C667u:
    if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C667u,1u,0x60u,0xC668u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C668u:
    if(m==0u&&x==0u&&e==0u){ /* 9C E5 01 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C668u,3u,0x01u,0xC66Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C66Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 01 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C66Bu,3u,0x01u,0xC66Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C66Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 2E Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C66Eu,2u,0x2Eu,0xC670u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC69Eu;}
      if(c->pc!=0xC670u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC670u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C670u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 01 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C670u,3u,0x01u,0xC673u);
      sc_v11_op_lda(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C673u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C673u,3u,0x02u,0xC676u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C676u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0F 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C676u,3u,0x00u,0xC679u);
      sc_v11_op_lda(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C679u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C679u,3u,0x02u,0xC67Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C67Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 16 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C67Cu,3u,0x00u,0xC67Fu);
      sc_v11_op_lda(r,0x0016u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C67Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C67Fu,3u,0x02u,0xC682u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C682u:
    if(m==0u&&x==0u&&e==0u){ /* A9 06 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C682u,3u,0x00u,0xC685u);
      sc_v11_op_lda(r,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C685u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C685u,3u,0x02u,0xC688u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C688u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C688u,2u,0x20u,0xC68Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C68Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C68Au,3u,0x00u,0xC68Du);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C68Du:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C68Du,2u,0x00u,0xC68Fu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xC68Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C68Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 07 C8 Mesen corrected gameplay frame 2572; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C68Fu,3u,0xC8u,0xC692u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC691u))return 0;c->pc=0xC807u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C692u:
    if(m==1u&&x==1u&&e==0u){ /* 22 A9 84 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C692u,4u,0x00u,0xC696u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC695u))return 0;
      c->pbr=0x00u;c->pc=0x84A9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C696u:
    if(m==1u&&x==0u&&e==0u){ /* 22 2A 84 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C696u,4u,0x00u,0xC69Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xC699u))return 0;
      c->pbr=0x00u;c->pc=0x842Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C69Au:
    if(m==1u&&x==0u&&e==0u){ /* 20 25 8F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C69Au,3u,0x8Fu,0xC69Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC69Cu))return 0;c->pc=0x8F25u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01C69Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01C69Du,1u,0x60u,0xC69Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
