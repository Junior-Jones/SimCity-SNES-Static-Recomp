/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_000F7(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03DF40u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF40u,2u,0x20u,0xDF42u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF42u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF42u,2u,0x20u,0xDF44u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF44u:
    if(m==0u&&x==0u){ /* A90400 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF44u,3u,0x00u,0xDF47u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF47u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF47u,2u,0x00u,0xDF49u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF49u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF49u,2u,0x20u,0xDF4Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF4Bu:
    if(m==1u&&x==0u){ /* A5B3 LDA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF4Bu,2u,0xB3u,0xDF4Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00B3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF4Du:
    if(m==1u&&x==0u){ /* 297F AND imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF4Du,2u,0x7Fu,0xDF4Fu);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF4Fu:
    if(m==1u&&x==0u){ /* 85B1 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF4Fu,2u,0xB1u,0xDF51u);
      {uint32_t a=sc_v11_ea_dp(r,0x00B1u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF51u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF51u,2u,0x20u,0xDF53u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF53u:
    if(m==0u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF53u,2u,0x20u,0xDF55u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF55u:
    if(m==0u&&x==0u){ /* A90100 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF55u,3u,0x00u,0xDF58u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF58u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF58u,2u,0x00u,0xDF5Au);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF5Au:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF5Au,2u,0x20u,0xDF5Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF5Cu:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF5Cu,2u,0x10u,0xDF5Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF5Eu:
    if(m==1u&&x==0u){ /* A2DBC4 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF5Eu,3u,0xC4u,0xDF61u);
      sc_v11_op_ldx(r,0xC4DBu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF61u:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF61u,2u,0x09u,0xDF63u);
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF63u:
    if(m==1u&&x==0u){ /* A908 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF63u,2u,0x08u,0xDF65u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF65u:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF65u,2u,0x0Bu,0xDF67u);
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF67u:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF67u,3u,0x00u,0xDF6Au);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF6Au:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF6Au,2u,0x0Eu,0xDF6Cu);
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF6Cu:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF6Cu,2u,0x20u,0xDF6Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF6Eu:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF6Eu,3u,0x00u,0xDF71u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF71u:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF71u,2u,0x00u,0xDF73u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF73u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF73u,2u,0x20u,0xDF75u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF75u:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF75u,2u,0x10u,0xDF77u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF77u:
    if(m==1u&&x==0u){ /* A25C87 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF77u,3u,0x87u,0xDF7Au);
      sc_v11_op_ldx(r,0x875Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF7Au:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF7Au,2u,0x09u,0xDF7Cu);
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF7Cu:
    if(m==1u&&x==0u){ /* A909 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF7Cu,2u,0x09u,0xDF7Eu);
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF7Eu:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF7Eu,2u,0x0Bu,0xDF80u);
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF80u:
    if(m==1u&&x==0u){ /* A20040 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF80u,3u,0x40u,0xDF83u);
      sc_v11_op_ldx(r,0x4000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF83u:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF83u,2u,0x0Eu,0xDF85u);
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF85u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF85u,2u,0x20u,0xDF87u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF87u:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF87u,3u,0x00u,0xDF8Au);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF8Au:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF8Au,2u,0x00u,0xDF8Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF8Cu:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF8Cu,2u,0x20u,0xDF8Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF8Eu:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF8Eu,2u,0x10u,0xDF90u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF90u:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF90u,3u,0x00u,0xDF93u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF93u:
    if(m==1u&&x==0u){ /* 8E1621 STX abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF93u,3u,0x21u,0xDF96u);
      {uint32_t a=sc_v11_ea_abs(r,0x2116u);sc_v11_bus_write16(r,a,c->x);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF96u:
    if(m==1u&&x==0u){ /* E230 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF96u,2u,0x30u,0xDF98u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF98u:
    if(m==1u&&x==1u){ /* A902 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF98u,2u,0x02u,0xDF9Au);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF9Au:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF9Au,1u,0x0Au,0xDF9Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF9Bu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF9Bu,1u,0x0Au,0xDF9Cu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF9Cu:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF9Cu,1u,0x0Au,0xDF9Du);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF9Du:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF9Du,1u,0x0Au,0xDF9Eu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF9Eu:
    if(m==1u&&x==1u){ /* AA TAX imp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF9Eu,1u,0xAAu,0xDF9Fu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DF9Fu:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DF9Fu,2u,0x01u,0xDFA1u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFA1u:
    if(m==1u&&x==1u){ /* 9D0043 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFA1u,3u,0x43u,0xDFA4u);
      {uint32_t a=sc_v11_ea_absx(r,0x4300u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFA4u:
    if(m==1u&&x==1u){ /* A918 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFA4u,2u,0x18u,0xDFA6u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFA6u:
    if(m==1u&&x==1u){ /* 9D0143 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFA6u,3u,0x43u,0xDFA9u);
      {uint32_t a=sc_v11_ea_absx(r,0x4301u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFA9u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFA9u,2u,0x00u,0xDFABu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFABu:
    if(m==1u&&x==1u){ /* 9D0243 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFABu,3u,0x43u,0xDFAEu);
      {uint32_t a=sc_v11_ea_absx(r,0x4302u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFAEu:
    if(m==1u&&x==1u){ /* A980 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFAEu,2u,0x80u,0xDFB0u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFB0u:
    if(m==1u&&x==1u){ /* 9D0343 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFB0u,3u,0x43u,0xDFB3u);
      {uint32_t a=sc_v11_ea_absx(r,0x4303u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFB3u:
    if(m==1u&&x==1u){ /* A97E LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFB3u,2u,0x7Eu,0xDFB5u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFB5u:
    if(m==1u&&x==1u){ /* 9D0443 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFB5u,3u,0x43u,0xDFB8u);
      {uint32_t a=sc_v11_ea_absx(r,0x4304u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFB8u:
    if(m==1u&&x==1u){ /* A900 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFB8u,2u,0x00u,0xDFBAu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFBAu:
    if(m==1u&&x==1u){ /* 9D0543 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFBAu,3u,0x43u,0xDFBDu);
      {uint32_t a=sc_v11_ea_absx(r,0x4305u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFBDu:
    if(m==1u&&x==1u){ /* A980 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFBDu,2u,0x80u,0xDFBFu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFBFu:
    if(m==1u&&x==1u){ /* 9D0643 STA abs,x; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFBFu,3u,0x43u,0xDFC2u);
      {uint32_t a=sc_v11_ea_absx(r,0x4306u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFC2u:
    if(m==1u&&x==1u){ /* A901 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFC2u,2u,0x01u,0xDFC4u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFC4u:
    if(m==1u&&x==1u){ /* A202 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFC4u,2u,0x02u,0xDFC6u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFC6u:
    if(m==1u&&x==1u){ /* F004 BEQ rel; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFC6u,2u,0x04u,0xDFC8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDFCCu;}
            if(c->pc!=0xDFC8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDFC8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFC8u:
    if(m==1u&&x==1u){ /* 0A ASL acc; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFC8u,1u,0x0Au,0xDFC9u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFC9u:
    if(m==1u&&x==1u){ /* CA DEX imp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFC9u,1u,0xCAu,0xDFCAu);
      c->x=(uint16_t)((c->x-1u)&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFCAu:
    if(m==1u&&x==1u){ /* D0FC BNE rel; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFCAu,2u,0xFCu,0xDFCCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDFC8u;}
            if(c->pc!=0xDFCCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDFCCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFCCu:
    if(m==1u&&x==1u){ /* 8D0B42 STA abs; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFCCu,3u,0x42u,0xDFCFu);
      {uint32_t a=sc_v11_ea_abs(r,0x420Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFCFu:
    if(m==1u&&x==1u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFCFu,2u,0x20u,0xDFD1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFD1u:
    if(m==1u&&x==1u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFD1u,2u,0x10u,0xDFD3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFD3u:
    if(m==1u&&x==0u){ /* A440 LDY dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFD3u,2u,0x40u,0xDFD5u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0040u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFD5u:
    if(m==1u&&x==0u){ /* B9C8E1 LDA abs,y; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFD5u,3u,0xE1u,0xDFD8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xE1C8u)),8u);if(0u==0u||(((0xE1C8u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFD8u:
    if(m==1u&&x==0u){ /* 8509 STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFD8u,2u,0x09u,0xDFDAu);
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFDAu:
    if(m==1u&&x==0u){ /* B9D4E1 LDA abs,y; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFDAu,3u,0xE1u,0xDFDDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xE1D4u)),8u);if(0u==0u||(((0xE1D4u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFDDu:
    if(m==1u&&x==0u){ /* 850A STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFDDu,2u,0x0Au,0xDFDFu);
      {uint32_t a=sc_v11_ea_dp(r,0x000Au);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFDFu:
    if(m==1u&&x==0u){ /* B9E0E1 LDA abs,y; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFDFu,3u,0xE1u,0xDFE2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xE1E0u)),8u);if(0u==0u||(((0xE1E0u&0xffu)+(c->y&0xffu))>0xffu))sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFE2u:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFE2u,2u,0x0Bu,0xDFE4u);
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFE4u:
    if(m==1u&&x==0u){ /* A20000 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFE4u,3u,0x00u,0xDFE7u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFE7u:
    if(m==1u&&x==0u){ /* 860E STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFE7u,2u,0x0Eu,0xDFE9u);
      {uint32_t a=sc_v11_ea_dp(r,0x000Eu);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFE9u:
    if(m==1u&&x==0u){ /* C220 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFE9u,2u,0x20u,0xDFEBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFEBu:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFEBu,3u,0x00u,0xDFEEu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFEEu:
    if(m==0u&&x==0u){ /* 0200 COP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFEEu,2u,0x00u,0xDFF0u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
            if(!sc_v11_push8(r,c->pbr))return 0;
            if(!sc_v11_push16(r,c->pc))return 0;
            if(!sc_v11_push8(r,c->p))return 0;
            c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFF0u:
    if(m==0u&&x==0u){ /* E220 SEP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFF0u,2u,0x20u,0xDFF2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFF2u:
    if(m==1u&&x==0u){ /* C210 REP imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFF2u,2u,0x10u,0xDFF4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFF4u:
    if(m==1u&&x==0u){ /* A29D86 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFF4u,3u,0x86u,0xDFF7u);
      sc_v11_op_ldx(r,0x869Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFF7u:
    if(m==1u&&x==0u){ /* 8609 STX dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFF7u,2u,0x09u,0xDFF9u);
      {uint32_t a=sc_v11_ea_dp(r,0x0009u);sc_v11_bus_write16(r,a,c->x);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFF9u:
    if(m==1u&&x==0u){ /* A90C LDA imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFF9u,2u,0x0Cu,0xDFFBu);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFFBu:
    if(m==1u&&x==0u){ /* 850B STA dp; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFFBu,2u,0x0Bu,0xDFFDu);
      {uint32_t a=sc_v11_ea_dp(r,0x000Bu);sc_v11_bus_write8(r,a,(uint8_t)c->a);}if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03DFFDu:
    if(m==1u&&x==0u){ /* A20010 LDX imm; Version 14 new-city graphics and DMA setup island */
      SC_STATIC_CONTEXT_BEGIN(0x03DFFDu,3u,0x10u,0xE000u);
      sc_v11_op_ldx(r,0x1000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
