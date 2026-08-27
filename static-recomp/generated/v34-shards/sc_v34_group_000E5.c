/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000E5(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x039400u:
    if(m==0u&&x==0u&&e==0u){ /* C9 A2 FE Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039400u,3u,0xFEu,0x9403u);
      sc_v11_op_compare(r,c->a,0xFEA2u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039403u:
    if(m==0u&&x==0u&&e==0u){ /* 30 27 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039403u,2u,0x27u,0x9405u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x942Cu;}
      if(c->pc!=0x9405u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9405u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03942Cu:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03942Cu,2u,0x02u,0x942Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03942Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 5E 01 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03942Eu,3u,0x01u,0x9431u);
      sc_v11_op_compare(r,c->a,0x015Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039431u:
    if(m==0u&&x==0u&&e==0u){ /* 10 14 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039431u,2u,0x14u,0x9433u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x9447u;}
      if(c->pc!=0x9433u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9433u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039433u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7E 90 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039433u,3u,0x90u,0x9436u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9435u))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039436u:
    if(m==0u&&x==0u&&e==0u){ /* 85 06 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039436u,2u,0x06u,0x9438u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039438u:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039438u,2u,0x02u,0x943Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03943Au:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03943Au,1u,0x18u,0x943Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03943Bu:
    if(m==0u&&x==0u&&e==0u){ /* 69 0C 67 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03943Bu,3u,0x67u,0x943Eu);
      sc_v11_op_adc(r,0x670Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03943Eu:
    if(m==0u&&x==0u&&e==0u){ /* C5 06 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03943Eu,2u,0x06u,0x9440u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039440u:
    if(m==0u&&x==0u&&e==0u){ /* 70 05 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039440u,2u,0x05u,0x9442u);
      if((c->p&SC_FLAG_V)!=0u){c->pc=0x9447u;}
      if(c->pc!=0x9442u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9442u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039442u:
    if(m==0u&&x==0u&&e==0u){ /* 10 03 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039442u,2u,0x03u,0x9444u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x9447u;}
      if(c->pc!=0x9444u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9444u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039444u:
    if(m==0u&&x==0u&&e==0u){ /* 20 59 96 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039444u,3u,0x96u,0x9447u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x9446u))return 0;c->pc=0x9659u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039447u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039447u,1u,0x2Bu,0x9448u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039447u,1u,0x2Bu,0x9448u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039448u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4869; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039448u,1u,0x60u,0x9449u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039448u,1u,0x60u,0x9449u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039659u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039659u,2u,0x20u,0x965Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03965Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03965Bu,3u,0x0Bu,0x965Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03965Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 7A 03 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03965Eu,3u,0x03u,0x9661u);
      sc_v11_op_compare(r,c->a,0x037Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039661u:
    if(m==0u&&x==0u&&e==0u){ /* F0 F0 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039661u,2u,0xF0u,0x9663u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9653u;}
      if(c->pc!=0x9663u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9663u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039663u:
    if(m==0u&&x==0u&&e==0u){ /* C9 8C 03 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039663u,3u,0x03u,0x9666u);
      sc_v11_op_compare(r,c->a,0x038Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039666u:
    if(m==0u&&x==0u&&e==0u){ /* F0 EB Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039666u,2u,0xEBu,0x9668u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9653u;}
      if(c->pc!=0x9668u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9668u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039668u:
    if(m==0u&&x==0u&&e==0u){ /* C9 83 03 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039668u,3u,0x03u,0x966Bu);
      sc_v11_op_compare(r,c->a,0x0383u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03966Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 68 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03966Bu,2u,0x68u,0x966Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x96D5u;}
      if(c->pc!=0x966Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x966Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03966Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 95 03 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03966Du,3u,0x03u,0x9670u);
      sc_v11_op_compare(r,c->a,0x0395u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039670u:
    if(m==0u&&x==0u&&e==0u){ /* F0 63 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039670u,2u,0x63u,0x9672u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x96D5u;}
      if(c->pc!=0x9672u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9672u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039672u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039672u,2u,0x20u,0x9674u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039674u:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039674u,2u,0x00u,0x9676u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039676u:
    if(m==1u&&x==0u&&e==0u){ /* F0 5D Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039676u,2u,0x5Du,0x9678u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x96D5u;}
      if(c->pc!=0x9678u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9678u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0396D5u:
    if(m==1u&&x==0u&&e==0u){ /* 80 5B Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0396D5u,2u,0x5Bu,0x96D7u);
      if(1){c->pc=0x9732u;}
      if(c->pc!=0x96D7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x96D7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x039732u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 5665; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x039732u,1u,0x60u,0x9733u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
