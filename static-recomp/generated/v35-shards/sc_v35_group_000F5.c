/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000F5(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03D400u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 2F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D400u,3u,0x0Bu,0xD403u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D403u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D403u,1u,0x48u,0xD404u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D404u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D404u,2u,0x08u,0xD406u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D406u:
    if(m==1u&&x==1u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D406u,2u,0x06u,0xD408u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D408u:
    if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D408u,1u,0x68u,0xD409u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D409u:
    if(m==1u&&x==1u&&e==0u){ /* A2 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D409u,2u,0x80u,0xD40Bu);
      sc_v11_op_ldx(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D40Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8E 31 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D40Bu,3u,0x0Bu,0xD40Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B31u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D40Eu:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D40Eu,1u,0x4Au,0xD40Fu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D40Fu:
    if(m==1u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D40Fu,2u,0x03u,0xD411u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD414u;}
      if(c->pc!=0xD411u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD411u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D411u:
    if(m==1u&&x==1u&&e==0u){ /* 4C 94 D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D411u,3u,0xD4u,0xD414u);
      c->pc=0xD494u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D414u:
    if(m==1u&&x==1u&&e==0u){ /* 4C 5A D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D414u,3u,0xD4u,0xD417u);
      c->pc=0xD45Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D41Au:
    if(m==0u&&x==0u&&e==0u){ /* AF 01 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D41Au,4u,0x7Eu,0xD41Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E2101u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AF 01 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D41Au,4u,0x7Eu,0xD41Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E2101u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 01 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D41Au,4u,0x7Eu,0xD41Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2101u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D41Eu:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D41Eu,1u,0x1Au,0xD41Fu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D41Eu,1u,0x1Au,0xD41Fu);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D41Eu,1u,0x1Au,0xD41Fu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D41Fu:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D41Fu,1u,0x1Au,0xD420u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D41Fu,1u,0x1Au,0xD420u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D41Fu,1u,0x1Au,0xD420u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D420u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 01 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D420u,4u,0x7Eu,0xD424u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2101u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 01 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D420u,4u,0x7Eu,0xD424u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2101u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 01 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D420u,4u,0x7Eu,0xD424u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2101u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D424u:
    if(m==0u&&x==0u&&e==0u){ /* AF 05 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D424u,4u,0x7Eu,0xD428u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E2105u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AF 05 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D424u,4u,0x7Eu,0xD428u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E2105u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 05 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D424u,4u,0x7Eu,0xD428u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2105u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D428u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D428u,1u,0x1Au,0xD429u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D428u,1u,0x1Au,0xD429u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D428u,1u,0x1Au,0xD429u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D429u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D429u,1u,0x1Au,0xD42Au);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D429u,1u,0x1Au,0xD42Au);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D429u,1u,0x1Au,0xD42Au);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D42Au:
    if(m==0u&&x==0u&&e==0u){ /* 8F 05 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D42Au,4u,0x7Eu,0xD42Eu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2105u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 05 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D42Au,4u,0x7Eu,0xD42Eu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2105u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 05 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D42Au,4u,0x7Eu,0xD42Eu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2105u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D42Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 74 E5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D42Eu,3u,0xE5u,0xD431u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD430u))return 0;c->pc=0xE574u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 74 E5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D42Eu,3u,0xE5u,0xD431u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD430u))return 0;c->pc=0xE574u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 74 E5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D42Eu,3u,0xE5u,0xD431u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD430u))return 0;c->pc=0xE574u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D431u:
    if(m==0u&&x==0u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D431u,2u,0x14u,0xD433u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D431u,2u,0x14u,0xD433u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D431u,2u,0x14u,0xD433u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D433u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D433u,2u,0x10u,0xD435u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D433u,2u,0x10u,0xD435u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D433u,2u,0x10u,0xD435u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D435u:
    if(m==0u&&x==0u&&e==0u){ /* A0 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D435u,3u,0x00u,0xD438u);
      sc_v11_op_ldy(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D445u:
    if(m==0u&&x==0u&&e==0u){ /* AF 01 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D445u,4u,0x7Eu,0xD449u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E2101u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AF 01 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D445u,4u,0x7Eu,0xD449u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E2101u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 01 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D445u,4u,0x7Eu,0xD449u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2101u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D449u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D449u,1u,0x3Au,0xD44Au);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D449u,1u,0x3Au,0xD44Au);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D449u,1u,0x3Au,0xD44Au);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D44Au:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D44Au,1u,0x3Au,0xD44Bu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D44Au,1u,0x3Au,0xD44Bu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D44Au,1u,0x3Au,0xD44Bu);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D44Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 01 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D44Bu,4u,0x7Eu,0xD44Fu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2101u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 01 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D44Bu,4u,0x7Eu,0xD44Fu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2101u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 01 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D44Bu,4u,0x7Eu,0xD44Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2101u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D44Fu:
    if(m==0u&&x==0u&&e==0u){ /* AF 05 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D44Fu,4u,0x7Eu,0xD453u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E2105u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AF 05 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D44Fu,4u,0x7Eu,0xD453u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E2105u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 05 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D44Fu,4u,0x7Eu,0xD453u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2105u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D453u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D453u,1u,0x3Au,0xD454u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D453u,1u,0x3Au,0xD454u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D453u,1u,0x3Au,0xD454u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D454u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D454u,1u,0x3Au,0xD455u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D454u,1u,0x3Au,0xD455u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D454u,1u,0x3Au,0xD455u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D455u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 05 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D455u,4u,0x7Eu,0xD459u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2105u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 05 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D455u,4u,0x7Eu,0xD459u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E2105u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 05 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D455u,4u,0x7Eu,0xD459u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2105u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D459u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D459u,1u,0x60u,0xD45Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D459u,1u,0x60u,0xD45Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D45Au:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D45Au,2u,0x30u,0xD45Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D45Cu:
    if(m==1u&&x==1u&&e==0u){ /* AD 2D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D45Cu,3u,0x0Bu,0xD45Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B2Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D45Fu:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D45Fu,1u,0x4Au,0xD460u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D460u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D460u,1u,0xAAu,0xD461u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D461u:
    if(m==1u&&x==1u&&e==0u){ /* BD 26 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D461u,3u,0x0Bu,0xD464u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0B26u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D464u:
    if(m==1u&&x==1u&&e==0u){ /* C9 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D464u,2u,0x09u,0xD466u);
      sc_v11_op_compare(r,c->a,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D466u:
    if(m==1u&&x==1u&&e==0u){ /* 90 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D466u,2u,0x04u,0xD468u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD46Cu;}
      if(c->pc!=0xD468u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD468u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D468u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D468u,2u,0x00u,0xD46Au);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D46Au:
    if(m==1u&&x==1u&&e==0u){ /* F0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D46Au,2u,0x02u,0xD46Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD46Eu;}
      if(c->pc!=0xD46Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD46Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D46Cu:
    if(m==1u&&x==1u&&e==0u){ /* 69 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D46Cu,2u,0x01u,0xD46Eu);
      sc_v11_op_adc(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D46Eu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 26 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D46Eu,3u,0x0Bu,0xD471u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0B26u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D471u:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D471u,2u,0x30u,0xD473u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D473u:
    if(m==0u&&x==0u&&e==0u){ /* A9 2C 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D473u,3u,0x08u,0xD476u);
      sc_v11_op_lda(r,0x082Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D476u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C2 D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D476u,3u,0xD4u,0xD479u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD478u))return 0;c->pc=0xD4C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D479u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B8 D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D479u,3u,0xD6u,0xD47Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD47Bu))return 0;c->pc=0xD6B8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B8 D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D479u,3u,0xD6u,0xD47Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD47Bu))return 0;c->pc=0xD6B8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B8 D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D479u,3u,0xD6u,0xD47Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD47Bu))return 0;c->pc=0xD6B8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B8 D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D479u,3u,0xD6u,0xD47Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD47Bu))return 0;c->pc=0xD6B8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D47Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D47Cu,2u,0x30u,0xD47Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D47Cu,2u,0x30u,0xD47Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D47Cu,2u,0x30u,0xD47Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D47Cu,2u,0x30u,0xD47Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D47Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 2B 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D47Eu,3u,0x08u,0xD481u);
      sc_v11_op_lda(r,0x082Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D481u:
    if(m==0u&&x==0u&&e==0u){ /* 4C C2 D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D481u,3u,0xD4u,0xD484u);
      c->pc=0xD4C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D494u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D494u,2u,0x30u,0xD496u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D496u:
    if(m==1u&&x==1u&&e==0u){ /* AD 2F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D496u,3u,0x0Bu,0xD499u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B2Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D499u:
    if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D499u,2u,0x80u,0xD49Bu);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D49Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 2F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D49Bu,3u,0x0Bu,0xD49Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D49Eu:
    if(m==1u&&x==1u&&e==0u){ /* AD 2D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D49Eu,3u,0x0Bu,0xD4A1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B2Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4A1u:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4A1u,1u,0x4Au,0xD4A2u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4A2u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4A2u,1u,0xAAu,0xD4A3u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4A3u:
    if(m==1u&&x==1u&&e==0u){ /* BD 26 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4A3u,3u,0x0Bu,0xD4A6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0B26u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4A6u:
    if(m==1u&&x==1u&&e==0u){ /* D0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4A6u,2u,0x04u,0xD4A8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD4ACu;}
      if(c->pc!=0xD4A8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD4A8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4A8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4A8u,2u,0x09u,0xD4AAu);
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4AAu:
    if(m==1u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4AAu,2u,0x03u,0xD4ACu);
      if(1){c->pc=0xD4AFu;}
      if(c->pc!=0xD4ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD4ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4ACu:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4ACu,1u,0x38u,0xD4ADu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4ADu:
    if(m==1u&&x==1u&&e==0u){ /* E9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4ADu,2u,0x01u,0xD4AFu);
      sc_v11_op_sbc(r,0x0001u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4AFu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 26 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4AFu,3u,0x0Bu,0xD4B2u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0B26u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4B2u:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4B2u,2u,0x30u,0xD4B4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4B4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 2E 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4B4u,3u,0x08u,0xD4B7u);
      sc_v11_op_lda(r,0x082Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4B7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C2 D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4B7u,3u,0xD4u,0xD4BAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD4B9u))return 0;c->pc=0xD4C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4BAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 B8 D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4BAu,3u,0xD6u,0xD4BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD4BCu))return 0;c->pc=0xD6B8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B8 D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4BAu,3u,0xD6u,0xD4BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD4BCu))return 0;c->pc=0xD6B8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B8 D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4BAu,3u,0xD6u,0xD4BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD4BCu))return 0;c->pc=0xD6B8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B8 D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4BAu,3u,0xD6u,0xD4BDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD4BCu))return 0;c->pc=0xD6B8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4BDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4BDu,2u,0x30u,0xD4BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4BDu,2u,0x30u,0xD4BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4BDu,2u,0x30u,0xD4BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4BDu,2u,0x30u,0xD4BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4BFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 2D 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4BFu,3u,0x08u,0xD4C2u);
      sc_v11_op_lda(r,0x082Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4C2u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4C2u,2u,0x30u,0xD4C4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4C4u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4C4u,1u,0x48u,0xD4C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4C5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 2D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4C5u,3u,0x0Bu,0xD4C8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B2Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4C8u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4C8u,1u,0x0Au,0xD4C9u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4C9u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4C9u,1u,0xAAu,0xD4CAu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4CAu:
    if(m==0u&&x==0u&&e==0u){ /* BD 84 D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4CAu,3u,0xD4u,0xD4CDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xD484u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4CDu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4CDu,1u,0xAAu,0xD4CEu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4CEu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4CEu,1u,0x68u,0xD4CFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4CFu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 30 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4CFu,4u,0x7Eu,0xD4D3u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E3040u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4D3u:
    if(m==0u&&x==0u&&e==0u){ /* 4C D6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4D3u,3u,0xDBu,0xD4D6u);
      c->pc=0xDBD6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4D6u:
    if(m==1u&&x==1u&&e==0u){ /* AF 09 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4D6u,4u,0x7Eu,0xD4DAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2109u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4DAu:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4DAu,1u,0x1Au,0xD4DBu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4DBu:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4DBu,1u,0x1Au,0xD4DCu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4DCu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 09 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4DCu,4u,0x7Eu,0xD4E0u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2109u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4E0u:
    if(m==1u&&x==1u&&e==0u){ /* AF 0D 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4E0u,4u,0x7Eu,0xD4E4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E210Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4E4u:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4E4u,1u,0x1Au,0xD4E5u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4E5u:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4E5u,1u,0x1Au,0xD4E6u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4E6u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 0D 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4E6u,4u,0x7Eu,0xD4EAu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E210Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4EAu:
    if(m==1u&&x==1u&&e==0u){ /* AF 11 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4EAu,4u,0x7Eu,0xD4EEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2111u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4EEu:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4EEu,1u,0x1Au,0xD4EFu);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4EFu:
    if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4EFu,1u,0x1Au,0xD4F0u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4F0u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 11 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4F0u,4u,0x7Eu,0xD4F4u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2111u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4F4u:
    if(m==1u&&x==1u&&e==0u){ /* 20 45 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4F4u,3u,0xD5u,0xD4F7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD4F6u))return 0;c->pc=0xD545u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4F7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4F7u,2u,0x30u,0xD4F9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4F7u,2u,0x30u,0xD4F9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4F7u,2u,0x30u,0xD4F9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4F7u,2u,0x30u,0xD4F9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4F9u:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4F9u,2u,0x00u,0xD4FBu);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4FBu:
    if(m==1u&&x==1u&&e==0u){ /* BD 27 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4FBu,3u,0x0Bu,0xD4FEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0B27u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4FEu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4FEu,1u,0x18u,0xD4FFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D4FFu:
    if(m==1u&&x==1u&&e==0u){ /* 69 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D4FFu,2u,0x01u,0xD501u);
      sc_v11_op_adc(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D501u:
    if(m==1u&&x==1u&&e==0u){ /* C9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D501u,2u,0x0Au,0xD503u);
      sc_v11_op_compare(r,c->a,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D503u:
    if(m==1u&&x==1u&&e==0u){ /* 90 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D503u,2u,0x0Bu,0xD505u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD510u;}
      if(c->pc!=0xD505u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD505u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D505u:
    if(m==1u&&x==1u&&e==0u){ /* 9E 27 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D505u,3u,0x0Bu,0xD508u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0B27u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D508u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D508u,1u,0xE8u,0xD509u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D509u:
    if(m==1u&&x==1u&&e==0u){ /* E0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D509u,2u,0x03u,0xD50Bu);
      sc_v11_op_compare(r,c->x,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D50Bu:
    if(m==1u&&x==1u&&e==0u){ /* 90 EE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D50Bu,2u,0xEEu,0xD50Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD4FBu;}
      if(c->pc!=0xD50Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD50Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D50Du:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D50Du,1u,0xCAu,0xD50Eu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D50Eu:
    if(m==1u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D50Eu,2u,0x03u,0xD510u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xD513u;}
      if(c->pc!=0xD510u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD510u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D510u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 27 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D510u,3u,0x0Bu,0xD513u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0B27u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D513u:
    if(m==1u&&x==1u&&e==0u){ /* BD 42 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D513u,3u,0xD5u,0xD516u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD542u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D516u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 2F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D516u,3u,0x0Bu,0xD519u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D519u:
    if(m==1u&&x==1u&&e==0u){ /* 20 B8 D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D519u,3u,0xD6u,0xD51Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD51Bu))return 0;c->pc=0xD6B8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D51Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D51Cu,3u,0x8Du,0xD51Fu);
      sc_v11_op_lda(r,0x8D80u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 80 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D51Cu,3u,0x8Du,0xD51Fu);
      sc_v11_op_lda(r,0x8D80u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D51Cu,2u,0x80u,0xD51Eu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D51Cu,2u,0x80u,0xD51Eu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D51Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 31 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D51Eu,3u,0x0Bu,0xD521u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B31u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 31 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D51Eu,3u,0x0Bu,0xD521u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B31u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D521u:
    if(m==1u&&x==0u&&e==0u){ /* AF 09 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D521u,4u,0x7Eu,0xD525u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2109u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 09 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D521u,4u,0x7Eu,0xD525u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2109u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D525u:
    if(m==1u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D525u,1u,0x3Au,0xD526u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D525u,1u,0x3Au,0xD526u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D526u:
    if(m==1u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D526u,1u,0x3Au,0xD527u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D526u,1u,0x3Au,0xD527u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D527u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 09 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D527u,4u,0x7Eu,0xD52Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2109u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 09 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D527u,4u,0x7Eu,0xD52Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2109u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D52Bu:
    if(m==1u&&x==0u&&e==0u){ /* AF 0D 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D52Bu,4u,0x7Eu,0xD52Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E210Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 0D 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D52Bu,4u,0x7Eu,0xD52Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E210Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D52Fu:
    if(m==1u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D52Fu,1u,0x3Au,0xD530u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D52Fu,1u,0x3Au,0xD530u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D530u:
    if(m==1u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D530u,1u,0x3Au,0xD531u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D530u,1u,0x3Au,0xD531u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D531u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 0D 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D531u,4u,0x7Eu,0xD535u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E210Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 0D 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D531u,4u,0x7Eu,0xD535u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E210Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D535u:
    if(m==1u&&x==0u&&e==0u){ /* AF 11 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D535u,4u,0x7Eu,0xD539u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2111u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 11 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D535u,4u,0x7Eu,0xD539u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2111u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D539u:
    if(m==1u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D539u,1u,0x3Au,0xD53Au);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D539u,1u,0x3Au,0xD53Au);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D53Au:
    if(m==1u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D53Au,1u,0x3Au,0xD53Bu);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D53Au,1u,0x3Au,0xD53Bu);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D53Bu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 11 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D53Bu,4u,0x7Eu,0xD53Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2111u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 11 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D53Bu,4u,0x7Eu,0xD53Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2111u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D53Fu:
    if(m==1u&&x==0u&&e==0u){ /* 4C 7D D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D53Fu,3u,0xD5u,0xD542u);
      c->pc=0xD57Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 7D D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D53Fu,3u,0xD5u,0xD542u);
      c->pc=0xD57Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D545u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D545u,2u,0x20u,0xD547u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D547u:
    if(m==0u&&x==1u&&e==0u){ /* A9 34 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D547u,3u,0x08u,0xD54Au);
      sc_v11_op_lda(r,0x0834u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D54Au:
    if(m==0u&&x==1u&&e==0u){ /* 8F 30 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D54Au,4u,0x7Eu,0xD54Eu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3330u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D54Eu:
    if(m==0u&&x==1u&&e==0u){ /* A9 42 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D54Eu,3u,0x08u,0xD551u);
      sc_v11_op_lda(r,0x0842u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D551u:
    if(m==0u&&x==1u&&e==0u){ /* 8F 32 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D551u,4u,0x7Eu,0xD555u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3332u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D555u:
    if(m==0u&&x==1u&&e==0u){ /* 8F 34 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D555u,4u,0x7Eu,0xD559u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3334u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D559u:
    if(m==0u&&x==1u&&e==0u){ /* A9 35 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D559u,3u,0x08u,0xD55Cu);
      sc_v11_op_lda(r,0x0835u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D55Cu:
    if(m==0u&&x==1u&&e==0u){ /* 8F 36 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D55Cu,4u,0x7Eu,0xD560u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3336u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D560u:
    if(m==0u&&x==1u&&e==0u){ /* A9 36 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D560u,3u,0x08u,0xD563u);
      sc_v11_op_lda(r,0x0836u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D563u:
    if(m==0u&&x==1u&&e==0u){ /* 8F 70 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D563u,4u,0x7Eu,0xD567u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3370u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D567u:
    if(m==0u&&x==1u&&e==0u){ /* A9 43 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D567u,3u,0x08u,0xD56Au);
      sc_v11_op_lda(r,0x0843u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D56Au:
    if(m==0u&&x==1u&&e==0u){ /* 8F 72 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D56Au,4u,0x7Eu,0xD56Eu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3372u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D56Eu:
    if(m==0u&&x==1u&&e==0u){ /* 8F 74 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D56Eu,4u,0x7Eu,0xD572u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3374u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D572u:
    if(m==0u&&x==1u&&e==0u){ /* A9 37 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D572u,3u,0x08u,0xD575u);
      sc_v11_op_lda(r,0x0837u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D575u:
    if(m==0u&&x==1u&&e==0u){ /* 8F 76 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D575u,4u,0x7Eu,0xD579u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3376u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D579u:
    if(m==0u&&x==1u&&e==0u){ /* 20 D6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D579u,3u,0xDBu,0xD57Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD57Bu))return 0;c->pc=0xDBD6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D57Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D57Cu,1u,0x60u,0xD57Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D57Cu,1u,0x60u,0xD57Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D57Cu,1u,0x60u,0xD57Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D57Cu,1u,0x60u,0xD57Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D57Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D57Du,2u,0x20u,0xD57Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D57Du,2u,0x20u,0xD57Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D57Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 30 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D57Fu,3u,0x08u,0xD582u);
      sc_v11_op_lda(r,0x0830u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 30 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D57Fu,3u,0x08u,0xD582u);
      sc_v11_op_lda(r,0x0830u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D582u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 30 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D582u,4u,0x7Eu,0xD586u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3330u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 30 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D582u,4u,0x7Eu,0xD586u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3330u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D586u:
    if(m==0u&&x==0u&&e==0u){ /* A9 40 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D586u,3u,0x08u,0xD589u);
      sc_v11_op_lda(r,0x0840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 40 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D586u,3u,0x08u,0xD589u);
      sc_v11_op_lda(r,0x0840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D589u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 32 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D589u,4u,0x7Eu,0xD58Du);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3332u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 32 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D589u,4u,0x7Eu,0xD58Du);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3332u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D58Du:
    if(m==0u&&x==0u&&e==0u){ /* 8F 34 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D58Du,4u,0x7Eu,0xD591u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3334u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 34 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D58Du,4u,0x7Eu,0xD591u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3334u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D591u:
    if(m==0u&&x==0u&&e==0u){ /* A9 31 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D591u,3u,0x08u,0xD594u);
      sc_v11_op_lda(r,0x0831u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 31 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D591u,3u,0x08u,0xD594u);
      sc_v11_op_lda(r,0x0831u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D594u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 36 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D594u,4u,0x7Eu,0xD598u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3336u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 36 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D594u,4u,0x7Eu,0xD598u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3336u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D598u:
    if(m==0u&&x==0u&&e==0u){ /* A9 32 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D598u,3u,0x08u,0xD59Bu);
      sc_v11_op_lda(r,0x0832u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 32 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D598u,3u,0x08u,0xD59Bu);
      sc_v11_op_lda(r,0x0832u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D59Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 70 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D59Bu,4u,0x7Eu,0xD59Fu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3370u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 70 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D59Bu,4u,0x7Eu,0xD59Fu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3370u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D59Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 41 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D59Fu,3u,0x08u,0xD5A2u);
      sc_v11_op_lda(r,0x0841u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 41 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D59Fu,3u,0x08u,0xD5A2u);
      sc_v11_op_lda(r,0x0841u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5A2u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 72 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5A2u,4u,0x7Eu,0xD5A6u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3372u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 72 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5A2u,4u,0x7Eu,0xD5A6u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3372u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5A6u:
    if(m==0u&&x==0u&&e==0u){ /* 8F 74 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5A6u,4u,0x7Eu,0xD5AAu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3374u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 74 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5A6u,4u,0x7Eu,0xD5AAu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3374u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5AAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 33 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5AAu,3u,0x08u,0xD5ADu);
      sc_v11_op_lda(r,0x0833u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 33 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5AAu,3u,0x08u,0xD5ADu);
      sc_v11_op_lda(r,0x0833u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5ADu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 76 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5ADu,4u,0x7Eu,0xD5B1u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3376u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8F 76 33 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5ADu,4u,0x7Eu,0xD5B1u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E3376u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5B1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5B1u,3u,0xDBu,0xD5B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD5B3u))return 0;c->pc=0xDBD6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 D6 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5B1u,3u,0xDBu,0xD5B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD5B3u))return 0;c->pc=0xDBD6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5B4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5B4u,1u,0x60u,0xD5B5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5B4u,1u,0x60u,0xD5B5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5B4u,1u,0x60u,0xD5B5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5B4u,1u,0x60u,0xD5B5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D5ECu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5ECu,1u,0x60u,0xD5EDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5ECu,1u,0x60u,0xD5EDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D5ECu,1u,0x60u,0xD5EDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D624u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D624u,1u,0x60u,0xD625u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D624u,1u,0x60u,0xD625u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D624u,1u,0x60u,0xD625u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D625u:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D625u,2u,0x30u,0xD627u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D627u:
    if(m==1u&&x==1u&&e==0u){ /* AE 2D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D627u,3u,0x0Bu,0xD62Au);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B2Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D62Au:
    if(m==1u&&x==1u&&e==0u){ /* A5 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D62Au,2u,0xCAu,0xD62Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xCAu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D62Cu:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D62Cu,1u,0x4Au,0xD62Du);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D62Du:
    if(m==1u&&x==1u&&e==0u){ /* 90 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D62Du,2u,0x0Eu,0xD62Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD63Du;}
      if(c->pc!=0xD62Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD62Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D62Fu:
    if(m==1u&&x==1u&&e==0u){ /* E0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D62Fu,2u,0x04u,0xD631u);
      sc_v11_op_compare(r,c->x,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D631u:
    if(m==1u&&x==1u&&e==0u){ /* 90 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D631u,2u,0x2Au,0xD633u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD65Du;}
      if(c->pc!=0xD633u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD633u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D633u:
    if(m==1u&&x==1u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D633u,2u,0x07u,0xD635u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D635u:
    if(m==1u&&x==1u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D635u,2u,0x06u,0xD637u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D637u:
    if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D637u,1u,0x8Au,0xD638u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D638u:
    if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D638u,1u,0x38u,0xD639u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D639u:
    if(m==1u&&x==1u&&e==0u){ /* E9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D639u,2u,0x02u,0xD63Bu);
      sc_v11_op_sbc(r,0x0002u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D63Bu:
    if(m==1u&&x==1u&&e==0u){ /* 80 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D63Bu,2u,0x13u,0xD63Du);
      if(1){c->pc=0xD650u;}
      if(c->pc!=0xD63Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD63Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D63Du:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D63Du,1u,0x4Au,0xD63Eu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D63Eu:
    if(m==1u&&x==1u&&e==0u){ /* 90 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D63Eu,2u,0x1Eu,0xD640u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD65Eu;}
      if(c->pc!=0xD640u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD640u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D640u:
    if(m==1u&&x==1u&&e==0u){ /* E0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D640u,2u,0x02u,0xD642u);
      sc_v11_op_compare(r,c->x,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D642u:
    if(m==1u&&x==1u&&e==0u){ /* 90 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D642u,2u,0x19u,0xD644u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD65Du;}
      if(c->pc!=0xD644u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD644u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D644u:
    if(m==1u&&x==1u&&e==0u){ /* E0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D644u,2u,0x06u,0xD646u);
      sc_v11_op_compare(r,c->x,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D646u:
    if(m==1u&&x==1u&&e==0u){ /* B0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D646u,2u,0x15u,0xD648u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xD65Du;}
      if(c->pc!=0xD648u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD648u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D648u:
    if(m==1u&&x==1u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D648u,2u,0x07u,0xD64Au);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D64Au:
    if(m==1u&&x==1u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D64Au,2u,0x06u,0xD64Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D64Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D64Cu,1u,0x8Au,0xD64Du);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D64Du:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D64Du,1u,0x18u,0xD64Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D64Eu:
    if(m==1u&&x==1u&&e==0u){ /* 69 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D64Eu,2u,0x02u,0xD650u);
      sc_v11_op_adc(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D650u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 2D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D650u,3u,0x0Bu,0xD653u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D653u:
    if(m==1u&&x==1u&&e==0u){ /* AD 31 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D653u,3u,0x0Bu,0xD656u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B31u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D656u:
    if(m==1u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D656u,2u,0x05u,0xD658u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD65Du;}
      if(c->pc!=0xD658u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD658u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D658u:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D658u,2u,0x80u,0xD65Au);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D65Au:
    if(m==1u&&x==1u&&e==0u){ /* 8D 31 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D65Au,3u,0x0Bu,0xD65Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B31u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D65Du:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D65Du,1u,0x60u,0xD65Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D65Eu:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D65Eu,1u,0x4Au,0xD65Fu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D65Fu:
    if(m==1u&&x==1u&&e==0u){ /* 90 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D65Fu,2u,0x15u,0xD661u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD676u;}
      if(c->pc!=0xD661u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD661u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D661u:
    if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D661u,1u,0x8Au,0xD662u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D662u:
    if(m==1u&&x==1u&&e==0u){ /* E0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D662u,2u,0x03u,0xD664u);
      sc_v11_op_compare(r,c->x,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D664u:
    if(m==1u&&x==1u&&e==0u){ /* F0 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D664u,2u,0x28u,0xD666u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD68Eu;}
      if(c->pc!=0xD666u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD666u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D666u:
    if(m==1u&&x==1u&&e==0u){ /* E0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D666u,2u,0x05u,0xD668u);
      sc_v11_op_compare(r,c->x,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D668u:
    if(m==1u&&x==1u&&e==0u){ /* F0 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D668u,2u,0x24u,0xD66Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD68Eu;}
      if(c->pc!=0xD66Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD66Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D66Au:
    if(m==1u&&x==1u&&e==0u){ /* E0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D66Au,2u,0x07u,0xD66Cu);
      sc_v11_op_compare(r,c->x,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D66Cu:
    if(m==1u&&x==1u&&e==0u){ /* F0 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D66Cu,2u,0x20u,0xD66Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD68Eu;}
      if(c->pc!=0xD66Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD66Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D66Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D66Eu,2u,0x07u,0xD670u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D670u:
    if(m==1u&&x==1u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D670u,2u,0x06u,0xD672u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D672u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D672u,1u,0xE8u,0xD673u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D673u:
    if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D673u,1u,0x8Au,0xD674u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D674u:
    if(m==1u&&x==1u&&e==0u){ /* 80 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D674u,2u,0x18u,0xD676u);
      if(1){c->pc=0xD68Eu;}
      if(c->pc!=0xD676u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD676u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D676u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D676u,2u,0x00u,0xD678u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D678u:
    if(m==1u&&x==1u&&e==0u){ /* E0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D678u,2u,0x00u,0xD67Au);
      sc_v11_op_compare(r,c->x,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D67Au:
    if(m==1u&&x==1u&&e==0u){ /* F0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D67Au,2u,0x12u,0xD67Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD68Eu;}
      if(c->pc!=0xD67Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD67Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D67Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D67Cu,2u,0x01u,0xD67Eu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D67Eu:
    if(m==1u&&x==1u&&e==0u){ /* E0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D67Eu,2u,0x04u,0xD680u);
      sc_v11_op_compare(r,c->x,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D680u:
    if(m==1u&&x==1u&&e==0u){ /* F0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D680u,2u,0x0Cu,0xD682u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD68Eu;}
      if(c->pc!=0xD682u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD682u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D682u:
    if(m==1u&&x==1u&&e==0u){ /* E0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D682u,2u,0x06u,0xD684u);
      sc_v11_op_compare(r,c->x,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D684u:
    if(m==1u&&x==1u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D684u,2u,0x08u,0xD686u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD68Eu;}
      if(c->pc!=0xD686u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD686u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D686u:
    if(m==1u&&x==1u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D686u,2u,0x07u,0xD688u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D688u:
    if(m==1u&&x==1u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D688u,2u,0x06u,0xD68Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D68Au:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D68Au,1u,0xCAu,0xD68Bu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D68Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D68Bu,1u,0x8Au,0xD68Cu);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D68Cu:
    if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D68Cu,2u,0x07u,0xD68Eu);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D68Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 2D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D68Eu,3u,0x0Bu,0xD691u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D691u:
    if(m==1u&&x==1u&&e==0u){ /* C9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D691u,2u,0x01u,0xD693u);
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D693u:
    if(m==1u&&x==1u&&e==0u){ /* D0 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D693u,2u,0x16u,0xD695u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD6ABu;}
      if(c->pc!=0xD695u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD695u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D695u:
    if(m==1u&&x==1u&&e==0u){ /* AD 31 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D695u,3u,0x0Bu,0xD698u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B31u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D698u:
    if(m==1u&&x==1u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D698u,2u,0x11u,0xD69Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD6ABu;}
      if(c->pc!=0xD69Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD69Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D69Au:
    if(m==1u&&x==1u&&e==0u){ /* 20 DD D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D69Au,3u,0xD7u,0xD69Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD69Cu))return 0;c->pc=0xD7DDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D69Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D69Du,2u,0x20u,0xD69Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D69Du,2u,0x20u,0xD69Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D69Du,2u,0x20u,0xD69Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D69Du,2u,0x20u,0xD69Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D69Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D69Fu,3u,0x00u,0xD6A2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D69Fu,3u,0x00u,0xD6A2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6A2u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6A2u,2u,0x00u,0xD6A4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD6A4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6A2u,2u,0x00u,0xD6A4u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD6A4u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6A4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 0D D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6A4u,3u,0xD8u,0xD6A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD6A6u))return 0;c->pc=0xD80Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 0D D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6A4u,3u,0xD8u,0xD6A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD6A6u))return 0;c->pc=0xD80Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6A7u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 31 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6A7u,3u,0x0Bu,0xD6AAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B31u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 31 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6A7u,3u,0x0Bu,0xD6AAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B31u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 31 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6A7u,3u,0x0Bu,0xD6AAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B31u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 31 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6A7u,3u,0x0Bu,0xD6AAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B31u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6AAu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6AAu,1u,0x60u,0xD6ABu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6AAu,1u,0x60u,0xD6ABu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6AAu,1u,0x60u,0xD6ABu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6AAu,1u,0x60u,0xD6ABu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6ABu:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6ABu,2u,0x20u,0xD6ADu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6ADu:
    if(m==1u&&x==1u&&e==0u){ /* AD 31 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6ADu,3u,0x0Bu,0xD6B0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B31u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6B0u:
    if(m==1u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6B0u,2u,0x05u,0xD6B2u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD6B7u;}
      if(c->pc!=0xD6B2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD6B2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6B2u:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6B2u,2u,0x80u,0xD6B4u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6B4u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 31 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6B4u,3u,0x0Bu,0xD6B7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B31u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6B7u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6B7u,1u,0x60u,0xD6B8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6B8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6B8u,2u,0x30u,0xD6BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6B8u,2u,0x30u,0xD6BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6B8u,2u,0x30u,0xD6BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6B8u,2u,0x30u,0xD6BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6BAu:
    if(m==1u&&x==1u&&e==0u){ /* A0 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6BAu,2u,0xFFu,0xD6BCu);
      sc_v11_op_ldy(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6BCu:
    if(m==1u&&x==1u&&e==0u){ /* A2 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6BCu,2u,0x08u,0xD6BEu);
      sc_v11_op_ldx(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6BEu:
    if(m==1u&&x==1u&&e==0u){ /* AD 2F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6BEu,3u,0x0Bu,0xD6C1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B2Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6C1u:
    if(m==1u&&x==1u&&e==0u){ /* 10 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6C1u,2u,0x02u,0xD6C3u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xD6C5u;}
      if(c->pc!=0xD6C3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD6C3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6C3u:
    if(m==1u&&x==1u&&e==0u){ /* A0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6C3u,2u,0x01u,0xD6C5u);
      sc_v11_op_ldy(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6C5u:
    if(m==1u&&x==1u&&e==0u){ /* 84 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6C5u,2u,0x79u,0xD6C7u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->y);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6C7u:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6C7u,2u,0x7Fu,0xD6C9u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6C9u:
    if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6C9u,1u,0x4Au,0xD6CAu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6CAu:
    if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6CAu,1u,0xA8u,0xD6CBu);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6CBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6CBu,2u,0x20u,0xD6CDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6CBu,2u,0x20u,0xD6CDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6CBu,2u,0x20u,0xD6CDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6CBu,2u,0x20u,0xD6CDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6CDu:
    if(m==1u&&x==0u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6CDu,2u,0x79u,0xD6CFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6CDu,2u,0x79u,0xD6CFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6CFu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6CFu,1u,0x48u,0xD6D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6CFu,1u,0x48u,0xD6D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6D0u:
    if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6D0u,1u,0xDAu,0xD6D1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6D0u,1u,0xDAu,0xD6D1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6D1u:
    if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6D1u,1u,0x5Au,0xD6D2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6D1u,1u,0x5Au,0xD6D2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6D2u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6D2u,2u,0x20u,0xD6D4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6D2u,2u,0x20u,0xD6D4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6D4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6D4u,3u,0x00u,0xD6D7u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6D4u,3u,0x00u,0xD6D7u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6D7u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6D7u,2u,0x00u,0xD6D9u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD6D9u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6D7u,2u,0x00u,0xD6D9u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD6D9u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6D9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6D9u,2u,0x20u,0xD6DBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6D9u,2u,0x20u,0xD6DBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6DBu:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6DBu,1u,0x7Au,0xD6DCu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6DBu,1u,0x7Au,0xD6DCu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6DCu:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6DCu,1u,0xFAu,0xD6DDu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6DCu,1u,0xFAu,0xD6DDu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6DDu:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6DDu,1u,0x68u,0xD6DEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6DDu,1u,0x68u,0xD6DEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6DEu:
    if(m==1u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6DEu,2u,0x79u,0xD6E0u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6DEu,2u,0x79u,0xD6E0u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6E0u:
    if(m==1u&&x==0u&&e==0u){ /* 20 EF D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E0u,3u,0xD6u,0xD6E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD6E2u))return 0;c->pc=0xD6EFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 EF D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E0u,3u,0xD6u,0xD6E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD6E2u))return 0;c->pc=0xD6EFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6E3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 1B D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E3u,3u,0xD7u,0xD6E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD6E5u))return 0;c->pc=0xD71Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1B D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E3u,3u,0xD7u,0xD6E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD6E5u))return 0;c->pc=0xD71Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 1B D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E3u,3u,0xD7u,0xD6E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD6E5u))return 0;c->pc=0xD71Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1B D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E3u,3u,0xD7u,0xD6E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD6E5u))return 0;c->pc=0xD71Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6E6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 47 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E6u,3u,0xD7u,0xD6E9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD6E8u))return 0;c->pc=0xD747u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 47 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E6u,3u,0xD7u,0xD6E9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD6E8u))return 0;c->pc=0xD747u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 47 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E6u,3u,0xD7u,0xD6E9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD6E8u))return 0;c->pc=0xD747u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 47 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E6u,3u,0xD7u,0xD6E9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD6E8u))return 0;c->pc=0xD747u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6E9u:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E9u,1u,0xCAu,0xD6EAu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E9u,1u,0xCAu,0xD6EAu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E9u,1u,0xCAu,0xD6EAu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6E9u,1u,0xCAu,0xD6EAu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6EAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6EAu,2u,0xDFu,0xD6ECu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD6CBu;}
      if(c->pc!=0xD6ECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD6ECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6EAu,2u,0xDFu,0xD6ECu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD6CBu;}
      if(c->pc!=0xD6ECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD6ECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6EAu,2u,0xDFu,0xD6ECu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD6CBu;}
      if(c->pc!=0xD6ECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD6ECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6EAu,2u,0xDFu,0xD6ECu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD6CBu;}
      if(c->pc!=0xD6ECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD6ECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6ECu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 73 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6ECu,3u,0xD7u,0xD6EFu);
      c->pc=0xD773u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 73 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6ECu,3u,0xD7u,0xD6EFu);
      c->pc=0xD773u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 73 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6ECu,3u,0xD7u,0xD6EFu);
      c->pc=0xD773u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 73 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6ECu,3u,0xD7u,0xD6EFu);
      c->pc=0xD773u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6EFu:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6EFu,2u,0x30u,0xD6F1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6EFu,2u,0x30u,0xD6F1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6F1u:
    if(m==1u&&x==1u&&e==0u){ /* C0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6F1u,2u,0x01u,0xD6F3u);
      sc_v11_op_compare(r,c->y,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6F3u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6F3u,2u,0x04u,0xD6F5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD6F9u;}
      if(c->pc!=0xD6F5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD6F5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6F5u:
    if(m==1u&&x==1u&&e==0u){ /* C0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6F5u,2u,0x04u,0xD6F7u);
      sc_v11_op_compare(r,c->y,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6F7u:
    if(m==1u&&x==1u&&e==0u){ /* 90 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6F7u,2u,0x21u,0xD6F9u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD71Au;}
      if(c->pc!=0xD6F9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD6F9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6F9u:
    if(m==1u&&x==1u&&e==0u){ /* AF 05 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6F9u,4u,0x7Eu,0xD6FDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2005u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6FDu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6FDu,1u,0x18u,0xD6FEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D6FEu:
    if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D6FEu,2u,0x79u,0xD700u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D700u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 05 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D700u,4u,0x7Eu,0xD704u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2005u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D704u:
    if(m==1u&&x==1u&&e==0u){ /* AF 09 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D704u,4u,0x7Eu,0xD708u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2009u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D708u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D708u,1u,0x18u,0xD709u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D709u:
    if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D709u,2u,0x79u,0xD70Bu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D70Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 09 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D70Bu,4u,0x7Eu,0xD70Fu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2009u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D70Fu:
    if(m==1u&&x==1u&&e==0u){ /* AF 0D 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D70Fu,4u,0x7Eu,0xD713u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E200Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D713u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D713u,1u,0x18u,0xD714u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D714u:
    if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D714u,2u,0x79u,0xD716u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D716u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 0D 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D716u,4u,0x7Eu,0xD71Au);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E200Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D71Au:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D71Au,1u,0x60u,0xD71Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D71Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D71Bu,2u,0x30u,0xD71Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D71Bu,2u,0x30u,0xD71Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D71Bu,2u,0x30u,0xD71Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D71Bu,2u,0x30u,0xD71Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D71Du:
    if(m==1u&&x==1u&&e==0u){ /* C0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D71Du,2u,0x02u,0xD71Fu);
      sc_v11_op_compare(r,c->y,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D71Fu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D71Fu,2u,0x04u,0xD721u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD725u;}
      if(c->pc!=0xD721u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD721u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D721u:
    if(m==1u&&x==1u&&e==0u){ /* C0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D721u,2u,0x04u,0xD723u);
      sc_v11_op_compare(r,c->y,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D723u:
    if(m==1u&&x==1u&&e==0u){ /* 90 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D723u,2u,0x21u,0xD725u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD746u;}
      if(c->pc!=0xD725u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD725u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D725u:
    if(m==1u&&x==1u&&e==0u){ /* AF 11 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D725u,4u,0x7Eu,0xD729u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2011u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D729u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D729u,1u,0x18u,0xD72Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D72Au:
    if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D72Au,2u,0x79u,0xD72Cu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D72Cu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 11 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D72Cu,4u,0x7Eu,0xD730u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2011u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D730u:
    if(m==1u&&x==1u&&e==0u){ /* AF 15 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D730u,4u,0x7Eu,0xD734u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2015u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D734u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D734u,1u,0x18u,0xD735u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D735u:
    if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D735u,2u,0x79u,0xD737u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D737u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 15 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D737u,4u,0x7Eu,0xD73Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2015u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D73Bu:
    if(m==1u&&x==1u&&e==0u){ /* AF 19 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D73Bu,4u,0x7Eu,0xD73Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2019u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D73Fu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D73Fu,1u,0x18u,0xD740u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D740u:
    if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D740u,2u,0x79u,0xD742u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D742u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 19 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D742u,4u,0x7Eu,0xD746u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2019u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D746u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D746u,1u,0x60u,0xD747u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D747u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D747u,2u,0x30u,0xD749u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D747u,2u,0x30u,0xD749u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D747u,2u,0x30u,0xD749u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D747u,2u,0x30u,0xD749u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D749u:
    if(m==1u&&x==1u&&e==0u){ /* C0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D749u,2u,0x03u,0xD74Bu);
      sc_v11_op_compare(r,c->y,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D74Bu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D74Bu,2u,0x04u,0xD74Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD751u;}
      if(c->pc!=0xD74Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD74Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D74Du:
    if(m==1u&&x==1u&&e==0u){ /* C0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D74Du,2u,0x05u,0xD74Fu);
      sc_v11_op_compare(r,c->y,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D74Fu:
    if(m==1u&&x==1u&&e==0u){ /* D0 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D74Fu,2u,0x21u,0xD751u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD772u;}
      if(c->pc!=0xD751u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD751u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D751u:
    if(m==1u&&x==1u&&e==0u){ /* AF 1D 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D751u,4u,0x7Eu,0xD755u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E201Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D755u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D755u,1u,0x18u,0xD756u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D756u:
    if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D756u,2u,0x79u,0xD758u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D758u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 1D 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D758u,4u,0x7Eu,0xD75Cu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E201Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D75Cu:
    if(m==1u&&x==1u&&e==0u){ /* AF 21 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D75Cu,4u,0x7Eu,0xD760u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2021u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D760u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D760u,1u,0x18u,0xD761u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D761u:
    if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D761u,2u,0x79u,0xD763u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D763u:
    if(m==1u&&x==1u&&e==0u){ /* 8F 21 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D763u,4u,0x7Eu,0xD767u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2021u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D767u:
    if(m==1u&&x==1u&&e==0u){ /* AF 25 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D767u,4u,0x7Eu,0xD76Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2025u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D76Bu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D76Bu,1u,0x18u,0xD76Cu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D76Cu:
    if(m==1u&&x==1u&&e==0u){ /* 65 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D76Cu,2u,0x79u,0xD76Eu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x79u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D76Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8F 25 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D76Eu,4u,0x7Eu,0xD772u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2025u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D772u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D772u,1u,0x60u,0xD773u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D773u:
    if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D773u,2u,0x30u,0xD775u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D773u,2u,0x30u,0xD775u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D773u,2u,0x30u,0xD775u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7A6u:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7A6u,3u,0xA2u,0xD7A9u);
      sc_v11_op_ldy(r,0xA201u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7A6u,2u,0x01u,0xD7A8u);
      sc_v11_op_ldy(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 01 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7A6u,3u,0xA2u,0xD7A9u);
      sc_v11_op_ldy(r,0xA201u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7A8u:
    if(m==0u&&x==1u&&e==0u){ /* A2 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7A8u,2u,0x0Cu,0xD7AAu);
      sc_v11_op_ldx(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7AAu:
    if(m==0u&&x==1u&&e==0u){ /* 20 B8 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7AAu,3u,0xD7u,0xD7ADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD7ACu))return 0;c->pc=0xD7B8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7ADu:
    if(m==0u&&x==0u&&e==0u){ /* A0 02 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7ADu,3u,0xA2u,0xD7B0u);
      sc_v11_op_ldy(r,0xA202u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7ADu,2u,0x02u,0xD7AFu);
      sc_v11_op_ldy(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 02 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7ADu,3u,0xA2u,0xD7B0u);
      sc_v11_op_ldy(r,0xA202u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7AFu:
    if(m==0u&&x==1u&&e==0u){ /* A2 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7AFu,2u,0x18u,0xD7B1u);
      sc_v11_op_ldx(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7B0u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B0u,1u,0x18u,0xD7B1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B0u,1u,0x18u,0xD7B1u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7B1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B8 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B1u,3u,0xD7u,0xD7B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD7B3u))return 0;c->pc=0xD7B8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B8 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B1u,3u,0xD7u,0xD7B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD7B3u))return 0;c->pc=0xD7B8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B8 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B1u,3u,0xD7u,0xD7B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD7B3u))return 0;c->pc=0xD7B8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7B4u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 2F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B4u,3u,0x0Bu,0xD7B7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B2Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 2F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B4u,3u,0x0Bu,0xD7B7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B2Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 2F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B4u,3u,0x0Bu,0xD7B7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7B7u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B7u,1u,0x60u,0xD7B8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B7u,1u,0x60u,0xD7B8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B7u,1u,0x60u,0xD7B8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7B8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B8u,2u,0x30u,0xD7BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B8u,2u,0x30u,0xD7BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7B8u,2u,0x30u,0xD7BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7CAu:
    if(m==1u&&x==1u&&e==0u){ /* A9 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7CAu,2u,0x40u,0xD7CCu);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7DDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7DDu,2u,0x10u,0xD7DFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7DDu,2u,0x10u,0xD7DFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D7DFu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D7DFu,2u,0x20u,0xD7E1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
