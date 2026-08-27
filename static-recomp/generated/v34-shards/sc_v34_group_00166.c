/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00166(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x0598EEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0598EEu,2u,0x20u,0x98F0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0598F0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0598F0u,2u,0x10u,0x98F2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0598F2u:
    if(m==1u&&x==0u&&e==0u){ /* A2 DB C4 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0598F2u,3u,0xC4u,0x98F5u);
      sc_v11_op_ldx(r,0xC4DBu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0598F5u:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0598F5u,2u,0x09u,0x98F7u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0598F7u:
    if(m==1u&&x==0u&&e==0u){ /* A9 08 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0598F7u,2u,0x08u,0x98F9u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0598F9u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0598F9u,2u,0x0Bu,0x98FBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0598FBu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0598FBu,3u,0x00u,0x98FEu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0598FEu:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0598FEu,2u,0x0Eu,0x9900u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059900u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059900u,2u,0x20u,0x9902u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059902u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059902u,3u,0x00u,0x9905u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059905u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1038; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059905u,2u,0x00u,0x9907u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9907u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059907u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059907u,2u,0x20u,0x9909u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059909u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059909u,2u,0x10u,0x990Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05990Bu:
    if(m==1u&&x==0u&&e==0u){ /* A2 A2 DE Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05990Bu,3u,0xDEu,0x990Eu);
      sc_v11_op_ldx(r,0xDEA2u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05990Eu:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05990Eu,2u,0x09u,0x9910u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059910u:
    if(m==1u&&x==0u&&e==0u){ /* A9 08 Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059910u,2u,0x08u,0x9912u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059912u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059912u,2u,0x0Bu,0x9914u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059914u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 20 Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059914u,3u,0x20u,0x9917u);
      sc_v11_op_ldx(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059917u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059917u,2u,0x0Eu,0x9919u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059919u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059919u,2u,0x20u,0x991Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05991Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05991Bu,3u,0x00u,0x991Eu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05991Eu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1050; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05991Eu,2u,0x00u,0x9920u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9920u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059920u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059920u,2u,0x20u,0x9922u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059922u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059922u,3u,0x21u,0x9925u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059925u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059925u,2u,0x30u,0x9927u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059927u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059927u,2u,0x02u,0x9929u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059929u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059929u,1u,0x0Au,0x992Au);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05992Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05992Au,1u,0x0Au,0x992Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05992Bu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05992Bu,1u,0x0Au,0x992Cu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05992Cu:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05992Cu,1u,0x0Au,0x992Du);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05992Du:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05992Du,1u,0xAAu,0x992Eu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05992Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05992Eu,2u,0x01u,0x9930u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059930u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059930u,3u,0x43u,0x9933u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059933u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059933u,2u,0x18u,0x9935u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059935u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059935u,3u,0x43u,0x9938u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059938u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059938u,2u,0x00u,0x993Au);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05993Au:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05993Au,3u,0x43u,0x993Du);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05993Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05993Du,2u,0x80u,0x993Fu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05993Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05993Fu,3u,0x43u,0x9942u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059942u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059942u,2u,0x7Eu,0x9944u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059944u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059944u,3u,0x43u,0x9947u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059947u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059947u,2u,0x00u,0x9949u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059949u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059949u,3u,0x43u,0x994Cu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05994Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 60 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05994Cu,2u,0x60u,0x994Eu);
      sc_v11_op_lda(r,0x0060u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05994Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05994Eu,3u,0x43u,0x9951u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059951u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059951u,2u,0x01u,0x9953u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059953u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059953u,2u,0x02u,0x9955u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059955u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059955u,2u,0x04u,0x9957u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x995Bu;}
      if(c->pc!=0x9957u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9957u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059957u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059957u,1u,0x0Au,0x9958u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059958u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059958u,1u,0xCAu,0x9959u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059959u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059959u,2u,0xFCu,0x995Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9957u;}
      if(c->pc!=0x995Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x995Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05995Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05995Bu,3u,0x42u,0x995Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05995Eu:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1054; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05995Eu,2u,0x20u,0x9960u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059960u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059960u,2u,0x10u,0x9962u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059962u:
    if(m==1u&&x==0u&&e==0u){ /* A2 A4 9B Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059962u,3u,0x9Bu,0x9965u);
      sc_v11_op_ldx(r,0x9BA4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059965u:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059965u,2u,0x09u,0x9967u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059967u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0B Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059967u,2u,0x0Bu,0x9969u);
      sc_v11_op_lda(r,0x000Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059969u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059969u,2u,0x0Bu,0x996Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05996Bu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05996Bu,3u,0x00u,0x996Eu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05996Eu:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05996Eu,2u,0x0Eu,0x9970u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059970u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059970u,2u,0x20u,0x9972u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059972u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059972u,3u,0x00u,0x9975u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059975u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1055; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059975u,2u,0x00u,0x9977u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9977u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059977u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1058; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059977u,2u,0x20u,0x9979u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059979u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1058; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059979u,2u,0x10u,0x997Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05997Bu:
    if(m==1u&&x==0u&&e==0u){ /* A2 0B A1 Mesen corrected gameplay frame 1058; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05997Bu,3u,0xA1u,0x997Eu);
      sc_v11_op_ldx(r,0xA10Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05997Eu:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 Mesen corrected gameplay frame 1058; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05997Eu,2u,0x09u,0x9980u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059980u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0B Mesen corrected gameplay frame 1058; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059980u,2u,0x0Bu,0x9982u);
      sc_v11_op_lda(r,0x000Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059982u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B Mesen corrected gameplay frame 1058; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059982u,2u,0x0Bu,0x9984u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059984u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 20 Mesen corrected gameplay frame 1058; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059984u,3u,0x20u,0x9987u);
      sc_v11_op_ldx(r,0x2000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059987u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E Mesen corrected gameplay frame 1058; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059987u,2u,0x0Eu,0x9989u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059989u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1058; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059989u,2u,0x20u,0x998Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05998Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 Mesen corrected gameplay frame 1058; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05998Bu,3u,0x00u,0x998Eu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05998Eu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1058; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05998Eu,2u,0x00u,0x9990u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9990u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059990u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1065; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059990u,2u,0x20u,0x9992u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059992u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 1065; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059992u,2u,0x10u,0x9994u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059994u:
    if(m==1u&&x==0u&&e==0u){ /* A2 71 A5 Mesen corrected gameplay frame 1065; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059994u,3u,0xA5u,0x9997u);
      sc_v11_op_ldx(r,0xA571u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059997u:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 Mesen corrected gameplay frame 1065; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059997u,2u,0x09u,0x9999u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059999u:
    if(m==1u&&x==0u&&e==0u){ /* A9 09 Mesen corrected gameplay frame 1065; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059999u,2u,0x09u,0x999Bu);
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05999Bu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B Mesen corrected gameplay frame 1065; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05999Bu,2u,0x0Bu,0x999Du);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x05999Du:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 40 Mesen corrected gameplay frame 1065; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x05999Du,3u,0x40u,0x99A0u);
      sc_v11_op_ldx(r,0x4000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599A0u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E Mesen corrected gameplay frame 1065; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599A0u,2u,0x0Eu,0x99A2u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599A2u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1065; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599A2u,2u,0x20u,0x99A4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599A4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 Mesen corrected gameplay frame 1065; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599A4u,3u,0x00u,0x99A7u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599A7u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1065; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599A7u,2u,0x00u,0x99A9u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x99A9u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599A9u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599A9u,2u,0x20u,0x99ABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599ABu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 40 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599ABu,3u,0x40u,0x99AEu);
      sc_v11_op_lda(r,0x4000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599AEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 16 21 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599AEu,3u,0x21u,0x99B1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599B1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599B1u,2u,0x30u,0x99B3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599B3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599B3u,2u,0x02u,0x99B5u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599B5u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599B5u,1u,0x0Au,0x99B6u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599B6u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599B6u,1u,0x0Au,0x99B7u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599B7u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599B7u,1u,0x0Au,0x99B8u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599B8u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599B8u,1u,0x0Au,0x99B9u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599B9u:
    if(m==1u&&x==1u&&e==0u){ /* AA Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599B9u,1u,0xAAu,0x99BAu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599BAu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599BAu,2u,0x01u,0x99BCu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599BCu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599BCu,3u,0x43u,0x99BFu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599BFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599BFu,2u,0x18u,0x99C1u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599C1u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599C1u,3u,0x43u,0x99C4u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599C4u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599C4u,2u,0x00u,0x99C6u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599C6u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599C6u,3u,0x43u,0x99C9u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599C9u:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599C9u,2u,0x80u,0x99CBu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599CBu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599CBu,3u,0x43u,0x99CEu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599CEu:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599CEu,2u,0x7Eu,0x99D0u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599D0u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599D0u,3u,0x43u,0x99D3u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599D3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599D3u,2u,0x00u,0x99D5u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599D5u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599D5u,3u,0x43u,0x99D8u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599D8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599D8u,2u,0x80u,0x99DAu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599DAu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599DAu,3u,0x43u,0x99DDu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599DDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599DDu,2u,0x01u,0x99DFu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599DFu:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599DFu,2u,0x02u,0x99E1u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599E1u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599E1u,2u,0x04u,0x99E3u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x99E7u;}
      if(c->pc!=0x99E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x99E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599E3u:
    if(m==1u&&x==1u&&e==0u){ /* 0A Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599E3u,1u,0x0Au,0x99E4u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599E4u:
    if(m==1u&&x==1u&&e==0u){ /* CA Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599E4u,1u,0xCAu,0x99E5u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599E5u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599E5u,2u,0xFCu,0x99E7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x99E3u;}
      if(c->pc!=0x99E7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x99E7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599E7u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599E7u,3u,0x42u,0x99EAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599EAu:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1079; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599EAu,2u,0x30u,0x99ECu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599ECu:
    if(m==0u&&x==0u&&e==0u){ /* 8B Mesen corrected gameplay frame 1080; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599ECu,1u,0x8Bu,0x99EDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599EDu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 B0 Mesen corrected gameplay frame 1080; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599EDu,3u,0xB0u,0x99F0u);
      sc_v11_op_ldx(r,0xB000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599F0u:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 38 Mesen corrected gameplay frame 1080; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599F0u,3u,0x38u,0x99F3u);
      sc_v11_op_ldy(r,0x3840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599F3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 0F Mesen corrected gameplay frame 1080; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599F3u,3u,0x0Fu,0x99F6u);
      sc_v11_op_lda(r,0x0FFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599F6u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 7E Mesen corrected gameplay frame 1080; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599F6u,3u,0x7Eu,0x99F9u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x99F6u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599F9u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599F9u,1u,0xABu,0x99FAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599FAu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 5B 0B Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599FAu,3u,0x0Bu,0x99FDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B5Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599FDu:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599FDu,1u,0x6Bu,0x99FEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0599FEu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0599FEu,2u,0x30u,0x9A00u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A00u:
    if(m==0u&&x==0u&&e==0u){ /* 8B Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A00u,1u,0x8Bu,0x9A01u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A01u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 88 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A01u,3u,0x88u,0x9A04u);
      sc_v11_op_ldx(r,0x8800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A04u:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 30 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A04u,3u,0x30u,0x9A07u);
      sc_v11_op_ldy(r,0x3040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A07u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 07 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A07u,3u,0x07u,0x9A0Au);
      sc_v11_op_lda(r,0x07FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A0Au:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A0Au,3u,0x7Eu,0x9A0Du);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x9A0Au;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A0Du:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 90 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A0Du,3u,0x90u,0x9A10u);
      sc_v11_op_ldx(r,0x9000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A10u:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 28 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A10u,3u,0x28u,0x9A13u);
      sc_v11_op_ldy(r,0x2840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A13u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 07 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A13u,3u,0x07u,0x9A16u);
      sc_v11_op_lda(r,0x07FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A16u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A16u,3u,0x7Eu,0x9A19u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x9A16u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A19u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A19u,1u,0xABu,0x9A1Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A1Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A1Au,2u,0x20u,0x9A1Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A1Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A1Cu,2u,0x01u,0x9A1Eu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A1Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 61 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A1Eu,2u,0x61u,0x9A20u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x61u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A20u:
    if(m==1u&&x==0u&&e==0u){ /* A9 17 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A20u,2u,0x17u,0x9A22u);
      sc_v11_op_lda(r,0x0017u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A22u:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A22u,2u,0x68u,0x9A24u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A24u:
    if(m==1u&&x==0u&&e==0u){ /* 64 6D Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A24u,2u,0x6Du,0x9A26u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A26u:
    if(m==1u&&x==0u&&e==0u){ /* A9 11 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A26u,2u,0x11u,0x9A28u);
      sc_v11_op_lda(r,0x0011u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A28u:
    if(m==1u&&x==0u&&e==0u){ /* 85 66 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A28u,2u,0x66u,0x9A2Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x66u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A2Au:
    if(m==1u&&x==0u&&e==0u){ /* 64 67 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A2Au,2u,0x67u,0x9A2Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x67u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A2Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 40 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A2Cu,2u,0x40u,0x9A2Eu);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A2Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 62 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A2Eu,2u,0x62u,0x9A30u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A30u:
    if(m==1u&&x==0u&&e==0u){ /* A9 44 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A30u,2u,0x44u,0x9A32u);
      sc_v11_op_lda(r,0x0044u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A32u:
    if(m==1u&&x==0u&&e==0u){ /* 85 63 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A32u,2u,0x63u,0x9A34u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x63u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A34u:
    if(m==1u&&x==0u&&e==0u){ /* A9 50 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A34u,2u,0x50u,0x9A36u);
      sc_v11_op_lda(r,0x0050u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A36u:
    if(m==1u&&x==0u&&e==0u){ /* 85 64 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A36u,2u,0x64u,0x9A38u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A38u:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A38u,2u,0x03u,0x9A3Au);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A3Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 60 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A3Au,2u,0x60u,0x9A3Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A3Cu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A3Cu,2u,0x20u,0x9A3Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A3Eu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A3Eu,2u,0xB3u,0x9A40u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A40u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A40u,2u,0x80u,0x9A42u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A42u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A42u,2u,0xB1u,0x9A44u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A44u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A44u,2u,0x20u,0x9A46u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A46u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A46u,3u,0x00u,0x9A49u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A49u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A49u,2u,0x00u,0x9A4Bu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9A4Bu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A4Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1098; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A4Bu,2u,0x30u,0x9A4Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A4Du:
    if(m==0u&&x==0u&&e==0u){ /* 9C 57 0B Mesen corrected gameplay frame 1098; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A4Du,3u,0x0Bu,0x9A50u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B57u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A50u:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 1098; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A50u,1u,0x6Bu,0x9A51u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A51u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A51u,2u,0x30u,0x9A53u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A53u:
    if(m==1u&&x==1u&&e==0u){ /* A9 D8 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A53u,2u,0xD8u,0x9A55u);
      sc_v11_op_lda(r,0x00D8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A55u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 04 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A55u,4u,0x7Eu,0x9A59u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2004u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A59u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 08 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A59u,4u,0x7Eu,0x9A5Du);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2008u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A5Du:
    if(m==1u&&x==1u&&e==0u){ /* 8F 0C 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A5Du,4u,0x7Eu,0x9A61u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E200Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A61u:
    if(m==1u&&x==1u&&e==0u){ /* A9 D0 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A61u,2u,0xD0u,0x9A63u);
      sc_v11_op_lda(r,0x00D0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A63u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 10 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A63u,4u,0x7Eu,0x9A67u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2010u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A67u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 14 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A67u,4u,0x7Eu,0x9A6Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2014u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A6Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 18 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A6Bu,4u,0x7Eu,0x9A6Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2018u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A6Fu:
    if(m==1u&&x==1u&&e==0u){ /* A9 C8 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A6Fu,2u,0xC8u,0x9A71u);
      sc_v11_op_lda(r,0x00C8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A71u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 1C 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A71u,4u,0x7Eu,0x9A75u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E201Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A75u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 20 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A75u,4u,0x7Eu,0x9A79u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2020u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A79u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 24 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A79u,4u,0x7Eu,0x9A7Du);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2024u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A7Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 09 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A7Du,2u,0x09u,0x9A7Fu);
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A7Fu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 07 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A7Fu,4u,0x7Eu,0x9A83u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2007u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A83u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 0B 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A83u,4u,0x7Eu,0x9A87u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E200Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A87u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 0F 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A87u,4u,0x7Eu,0x9A8Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E200Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A8Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 13 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A8Bu,4u,0x7Eu,0x9A8Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2013u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A8Fu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 17 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A8Fu,4u,0x7Eu,0x9A93u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2017u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A93u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 1B 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A93u,4u,0x7Eu,0x9A97u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E201Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A97u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 1F 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A97u,4u,0x7Eu,0x9A9Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E201Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A9Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 23 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A9Bu,4u,0x7Eu,0x9A9Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2023u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059A9Fu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 27 20 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059A9Fu,4u,0x7Eu,0x9AA3u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2027u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AA3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AA3u,2u,0x02u,0x9AA5u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AA5u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 00 22 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AA5u,4u,0x7Eu,0x9AA9u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AA9u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AA9u,2u,0x00u,0x9AABu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AABu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 01 22 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AABu,4u,0x7Eu,0x9AAFu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2201u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AAFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 50 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AAFu,2u,0x50u,0x9AB1u);
      sc_v11_op_lda(r,0x0050u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AB1u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 02 22 7E Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AB1u,4u,0x7Eu,0x9AB5u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AB5u:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AB5u,2u,0x30u,0x9AB7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AB7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 01 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AB7u,3u,0x01u,0x9ABAu);
      sc_v11_op_lda(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ABAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059ABAu,3u,0x02u,0x9ABDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ABDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 60 00 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059ABDu,3u,0x00u,0x9AC0u);
      sc_v11_op_lda(r,0x0060u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AC0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AC0u,3u,0x02u,0x9AC3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AC3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 60 00 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AC3u,3u,0x00u,0x9AC6u);
      sc_v11_op_lda(r,0x0060u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AC6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AC6u,3u,0x02u,0x9AC9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AC9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 27 00 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AC9u,3u,0x00u,0x9ACCu);
      sc_v11_op_lda(r,0x0027u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ACCu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059ACCu,3u,0x02u,0x9ACFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ACFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059ACFu,2u,0x20u,0x9AD1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AD1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AD1u,3u,0x00u,0x9AD4u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AD4u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AD4u,2u,0x00u,0x9AD6u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9AD6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AD6u:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 1081; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AD6u,1u,0x6Bu,0x9AD7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AD7u:
    if(m==0u&&x==0u&&e==0u){ /* 8B Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AD7u,1u,0x8Bu,0x9AD8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AD8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AD8u,2u,0x20u,0x9ADAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ADAu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059ADAu,1u,0x48u,0x9ADBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ADBu:
    if(m==1u&&x==0u&&e==0u){ /* A9 05 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059ADBu,2u,0x05u,0x9ADDu);
      sc_v11_op_lda(r,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ADDu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059ADDu,1u,0x48u,0x9ADEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ADEu:
    if(m==1u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059ADEu,1u,0xABu,0x9ADFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ADFu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059ADFu,1u,0x68u,0x9AE0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AE0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AE0u,2u,0x30u,0x9AE2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AE2u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 10 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AE2u,3u,0x10u,0x9AE5u);
      sc_v11_op_ldx(r,0x1000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AE5u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 00 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AE5u,3u,0x00u,0x9AE8u);
      sc_v11_op_compare(r,c->a,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AE8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AE8u,2u,0x03u,0x9AEAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9AEDu;}
      if(c->pc!=0x9AEAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9AEAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AEAu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 14 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AEAu,3u,0x14u,0x9AEDu);
      sc_v11_op_ldx(r,0x1400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AEDu:
    if(m==0u&&x==0u&&e==0u){ /* 86 7C Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AEDu,2u,0x7Cu,0x9AEFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Cu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AEFu:
    if(m==0u&&x==0u&&e==0u){ /* 84 7F Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AEFu,2u,0x7Fu,0x9AF1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->y);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AF1u:
    if(m==0u&&x==0u&&e==0u){ /* 98 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AF1u,1u,0x98u,0x9AF2u);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AF2u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AF2u,1u,0x0Au,0x9AF3u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AF3u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AF3u,1u,0xA8u,0x9AF4u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AF4u:
    if(m==0u&&x==0u&&e==0u){ /* B9 40 9B Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AF4u,3u,0x9Bu,0x9AF7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x9B40u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AF7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AF7u,2u,0x79u,0x9AF9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AF9u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AF9u,3u,0x00u,0x9AFCu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AFCu:
    if(m==0u&&x==0u&&e==0u){ /* B1 79 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AFCu,2u,0x79u,0x9AFEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp_indirect_y(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059AFEu:
    if(m==0u&&x==0u&&e==0u){ /* 30 12 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059AFEu,2u,0x12u,0x9B00u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x9B12u;}
      if(c->pc!=0x9B00u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B00u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B00u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B00u,1u,0xAAu,0x9B01u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B01u:
    if(m==0u&&x==0u&&e==0u){ /* BF 40 38 7E Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B01u,4u,0x7Eu,0x9B05u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E3840u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B05u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B05u,3u,0x03u,0x9B08u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B08u:
    if(m==0u&&x==0u&&e==0u){ /* 05 7C Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B08u,2u,0x7Cu,0x9B0Au);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B0Au:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 38 7E Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B0Au,4u,0x7Eu,0x9B0Eu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B0Eu:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B0Eu,1u,0xC8u,0x9B0Fu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B0Fu:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B0Fu,1u,0xC8u,0x9B10u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B10u:
    if(m==0u&&x==0u&&e==0u){ /* 80 EA Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B10u,2u,0xEAu,0x9B12u);
      if(1){c->pc=0x9AFCu;}
      if(c->pc!=0x9B12u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B12u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B12u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 58 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B12u,3u,0x58u,0x9B15u);
      sc_v11_op_ldx(r,0x5800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B15u:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 38 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B15u,3u,0x38u,0x9B18u);
      sc_v11_op_ldy(r,0x3840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B18u:
    if(m==0u&&x==0u&&e==0u){ /* A5 7F Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B18u,2u,0x7Fu,0x9B1Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B1Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B1Au,3u,0x00u,0x9B1Du);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B1Du:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B1Du,2u,0x06u,0x9B1Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x9B25u;}
      if(c->pc!=0x9B1Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9B1Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B1Fu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 5C Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B1Fu,3u,0x5Cu,0x9B22u);
      sc_v11_op_ldx(r,0x5C00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B22u:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 40 Mesen corrected gameplay frame 2301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B22u,3u,0x40u,0x9B25u);
      sc_v11_op_ldy(r,0x4040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B25u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 49 01 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B25u,3u,0x01u,0x9B28u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0149u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B28u:
    if(m==0u&&x==0u&&e==0u){ /* 8C 69 01 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B28u,3u,0x01u,0x9B2Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0169u),c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B2Bu:
    if(m==0u&&x==0u&&e==0u){ /* A2 18 00 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B2Bu,3u,0x00u,0x9B2Eu);
      sc_v11_op_ldx(r,0x0018u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B2Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8E 79 01 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B2Eu,3u,0x01u,0x9B31u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0179u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B31u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 08 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B31u,3u,0x08u,0x9B34u);
      sc_v11_op_ldx(r,0x0800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B34u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 89 01 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B34u,3u,0x01u,0x9B37u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0189u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B37u:
    if(m==0u&&x==0u&&e==0u){ /* A5 B7 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B37u,2u,0xB7u,0x9B39u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xB7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B39u:
    if(m==0u&&x==0u&&e==0u){ /* 09 08 00 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B39u,3u,0x00u,0x9B3Cu);
      sc_v11_op_ora(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B3Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 B7 Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B3Cu,2u,0xB7u,0x9B3Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xB7u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B3Eu:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B3Eu,1u,0xABu,0x9B3Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2181; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B3Fu,1u,0x6Bu,0x9B40u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B94u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B94u,2u,0x30u,0x9B96u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B96u:
    if(m==0u&&x==0u&&e==0u){ /* A5 4E Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B96u,2u,0x4Eu,0x9B98u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x4Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B98u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B98u,3u,0x00u,0x9B9Bu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B9Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF 00 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B9Bu,3u,0x00u,0x9B9Eu);
      sc_v11_op_compare(r,c->a,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059B9Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059B9Eu,2u,0x01u,0x9BA0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9BA1u;}
      if(c->pc!=0x9BA0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9BA0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059BA0u:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 1756; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059BA0u,1u,0x6Bu,0x9BA1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059BA1u:
    if(m==0u&&x==0u&&e==0u){ /* C9 27 00 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059BA1u,3u,0x00u,0x9BA4u);
      sc_v11_op_compare(r,c->a,0x0027u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059BA4u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059BA4u,2u,0x03u,0x9BA6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9BA9u;}
      if(c->pc!=0x9BA6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9BA6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059BA6u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 31 9C Mesen corrected gameplay frame 1900; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x059BA6u,3u,0x9Cu,0x9BA9u);
      c->pc=0x9C31u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
