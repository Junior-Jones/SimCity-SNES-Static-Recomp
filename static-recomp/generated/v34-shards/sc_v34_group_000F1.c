/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000F1(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03C404u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C404u,1u,0x60u,0xC405u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C405u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C405u,2u,0x30u,0xC407u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C407u:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C407u,2u,0x00u,0xC409u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C409u:
    if(m==1u&&x==1u&&e==0u){ /* B9 F5 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C409u,3u,0x03u,0xC40Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x03F5u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C40Cu:
    if(m==1u&&x==1u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C40Cu,2u,0x05u,0xC40Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC413u;}
      if(c->pc!=0xC40Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC40Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C413u:
    if(m==1u&&x==1u&&e==0u){ /* AD EB 0D Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C413u,3u,0x0Du,0xC416u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0DEBu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C416u:
    if(m==1u&&x==1u&&e==0u){ /* F0 06 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C416u,2u,0x06u,0xC418u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC41Eu;}
      if(c->pc!=0xC418u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC418u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C41Eu:
    if(m==1u&&x==1u&&e==0u){ /* C0 03 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C41Eu,2u,0x03u,0xC420u);
      sc_v11_op_compare(r,c->y,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C420u:
    if(m==1u&&x==1u&&e==0u){ /* B0 02 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C420u,2u,0x02u,0xC422u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xC424u;}
      if(c->pc!=0xC422u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC422u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C422u:
    if(m==1u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C422u,1u,0x18u,0xC423u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C423u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C423u,1u,0x60u,0xC424u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C474u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C474u,2u,0x30u,0xC476u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C476u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3E 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C476u,3u,0x00u,0xC479u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x003Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C479u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C479u,3u,0x00u,0xC47Cu);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C47Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 5D Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C47Cu,2u,0x5Du,0xC47Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC4DBu;}
      if(c->pc!=0xC47Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC47Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C4DBu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C4DBu,1u,0x60u,0xC4DCu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C500u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C500u,2u,0x30u,0xC502u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C502u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3E 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C502u,3u,0x00u,0xC505u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x003Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C505u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C505u,3u,0x00u,0xC508u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C508u:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C508u,2u,0x01u,0xC50Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xC50Bu;}
      if(c->pc!=0xC50Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC50Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C50Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3387; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C50Au,1u,0x60u,0xC50Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C63Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C63Du,2u,0x30u,0xC63Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C63Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 6C 07 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C63Fu,3u,0x07u,0xC642u);
      sc_v11_op_lda(r,0x076Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C642u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C642u,3u,0x0Bu,0xC645u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B53u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C645u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C645u,3u,0x00u,0xC648u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C648u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 55 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C648u,3u,0x0Bu,0xC64Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B55u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C64Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 57 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C64Bu,3u,0x0Bu,0xC64Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B57u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C64Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C64Eu,1u,0x0Au,0xC64Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C64Fu:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C64Fu,1u,0xA8u,0xC650u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C650u:
    if(m==0u&&x==0u&&e==0u){ /* B9 91 C6 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C650u,3u,0xC6u,0xC653u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC691u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C653u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9D 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C653u,3u,0x0Bu,0xC656u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C656u:
    if(m==0u&&x==0u&&e==0u){ /* B9 99 C6 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C656u,3u,0xC6u,0xC659u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xC699u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C659u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9F 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C659u,3u,0x0Bu,0xC65Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B9Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C65Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 57 0B Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C65Cu,3u,0x0Bu,0xC65Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B57u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C65Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C65Fu,3u,0x00u,0xC662u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C662u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C662u,2u,0x03u,0xC664u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xC667u;}
      if(c->pc!=0xC664u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xC664u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C667u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A1 C6 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C667u,3u,0xC6u,0xC66Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC669u))return 0;c->pc=0xC6A1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C66Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C66Au,3u,0x00u,0xC66Du);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C66Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C66Du,3u,0xC4u,0xC670u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC66Fu))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C670u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9D C7 Mesen corrected gameplay frame 2467; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C670u,3u,0xC7u,0xC673u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xC672u))return 0;c->pc=0xC79Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03C673u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2479; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03C673u,1u,0x60u,0xC674u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
