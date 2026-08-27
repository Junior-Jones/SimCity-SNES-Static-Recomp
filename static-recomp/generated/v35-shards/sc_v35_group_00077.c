/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00077(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01DD76u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD76u,2u,0x30u,0xDD78u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD76u,2u,0x30u,0xDD78u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD76u,2u,0x30u,0xDD78u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD76u,2u,0x30u,0xDD78u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD78u:
    if(m==0u&&x==0u&&e==0u){ /* AE 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD78u,3u,0x03u,0xDD7Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD7Bu:
    if(m==0u&&x==0u&&e==0u){ /* BF 2E DB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD7Bu,4u,0x01u,0xDD7Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01DB2Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD7Fu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD7Fu,3u,0x00u,0xDD82u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD82u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD82u,3u,0x00u,0xDD85u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD85u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD85u,1u,0x0Au,0xDD86u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD86u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD86u,1u,0x0Au,0xDD87u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD87u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD87u,1u,0x0Au,0xDD88u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD88u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD88u,1u,0x0Au,0xDD89u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD89u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD89u,1u,0x0Au,0xDD8Au);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD8Au:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD8Au,1u,0xA8u,0xDD8Bu);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD8Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD8Bu,3u,0x00u,0xDD8Eu);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD8Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD8Eu,2u,0x79u,0xDD90u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD90u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD90u,3u,0x00u,0xDD93u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD93u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD93u,1u,0x4Bu,0xDD94u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD94u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD94u,1u,0xABu,0xDD95u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD95u:
    if(m==0u&&x==0u&&e==0u){ /* B9 96 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD95u,3u,0xDBu,0xDD98u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDB96u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD98u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD98u,1u,0xC8u,0xDD99u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD99u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD99u,1u,0xC8u,0xDD9Au);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD9Au:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 24 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD9Au,4u,0x7Eu,0xDD9Eu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2440u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD9Eu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD9Eu,1u,0xE8u,0xDD9Fu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DD9Fu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DD9Fu,1u,0xE8u,0xDDA0u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDA0u:
    if(m==0u&&x==0u&&e==0u){ /* C6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDA0u,2u,0x79u,0xDDA2u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDA2u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDA2u,2u,0xF1u,0xDDA4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDD95u;}
      if(c->pc!=0xDDA4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDDA4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDA4u:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDA4u,3u,0x03u,0xDDA7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDA7u:
    if(m==0u&&x==0u&&e==0u){ /* C9 2F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDA7u,3u,0x00u,0xDDAAu);
      sc_v11_op_compare(r,c->a,0x002Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDAAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDAAu,2u,0x15u,0xDDACu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDDC1u;}
      if(c->pc!=0xDDACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDDACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDACu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDACu,3u,0x00u,0xDDAFu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDAFu:
    if(m==0u&&x==0u&&e==0u){ /* A0 60 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDAFu,3u,0x00u,0xDDB2u);
      sc_v11_op_ldy(r,0x0060u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDB2u:
    if(m==0u&&x==0u&&e==0u){ /* BD B6 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDB2u,3u,0xDCu,0xDDB5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xDCB6u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDB5u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 25 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDB5u,4u,0x7Eu,0xDDB9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2540u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDB9u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDB9u,1u,0xE8u,0xDDBAu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDBAu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDBAu,1u,0xE8u,0xDDBBu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDBBu:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDBBu,1u,0x88u,0xDDBCu);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDBCu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDBCu,2u,0xF4u,0xDDBEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDDB2u;}
      if(c->pc!=0xDDBEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDDBEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDBEu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 00 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDBEu,3u,0xDEu,0xDDC1u);
      c->pc=0xDE00u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDC1u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDC1u,3u,0x01u,0xDDC4u);
      sc_v11_op_ldx(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDC4u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDC4u,3u,0x00u,0xDDC7u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDC7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDC7u,3u,0x00u,0xDDCAu);
      sc_v11_op_lda(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDCAu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDCAu,2u,0x79u,0xDDCCu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDCCu:
    if(m==0u&&x==0u&&e==0u){ /* B9 F6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDCCu,3u,0xDBu,0xDDCFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDBF6u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDCFu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDCFu,1u,0xC8u,0xDDD0u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDD0u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDD0u,1u,0xC8u,0xDDD1u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDD1u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 24 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDD1u,4u,0x7Eu,0xDDD5u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2440u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDD5u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDD5u,1u,0xE8u,0xDDD6u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDD6u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDD6u,1u,0xE8u,0xDDD7u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDD7u:
    if(m==0u&&x==0u&&e==0u){ /* C6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDD7u,2u,0x79u,0xDDD9u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDD9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDD9u,2u,0xF1u,0xDDDBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDDCCu;}
      if(c->pc!=0xDDDBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDDDBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDDBu:
    if(m==0u&&x==0u&&e==0u){ /* AE 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDDBu,3u,0x03u,0xDDDEu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDDEu:
    if(m==0u&&x==0u&&e==0u){ /* BD 62 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDDEu,3u,0xDBu,0xDDE1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xDB62u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDE1u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDE1u,3u,0x00u,0xDDE4u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDE4u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDE4u,2u,0x1Au,0xDDE6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDE00u;}
      if(c->pc!=0xDDE6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDDE6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDE6u:
    if(m==0u&&x==0u&&e==0u){ /* A2 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDE6u,3u,0x01u,0xDDE9u);
      sc_v11_op_ldx(r,0x0180u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDE9u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDE9u,3u,0x00u,0xDDECu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDECu:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDECu,3u,0x00u,0xDDEFu);
      sc_v11_op_lda(r,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDEFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDEFu,2u,0x79u,0xDDF1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDF1u:
    if(m==0u&&x==0u&&e==0u){ /* B9 76 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDF1u,3u,0xDCu,0xDDF4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDC76u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDF4u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDF4u,1u,0xC8u,0xDDF5u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDF5u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDF5u,1u,0xC8u,0xDDF6u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDF6u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 24 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDF6u,4u,0x7Eu,0xDDFAu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2440u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDFAu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDFAu,1u,0xE8u,0xDDFBu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDFBu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDFBu,1u,0xE8u,0xDDFCu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDFCu:
    if(m==0u&&x==0u&&e==0u){ /* C6 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDFCu,2u,0x79u,0xDDFEu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x79u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DDFEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DDFEu,2u,0xF1u,0xDE00u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xDDF1u;}
      if(c->pc!=0xDE00u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDE00u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE00u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE00u,3u,0x00u,0xDE03u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE03u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE03u,1u,0xABu,0xDE04u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE04u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE04u,1u,0xABu,0xDE05u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE05u:
    if(m==0u&&x==0u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE05u,2u,0xBBu,0xDE07u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xBBu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE07u:
    if(m==0u&&x==0u&&e==0u){ /* 09 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE07u,3u,0x00u,0xDE0Au);
      sc_v11_op_ora(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE0Au:
    if(m==0u&&x==0u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE0Au,2u,0xBBu,0xDE0Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xBBu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE0Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE0Cu,1u,0x60u,0xDE0Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE0Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 C2 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE0Du,3u,0xDEu,0xDE10u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE0Fu))return 0;c->pc=0xDEC2u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C2 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE0Du,3u,0xDEu,0xDE10u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE0Fu))return 0;c->pc=0xDEC2u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C2 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE0Du,3u,0xDEu,0xDE10u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE0Fu))return 0;c->pc=0xDEC2u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C2 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE0Du,3u,0xDEu,0xDE10u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE0Fu))return 0;c->pc=0xDEC2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE10u:
    if(m==0u&&x==0u&&e==0u){ /* 20 54 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE10u,3u,0xDEu,0xDE13u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE12u))return 0;c->pc=0xDE54u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 54 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE10u,3u,0xDEu,0xDE13u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE12u))return 0;c->pc=0xDE54u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 54 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE10u,3u,0xDEu,0xDE13u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE12u))return 0;c->pc=0xDE54u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 54 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE10u,3u,0xDEu,0xDE13u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE12u))return 0;c->pc=0xDE54u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE13u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE13u,1u,0x60u,0xDE14u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE13u,1u,0x60u,0xDE14u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE13u,1u,0x60u,0xDE14u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE13u,1u,0x60u,0xDE14u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE14u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4A DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE14u,3u,0xDEu,0xDE17u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE16u))return 0;c->pc=0xDE4Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE17u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A4 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE17u,3u,0xDEu,0xDE1Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE19u))return 0;c->pc=0xDEA4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A4 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE17u,3u,0xDEu,0xDE1Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE19u))return 0;c->pc=0xDEA4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A4 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE17u,3u,0xDEu,0xDE1Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE19u))return 0;c->pc=0xDEA4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A4 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE17u,3u,0xDEu,0xDE1Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE19u))return 0;c->pc=0xDEA4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE1Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 91 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE1Au,3u,0x9Eu,0xDE1Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE1Cu))return 0;c->pc=0x9E91u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 91 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE1Au,3u,0x9Eu,0xDE1Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE1Cu))return 0;c->pc=0x9E91u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 91 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE1Au,3u,0x9Eu,0xDE1Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE1Cu))return 0;c->pc=0x9E91u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 91 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE1Au,3u,0x9Eu,0xDE1Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE1Cu))return 0;c->pc=0x9E91u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE1Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 9A E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE1Du,3u,0xE3u,0xDE20u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE1Fu))return 0;c->pc=0xE39Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9A E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE1Du,3u,0xE3u,0xDE20u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE1Fu))return 0;c->pc=0xE39Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9A E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE1Du,3u,0xE3u,0xDE20u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE1Fu))return 0;c->pc=0xE39Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9A E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE1Du,3u,0xE3u,0xDE20u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE1Fu))return 0;c->pc=0xE39Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE20u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE20u,3u,0xA8u,0xDE23u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE22u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE20u,3u,0xA8u,0xDE23u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE22u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE20u,3u,0xA8u,0xDE23u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE22u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE20u,3u,0xA8u,0xDE23u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE22u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE23u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE23u,2u,0x20u,0xDE25u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE23u,2u,0x20u,0xDE25u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE23u,2u,0x20u,0xDE25u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE23u,2u,0x20u,0xDE25u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE25u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE25u,3u,0x00u,0xDE28u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE25u,3u,0x00u,0xDE28u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE28u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE28u,2u,0x00u,0xDE2Au);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xDE2Au))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE28u,2u,0x00u,0xDE2Au);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xDE2Au))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE2Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE2Au,1u,0x60u,0xDE2Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE2Au,1u,0x60u,0xDE2Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 4A DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE2Bu,3u,0xDEu,0xDE2Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE2Du))return 0;c->pc=0xDE4Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 4A DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE2Bu,3u,0xDEu,0xDE2Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE2Du))return 0;c->pc=0xDE4Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE2Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 91 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE2Eu,3u,0x9Eu,0xDE31u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE30u))return 0;c->pc=0x9E91u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 91 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE2Eu,3u,0x9Eu,0xDE31u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE30u))return 0;c->pc=0x9E91u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 91 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE2Eu,3u,0x9Eu,0xDE31u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE30u))return 0;c->pc=0x9E91u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 91 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE2Eu,3u,0x9Eu,0xDE31u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE30u))return 0;c->pc=0x9E91u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE31u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE31u,2u,0x20u,0xDE33u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE31u,2u,0x20u,0xDE33u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE31u,2u,0x20u,0xDE33u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE31u,2u,0x20u,0xDE33u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE33u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE33u,3u,0x00u,0xDE36u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE33u,3u,0x00u,0xDE36u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE36u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE36u,2u,0x00u,0xDE38u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xDE38u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE36u,2u,0x00u,0xDE38u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xDE38u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE38u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE38u,1u,0x60u,0xDE39u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE38u,1u,0x60u,0xDE39u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE39u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE39u,2u,0x20u,0xDE3Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE3Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE3Bu,2u,0xE8u,0xDE3Du);
      sc_v11_op_lda(r,0x00E8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE3Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 6E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE3Du,2u,0x6Eu,0xDE3Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE3Fu:
    if(m==1u&&x==0u&&e==0u){ /* A9 A3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE3Fu,2u,0xA3u,0xDE41u);
      sc_v11_op_lda(r,0x00A3u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE41u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE41u,2u,0x6Du,0xDE43u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE43u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE43u,2u,0x00u,0xDE45u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE45u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE45u,2u,0x6Cu,0xDE47u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE47u:
    if(m==1u&&x==0u&&e==0u){ /* 85 69 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE47u,2u,0x69u,0xDE49u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE49u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE49u,1u,0x60u,0xDE4Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE4Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE4Au,2u,0x20u,0xDE4Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE4Au,2u,0x20u,0xDE4Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE4Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE4Cu,2u,0x00u,0xDE4Eu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE4Cu,2u,0x00u,0xDE4Eu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE4Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE4Eu,2u,0x6Du,0xDE50u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE4Eu,2u,0x6Du,0xDE50u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE50u:
    if(m==1u&&x==0u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE50u,3u,0xA0u,0xDE53u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE52u))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE50u,3u,0xA0u,0xDE53u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDE52u))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE53u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE53u,1u,0x60u,0xDE54u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE53u,1u,0x60u,0xDE54u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE53u,1u,0x60u,0xDE54u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE53u,1u,0x60u,0xDE54u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE54u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE54u,2u,0x30u,0xDE56u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE54u,2u,0x30u,0xDE56u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE54u,2u,0x30u,0xDE56u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE54u,2u,0x30u,0xDE56u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE56u:
    if(m==0u&&x==0u&&e==0u){ /* AD DF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE56u,3u,0x01u,0xDE59u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE59u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE59u,1u,0x0Au,0xDE5Au);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE5Au:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE5Au,1u,0xAAu,0xDE5Bu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE5Bu:
    if(m==0u&&x==0u&&e==0u){ /* BD 1D 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE5Bu,3u,0x9Fu,0xDE5Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x9F1Du)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE5Eu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE5Eu,1u,0x48u,0xDE5Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE5Fu:
    if(m==0u&&x==0u&&e==0u){ /* A2 48 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE5Fu,3u,0x00u,0xDE62u);
      sc_v11_op_ldx(r,0x0048u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE62u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE62u,3u,0x00u,0xDE65u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE65u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE65u,2u,0x01u,0xDE67u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE67u:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE67u,3u,0x80u,0xDE6Au);
      sc_v11_op_compare(r,c->a,0x8080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE6Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE6Au,2u,0x1Fu,0xDE6Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDE8Bu;}
      if(c->pc!=0xDE6Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDE6Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE6Cu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE6Cu,2u,0x20u,0xDE6Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE6Eu:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE6Eu,1u,0x18u,0xDE6Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE6Fu:
    if(m==1u&&x==0u&&e==0u){ /* 69 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE6Fu,2u,0x28u,0xDE71u);
      sc_v11_op_adc(r,0x0028u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE71u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE71u,1u,0xEBu,0xDE72u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE72u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE72u,1u,0x18u,0xDE73u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE73u:
    if(m==1u&&x==0u&&e==0u){ /* 69 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE73u,2u,0x20u,0xDE75u);
      sc_v11_op_adc(r,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE75u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE75u,2u,0x20u,0xDE77u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE77u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE77u,4u,0x7Eu,0xDE7Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE7Bu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE7Bu,1u,0xE8u,0xDE7Cu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE7Cu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE7Cu,1u,0xE8u,0xDE7Du);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE7Du:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE7Du,1u,0xC8u,0xDE7Eu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE7Eu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE7Eu,1u,0xC8u,0xDE7Fu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE7Fu:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE7Fu,2u,0x01u,0xDE81u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE81u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE81u,4u,0x7Eu,0xDE85u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE85u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE85u,1u,0xE8u,0xDE86u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE86u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE86u,1u,0xE8u,0xDE87u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE87u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE87u,1u,0xC8u,0xDE88u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE88u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE88u,1u,0xC8u,0xDE89u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE89u:
    if(m==0u&&x==0u&&e==0u){ /* 80 DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE89u,2u,0xDAu,0xDE8Bu);
      if(1){c->pc=0xDE65u;}
      if(c->pc!=0xDE8Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDE8Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE8Bu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE8Bu,1u,0xC8u,0xDE8Cu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE8Cu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE8Cu,1u,0xC8u,0xDE8Du);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE8Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE8Du,2u,0x20u,0xDE8Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE8Fu:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE8Fu,3u,0x00u,0xDE92u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE92u:
    if(m==1u&&x==0u&&e==0u){ /* B3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE92u,2u,0x01u,0xDE94u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_stack_indirect_y(r,0x01u)),8u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE94u:
    if(m==1u&&x==0u&&e==0u){ /* C9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE94u,2u,0xFFu,0xDE96u);
      sc_v11_op_compare(r,c->a,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE96u:
    if(m==1u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE96u,2u,0x08u,0xDE98u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xDEA0u;}
      if(c->pc!=0xDE98u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDE98u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE98u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 04 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE98u,4u,0x7Eu,0xDE9Cu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2204u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE9Cu:
    if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE9Cu,1u,0xC8u,0xDE9Du);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE9Du:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE9Du,1u,0xE8u,0xDE9Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DE9Eu:
    if(m==1u&&x==0u&&e==0u){ /* 80 F2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DE9Eu,2u,0xF2u,0xDEA0u);
      if(1){c->pc=0xDE92u;}
      if(c->pc!=0xDEA0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xDEA0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEA0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEA0u,2u,0x20u,0xDEA2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEA2u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEA2u,1u,0x68u,0xDEA3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEA3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEA3u,1u,0x60u,0xDEA4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEA4u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEA4u,2u,0x20u,0xDEA6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEA4u,2u,0x20u,0xDEA6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEA4u,2u,0x20u,0xDEA6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEA4u,2u,0x20u,0xDEA6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEA6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 55 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEA6u,3u,0x55u,0xDEA9u);
      sc_v11_op_lda(r,0x5555u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 55 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEA6u,3u,0x55u,0xDEA9u);
      sc_v11_op_lda(r,0x5555u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEA9u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 04 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEA9u,4u,0x7Eu,0xDEADu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2204u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 04 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEA9u,4u,0x7Eu,0xDEADu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2204u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEADu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 06 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEADu,4u,0x7Eu,0xDEB1u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2206u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 06 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEADu,4u,0x7Eu,0xDEB1u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2206u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEB1u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEB1u,4u,0x7Eu,0xDEB5u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2208u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEB1u,4u,0x7Eu,0xDEB5u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2208u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEB5u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0A 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEB5u,4u,0x7Eu,0xDEB9u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 0A 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEB5u,4u,0x7Eu,0xDEB9u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEB9u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0C 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEB9u,4u,0x7Eu,0xDEBDu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 0C 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEB9u,4u,0x7Eu,0xDEBDu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Cu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEBDu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 0E 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEBDu,4u,0x7Eu,0xDEC1u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 0E 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEBDu,4u,0x7Eu,0xDEC1u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E220Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEC1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEC1u,1u,0x60u,0xDEC2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEC1u,1u,0x60u,0xDEC2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEC2u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEC2u,2u,0x20u,0xDEC4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEC2u,2u,0x20u,0xDEC4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEC2u,2u,0x20u,0xDEC4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEC2u,2u,0x20u,0xDEC4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEC4u:
    if(m==1u&&x==0u&&e==0u){ /* A9 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEC4u,2u,0x55u,0xDEC6u);
      sc_v11_op_lda(r,0x0055u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEC4u,2u,0x55u,0xDEC6u);
      sc_v11_op_lda(r,0x0055u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEC6u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 01 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEC6u,4u,0x7Eu,0xDECAu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2201u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 01 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEC6u,4u,0x7Eu,0xDECAu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2201u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DECAu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DECAu,4u,0x7Eu,0xDECEu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 02 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DECAu,4u,0x7Eu,0xDECEu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DECEu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DECEu,4u,0x7Eu,0xDED2u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 03 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DECEu,4u,0x7Eu,0xDED2u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DED2u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 04 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DED2u,4u,0x7Eu,0xDED6u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2204u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 04 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DED2u,4u,0x7Eu,0xDED6u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2204u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DED6u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 16 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DED6u,4u,0x7Eu,0xDEDAu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2216u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 16 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DED6u,4u,0x7Eu,0xDEDAu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2216u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEDAu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 17 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEDAu,4u,0x7Eu,0xDEDEu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2217u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 17 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEDAu,4u,0x7Eu,0xDEDEu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2217u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEDEu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 18 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEDEu,4u,0x7Eu,0xDEE2u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2218u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 18 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEDEu,4u,0x7Eu,0xDEE2u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2218u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEE2u:
    if(m==1u&&x==0u&&e==0u){ /* AF 19 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEE2u,4u,0x7Eu,0xDEE6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2219u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 19 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEE2u,4u,0x7Eu,0xDEE6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2219u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEE6u:
    if(m==1u&&x==0u&&e==0u){ /* 29 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEE6u,2u,0xF0u,0xDEE8u);
      sc_v11_op_and(r,0x00F0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEE6u,2u,0xF0u,0xDEE8u);
      sc_v11_op_and(r,0x00F0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEE8u:
    if(m==1u&&x==0u&&e==0u){ /* 09 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEE8u,2u,0x05u,0xDEEAu);
      sc_v11_op_ora(r,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEE8u,2u,0x05u,0xDEEAu);
      sc_v11_op_ora(r,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEEAu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 19 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEEAu,4u,0x7Eu,0xDEEEu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2219u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 19 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEEAu,4u,0x7Eu,0xDEEEu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2219u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEEEu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEEEu,1u,0x60u,0xDEEFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEEEu,1u,0x60u,0xDEEFu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEEFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEEFu,2u,0x30u,0xDEF1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEEFu,2u,0x30u,0xDEF1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEEFu,2u,0x30u,0xDEF1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEEFu,2u,0x30u,0xDEF1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEF1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 AA AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEF1u,3u,0xAAu,0xDEF4u);
      sc_v11_op_lda(r,0xAAAAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEF4u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 12 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEF4u,4u,0x7Eu,0xDEF8u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2212u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEF8u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 14 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEF8u,4u,0x7Eu,0xDEFCu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2214u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEFCu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEFCu,1u,0x60u,0xDEFDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DEFEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 7B DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DEFEu,3u,0xDFu,0xDF01u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF00u))return 0;c->pc=0xDF7Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF01u:
    if(m==0u&&x==0u&&e==0u){ /* 22 F4 97 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF01u,4u,0x00u,0xDF05u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDF04u))return 0;
      c->pbr=0x00u;c->pc=0x97F4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 F4 97 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF01u,4u,0x00u,0xDF05u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDF04u))return 0;
      c->pbr=0x00u;c->pc=0x97F4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 F4 97 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF01u,4u,0x00u,0xDF05u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDF04u))return 0;
      c->pbr=0x00u;c->pc=0x97F4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 F4 97 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF01u,4u,0x00u,0xDF05u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDF04u))return 0;
      c->pbr=0x00u;c->pc=0x97F4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF05u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF05u,3u,0xC8u,0xDF08u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF07u))return 0;c->pc=0xC8B7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF05u,3u,0xC8u,0xDF08u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF07u))return 0;c->pc=0xC8B7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF05u,3u,0xC8u,0xDF08u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF07u))return 0;c->pc=0xC8B7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF05u,3u,0xC8u,0xDF08u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF07u))return 0;c->pc=0xC8B7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF08u:
    if(m==0u&&x==0u&&e==0u){ /* 20 17 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF08u,3u,0xC8u,0xDF0Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF0Au))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 17 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF08u,3u,0xC8u,0xDF0Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF0Au))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 17 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF08u,3u,0xC8u,0xDF0Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF0Au))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 17 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF08u,3u,0xC8u,0xDF0Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF0Au))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF0Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF0Bu,2u,0x20u,0xDF0Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF0Bu,2u,0x20u,0xDF0Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF0Bu,2u,0x20u,0xDF0Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF0Bu,2u,0x20u,0xDF0Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF0Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF0Du,3u,0x02u,0xDF10u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF0Du,3u,0x02u,0xDF10u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF10u:
    if(m==0u&&x==0u&&e==0u){ /* 8D AB 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF10u,3u,0x02u,0xDF13u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x02ABu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D AB 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF10u,3u,0x02u,0xDF13u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x02ABu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF13u:
    if(m==0u&&x==0u&&e==0u){ /* 8D E1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF13u,3u,0x01u,0xDF16u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D E1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF13u,3u,0x01u,0xDF16u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF16u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A9 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF16u,4u,0x00u,0xDF1Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDF19u))return 0;
      c->pbr=0x00u;c->pc=0x84A9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A9 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF16u,4u,0x00u,0xDF1Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDF19u))return 0;
      c->pbr=0x00u;c->pc=0x84A9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF1Au:
    if(m==0u&&x==0u&&e==0u){ /* 22 2A 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF1Au,4u,0x00u,0xDF1Eu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDF1Du))return 0;
      c->pbr=0x00u;c->pc=0x842Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 2A 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF1Au,4u,0x00u,0xDF1Eu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDF1Du))return 0;
      c->pbr=0x00u;c->pc=0x842Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 2A 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF1Au,4u,0x00u,0xDF1Eu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDF1Du))return 0;
      c->pbr=0x00u;c->pc=0x842Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 2A 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF1Au,4u,0x00u,0xDF1Eu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xDF1Du))return 0;
      c->pbr=0x00u;c->pc=0x842Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF1Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 25 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF1Eu,3u,0x8Fu,0xDF21u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF20u))return 0;c->pc=0x8F25u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 25 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF1Eu,3u,0x8Fu,0xDF21u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF20u))return 0;c->pc=0x8F25u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 25 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF1Eu,3u,0x8Fu,0xDF21u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF20u))return 0;c->pc=0x8F25u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 25 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF1Eu,3u,0x8Fu,0xDF21u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF20u))return 0;c->pc=0x8F25u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF21u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A6 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF21u,3u,0xCAu,0xDF24u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF23u))return 0;c->pc=0xCAA6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A6 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF21u,3u,0xCAu,0xDF24u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF23u))return 0;c->pc=0xCAA6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A6 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF21u,3u,0xCAu,0xDF24u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF23u))return 0;c->pc=0xCAA6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A6 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF21u,3u,0xCAu,0xDF24u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF23u))return 0;c->pc=0xCAA6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF24u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF24u,3u,0xA8u,0xDF27u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF26u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF24u,3u,0xA8u,0xDF27u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF26u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF24u,3u,0xA8u,0xDF27u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF26u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FF A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF24u,3u,0xA8u,0xDF27u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xDF26u))return 0;c->pc=0xA8FFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF27u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF27u,2u,0x20u,0xDF29u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF27u,2u,0x20u,0xDF29u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF27u,2u,0x20u,0xDF29u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF27u,2u,0x20u,0xDF29u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF29u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF29u,3u,0x00u,0xDF2Cu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF29u,3u,0x00u,0xDF2Cu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF2Cu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF2Cu,2u,0x00u,0xDF2Eu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xDF2Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF2Cu,2u,0x00u,0xDF2Eu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xDF2Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF2Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF2Eu,1u,0x60u,0xDF2Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF2Eu,1u,0x60u,0xDF2Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF7Bu:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF7Bu,2u,0x30u,0xDF7Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF7Bu,2u,0x30u,0xDF7Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF7Bu,2u,0x30u,0xDF7Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF89u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF89u,3u,0x21u,0xDF8Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF89u,3u,0x21u,0xDF8Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF89u,3u,0x21u,0xDF8Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF8Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 60 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF8Cu,3u,0x8Du,0xDF8Fu);
      sc_v11_op_lda(r,0x8D60u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 60 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF8Cu,3u,0x8Du,0xDF8Fu);
      sc_v11_op_lda(r,0x8D60u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF8Cu,2u,0x60u,0xDF8Eu);
      sc_v11_op_lda(r,0x0060u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF8Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF8Eu,3u,0x21u,0xDF91u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DF91u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DF91u,2u,0x30u,0xDF93u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DFCEu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DFCEu,3u,0x21u,0xDFD1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DFCEu,3u,0x21u,0xDFD1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DFCEu,3u,0x21u,0xDFD1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DFD1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 68 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DFD1u,3u,0x8Du,0xDFD4u);
      sc_v11_op_lda(r,0x8D68u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 68 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DFD1u,3u,0x8Du,0xDFD4u);
      sc_v11_op_lda(r,0x8D68u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DFD1u,2u,0x68u,0xDFD3u);
      sc_v11_op_lda(r,0x0068u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DFD3u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 17 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DFD3u,3u,0x21u,0xDFD6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2117u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01DFD6u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01DFD6u,2u,0x30u,0xDFD8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
