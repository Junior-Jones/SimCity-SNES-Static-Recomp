/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00062(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01888Eu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01888Eu,2u,0x20u,0x8890u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01888Eu,2u,0x20u,0x8890u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01888Eu,2u,0x20u,0x8890u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018890u:
    if(m==0u&&x==1u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018890u,3u,0xFFu,0x8893u);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018893u:
    if(m==0u&&x==1u&&e==0u){ /* 8D EF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018893u,3u,0x01u,0x8896u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018896u:
    if(m==0u&&x==1u&&e==0u){ /* 8D D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018896u,3u,0x01u,0x8899u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018899u:
    if(m==0u&&x==1u&&e==0u){ /* 8D E5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018899u,3u,0x01u,0x889Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01889Cu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 4B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01889Cu,3u,0x0Bu,0x889Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01889Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 99 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01889Fu,3u,0x03u,0x88A2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0399u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188A2u:
    if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188A2u,3u,0x00u,0x88A5u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188A5u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 4F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188A5u,3u,0x0Bu,0x88A8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B4Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188A8u:
    if(m==0u&&x==1u&&e==0u){ /* A9 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188A8u,3u,0x00u,0x88ABu);
      sc_v11_op_lda(r,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188ABu:
    if(m==0u&&x==1u&&e==0u){ /* 8D EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188ABu,3u,0x01u,0x88AEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188AEu:
    if(m==0u&&x==1u&&e==0u){ /* 8D ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188AEu,3u,0x01u,0x88B1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01EDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188B1u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188B1u,3u,0x00u,0x88B4u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188B4u:
    if(m==0u&&x==1u&&e==0u){ /* 8D D9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188B4u,3u,0x01u,0x88B7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188B7u:
    if(m==0u&&x==1u&&e==0u){ /* 8D DB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188B7u,3u,0x01u,0x88BAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01DBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188BAu:
    if(m==0u&&x==1u&&e==0u){ /* 8D AB 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188BAu,3u,0x02u,0x88BDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x02ABu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188BDu:
    if(m==0u&&x==1u&&e==0u){ /* 8D F9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188BDu,3u,0x01u,0x88C0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188C0u:
    if(m==0u&&x==1u&&e==0u){ /* 8D E1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188C0u,3u,0x01u,0x88C3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188C3u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188C3u,3u,0x02u,0x88C6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x020Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188C6u:
    if(m==0u&&x==1u&&e==0u){ /* 8D DD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188C6u,3u,0x01u,0x88C9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01DDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188C9u:
    if(m==0u&&x==1u&&e==0u){ /* 85 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188C9u,2u,0xD7u,0x88CBu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xD7u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188CBu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 89 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188CBu,3u,0x03u,0x88CEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0389u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188CEu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188CEu,3u,0x03u,0x88D1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0385u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188D1u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 83 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188D1u,3u,0x03u,0x88D4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0383u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188D4u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 79 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188D4u,3u,0x03u,0x88D7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0379u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188D7u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188D7u,2u,0x20u,0x88D9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0188D9u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0188D9u,2u,0x10u,0x88DBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018907u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018907u,2u,0x10u,0x8909u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01890Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01890Fu,2u,0x20u,0x8911u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01890Fu,2u,0x20u,0x8911u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01890Fu,2u,0x20u,0x8911u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018911u:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018911u,3u,0x00u,0x8914u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018914u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 39 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018914u,3u,0x01u,0x8917u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0139u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018917u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 37 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018917u,3u,0x01u,0x891Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0137u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01891Au:
    if(m==0u&&x==1u&&e==0u){ /* 8D 97 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01891Au,3u,0x01u,0x891Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0197u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01891Du:
    if(m==0u&&x==1u&&e==0u){ /* 85 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01891Du,2u,0xE3u,0x891Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01891Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D B5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01891Fu,3u,0x0Au,0x8922u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AB5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018922u:
    if(m==0u&&x==1u&&e==0u){ /* 8D CB 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018922u,3u,0x0Bu,0x8925u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BCBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018925u:
    if(m==0u&&x==1u&&e==0u){ /* 20 DC F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018925u,3u,0xF1u,0x8928u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8927u))return 0;c->pc=0xF1DCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018928u:
    if(m==0u&&x==1u&&e==0u){ /* 20 8E 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018928u,3u,0x88u,0x892Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x892Au))return 0;c->pc=0x888Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 8E 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018928u,3u,0x88u,0x892Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x892Au))return 0;c->pc=0x888Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 8E 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018928u,3u,0x88u,0x892Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x892Au))return 0;c->pc=0x888Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01892Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 8C A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01892Bu,3u,0xA0u,0x892Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x892Du))return 0;c->pc=0xA08Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 8C A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01892Bu,3u,0xA0u,0x892Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x892Du))return 0;c->pc=0xA08Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 8C A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01892Bu,3u,0xA0u,0x892Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x892Du))return 0;c->pc=0xA08Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01892Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 7B DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01892Eu,3u,0xDFu,0x8931u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8930u))return 0;c->pc=0xDF7Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 7B DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01892Eu,3u,0xDFu,0x8931u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8930u))return 0;c->pc=0xDF7Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 7B DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01892Eu,3u,0xDFu,0x8931u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8930u))return 0;c->pc=0xDF7Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018931u:
    if(m==0u&&x==0u&&e==0u){ /* 58 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018931u,1u,0x58u,0x8932u);
      c->p&=(uint8_t)~SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 58 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018931u,1u,0x58u,0x8932u);
      c->p&=(uint8_t)~SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 58 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018931u,1u,0x58u,0x8932u);
      c->p&=(uint8_t)~SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018932u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018932u,3u,0xC8u,0x8935u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8934u))return 0;c->pc=0xC8B7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018932u,3u,0xC8u,0x8935u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8934u))return 0;c->pc=0xC8B7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018932u,3u,0xC8u,0x8935u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8934u))return 0;c->pc=0xC8B7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018935u:
    if(m==0u&&x==0u&&e==0u){ /* 20 17 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018935u,3u,0xC8u,0x8938u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8937u))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 17 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018935u,3u,0xC8u,0x8938u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8937u))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 17 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018935u,3u,0xC8u,0x8938u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8937u))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018938u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018938u,2u,0x10u,0x893Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018938u,2u,0x10u,0x893Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018938u,2u,0x10u,0x893Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01893Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 44 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01893Au,3u,0x8Au,0x893Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x893Cu))return 0;c->pc=0x8A44u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01893Du:
    if(m==0u&&x==1u&&e==0u){ /* 20 60 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01893Du,3u,0xC6u,0x8940u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x893Fu))return 0;c->pc=0xC660u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 60 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01893Du,3u,0xC6u,0x8940u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x893Fu))return 0;c->pc=0xC660u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 60 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01893Du,3u,0xC6u,0x8940u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x893Fu))return 0;c->pc=0xC660u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018940u:
    if(m==0u&&x==1u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018940u,3u,0xA0u,0x8943u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8942u))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018940u,3u,0xA0u,0x8943u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8942u))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018940u,3u,0xA0u,0x8943u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8942u))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018943u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018943u,2u,0x20u,0x8945u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018943u,2u,0x20u,0x8945u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018943u,2u,0x20u,0x8945u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018945u:
    if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018945u,3u,0x00u,0x8948u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018948u:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018948u,2u,0x00u,0x894Au);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x894Au))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01894Au:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01894Au,2u,0x20u,0x894Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01894Cu:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01894Cu,3u,0x00u,0x894Fu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01894Fu:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01894Fu,2u,0x00u,0x8951u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8951u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018951u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018951u,2u,0x30u,0x8953u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018965u:
    if(m==0u&&x==0u&&e==0u){ /* EE 09 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018965u,3u,0x01u,0x8968u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0109u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018968u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 05 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018968u,3u,0x01u,0x896Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0105u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018970u:
    if(m==0u&&x==0u&&e==0u){ /* EE 15 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018970u,3u,0x01u,0x8973u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0115u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018973u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 11 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018973u,3u,0x01u,0x8976u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018979u:
    if(m==0u&&x==1u&&e==0u){ /* 20 A7 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018979u,3u,0x94u,0x897Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x897Bu))return 0;c->pc=0x94A7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A7 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018979u,3u,0x94u,0x897Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x897Bu))return 0;c->pc=0x94A7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A7 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018979u,3u,0x94u,0x897Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x897Bu))return 0;c->pc=0x94A7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01897Cu:
    if(m==0u&&x==1u&&e==0u){ /* 20 1F 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01897Cu,3u,0x8Bu,0x897Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x897Eu))return 0;c->pc=0x8B1Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 1F 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01897Cu,3u,0x8Bu,0x897Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x897Eu))return 0;c->pc=0x8B1Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1F 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01897Cu,3u,0x8Bu,0x897Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x897Eu))return 0;c->pc=0x8B1Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01897Fu:
    if(m==0u&&x==1u&&e==0u){ /* A5 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01897Fu,2u,0xC5u,0x8981u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC5u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01897Fu,2u,0xC5u,0x8981u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC5u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01897Fu,2u,0xC5u,0x8981u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC5u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018981u:
    if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018981u,2u,0x10u,0x8983u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018981u,2u,0x10u,0x8983u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018981u,2u,0x10u,0x8983u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018983u:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018983u,1u,0x0Au,0x8984u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018984u:
    if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018984u,1u,0xAAu,0x8985u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018985u:
    if(m==1u&&x==0u&&e==0u){ /* FC EF 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018985u,3u,0x88u,0x8988u);
      {uint32_t q=((uint32_t)c->pbr<<16)|((0x88EFu+c->x)&0xffffu);uint16_t t=sc_v11_bus_read16(r,q);sc_v11_scheduler_internal_cycle(r,2u);if(!sc_v11_push16(r,0x8987u))return 0;c->pc=t;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018988u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018988u,2u,0x20u,0x898Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018988u,2u,0x20u,0x898Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018993u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018993u,3u,0x00u,0x8996u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018993u,3u,0x00u,0x8996u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018996u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018996u,2u,0x1Bu,0x8998u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x89B3u;}
      if(c->pc!=0x8998u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8998u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018996u,2u,0x1Bu,0x8998u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x89B3u;}
      if(c->pc!=0x8998u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8998u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018998u:
    if(m==0u&&x==0u&&e==0u){ /* D0 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018998u,2u,0x4Au,0x899Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89E4u;}
      if(c->pc!=0x899Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x899Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018998u,2u,0x4Au,0x899Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89E4u;}
      if(c->pc!=0x899Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x899Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01899Du:
    if(m==1u&&x==0u&&e==0u){ /* 20 CF C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01899Du,3u,0xC3u,0x89A0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x899Fu))return 0;c->pc=0xC3CFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CF C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01899Du,3u,0xC3u,0x89A0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x899Fu))return 0;c->pc=0xC3CFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189A0u:
    if(m==0u&&x==1u&&e==0u){ /* 20 DD C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189A0u,3u,0xC0u,0x89A3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89A2u))return 0;c->pc=0xC0DDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 DD C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189A0u,3u,0xC0u,0x89A3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89A2u))return 0;c->pc=0xC0DDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 DD C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189A0u,3u,0xC0u,0x89A3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89A2u))return 0;c->pc=0xC0DDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189A3u:
    if(m==0u&&x==1u&&e==0u){ /* 20 34 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189A3u,3u,0xC4u,0x89A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89A5u))return 0;c->pc=0xC434u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 34 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189A3u,3u,0xC4u,0x89A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89A5u))return 0;c->pc=0xC434u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 34 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189A3u,3u,0xC4u,0x89A6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89A5u))return 0;c->pc=0xC434u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189A6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 16 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189A6u,3u,0xC6u,0x89A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89A8u))return 0;c->pc=0xC616u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 16 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189A6u,3u,0xC6u,0x89A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89A8u))return 0;c->pc=0xC616u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 16 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189A6u,3u,0xC6u,0x89A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89A8u))return 0;c->pc=0xC616u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189A9u:
    if(m==0u&&x==1u&&e==0u){ /* 20 92 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189A9u,3u,0x8Au,0x89ACu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89ABu))return 0;c->pc=0x8A92u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 92 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189A9u,3u,0x8Au,0x89ACu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89ABu))return 0;c->pc=0x8A92u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189ACu:
    if(m==0u&&x==1u&&e==0u){ /* 20 8B 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189ACu,3u,0x94u,0x89AFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89AEu))return 0;c->pc=0x948Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 8B 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189ACu,3u,0x94u,0x89AFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89AEu))return 0;c->pc=0x948Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189AFu:
    if(m==0u&&x==1u&&e==0u){ /* 22 32 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189AFu,4u,0x00u,0x89B3u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x89B2u))return 0;
      c->pbr=0x00u;c->pc=0x8432u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 32 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189AFu,4u,0x00u,0x89B3u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x89B2u))return 0;
      c->pbr=0x00u;c->pc=0x8432u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 32 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189AFu,4u,0x00u,0x89B3u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x89B2u))return 0;
      c->pbr=0x00u;c->pc=0x8432u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189B3u:
    if(m==0u&&x==1u&&e==0u){ /* 22 D5 94 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189B3u,4u,0x00u,0x89B7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x89B6u))return 0;
      c->pbr=0x00u;c->pc=0x94D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 D5 94 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189B3u,4u,0x00u,0x89B7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x89B6u))return 0;
      c->pbr=0x00u;c->pc=0x94D5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 D5 94 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189B3u,4u,0x00u,0x89B7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x89B6u))return 0;
      c->pbr=0x00u;c->pc=0x94D5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189B7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189B7u,2u,0x20u,0x89B9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189B7u,2u,0x20u,0x89B9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }

    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189B7u,2u,0x20u,0x89B9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189B9u:

    if(m==0u&&x==1u&&e==0u){ /* AD F7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189B9u,3u,0x01u,0x89BCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189BCu:

    if(m==0u&&x==1u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189BCu,2u,0x07u,0x89BEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89C5u;}
      if(c->pc!=0x89BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189BEu:

    if(m==0u&&x==1u&&e==0u){ /* 20 9F EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189BEu,3u,0xEFu,0x89C1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89C0u))return 0;c->pc=0xEF9Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189C1u:

    if(m==0u&&x==1u&&e==0u){ /* 22 EB 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189C1u,4u,0x00u,0x89C5u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x89C4u))return 0;
      c->pbr=0x00u;c->pc=0x85EBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 EB 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189C1u,4u,0x00u,0x89C5u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x89C4u))return 0;
      c->pbr=0x00u;c->pc=0x85EBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 EB 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189C1u,4u,0x00u,0x89C5u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x89C4u))return 0;
      c->pbr=0x00u;c->pc=0x85EBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189C5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CF EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189C5u,3u,0xEEu,0x89C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89C7u))return 0;c->pc=0xEECFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 CF EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189C5u,3u,0xEEu,0x89C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89C7u))return 0;c->pc=0xEECFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CF EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189C5u,3u,0xEEu,0x89C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89C7u))return 0;c->pc=0xEECFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189C8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 69 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189C8u,3u,0xF0u,0x89CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89CAu))return 0;c->pc=0xF069u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 69 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189C8u,3u,0xF0u,0x89CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89CAu))return 0;c->pc=0xF069u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 69 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189C8u,3u,0xF0u,0x89CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89CAu))return 0;c->pc=0xF069u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189CBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189CBu,2u,0x20u,0x89CDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189CBu,2u,0x20u,0x89CDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189CBu,2u,0x20u,0x89CDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189CDu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189CDu,2u,0xD7u,0x89CFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189CFu:
    if(m==0u&&x==0u&&e==0u){ /* D0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189CFu,2u,0x13u,0x89D1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89E4u;}
      if(c->pc!=0x89D1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89D1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189D1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 60 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189D1u,3u,0xC6u,0x89D4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89D3u))return 0;c->pc=0xC660u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189D4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189D4u,2u,0x20u,0x89D6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189D4u,2u,0x20u,0x89D6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189D4u,2u,0x20u,0x89D6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189D6u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189D6u,3u,0x01u,0x89D9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189D9u:
    if(m==0u&&x==0u&&e==0u){ /* 29 80 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189D9u,3u,0x40u,0x89DCu);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189DCu:
    if(m==0u&&x==0u&&e==0u){ /* 0D F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189DCu,3u,0x01u,0x89DFu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189DFu:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189DFu,2u,0x03u,0x89E1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89E4u;}
      if(c->pc!=0x89E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189E1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 17 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189E1u,3u,0xC8u,0x89E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89E3u))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189E4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 33 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189E4u,3u,0xC0u,0x89E7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89E6u))return 0;c->pc=0xC033u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 33 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189E4u,3u,0xC0u,0x89E7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89E6u))return 0;c->pc=0xC033u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 33 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189E4u,3u,0xC0u,0x89E7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x89E6u))return 0;c->pc=0xC033u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189E7u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189E7u,2u,0x20u,0x89E9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189E7u,2u,0x20u,0x89E9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189E7u,2u,0x20u,0x89E9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189E9u:
    if(m==0u&&x==1u&&e==0u){ /* AD 03 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189E9u,3u,0x01u,0x89ECu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0103u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189ECu:
    if(m==0u&&x==1u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189ECu,2u,0x0Bu,0x89EEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x89F9u;}
      if(c->pc!=0x89EEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89EEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189EEu:
    if(m==0u&&x==1u&&e==0u){ /* AD 05 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189EEu,3u,0x01u,0x89F1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0105u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189F1u:
    if(m==0u&&x==1u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189F1u,2u,0x06u,0x89F3u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x89F9u;}
      if(c->pc!=0x89F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189F3u:
    if(m==0u&&x==0u&&e==0u){ /* EE 09 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189F3u,3u,0x01u,0x89F6u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0109u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE 09 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189F3u,3u,0x01u,0x89F6u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0109u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189F6u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 05 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189F6u,3u,0x01u,0x89F9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0105u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 05 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189F6u,3u,0x01u,0x89F9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0105u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189F9u:
    if(m==0u&&x==1u&&e==0u){ /* AD 0F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189F9u,3u,0x01u,0x89FCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x010Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189FCu:
    if(m==0u&&x==1u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189FCu,2u,0x0Bu,0x89FEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A09u;}
      if(c->pc!=0x89FEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x89FEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0189FEu:
    if(m==0u&&x==1u&&e==0u){ /* AD 11 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0189FEu,3u,0x01u,0x8A01u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0111u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A01u:
    if(m==0u&&x==1u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A01u,2u,0x06u,0x8A03u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8A09u;}
      if(c->pc!=0x8A03u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A03u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A03u:
    if(m==0u&&x==0u&&e==0u){ /* EE 15 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A03u,3u,0x01u,0x8A06u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0115u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE 15 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A03u,3u,0x01u,0x8A06u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0115u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A06u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 11 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A06u,3u,0x01u,0x8A09u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 11 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A06u,3u,0x01u,0x8A09u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A09u:
    if(m==0u&&x==1u&&e==0u){ /* 64 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A09u,2u,0xC3u,0x8A0Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A0Bu:
    if(m==0u&&x==1u&&e==0u){ /* AD 87 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A0Bu,3u,0x03u,0x8A0Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0387u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A0Eu:
    if(m==0u&&x==1u&&e==0u){ /* F0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A0Eu,2u,0x0Eu,0x8A10u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8A1Eu;}
      if(c->pc!=0x8A10u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A10u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A10u:
    if(m==0u&&x==1u&&e==0u){ /* AD 8B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A10u,3u,0x03u,0x8A13u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x038Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A13u:
    if(m==0u&&x==1u&&e==0u){ /* D0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A13u,2u,0x09u,0x8A15u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A1Eu;}
      if(c->pc!=0x8A15u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A15u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A15u:
    if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A15u,3u,0x00u,0x8A18u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A18u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A18u,3u,0x03u,0x8A1Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0385u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A1Bu:
    if(m==0u&&x==1u&&e==0u){ /* 9C 87 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A1Bu,3u,0x03u,0x8A1Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0387u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A1Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD 87 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A1Eu,3u,0x0Du,0x8A21u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0D87u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A21u:
    if(m==0u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A21u,2u,0x03u,0x8A23u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8A26u;}
      if(c->pc!=0x8A23u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A23u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A23u:
    if(m==0u&&x==1u&&e==0u){ /* 4C 4A 89 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A23u,3u,0x89u,0x8A26u);
      c->pc=0x894Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A26u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A26u,2u,0x20u,0x8A28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A26u,2u,0x20u,0x8A28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A28u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A28u,3u,0x00u,0x8A2Bu);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A28u,3u,0x00u,0x8A2Bu);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A2Bu,2u,0x00u,0x8A2Du);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8A2Du))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A2Bu,2u,0x00u,0x8A2Du);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8A2Du))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A2Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A2Du,2u,0x20u,0x8A2Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A2Du,2u,0x20u,0x8A2Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A2Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 01 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A2Fu,3u,0x01u,0x8A32u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0101u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 01 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A2Fu,3u,0x01u,0x8A32u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0101u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A32u:
    if(m==0u&&x==0u&&e==0u){ /* A9 13 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A32u,3u,0x00u,0x8A35u);
      sc_v11_op_lda(r,0x0013u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 13 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A32u,3u,0x00u,0x8A35u);
      sc_v11_op_lda(r,0x0013u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A35u:
    if(m==0u&&x==0u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A35u,2u,0x14u,0x8A37u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A35u,2u,0x14u,0x8A37u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A37u:
    if(m==0u&&x==0u&&e==0u){ /* 64 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A37u,2u,0x12u,0x8A39u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x12u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A37u,2u,0x12u,0x8A39u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x12u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A39u:
    if(m==0u&&x==0u&&e==0u){ /* 9C D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A39u,3u,0x01u,0x8A3Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A39u,3u,0x01u,0x8A3Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A3Cu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A3Cu,1u,0x6Bu,0x8A3Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A3Cu,1u,0x6Bu,0x8A3Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A44u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A44u,2u,0x30u,0x8A46u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A44u,2u,0x30u,0x8A46u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A44u,2u,0x30u,0x8A46u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A4Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 0F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A4Bu,3u,0x01u,0x8A4Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x010Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A4Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 11 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A4Eu,3u,0x01u,0x8A51u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A51u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A51u,3u,0x00u,0x8A54u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A54u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 15 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A54u,3u,0x01u,0x8A57u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0115u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A57u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A57u,1u,0x60u,0x8A58u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A87u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A87u,2u,0x20u,0x8A89u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A87u,2u,0x20u,0x8A89u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A87u,2u,0x20u,0x8A89u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A89u:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A89u,2u,0xB3u,0x8A8Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A8Bu:
    if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A8Bu,2u,0x80u,0x8A8Du);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A8Du:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A8Du,2u,0xB1u,0x8A8Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A8Fu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A8Fu,2u,0x20u,0x8A91u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A91u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A91u,1u,0x60u,0x8A92u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A92u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A92u,2u,0x20u,0x8A94u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A92u,2u,0x20u,0x8A94u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A94u:
    if(m==0u&&x==1u&&e==0u){ /* AD 0A 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A94u,3u,0x04u,0x8A97u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x040Au)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A97u:
    if(m==0u&&x==1u&&e==0u){ /* 30 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A97u,2u,0x0Au,0x8A99u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x8AA3u;}
      if(c->pc!=0x8A99u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A99u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A99u:
    if(m==0u&&x==1u&&e==0u){ /* AD 08 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A99u,3u,0x04u,0x8A9Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0408u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A9Cu:
    if(m==0u&&x==1u&&e==0u){ /* F0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A9Cu,2u,0x09u,0x8A9Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8AA7u;}
      if(c->pc!=0x8A9Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8A9Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018A9Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD B9 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018A9Eu,3u,0x0Bu,0x8AA1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BB9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AA1u:
    if(m==0u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AA1u,2u,0x04u,0x8AA3u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8AA7u;}
      if(c->pc!=0x8AA3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8AA3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AA3u:
    if(m==0u&&x==1u&&e==0u){ /* 22 A9 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AA3u,4u,0x00u,0x8AA7u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8AA6u))return 0;
      c->pbr=0x00u;c->pc=0x84A9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AA7u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AA7u,1u,0x60u,0x8AA8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AA7u,1u,0x60u,0x8AA8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AA8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AA8u,2u,0x20u,0x8AAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AA8u,2u,0x20u,0x8AAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AAAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AAAu,2u,0xD7u,0x8AACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AAAu,2u,0xD7u,0x8AACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AACu:
    if(m==0u&&x==0u&&e==0u){ /* D0 46 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AACu,2u,0x46u,0x8AAEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8AF4u;}
      if(c->pc!=0x8AAEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8AAEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 46 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AACu,2u,0x46u,0x8AAEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8AF4u;}
      if(c->pc!=0x8AAEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8AAEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AAEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 9C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AAEu,3u,0x00u,0x8AB1u);
      sc_v11_op_lda(r,0x009Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 9C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AAEu,3u,0x00u,0x8AB1u);
      sc_v11_op_lda(r,0x009Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AB1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AB1u,3u,0x02u,0x8AB4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AB1u,3u,0x02u,0x8AB4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AB4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AB4u,2u,0x20u,0x8AB6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AB4u,2u,0x20u,0x8AB6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AB6u:
    if(m==0u&&x==0u&&e==0u){ /* AD BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AB6u,3u,0x01u,0x8AB9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AB6u,3u,0x01u,0x8AB9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AB9u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AB9u,1u,0x4Au,0x8ABAu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AB9u,1u,0x4Au,0x8ABAu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ABAu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ABAu,1u,0x4Au,0x8ABBu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ABAu,1u,0x4Au,0x8ABBu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ABBu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ABBu,1u,0x18u,0x8ABCu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ABBu,1u,0x18u,0x8ABCu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ABCu:
    if(m==0u&&x==0u&&e==0u){ /* 69 C8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ABCu,3u,0x00u,0x8ABFu);
      sc_v11_op_adc(r,0x00C8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 C8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ABCu,3u,0x00u,0x8ABFu);
      sc_v11_op_adc(r,0x00C8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ABFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ABFu,3u,0x02u,0x8AC2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ABFu,3u,0x02u,0x8AC2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AC2u:
    if(m==0u&&x==0u&&e==0u){ /* AD BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AC2u,3u,0x01u,0x8AC5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AC2u,3u,0x01u,0x8AC5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AC5u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AC5u,1u,0x4Au,0x8AC6u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AC5u,1u,0x4Au,0x8AC6u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AC6u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AC6u,1u,0x4Au,0x8AC7u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AC6u,1u,0x4Au,0x8AC7u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AC7u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AC7u,1u,0x18u,0x8AC8u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AC7u,1u,0x18u,0x8AC8u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AC8u:
    if(m==0u&&x==0u&&e==0u){ /* 69 38 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AC8u,3u,0x00u,0x8ACBu);
      sc_v11_op_adc(r,0x0038u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 38 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AC8u,3u,0x00u,0x8ACBu);
      sc_v11_op_adc(r,0x0038u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ACBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ACBu,3u,0x02u,0x8ACEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ACBu,3u,0x02u,0x8ACEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ACEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 24 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ACEu,3u,0x00u,0x8AD1u);
      sc_v11_op_lda(r,0x0024u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 24 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ACEu,3u,0x00u,0x8AD1u);
      sc_v11_op_lda(r,0x0024u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AD1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AD1u,3u,0x02u,0x8AD4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AD1u,3u,0x02u,0x8AD4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AD4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AD4u,2u,0x20u,0x8AD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AD4u,2u,0x20u,0x8AD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AD6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AD6u,3u,0x00u,0x8AD9u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AD6u,3u,0x00u,0x8AD9u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AD9u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AD9u,2u,0x00u,0x8ADBu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8ADBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AD9u,2u,0x00u,0x8ADBu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8ADBu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ADBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 C7 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ADBu,3u,0x00u,0x8ADEu);
      sc_v11_op_lda(r,0x00C7u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 C7 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ADBu,3u,0x00u,0x8ADEu);
      sc_v11_op_lda(r,0x00C7u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ADEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ADEu,3u,0x02u,0x8AE1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ADEu,3u,0x02u,0x8AE1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AE1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 37 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AE1u,3u,0x00u,0x8AE4u);
      sc_v11_op_lda(r,0x0037u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 37 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AE1u,3u,0x00u,0x8AE4u);
      sc_v11_op_lda(r,0x0037u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AE4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AE4u,3u,0x02u,0x8AE7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AE4u,3u,0x02u,0x8AE7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AE7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 23 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AE7u,3u,0x00u,0x8AEAu);
      sc_v11_op_lda(r,0x0023u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 23 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AE7u,3u,0x00u,0x8AEAu);
      sc_v11_op_lda(r,0x0023u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AEAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AEAu,3u,0x02u,0x8AEDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AEAu,3u,0x02u,0x8AEDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AEDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AEDu,2u,0x20u,0x8AEFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AEDu,2u,0x20u,0x8AEFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AEFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AEFu,3u,0x00u,0x8AF2u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AEFu,3u,0x00u,0x8AF2u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AF2u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AF2u,2u,0x00u,0x8AF4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8AF4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AF2u,2u,0x00u,0x8AF4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8AF4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018AF4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AF4u,1u,0x60u,0x8AF5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018AF4u,1u,0x60u,0x8AF5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B1Fu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B1Fu,2u,0x20u,0x8B21u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B1Fu,2u,0x20u,0x8B21u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B1Fu,2u,0x20u,0x8B21u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B21u:
    if(m==0u&&x==1u&&e==0u){ /* 64 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B21u,2u,0xC5u,0x8B23u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B23u:
    if(m==0u&&x==1u&&e==0u){ /* AD 0F 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B23u,3u,0x0Cu,0x8B26u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B26u:
    if(m==0u&&x==1u&&e==0u){ /* D0 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B26u,2u,0x23u,0x8B28u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B4Bu;}
      if(c->pc!=0x8B28u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B28u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B28u:
    if(m==0u&&x==1u&&e==0u){ /* AD F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B28u,3u,0x0Au,0x8B2Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B2Bu:
    if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B2Bu,2u,0x03u,0x8B2Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B30u;}
      if(c->pc!=0x8B2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B2Du:
    if(m==0u&&x==0u&&e==0u){ /* 4C 8F 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B2Du,3u,0x8Cu,0x8B30u);
      c->pc=0x8C8Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 8F 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B2Du,3u,0x8Cu,0x8B30u);
      c->pc=0x8C8Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B30u:
    if(m==0u&&x==1u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B30u,3u,0x01u,0x8B33u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B33u:
    if(m==0u&&x==1u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B33u,2u,0x06u,0x8B35u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B3Bu;}
      if(c->pc!=0x8B35u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B35u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B35u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B35u,3u,0x00u,0x8B38u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B35u,3u,0x00u,0x8B38u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B38u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B38u,3u,0x8Cu,0x8B3Bu);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B38u,3u,0x8Cu,0x8B3Bu);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B3Bu:
    if(m==0u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B3Bu,2u,0xD7u,0x8B3Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B3Du:
    if(m==0u&&x==1u&&e==0u){ /* F0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B3Du,2u,0x0Fu,0x8B3Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B4Eu;}
      if(c->pc!=0x8B3Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B3Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B3Fu,1u,0x3Au,0x8B40u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B3Fu,1u,0x3Au,0x8B40u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B40u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B40u,2u,0x03u,0x8B42u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B45u;}
      if(c->pc!=0x8B42u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B42u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B40u,2u,0x03u,0x8B42u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B45u;}
      if(c->pc!=0x8B42u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B42u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B42u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 55 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B42u,3u,0x8Cu,0x8B45u);
      c->pc=0x8C55u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 55 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B42u,3u,0x8Cu,0x8B45u);
      c->pc=0x8C55u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B45u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B45u,1u,0x3Au,0x8B46u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B45u,1u,0x3Au,0x8B46u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B46u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B46u,2u,0x03u,0x8B48u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B4Bu;}
      if(c->pc!=0x8B48u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B48u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B46u,2u,0x03u,0x8B48u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B4Bu;}
      if(c->pc!=0x8B48u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B48u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B48u:
    if(m==0u&&x==0u&&e==0u){ /* 4C A3 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B48u,3u,0x8Cu,0x8B4Bu);
      c->pc=0x8CA3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C A3 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B48u,3u,0x8Cu,0x8B4Bu);
      c->pc=0x8CA3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B4Bu:
    if(m==0u&&x==0u&&e==0u){ /* 64 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B4Bu,2u,0xC5u,0x8B4Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B4Bu,2u,0xC5u,0x8B4Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B4Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B4Du,1u,0x60u,0x8B4Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B4Du,1u,0x60u,0x8B4Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B4Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B4Eu,3u,0x01u,0x8B51u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B51u:
    if(m==0u&&x==1u&&e==0u){ /* 29 F0 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B51u,3u,0xFFu,0x8B54u);
      sc_v11_op_and(r,0xFFF0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B54u:
    if(m==0u&&x==1u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B54u,2u,0x14u,0x8B56u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B6Au;}
      if(c->pc!=0x8B56u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B56u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B56u:
    if(m==0u&&x==1u&&e==0u){ /* AD C3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B56u,3u,0x0Du,0x8B59u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B59u:
    if(m==0u&&x==1u&&e==0u){ /* F0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B59u,2u,0x0Fu,0x8B5Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B6Au;}
      if(c->pc!=0x8B5Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B5Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B5Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B5Bu,3u,0x00u,0x8B5Eu);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B5Bu,3u,0x00u,0x8B5Eu);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B5Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D DF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B5Eu,3u,0x01u,0x8B61u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01DFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D DF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B5Eu,3u,0x01u,0x8B61u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01DFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B61u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B61u,3u,0x00u,0x8B64u);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B61u,3u,0x00u,0x8B64u);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B64u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CB 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B64u,3u,0x0Bu,0x8B67u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BCBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D CB 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B64u,3u,0x0Bu,0x8B67u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BCBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B67u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B67u,3u,0x8Cu,0x8B6Au);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B67u,3u,0x8Cu,0x8B6Au);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B6Au:
    if(m==0u&&x==1u&&e==0u){ /* AD FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B6Au,3u,0x03u,0x8B6Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03FEu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B6Du:
    if(m==0u&&x==1u&&e==0u){ /* F0 2D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B6Du,2u,0x2Du,0x8B6Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B9Cu;}
      if(c->pc!=0x8B6Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B6Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B6Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 C0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B6Fu,3u,0x00u,0x8B72u);
      sc_v11_op_compare(r,c->a,0x00C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 C0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B6Fu,3u,0x00u,0x8B72u);
      sc_v11_op_compare(r,c->a,0x00C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B72u:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B72u,2u,0x08u,0x8B74u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B7Cu;}
      if(c->pc!=0x8B74u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B74u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B72u,2u,0x08u,0x8B74u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8B7Cu;}
      if(c->pc!=0x8B74u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B74u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B74u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B74u,1u,0x08u,0x8B75u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B74u,1u,0x08u,0x8B75u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B75u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B75u,4u,0x00u,0x8B79u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8B78u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B75u,4u,0x00u,0x8B79u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8B78u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B79u:
    if(m==0u&&x==0u&&e==0u){ /* 03 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B79u,2u,0x0Au,0x8B7Bu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x0Au)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B79u,2u,0x0Au,0x8B7Bu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x0Au)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B79u,2u,0x0Au,0x8B7Bu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x0Au)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B79u,2u,0x0Au,0x8B7Bu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x0Au)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B7Bu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B7Bu,1u,0x28u,0x8B7Cu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B7Bu,1u,0x28u,0x8B7Cu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B7Bu,1u,0x28u,0x8B7Cu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B7Bu,1u,0x28u,0x8B7Cu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B7Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B7Cu,3u,0x00u,0x8B7Fu);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B7Cu,3u,0x00u,0x8B7Fu);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B7Cu,2u,0xFFu,0x8B7Eu);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B7Cu,2u,0xFFu,0x8B7Eu);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D FA 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B7Fu,3u,0x03u,0x8B82u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FAu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D FA 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B7Fu,3u,0x03u,0x8B82u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FAu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B82u:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B82u,3u,0x01u,0x8B85u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0195u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 95 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B82u,3u,0x01u,0x8B85u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0195u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B85u:
    if(m==0u&&x==0u&&e==0u){ /* 29 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B85u,3u,0x00u,0x8B88u);
      sc_v11_op_and(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B85u,3u,0x00u,0x8B88u);
      sc_v11_op_and(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B88u:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B88u,2u,0x06u,0x8B8Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B90u;}
      if(c->pc!=0x8B8Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B8Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B88u,2u,0x06u,0x8B8Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8B90u;}
      if(c->pc!=0x8B8Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8B8Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B8Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B8Au,3u,0x00u,0x8B8Du);
      sc_v11_op_lda(r,0x0009u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B8Au,3u,0x00u,0x8B8Du);
      sc_v11_op_lda(r,0x0009u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B8Du:
    if(m==0u&&x==0u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B8Du,3u,0x8Cu,0x8B90u);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B8Du,3u,0x8Cu,0x8B90u);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B90u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B90u,3u,0x00u,0x8B93u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B90u,3u,0x00u,0x8B93u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B93u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 11 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B93u,3u,0x01u,0x8B96u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0111u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 11 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B93u,3u,0x01u,0x8B96u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0111u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B96u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B96u,3u,0x02u,0x8B99u);
      sc_v11_op_lda(r,0x0200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B96u,3u,0x02u,0x8B99u);
      sc_v11_op_lda(r,0x0200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B99u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B99u,3u,0x01u,0x8B9Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x010Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 0F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B99u,3u,0x01u,0x8B9Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x010Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B9Cu:
    if(m==0u&&x==1u&&e==0u){ /* 9C FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B9Cu,3u,0x03u,0x8B9Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FEu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018B9Fu:
    if(m==0u&&x==1u&&e==0u){ /* AD 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018B9Fu,3u,0x03u,0x8BA2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0395u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BA2u:
    if(m==0u&&x==1u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BA2u,2u,0x06u,0x8BA4u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BAAu;}
      if(c->pc!=0x8BA4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BA4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BA4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BA4u,3u,0x00u,0x8BA7u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BA4u,3u,0x00u,0x8BA7u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BA7u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BA7u,3u,0x8Cu,0x8BAAu);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BA7u,3u,0x8Cu,0x8BAAu);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BAAu:
    if(m==0u&&x==1u&&e==0u){ /* AD 83 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BAAu,3u,0x03u,0x8BADu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0383u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BADu:
    if(m==0u&&x==1u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BADu,2u,0x06u,0x8BAFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BB5u;}
      if(c->pc!=0x8BAFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BAFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BAFu:
    if(m==0u&&x==1u&&e==0u){ /* A9 0B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BAFu,3u,0x00u,0x8BB2u);
      sc_v11_op_lda(r,0x000Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BB2u:
    if(m==0u&&x==1u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BB2u,3u,0x8Cu,0x8BB5u);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BB5u:
    if(m==0u&&x==1u&&e==0u){ /* AD 87 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BB5u,3u,0x03u,0x8BB8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0387u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BB8u:
    if(m==0u&&x==1u&&e==0u){ /* F0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BB8u,2u,0x19u,0x8BBAu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BD3u;}
      if(c->pc!=0x8BBAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BBAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BBAu:
    if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BBAu,2u,0xC9u,0x8BBCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BBCu:
    if(m==0u&&x==1u&&e==0u){ /* 29 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BBCu,3u,0x00u,0x8BBFu);
      sc_v11_op_and(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BBFu:
    if(m==0u&&x==1u&&e==0u){ /* F0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BBFu,2u,0x12u,0x8BC1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BD3u;}
      if(c->pc!=0x8BC1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BC1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BC1u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 87 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BC1u,3u,0x03u,0x8BC4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0387u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 87 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BC1u,3u,0x03u,0x8BC4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0387u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BC4u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 8B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BC4u,3u,0x03u,0x8BC7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x038Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 8B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BC4u,3u,0x03u,0x8BC7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x038Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BC7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BC7u,3u,0x00u,0x8BCAu);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BC7u,3u,0x00u,0x8BCAu);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BCAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BCAu,3u,0x03u,0x8BCDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0385u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BCAu,3u,0x03u,0x8BCDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0385u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BCDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BCDu,3u,0x00u,0x8BD0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BCDu,3u,0x00u,0x8BD0u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BD0u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BD0u,3u,0x8Cu,0x8BD3u);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BD0u,3u,0x8Cu,0x8BD3u);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BD3u:
    if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BD3u,3u,0x01u,0x8BD6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BD6u:
    if(m==0u&&x==1u&&e==0u){ /* 29 80 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BD6u,3u,0x40u,0x8BD9u);
      sc_v11_op_and(r,0x4080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BD9u:
    if(m==0u&&x==1u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BD9u,2u,0x06u,0x8BDBu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BE1u;}
      if(c->pc!=0x8BDBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BDBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BDBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BDBu,3u,0x00u,0x8BDEu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BDBu,3u,0x00u,0x8BDEu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BDEu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BDEu,3u,0x8Cu,0x8BE1u);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 52 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BDEu,3u,0x8Cu,0x8BE1u);
      c->pc=0x8C52u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BE1u:
    if(m==0u&&x==1u&&e==0u){ /* AD F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BE1u,3u,0x01u,0x8BE4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BE4u:
    if(m==0u&&x==1u&&e==0u){ /* D0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BE4u,2u,0x0Cu,0x8BE6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8BF2u;}
      if(c->pc!=0x8BE6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BE6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BE6u:
    if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BE6u,2u,0xC9u,0x8BE8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BE8u:
    if(m==0u&&x==1u&&e==0u){ /* 29 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BE8u,3u,0x00u,0x8BEBu);
      sc_v11_op_and(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BEBu:
    if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BEBu,2u,0x05u,0x8BEDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BF2u;}
      if(c->pc!=0x8BEDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BEDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BEDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BEDu,3u,0x00u,0x8BF0u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BEDu,3u,0x00u,0x8BF0u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BF0u:
    if(m==0u&&x==0u&&e==0u){ /* 80 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BF0u,2u,0x60u,0x8BF2u);
      if(1){c->pc=0x8C52u;}
      if(c->pc!=0x8BF2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BF2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BF0u,2u,0x60u,0x8BF2u);
      if(1){c->pc=0x8C52u;}
      if(c->pc!=0x8BF2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BF2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BF2u:
    if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BF2u,2u,0xC9u,0x8BF4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BF4u:
    if(m==0u&&x==1u&&e==0u){ /* 29 00 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BF4u,3u,0x30u,0x8BF7u);
      sc_v11_op_and(r,0x3000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BF7u:
    if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BF7u,2u,0x05u,0x8BF9u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8BFEu;}
      if(c->pc!=0x8BF9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BF9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BF9u:
    if(m==0u&&x==1u&&e==0u){ /* A9 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BF9u,3u,0x00u,0x8BFCu);
      sc_v11_op_lda(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BFCu:
    if(m==0u&&x==1u&&e==0u){ /* 80 54 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BFCu,2u,0x54u,0x8BFEu);
      if(1){c->pc=0x8C52u;}
      if(c->pc!=0x8BFEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8BFEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018BFEu:
    if(m==0u&&x==1u&&e==0u){ /* AD 01 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018BFEu,3u,0x02u,0x8C01u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0201u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
