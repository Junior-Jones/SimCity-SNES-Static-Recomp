/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_000F1(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03C5EBu:
    if(m==0u&&x==0u){ /* C230 REP imm; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C5EBu,2u,0x30u,0xC5EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5EDu:
    if(m==0u&&x==0u){ /* AD4000 LDA abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C5EDu,3u,0x00u,0xC5F0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0040u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5F0u:
    if(m==0u&&x==0u){ /* 48 PHA imp; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C5F0u,1u,0x48u,0xC5F1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5F1u:
    if(m==0u&&x==0u){ /* A90800 LDA imm; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C5F1u,3u,0x00u,0xC5F4u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5F4u:
    if(m==0u&&x==0u){ /* 8D4000 STA abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C5F4u,3u,0x00u,0xC5F7u);
      {uint32_t a=sc_v11_ea_abs(r,0x0040u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5F7u:
    if(m==0u&&x==0u){ /* 202ECE JSR abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C5F7u,3u,0xCEu,0xC5FAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC5F9u))return 0;c->pc=0xCE2Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5FAu:
    if(m==1u&&x==0u){ /* C230 REP imm; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C5FAu,2u,0x30u,0xC5FCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5FCu:
    if(m==0u&&x==0u){ /* 68 PLA imp; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C5FCu,1u,0x68u,0xC5FDu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_op_lda(r,sc_v11_pop16(r),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C5FDu:
    if(m==0u&&x==0u){ /* 8D4000 STA abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C5FDu,3u,0x00u,0xC600u);
      {uint32_t a=sc_v11_ea_abs(r,0x0040u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C600u:
    if(m==0u&&x==0u){ /* A01000 LDY imm; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C600u,3u,0x00u,0xC603u);
      sc_v11_op_ldy(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C603u:
    if(m==0u&&x==0u){ /* 2019CF JSR abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C603u,3u,0xCFu,0xC606u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC605u))return 0;c->pc=0xCF19u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C606u:
    if(m==0u&&x==0u){ /* A96C07 LDA imm; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C606u,3u,0x07u,0xC609u);
      sc_v11_op_lda(r,0x076Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C609u:
    if(m==0u&&x==0u){ /* 8D530B STA abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C609u,3u,0x0Bu,0xC60Cu);
      {uint32_t a=sc_v11_ea_abs(r,0x0B53u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C60Cu:
    if(m==0u&&x==0u){ /* A90100 LDA imm; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C60Cu,3u,0x00u,0xC60Fu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C60Fu:
    if(m==0u&&x==0u){ /* 8D550B STA abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C60Fu,3u,0x0Bu,0xC612u);
      {uint32_t a=sc_v11_ea_abs(r,0x0B55u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C612u:
    if(m==0u&&x==0u){ /* 9C570B STZ abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C612u,3u,0x0Bu,0xC615u);
      {uint32_t a=sc_v11_ea_abs(r,0x0B57u);sc_v11_bus_write16(r,a,0u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C615u:
    if(m==0u&&x==0u){ /* A9204E LDA imm; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C615u,3u,0x4Eu,0xC618u);
      sc_v11_op_lda(r,0x4E20u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C618u:
    if(m==0u&&x==0u){ /* 8D9D0B STA abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C618u,3u,0x0Bu,0xC61Bu);
      {uint32_t a=sc_v11_ea_abs(r,0x0B9Du);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C61Bu:
    if(m==0u&&x==0u){ /* 9C9F0B STZ abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C61Bu,3u,0x0Bu,0xC61Eu);
      {uint32_t a=sc_v11_ea_abs(r,0x0B9Fu);sc_v11_bus_write16(r,a,0u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C61Eu:
    if(m==0u&&x==0u){ /* 20A1C6 JSR abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C61Eu,3u,0xC6u,0xC621u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC620u))return 0;c->pc=0xC6A1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C621u:
    if(m==0u&&x==0u){ /* A90000 LDA imm; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C621u,3u,0x00u,0xC624u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C624u:
    if(m==0u&&x==0u){ /* 202AC4 JSR abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C624u,3u,0xC4u,0xC627u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC626u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C627u:
    if(m==0u&&x==0u){ /* A92F00 LDA imm; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C627u,3u,0x00u,0xC62Au);
      sc_v11_op_lda(r,0x002Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C62Au:
    if(m==0u&&x==0u){ /* 8DBD01 STA abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C62Au,3u,0x01u,0xC62Du);
      {uint32_t a=sc_v11_ea_abs(r,0x01BDu);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C62Du:
    if(m==0u&&x==0u){ /* A92200 LDA imm; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C62Du,3u,0x00u,0xC630u);
      sc_v11_op_lda(r,0x0022u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C630u:
    if(m==0u&&x==0u){ /* 8DBF01 STA abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C630u,3u,0x01u,0xC633u);
      {uint32_t a=sc_v11_ea_abs(r,0x01BFu);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C633u:
    if(m==0u&&x==0u){ /* 209DC7 JSR abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C633u,3u,0xC7u,0xC636u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC635u))return 0;c->pc=0xC79Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C636u:
    if(m==0u&&x==0u){ /* A90100 LDA imm; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C636u,3u,0x00u,0xC639u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C639u:
    if(m==0u&&x==0u){ /* 8D3800 STA abs; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C639u,3u,0x00u,0xC63Cu);
      {uint32_t a=sc_v11_ea_abs(r,0x0038u);sc_v11_bus_write16(r,a,c->a);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C63Cu:
    if(m==0u&&x==0u){ /* 60 RTS imp; Version 15 B-mode entry island */
      SC_STATIC_CONTEXT_BEGIN(0x03C63Cu,1u,0x60u,0xC63Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6A1u:
    if(m==0u&&x==0u){ /* C230 REP; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6A1u,2u,0x30u,0xC6A3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6A3u:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6A3u,3u,0x00u,0xC6A6u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6A6u:
    if(m==0u&&x==0u){ /* A90000 LDA imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6A6u,3u,0x00u,0xC6A9u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6A9u:
    if(m==0u&&x==0u){ /* 9FC05F7F STA long,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6A9u,4u,0x7Fu,0xC6ADu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F5FC0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6ADu:
    if(m==0u&&x==0u){ /* 9F60657F STA long,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6ADu,4u,0x7Fu,0xC6B1u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6560u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6B1u:
    if(m==0u&&x==0u){ /* 9FB0607F STA long,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6B1u,4u,0x7Fu,0xC6B5u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F60B0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6B5u:
    if(m==0u&&x==0u){ /* 9F50667F STA long,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6B5u,4u,0x7Fu,0xC6B9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6650u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6B9u:
    if(m==0u&&x==0u){ /* 9FA0617F STA long,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6B9u,4u,0x7Fu,0xC6BDu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F61A0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6BDu:
    if(m==0u&&x==0u){ /* 9F40677F STA long,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6BDu,4u,0x7Fu,0xC6C1u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6740u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6C1u:
    if(m==0u&&x==0u){ /* 9F70647F STA long,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6C1u,4u,0x7Fu,0xC6C5u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6470u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6C5u:
    if(m==0u&&x==0u){ /* 9F106A7F STA long,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6C5u,4u,0x7Fu,0xC6C9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6A10u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6C9u:
    if(m==0u&&x==0u){ /* 9F90627F STA long,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6C9u,4u,0x7Fu,0xC6CDu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6290u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6CDu:
    if(m==0u&&x==0u){ /* 9F30687F STA long,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6CDu,4u,0x7Fu,0xC6D1u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6830u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6D1u:
    if(m==0u&&x==0u){ /* A98000 LDA imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6D1u,3u,0x00u,0xC6D4u);
      sc_v11_op_lda(r,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6D4u:
    if(m==0u&&x==0u){ /* 9F80637F STA long,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6D4u,4u,0x7Fu,0xC6D8u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6380u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6D8u:
    if(m==0u&&x==0u){ /* 9F20697F STA long,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6D8u,4u,0x7Fu,0xC6DCu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F6920u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6DCu:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6DCu,1u,0xE8u,0xC6DDu);
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6DDu:
    if(m==0u&&x==0u){ /* E8 INX; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6DDu,1u,0xE8u,0xC6DEu);
      c->x=(uint16_t)(c->x+1u);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6DEu:
    if(m==0u&&x==0u){ /* E0F000 CPX imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6DEu,3u,0x00u,0xC6E1u);
      sc_v11_op_compare(r,c->x,0x00F0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6E1u:
    if(m==0u&&x==0u){ /* D0C3 BNE; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6E1u,2u,0xC3u,0xC6E3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC6A6u;}if(c->pc!=0xC6E3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6E3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6E3u:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6E3u,3u,0x00u,0xC6E6u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6E6u:
    if(m==0u&&x==0u){ /* A9FFFF LDA imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6E6u,3u,0xFFu,0xC6E9u);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6E9u:
    if(m==0u&&x==0u){ /* 9DED0C STA abs,x; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6E9u,3u,0x0Cu,0xC6ECu);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CEDu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6ECu:
    if(m==0u&&x==0u){ /* 8A TXA; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6ECu,1u,0x8Au,0xC6EDu);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6EDu:
    if(m==0u&&x==0u){ /* 18 CLC; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6EDu,1u,0x18u,0xC6EEu);
      c->p=(uint8_t)(c->p&((uint8_t)~SC_FLAG_C));sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6EEu:
    if(m==0u&&x==0u){ /* 690600 ADC imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6EEu,3u,0x00u,0xC6F1u);
      sc_v11_op_adc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6F1u:
    if(m==0u&&x==0u){ /* AA TAX; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6F1u,1u,0xAAu,0xC6F2u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6F2u:
    if(m==0u&&x==0u){ /* E03C00 CPX imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6F2u,3u,0x00u,0xC6F5u);
      sc_v11_op_compare(r,c->x,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6F5u:
    if(m==0u&&x==0u){ /* D0EF BNE; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6F5u,2u,0xEFu,0xC6F7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC6E6u;}if(c->pc!=0xC6F7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC6F7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6F7u:
    if(m==0u&&x==0u){ /* A9F401 LDA imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6F7u,3u,0x01u,0xC6FAu);
      sc_v11_op_lda(r,0x01F4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6FAu:
    if(m==0u&&x==0u){ /* 8DED0D STA abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6FAu,3u,0x0Du,0xC6FDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DEDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C6FDu:
    if(m==0u&&x==0u){ /* A90D00 LDA imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C6FDu,3u,0x00u,0xC700u);
      sc_v11_op_lda(r,0x000Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C700u:
    if(m==0u&&x==0u){ /* 8D9501 STA abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C700u,3u,0x01u,0xC703u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0195u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C703u:
    if(m==0u&&x==0u){ /* A90200 LDA imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C703u,3u,0x00u,0xC706u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C706u:
    if(m==0u&&x==0u){ /* 8D9301 STA abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C706u,3u,0x01u,0xC709u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0193u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C709u:
    if(m==0u&&x==0u){ /* A90700 LDA imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C709u,3u,0x00u,0xC70Cu);
      sc_v11_op_lda(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C70Cu:
    if(m==0u&&x==0u){ /* 8DC50D STA abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C70Cu,3u,0x0Du,0xC70Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C70Fu:
    if(m==0u&&x==0u){ /* 9C8B0B STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C70Fu,3u,0x0Bu,0xC712u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B8Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C712u:
    if(m==0u&&x==0u){ /* 9C930B STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C712u,3u,0x0Bu,0xC715u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B93u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C715u:
    if(m==0u&&x==0u){ /* 9C8F0B STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C715u,3u,0x0Bu,0xC718u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B8Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C718u:
    if(m==0u&&x==0u){ /* 9CAD0B STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C718u,3u,0x0Bu,0xC71Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BADu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C71Bu:
    if(m==0u&&x==0u){ /* 9CAF0B STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C71Bu,3u,0x0Bu,0xC71Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BAFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C71Eu:
    if(m==0u&&x==0u){ /* 9CB10B STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C71Eu,3u,0x0Bu,0xC721u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C721u:
    if(m==0u&&x==0u){ /* 9C6D0C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C721u,3u,0x0Cu,0xC724u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C724u:
    if(m==0u&&x==0u){ /* 9C6F0C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C724u,3u,0x0Cu,0xC727u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C6Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C727u:
    if(m==0u&&x==0u){ /* 9C030C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C727u,3u,0x0Cu,0xC72Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C03u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C72Au:
    if(m==0u&&x==0u){ /* 9C010C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C72Au,3u,0x0Cu,0xC72Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C01u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C72Du:
    if(m==0u&&x==0u){ /* 9C070C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C72Du,3u,0x0Cu,0xC730u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C07u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C730u:
    if(m==0u&&x==0u){ /* 9CEB0D STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C730u,3u,0x0Du,0xC733u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DEBu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C733u:
    if(m==0u&&x==0u){ /* 9CC70D STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C733u,3u,0x0Du,0xC736u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C736u:
    if(m==0u&&x==0u){ /* 9CA50B STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C736u,3u,0x0Bu,0xC739u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BA5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C739u:
    if(m==0u&&x==0u){ /* 9CA70B STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C739u,3u,0x0Bu,0xC73Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BA7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C73Cu:
    if(m==0u&&x==0u){ /* 9CA50C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C73Cu,3u,0x0Cu,0xC73Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CA5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C73Fu:
    if(m==0u&&x==0u){ /* 9CC90C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C73Fu,3u,0x0Cu,0xC742u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CC9u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C742u:
    if(m==0u&&x==0u){ /* 9CA70C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C742u,3u,0x0Cu,0xC745u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CA7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C745u:
    if(m==0u&&x==0u){ /* 9CA90C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C745u,3u,0x0Cu,0xC748u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CA9u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C748u:
    if(m==0u&&x==0u){ /* 9CAB0C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C748u,3u,0x0Cu,0xC74Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CABu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C74Bu:
    if(m==0u&&x==0u){ /* 9CAD0C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C74Bu,3u,0x0Cu,0xC74Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CADu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C74Eu:
    if(m==0u&&x==0u){ /* 9CAF0C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C74Eu,3u,0x0Cu,0xC751u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CAFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C751u:
    if(m==0u&&x==0u){ /* 9CB10C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C751u,3u,0x0Cu,0xC754u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CB1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C754u:
    if(m==0u&&x==0u){ /* 9CB30C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C754u,3u,0x0Cu,0xC757u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CB3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C757u:
    if(m==0u&&x==0u){ /* 9CB50C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C757u,3u,0x0Cu,0xC75Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CB5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C75Au:
    if(m==0u&&x==0u){ /* 9CB70C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C75Au,3u,0x0Cu,0xC75Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CB7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C75Du:
    if(m==0u&&x==0u){ /* 9CB90C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C75Du,3u,0x0Cu,0xC760u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CB9u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C760u:
    if(m==0u&&x==0u){ /* 9CBB0C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C760u,3u,0x0Cu,0xC763u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CBBu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C763u:
    if(m==0u&&x==0u){ /* 9CBD0C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C763u,3u,0x0Cu,0xC766u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CBDu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C766u:
    if(m==0u&&x==0u){ /* 9CBF0C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C766u,3u,0x0Cu,0xC769u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CBFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C769u:
    if(m==0u&&x==0u){ /* 9CC30C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C769u,3u,0x0Cu,0xC76Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CC3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C76Cu:
    if(m==0u&&x==0u){ /* 9CC10C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C76Cu,3u,0x0Cu,0xC76Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CC1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C76Fu:
    if(m==0u&&x==0u){ /* 9CC50C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C76Fu,3u,0x0Cu,0xC772u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CC5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C772u:
    if(m==0u&&x==0u){ /* 9CCB0C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C772u,3u,0x0Cu,0xC775u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CCBu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C775u:
    if(m==0u&&x==0u){ /* 9C9901 STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C775u,3u,0x01u,0xC778u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0199u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C778u:
    if(m==0u&&x==0u){ /* 9C9701 STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C778u,3u,0x01u,0xC77Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0197u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C77Bu:
    if(m==0u&&x==0u){ /* 9C010B STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C77Bu,3u,0x0Bu,0xC77Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B01u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C77Eu:
    if(m==0u&&x==0u){ /* 9C510B STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C77Eu,3u,0x0Bu,0xC781u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B51u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C781u:
    if(m==0u&&x==0u){ /* 9C1D0B STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C781u,3u,0x0Bu,0xC784u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B1Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C784u:
    if(m==0u&&x==0u){ /* 9CF503 STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C784u,3u,0x03u,0xC787u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03F5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C787u:
    if(m==0u&&x==0u){ /* 9CF703 STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C787u,3u,0x03u,0xC78Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03F7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C78Au:
    if(m==0u&&x==0u){ /* 9CE701 STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C78Au,3u,0x01u,0xC78Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C78Du:
    if(m==0u&&x==0u){ /* A9FFFF LDA imm; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C78Du,3u,0xFFu,0xC790u);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C790u:
    if(m==0u&&x==0u){ /* 8DBD01 STA abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C790u,3u,0x01u,0xC793u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C793u:
    if(m==0u&&x==0u){ /* 8DBF01 STA abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C793u,3u,0x01u,0xC796u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C796u:
    if(m==0u&&x==0u){ /* 9CC70C STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C796u,3u,0x0Cu,0xC799u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0CC7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C799u:
    if(m==0u&&x==0u){ /* 9C9503 STZ abs; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C799u,3u,0x03u,0xC79Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0395u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C79Cu:
    if(m==0u&&x==0u){ /* 60 RTS; Version 15 B-mode city defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C79Cu,1u,0x60u,0xC79Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C42Au:
    if(m==0u&&x==0u){ /* C230 REP; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C42Au,2u,0x30u,0xC42Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C42Cu:
    if(m==0u&&x==0u){ /* 48 PHA; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C42Cu,1u,0x48u,0xC42Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C42Du:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C42Du,3u,0x00u,0xC430u);
      sc_v11_op_ldx(r,0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C430u:
    if(m==0u&&x==0u){ /* BDED0C LDA abs,x; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C430u,3u,0x0Cu,0xC433u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0CEDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C433u:
    if(m==0u&&x==0u){ /* C9FFFF CMP imm; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C433u,3u,0xFFu,0xC436u);
      sc_v11_op_compare(r,c->a,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C436u:
    if(m==0u&&x==0u){ /* F02B branch; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C436u,2u,0x2Bu,0xC438u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC463u;}if(c->pc!=0xC438u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC438u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C438u:
    if(m==0u&&x==0u){ /* 8A TXA; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C438u,1u,0x8Au,0xC439u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C439u:
    if(m==0u&&x==0u){ /* 18 CLC; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C439u,1u,0x18u,0xC43Au);
      c->p=(uint8_t)(c->p&((uint8_t)~SC_FLAG_C));sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C43Au:
    if(m==0u&&x==0u){ /* 690600 ADC imm; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C43Au,3u,0x00u,0xC43Du);
      sc_v11_op_adc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C43Du:
    if(m==0u&&x==0u){ /* AA TAX; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C43Du,1u,0xAAu,0xC43Eu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C43Eu:
    if(m==0u&&x==0u){ /* E03C00 CPX imm; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C43Eu,3u,0x00u,0xC441u);
      sc_v11_op_compare(r,c->x,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C441u:
    if(m==0u&&x==0u){ /* D0ED branch; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C441u,2u,0xEDu,0xC443u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC430u;}if(c->pc!=0xC443u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC443u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C443u:
    if(m==0u&&x==0u){ /* A20000 LDX imm; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C443u,3u,0x00u,0xC446u);
      sc_v11_op_ldx(r,0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C446u:
    if(m==0u&&x==0u){ /* BDF30C LDA abs,x; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C446u,3u,0x0Cu,0xC449u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0CF3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C449u:
    if(m==0u&&x==0u){ /* 9DED0C STA abs,x; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C449u,3u,0x0Cu,0xC44Cu);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CEDu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C44Cu:
    if(m==0u&&x==0u){ /* BDF50C LDA abs,x; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C44Cu,3u,0x0Cu,0xC44Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0CF5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C44Fu:
    if(m==0u&&x==0u){ /* 9DEF0C STA abs,x; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C44Fu,3u,0x0Cu,0xC452u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CEFu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C452u:
    if(m==0u&&x==0u){ /* BDF70C LDA abs,x; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C452u,3u,0x0Cu,0xC455u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0CF7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C455u:
    if(m==0u&&x==0u){ /* 9DF10C STA abs,x; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C455u,3u,0x0Cu,0xC458u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CF1u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C458u:
    if(m==0u&&x==0u){ /* 8A TXA; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C458u,1u,0x8Au,0xC459u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C459u:
    if(m==0u&&x==0u){ /* 18 CLC; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C459u,1u,0x18u,0xC45Au);
      c->p=(uint8_t)(c->p&((uint8_t)~SC_FLAG_C));sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C45Au:
    if(m==0u&&x==0u){ /* 690600 ADC imm; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C45Au,3u,0x00u,0xC45Du);
      sc_v11_op_adc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C45Du:
    if(m==0u&&x==0u){ /* AA TAX; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C45Du,1u,0xAAu,0xC45Eu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C45Eu:
    if(m==0u&&x==0u){ /* E03600 CPX imm; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C45Eu,3u,0x00u,0xC461u);
      sc_v11_op_compare(r,c->x,0x0036u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C461u:
    if(m==0u&&x==0u){ /* D0E3 branch; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C461u,2u,0xE3u,0xC463u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC446u;}if(c->pc!=0xC463u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC463u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C463u:
    if(m==0u&&x==0u){ /* 68 PLA; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C463u,1u,0x68u,0xC464u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_op_lda(r,sc_v11_pop16(r),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C464u:
    if(m==0u&&x==0u){ /* 9DED0C STA abs,x; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C464u,3u,0x0Cu,0xC467u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CEDu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C467u:
    if(m==0u&&x==0u){ /* AD530B LDA abs; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C467u,3u,0x0Bu,0xC46Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B53u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C46Au:
    if(m==0u&&x==0u){ /* 9DEF0C STA abs,x; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C46Au,3u,0x0Cu,0xC46Du);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CEFu),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C46Du:
    if(m==0u&&x==0u){ /* AD550B LDA abs; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C46Du,3u,0x0Bu,0xC470u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B55u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C470u:
    if(m==0u&&x==0u){ /* 9DF10C STA abs,x; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C470u,3u,0x0Cu,0xC473u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0CF1u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C473u:
    if(m==0u&&x==0u){ /* 60 RTS; Version 15 B-mode city slot island */
      SC_STATIC_CONTEXT_BEGIN(0x03C473u,1u,0x60u,0xC474u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C79Du:
    if(m==0u&&x==0u){ /* C230 REP; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C79Du,2u,0x30u,0xC79Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C79Fu:
    if(m==0u&&x==0u){ /* 209CC8 JSR; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C79Fu,3u,0xC8u,0xC7A2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC7A1u))return 0;c->pc=0xC89Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7A2u:
    if(m==0u&&x==0u){ /* A92000 LDA imm; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7A2u,3u,0x00u,0xC7A5u);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7A5u:
    if(m==0u&&x==0u){ /* 8DC50B STA abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7A5u,3u,0x0Bu,0xC7A8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7A8u:
    if(m==0u&&x==0u){ /* A9E803 LDA imm; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7A8u,3u,0x03u,0xC7ABu);
      sc_v11_op_lda(r,0x03E8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7ABu:
    if(m==0u&&x==0u){ /* 8DC70B STA abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7ABu,3u,0x0Bu,0xC7AEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7AEu:
    if(m==0u&&x==0u){ /* 8DC90B STA abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7AEu,3u,0x0Bu,0xC7B1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BC9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7B1u:
    if(m==0u&&x==0u){ /* 9CD30D STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7B1u,3u,0x0Du,0xC7B4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7B4u:
    if(m==0u&&x==0u){ /* 9CD50D STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7B4u,3u,0x0Du,0xC7B7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7B7u:
    if(m==0u&&x==0u){ /* 9CD70D STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7B7u,3u,0x0Du,0xC7BAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DD7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7BAu:
    if(m==0u&&x==0u){ /* 9CC30D STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7BAu,3u,0x0Du,0xC7BDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7BDu:
    if(m==0u&&x==0u){ /* 9CB30B STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7BDu,3u,0x0Bu,0xC7C0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB3u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7C0u:
    if(m==0u&&x==0u){ /* 9CB50B STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7C0u,3u,0x0Bu,0xC7C3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7C3u:
    if(m==0u&&x==0u){ /* 9CB70B STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7C3u,3u,0x0Bu,0xC7C6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7C6u:
    if(m==0u&&x==0u){ /* 9C910A STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7C6u,3u,0x0Au,0xC7C9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A91u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7C9u:
    if(m==0u&&x==0u){ /* 9C8B0A STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7C9u,3u,0x0Au,0xC7CCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A8Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7CCu:
    if(m==0u&&x==0u){ /* 9C8F0A STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7CCu,3u,0x0Au,0xC7CFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A8Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7CFu:
    if(m==0u&&x==0u){ /* 9C8D0A STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7CFu,3u,0x0Au,0xC7D2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A8Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7D2u:
    if(m==0u&&x==0u){ /* 9C930A STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7D2u,3u,0x0Au,0xC7D5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A93u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7D5u:
    if(m==0u&&x==0u){ /* 9C950A STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7D5u,3u,0x0Au,0xC7D8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A95u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7D8u:
    if(m==0u&&x==0u){ /* 9CEF0A STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7D8u,3u,0x0Au,0xC7DBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AEFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7DBu:
    if(m==0u&&x==0u){ /* 9CF10A STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7DBu,3u,0x0Au,0xC7DEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7DEu:
    if(m==0u&&x==0u){ /* 9C870D STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7DEu,3u,0x0Du,0xC7E1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D87u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7E1u:
    if(m==0u&&x==0u){ /* 9CC90D STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7E1u,3u,0x0Du,0xC7E4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DC9u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7E4u:
    if(m==0u&&x==0u){ /* 9CCB0D STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7E4u,3u,0x0Du,0xC7E7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DCBu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7E7u:
    if(m==0u&&x==0u){ /* A96400 LDA imm; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7E7u,3u,0x00u,0xC7EAu);
      sc_v11_op_lda(r,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7EAu:
    if(m==0u&&x==0u){ /* 8D790D STA abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7EAu,3u,0x0Du,0xC7EDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D79u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7EDu:
    if(m==0u&&x==0u){ /* 8D7B0D STA abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7EDu,3u,0x0Du,0xC7F0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D7Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7F0u:
    if(m==0u&&x==0u){ /* 8D7D0D STA abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7F0u,3u,0x0Du,0xC7F3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0D7Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7F3u:
    if(m==0u&&x==0u){ /* 9C730C STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7F3u,3u,0x0Cu,0xC7F6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C73u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7F6u:
    if(m==0u&&x==0u){ /* 9C750C STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7F6u,3u,0x0Cu,0xC7F9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C75u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7F9u:
    if(m==0u&&x==0u){ /* 9C770C STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7F9u,3u,0x0Cu,0xC7FCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C77u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7FCu:
    if(m==0u&&x==0u){ /* 9C7F0C STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7FCu,3u,0x0Cu,0xC7FFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C7Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C7FFu:
    if(m==0u&&x==0u){ /* 9C810C STZ abs; Version 15 B-mode budget defaults island */
      SC_STATIC_CONTEXT_BEGIN(0x03C7FFu,3u,0x0Cu,0xC802u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C81u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
