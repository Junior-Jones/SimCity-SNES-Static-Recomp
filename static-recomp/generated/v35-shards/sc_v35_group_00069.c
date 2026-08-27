/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00069(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01A46Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 43 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A46Du,3u,0xB1u,0xA470u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA46Fu))return 0;c->pc=0xB143u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 43 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A46Du,3u,0xB1u,0xA470u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA46Fu))return 0;c->pc=0xB143u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 43 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A46Du,3u,0xB1u,0xA470u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA46Fu))return 0;c->pc=0xB143u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 43 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A46Du,3u,0xB1u,0xA470u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA46Fu))return 0;c->pc=0xB143u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A470u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A470u,2u,0x20u,0xA472u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A470u,2u,0x20u,0xA472u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A470u,2u,0x20u,0xA472u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A470u,2u,0x20u,0xA472u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A472u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 7F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A472u,3u,0x03u,0xA475u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x037Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 7F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A472u,3u,0x03u,0xA475u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x037Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A475u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 05 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A475u,3u,0x01u,0xA478u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0105u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 05 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A475u,3u,0x01u,0xA478u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0105u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A478u:
    if(m==0u&&x==0u&&e==0u){ /* A9 48 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A478u,3u,0x00u,0xA47Bu);
      sc_v11_op_lda(r,0x0048u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 48 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A478u,3u,0x00u,0xA47Bu);
      sc_v11_op_lda(r,0x0048u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A47Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A47Bu,3u,0x02u,0xA47Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A47Bu,3u,0x02u,0xA47Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A47Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A47Eu,3u,0x01u,0xA481u);
      sc_v11_op_lda(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A47Eu,3u,0x01u,0xA481u);
      sc_v11_op_lda(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A481u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 59 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A481u,3u,0x02u,0xA484u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0259u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 59 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A481u,3u,0x02u,0xA484u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0259u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A484u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A484u,2u,0x20u,0xA486u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A484u,2u,0x20u,0xA486u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A486u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A486u,3u,0x00u,0xA489u);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A486u,3u,0x00u,0xA489u);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A489u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A489u,2u,0x00u,0xA48Bu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA48Bu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A489u,2u,0x00u,0xA48Bu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA48Bu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A48Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 FB E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A48Bu,3u,0xE1u,0xA48Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA48Du))return 0;c->pc=0xE1FBu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FB E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A48Bu,3u,0xE1u,0xA48Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA48Du))return 0;c->pc=0xE1FBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A48Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A48Eu,2u,0x20u,0xA490u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A48Eu,2u,0x20u,0xA490u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A48Eu,2u,0x20u,0xA490u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A48Eu,2u,0x20u,0xA490u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A490u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A490u,3u,0x00u,0xA493u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A490u,3u,0x00u,0xA493u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A493u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A493u,2u,0x00u,0xA495u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA495u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A493u,2u,0x00u,0xA495u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA495u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A495u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A495u,2u,0x20u,0xA497u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A495u,2u,0x20u,0xA497u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A497u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A497u,3u,0x00u,0xA49Au);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A497u,3u,0x00u,0xA49Au);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A49Au:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A49Au,2u,0x00u,0xA49Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA49Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A49Au,2u,0x00u,0xA49Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA49Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A49Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A49Cu,2u,0x20u,0xA49Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A49Cu,2u,0x20u,0xA49Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A49Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A49Eu,3u,0x00u,0xA4A1u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A49Eu,3u,0x00u,0xA4A1u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4A1u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4A1u,2u,0x00u,0xA4A3u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA4A3u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4A1u,2u,0x00u,0xA4A3u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA4A3u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4A3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4A3u,2u,0x20u,0xA4A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4A3u,2u,0x20u,0xA4A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4A5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4A5u,3u,0x00u,0xA4A8u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4A5u,3u,0x00u,0xA4A8u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4A8u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4A8u,2u,0x00u,0xA4AAu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA4AAu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4A8u,2u,0x00u,0xA4AAu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA4AAu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4AAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4AAu,2u,0x30u,0xA4ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4AAu,2u,0x30u,0xA4ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4ACu:
    if(m==0u&&x==0u&&e==0u){ /* AE 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4ACu,3u,0x03u,0xA4AFu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4AFu:
    if(m==0u&&x==0u&&e==0u){ /* 8E 9B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4AFu,3u,0x03u,0xA4B2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x039Bu),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4B2u:
    if(m==0u&&x==0u&&e==0u){ /* BF C3 A3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4B2u,4u,0x01u,0xA4B6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01A3C3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4B6u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4B6u,3u,0x00u,0xA4B9u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4B9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4B9u,3u,0x03u,0xA4BCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x039Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4BCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 DC 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4BCu,3u,0x9Eu,0xA4BFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4BEu))return 0;c->pc=0x9EDCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4BFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4BFu,2u,0x20u,0xA4C1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4BFu,2u,0x20u,0xA4C1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4BFu,2u,0x20u,0xA4C1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4BFu,2u,0x20u,0xA4C1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4C1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4C1u,3u,0x00u,0xA4C4u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4C1u,3u,0x00u,0xA4C4u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4C4u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4C4u,2u,0x00u,0xA4C6u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA4C6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4C4u,2u,0x00u,0xA4C6u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA4C6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4C6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F0 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4C6u,3u,0xE3u,0xA4C9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4C8u))return 0;c->pc=0xE3F0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F0 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4C6u,3u,0xE3u,0xA4C9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4C8u))return 0;c->pc=0xE3F0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4C9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CF E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4C9u,3u,0xE7u,0xA4CCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4CBu))return 0;c->pc=0xE7CFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 CF E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4C9u,3u,0xE7u,0xA4CCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4CBu))return 0;c->pc=0xE7CFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 CF E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4C9u,3u,0xE7u,0xA4CCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4CBu))return 0;c->pc=0xE7CFu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CF E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4C9u,3u,0xE7u,0xA4CCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4CBu))return 0;c->pc=0xE7CFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4CCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 76 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4CCu,3u,0xDDu,0xA4CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4CEu))return 0;c->pc=0xDD76u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 76 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4CCu,3u,0xDDu,0xA4CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4CEu))return 0;c->pc=0xDD76u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 76 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4CCu,3u,0xDDu,0xA4CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4CEu))return 0;c->pc=0xDD76u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 76 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4CCu,3u,0xDDu,0xA4CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4CEu))return 0;c->pc=0xDD76u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4CFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4CFu,2u,0x30u,0xA4D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4CFu,2u,0x30u,0xA4D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4CFu,2u,0x30u,0xA4D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4CFu,2u,0x30u,0xA4D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4D1u:
    if(m==0u&&x==0u&&e==0u){ /* AE 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4D1u,3u,0x03u,0xA4D4u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4D4u:
    if(m==0u&&x==0u&&e==0u){ /* BF F7 A3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4D4u,4u,0x01u,0xA4D8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01A3F7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4D8u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4D8u,3u,0x00u,0xA4DBu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4DBu:
    if(m==0u&&x==0u&&e==0u){ /* F0 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4DBu,2u,0x26u,0xA4DDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA503u;}
      if(c->pc!=0xA4DDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4DDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4DDu:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4DDu,3u,0x00u,0xA4E0u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4E0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4E0u,2u,0x14u,0xA4E2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA4F6u;}
      if(c->pc!=0xA4E2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4E2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4E2u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4E2u,1u,0x48u,0xA4E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4E3u:
    if(m==0u&&x==0u&&e==0u){ /* BF 39 A4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4E3u,4u,0x01u,0xA4E7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01A439u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4E7u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4E7u,1u,0x4Au,0xA4E8u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4E8u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4E8u,1u,0x68u,0xA4E9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4E9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4E9u,2u,0x0Bu,0xA4EBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA4F6u;}
      if(c->pc!=0xA4EBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4EBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4EBu:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4EBu,1u,0x08u,0xA4ECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4ECu:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4ECu,4u,0x00u,0xA4F0u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA4EFu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4F0u:
    if(m==0u&&x==0u&&e==0u){ /* 02 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F0u,2u,0x05u,0xA4F2u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA4F2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F0u,2u,0x05u,0xA4F2u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA4F2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F0u,2u,0x05u,0xA4F2u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA4F2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F0u,2u,0x05u,0xA4F2u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA4F2u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4F2u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F2u,1u,0x28u,0xA4F3u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F2u,1u,0x28u,0xA4F3u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F2u,1u,0x28u,0xA4F3u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F2u,1u,0x28u,0xA4F3u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4F3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F3u,3u,0x00u,0xA4F6u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F3u,3u,0x00u,0xA4F6u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F3u,2u,0x03u,0xA4F5u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F3u,2u,0x03u,0xA4F5u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4F6u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F6u,1u,0x3Au,0xA4F7u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F6u,1u,0x3Au,0xA4F7u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4F7u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F7u,1u,0x0Au,0xA4F8u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F7u,1u,0x0Au,0xA4F8u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4F8u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F8u,1u,0xAAu,0xA4F9u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F8u,1u,0xAAu,0xA4F9u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4F9u:
    if(m==0u&&x==0u&&e==0u){ /* BF 2B A4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F9u,4u,0x01u,0xA4FDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01A42Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 2B A4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4F9u,4u,0x01u,0xA4FDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01A42Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4FDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4FDu,2u,0x30u,0xA4FFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4FDu,2u,0x30u,0xA4FFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A4FFu:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A4FFu,1u,0xAAu,0xA500u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A500u:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A500u,1u,0xEBu,0xA501u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A501u:
    if(m==1u&&x==1u&&e==0u){ /* 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A501u,2u,0x03u,0xA503u);
      sc_v11_bus_write8(r,sc_v11_ea_dpx(r,0x03u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A503u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A503u,2u,0x20u,0xA505u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A503u,2u,0x20u,0xA505u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A505u:
    if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A505u,2u,0xFFu,0xA507u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A505u,2u,0xFFu,0xA507u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A507u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 91 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A507u,3u,0x03u,0xA50Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0391u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 91 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A507u,3u,0x03u,0xA50Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0391u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A50Au:
    if(m==1u&&x==0u&&e==0u){ /* 20 2F E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A50Au,3u,0xE7u,0xA50Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA50Cu))return 0;c->pc=0xE72Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 2F E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A50Au,3u,0xE7u,0xA50Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA50Cu))return 0;c->pc=0xE72Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A50Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A50Du,2u,0x20u,0xA50Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A50Du,2u,0x20u,0xA50Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A50Du,2u,0x20u,0xA50Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A50Du,2u,0x20u,0xA50Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A50Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A50Fu,2u,0x10u,0xA511u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A50Fu,2u,0x10u,0xA511u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A511u:
    if(m==1u&&x==0u&&e==0u){ /* AE 9F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A511u,3u,0x03u,0xA514u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x039Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A514u:
    if(m==1u&&x==0u&&e==0u){ /* BF B5 A3 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A514u,4u,0x01u,0xA518u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01A3B5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A518u:
    if(m==1u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A518u,1u,0x3Au,0xA519u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A519u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 77 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A519u,3u,0x03u,0xA51Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0377u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A51Cu:
    if(m==1u&&x==0u&&e==0u){ /* 20 12 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A51Cu,3u,0xEBu,0xA51Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA51Eu))return 0;c->pc=0xEB12u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A51Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 34 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A51Fu,3u,0xE9u,0xA522u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA521u))return 0;c->pc=0xE934u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 34 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A51Fu,3u,0xE9u,0xA522u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA521u))return 0;c->pc=0xE934u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 34 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A51Fu,3u,0xE9u,0xA522u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA521u))return 0;c->pc=0xE934u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 34 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A51Fu,3u,0xE9u,0xA522u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA521u))return 0;c->pc=0xE934u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A522u:
    if(m==0u&&x==0u&&e==0u){ /* 20 5B E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A522u,3u,0xE9u,0xA525u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA524u))return 0;c->pc=0xE95Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 5B E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A522u,3u,0xE9u,0xA525u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA524u))return 0;c->pc=0xE95Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 5B E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A522u,3u,0xE9u,0xA525u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA524u))return 0;c->pc=0xE95Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 5B E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A522u,3u,0xE9u,0xA525u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA524u))return 0;c->pc=0xE95Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A525u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9A E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A525u,3u,0xE8u,0xA528u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA527u))return 0;c->pc=0xE89Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9A E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A525u,3u,0xE8u,0xA528u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA527u))return 0;c->pc=0xE89Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9A E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A525u,3u,0xE8u,0xA528u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA527u))return 0;c->pc=0xE89Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9A E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A525u,3u,0xE8u,0xA528u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA527u))return 0;c->pc=0xE89Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A528u:
    if(m==0u&&x==0u&&e==0u){ /* 20 82 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A528u,3u,0xE9u,0xA52Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA52Au))return 0;c->pc=0xE982u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 82 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A528u,3u,0xE9u,0xA52Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA52Au))return 0;c->pc=0xE982u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 82 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A528u,3u,0xE9u,0xA52Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA52Au))return 0;c->pc=0xE982u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 82 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A528u,3u,0xE9u,0xA52Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA52Au))return 0;c->pc=0xE982u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A52Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A52Bu,2u,0x20u,0xA52Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A52Bu,2u,0x20u,0xA52Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A52Bu,2u,0x20u,0xA52Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A52Bu,2u,0x20u,0xA52Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A52Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A52Du,2u,0x14u,0xA52Fu);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A52Du,2u,0x14u,0xA52Fu);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A52Fu:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A52Fu,2u,0x68u,0xA531u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A52Fu,2u,0x68u,0xA531u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A531u:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A531u,2u,0x03u,0xA533u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A531u,2u,0x03u,0xA533u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A533u:
    if(m==1u&&x==0u&&e==0u){ /* 85 69 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A533u,2u,0x69u,0xA535u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 69 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A533u,2u,0x69u,0xA535u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A535u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A535u,2u,0x02u,0xA537u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A535u,2u,0x02u,0xA537u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A537u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A537u,2u,0x6Cu,0xA539u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A537u,2u,0x6Cu,0xA539u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A539u:
    if(m==1u&&x==0u&&e==0u){ /* A9 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A539u,2u,0x60u,0xA53Bu);
      sc_v11_op_lda(r,0x0060u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A539u,2u,0x60u,0xA53Bu);
      sc_v11_op_lda(r,0x0060u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A53Bu:
    if(m==1u&&x==0u&&e==0u){ /* 85 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A53Bu,2u,0x6Du,0xA53Du);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A53Bu,2u,0x6Du,0xA53Du);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A53Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A53Du,2u,0xE0u,0xA53Fu);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A53Du,2u,0xE0u,0xA53Fu);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A53Fu:
    if(m==1u&&x==0u&&e==0u){ /* 85 6E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A53Fu,2u,0x6Eu,0xA541u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A53Fu,2u,0x6Eu,0xA541u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A541u:
    if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A541u,2u,0xFFu,0xA543u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A541u,2u,0xFFu,0xA543u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A543u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A543u,3u,0x21u,0xA546u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A543u,3u,0x21u,0xA546u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A546u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 28 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A546u,3u,0x21u,0xA549u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2128u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 28 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A546u,3u,0x21u,0xA549u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2128u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A549u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 27 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A549u,3u,0x21u,0xA54Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 27 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A549u,3u,0x21u,0xA54Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A54Cu:
    if(m==1u&&x==0u&&e==0u){ /* 9C 29 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A54Cu,3u,0x21u,0xA54Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2129u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 29 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A54Cu,3u,0x21u,0xA54Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2129u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A54Fu:
    if(m==1u&&x==0u&&e==0u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A54Fu,2u,0x14u,0xA551u);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A54Fu,2u,0x14u,0xA551u);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A551u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A551u,2u,0x6Au,0xA553u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A551u,2u,0x6Au,0xA553u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A553u:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A553u,2u,0x03u,0xA555u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A553u,2u,0x03u,0xA555u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A555u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A555u,2u,0x6Bu,0xA557u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A555u,2u,0x6Bu,0xA557u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A557u:
    if(m==1u&&x==0u&&e==0u){ /* A9 AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A557u,2u,0xAAu,0xA559u);
      sc_v11_op_lda(r,0x00AAu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A557u,2u,0xAAu,0xA559u);
      sc_v11_op_lda(r,0x00AAu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A559u:
    if(m==1u&&x==0u&&e==0u){ /* 85 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A559u,2u,0x71u,0xA55Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A559u,2u,0x71u,0xA55Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A55Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A55Bu,2u,0x03u,0xA55Du);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A55Bu,2u,0x03u,0xA55Du);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A55Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A55Du,2u,0x72u,0xA55Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A55Du,2u,0x72u,0xA55Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A55Fu:
    if(m==1u&&x==0u&&e==0u){ /* 85 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A55Fu,2u,0x6Fu,0xA561u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A55Fu,2u,0x6Fu,0xA561u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A561u:
    if(m==1u&&x==0u&&e==0u){ /* A9 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A561u,2u,0x05u,0xA563u);
      sc_v11_op_lda(r,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A561u,2u,0x05u,0xA563u);
      sc_v11_op_lda(r,0x0005u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A563u:
    if(m==1u&&x==0u&&e==0u){ /* 85 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A563u,2u,0x70u,0xA565u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x70u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A563u,2u,0x70u,0xA565u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x70u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A565u:
    if(m==1u&&x==0u&&e==0u){ /* 20 7D E6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A565u,3u,0xE6u,0xA568u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA567u))return 0;c->pc=0xE67Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 7D E6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A565u,3u,0xE6u,0xA568u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA567u))return 0;c->pc=0xE67Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A568u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A568u,2u,0x20u,0xA56Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A568u,2u,0x20u,0xA56Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A568u,2u,0x20u,0xA56Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A568u,2u,0x20u,0xA56Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A56Au:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A56Au,2u,0x03u,0xA56Cu);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A56Au,2u,0x03u,0xA56Cu);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A56Cu:
    if(m==1u&&x==0u&&e==0u){ /* 85 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A56Cu,2u,0x6Fu,0xA56Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A56Cu,2u,0x6Fu,0xA56Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A56Eu:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A56Eu,2u,0x18u,0xA570u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A56Eu,2u,0x18u,0xA570u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A570u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A570u,3u,0x21u,0xA573u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A570u,3u,0x21u,0xA573u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A573u:
    if(m==1u&&x==0u&&e==0u){ /* A9 E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A573u,2u,0xE7u,0xA575u);
      sc_v11_op_lda(r,0x00E7u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A573u,2u,0xE7u,0xA575u);
      sc_v11_op_lda(r,0x00E7u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A575u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 27 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A575u,3u,0x21u,0xA578u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 27 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A575u,3u,0x21u,0xA578u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A578u:
    if(m==1u&&x==0u&&e==0u){ /* A9 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A578u,2u,0x10u,0xA57Au);
      sc_v11_op_lda(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A578u,2u,0x10u,0xA57Au);
      sc_v11_op_lda(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A57Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A57Au,2u,0x6Au,0xA57Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A57Au,2u,0x6Au,0xA57Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A57Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A57Cu,2u,0x20u,0xA57Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A57Cu,2u,0x20u,0xA57Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A57Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A57Eu,3u,0x00u,0xA581u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A57Eu,3u,0x00u,0xA581u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A581u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A581u,2u,0x00u,0xA583u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA583u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A581u,2u,0x00u,0xA583u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA583u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A583u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A583u,2u,0x20u,0xA585u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A583u,2u,0x20u,0xA585u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A585u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A585u,3u,0x07u,0xA588u);
      sc_v11_op_lda(r,0x0708u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 08 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A585u,3u,0x07u,0xA588u);
      sc_v11_op_lda(r,0x0708u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A588u:
    if(m==0u&&x==0u&&e==0u){ /* 85 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A588u,2u,0x56u,0xA58Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x56u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A588u,2u,0x56u,0xA58Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x56u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A58Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A58Au,2u,0x20u,0xA58Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A58Au,2u,0x20u,0xA58Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A58Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A58Cu,3u,0x00u,0xA58Fu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A58Cu,3u,0x00u,0xA58Fu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A58Fu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A58Fu,2u,0x00u,0xA591u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA591u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A58Fu,2u,0x00u,0xA591u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA591u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A591u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A591u,2u,0x20u,0xA593u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A591u,2u,0x20u,0xA593u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A591u,2u,0x20u,0xA593u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A591u,2u,0x20u,0xA593u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A593u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A593u,3u,0x00u,0xA596u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A593u,3u,0x00u,0xA596u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A596u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A596u,2u,0x00u,0xA598u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA598u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A596u,2u,0x00u,0xA598u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA598u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A598u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A598u,2u,0x30u,0xA59Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A598u,2u,0x30u,0xA59Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A59Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A59Au,2u,0xC9u,0xA59Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A59Cu:
    if(m==0u&&x==0u&&e==0u){ /* 29 40 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A59Cu,3u,0x80u,0xA59Fu);
      sc_v11_op_and(r,0x8040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A59Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 29 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A59Fu,2u,0x29u,0xA5A1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA5CAu;}
      if(c->pc!=0xA5A1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5A1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5A1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5A1u,2u,0x56u,0xA5A3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x56u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5A3u:
    if(m==0u&&x==0u&&e==0u){ /* F0 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5A3u,2u,0x25u,0xA5A5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA5CAu;}
      if(c->pc!=0xA5A5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5A5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5A5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 12 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5A5u,3u,0xEBu,0xA5A8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5A7u))return 0;c->pc=0xEB12u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5A8u:
    if(m==0u&&x==0u&&e==0u){ /* 22 82 F2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5A8u,4u,0x03u,0xA5ACu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA5ABu))return 0;
      c->pbr=0x03u;c->pc=0xF282u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 82 F2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5A8u,4u,0x03u,0xA5ACu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA5ABu))return 0;
      c->pbr=0x03u;c->pc=0xF282u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 82 F2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5A8u,4u,0x03u,0xA5ACu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA5ABu))return 0;
      c->pbr=0x03u;c->pc=0xF282u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 82 F2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5A8u,4u,0x03u,0xA5ACu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA5ABu))return 0;
      c->pbr=0x03u;c->pc=0xF282u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5ACu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5ACu,2u,0x20u,0xA5AEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5ACu,2u,0x20u,0xA5AEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5ACu,2u,0x20u,0xA5AEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5ACu,2u,0x20u,0xA5AEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5AEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5AEu,3u,0x03u,0xA5B1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5AEu,3u,0x03u,0xA5B1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0397u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5B1u:
    if(m==0u&&x==0u&&e==0u){ /* C9 2F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5B1u,3u,0x00u,0xA5B4u);
      sc_v11_op_compare(r,c->a,0x002Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 2F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5B1u,3u,0x00u,0xA5B4u);
      sc_v11_op_compare(r,c->a,0x002Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5B4u:
    if(m==0u&&x==0u&&e==0u){ /* F0 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5B4u,2u,0xDBu,0xA5B6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA591u;}
      if(c->pc!=0xA5B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 DB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5B4u,2u,0xDBu,0xA5B6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA591u;}
      if(c->pc!=0xA5B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5B6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 5F EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5B6u,3u,0xEAu,0xA5B9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5B8u))return 0;c->pc=0xEA5Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 5F EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5B6u,3u,0xEAu,0xA5B9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5B8u))return 0;c->pc=0xEA5Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5B9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 34 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5B9u,3u,0xE9u,0xA5BCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5BBu))return 0;c->pc=0xE934u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 34 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5B9u,3u,0xE9u,0xA5BCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5BBu))return 0;c->pc=0xE934u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 34 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5B9u,3u,0xE9u,0xA5BCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5BBu))return 0;c->pc=0xE934u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 34 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5B9u,3u,0xE9u,0xA5BCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5BBu))return 0;c->pc=0xE934u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5BCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 5B E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5BCu,3u,0xE9u,0xA5BFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5BEu))return 0;c->pc=0xE95Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 5B E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5BCu,3u,0xE9u,0xA5BFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5BEu))return 0;c->pc=0xE95Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 5B E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5BCu,3u,0xE9u,0xA5BFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5BEu))return 0;c->pc=0xE95Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 5B E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5BCu,3u,0xE9u,0xA5BFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5BEu))return 0;c->pc=0xE95Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5BFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 9A E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5BFu,3u,0xE8u,0xA5C2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5C1u))return 0;c->pc=0xE89Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9A E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5BFu,3u,0xE8u,0xA5C2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5C1u))return 0;c->pc=0xE89Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9A E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5BFu,3u,0xE8u,0xA5C2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5C1u))return 0;c->pc=0xE89Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9A E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5BFu,3u,0xE8u,0xA5C2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5C1u))return 0;c->pc=0xE89Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5C2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 E9 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5C2u,3u,0xE8u,0xA5C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5C4u))return 0;c->pc=0xE8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E9 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5C2u,3u,0xE8u,0xA5C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5C4u))return 0;c->pc=0xE8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E9 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5C2u,3u,0xE8u,0xA5C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5C4u))return 0;c->pc=0xE8E9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E9 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5C2u,3u,0xE8u,0xA5C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5C4u))return 0;c->pc=0xE8E9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5C5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 82 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5C5u,3u,0xE9u,0xA5C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5C7u))return 0;c->pc=0xE982u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 82 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5C5u,3u,0xE9u,0xA5C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5C7u))return 0;c->pc=0xE982u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 82 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5C5u,3u,0xE9u,0xA5C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5C7u))return 0;c->pc=0xE982u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 82 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5C5u,3u,0xE9u,0xA5C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5C7u))return 0;c->pc=0xE982u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5C8u:
    if(m==0u&&x==0u&&e==0u){ /* 80 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5C8u,2u,0xC7u,0xA5CAu);
      if(1){c->pc=0xA591u;}
      if(c->pc!=0xA5CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5C8u,2u,0xC7u,0xA5CAu);
      if(1){c->pc=0xA591u;}
      if(c->pc!=0xA5CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5C8u,2u,0xC7u,0xA5CAu);
      if(1){c->pc=0xA591u;}
      if(c->pc!=0xA5CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5C8u,2u,0xC7u,0xA5CAu);
      if(1){c->pc=0xA591u;}
      if(c->pc!=0xA5CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5CAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5CAu,2u,0x20u,0xA5CCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5CCu:
    if(m==1u&&x==0u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5CCu,2u,0x18u,0xA5CEu);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5CEu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5CEu,3u,0x21u,0xA5D1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5D1u:
    if(m==1u&&x==0u&&e==0u){ /* A9 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5D1u,2u,0xE8u,0xA5D3u);
      sc_v11_op_lda(r,0x00E8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5D3u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 27 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5D3u,3u,0x21u,0xA5D6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5D6u:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5D6u,2u,0x03u,0xA5D8u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5D8u:
    if(m==1u&&x==0u&&e==0u){ /* 85 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5D8u,2u,0x72u,0xA5DAu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5DAu:
    if(m==1u&&x==0u&&e==0u){ /* 85 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5DAu,2u,0x6Fu,0xA5DCu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5DCu:
    if(m==1u&&x==0u&&e==0u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5DCu,2u,0x14u,0xA5DEu);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5DEu:
    if(m==1u&&x==0u&&e==0u){ /* 85 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5DEu,2u,0x6Au,0xA5E0u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5E0u:
    if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E0u,1u,0x08u,0xA5E1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5E1u:
    if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E1u,4u,0x00u,0xA5E5u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA5E4u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5E5u:
    if(m==0u&&x==0u&&e==0u){ /* 02 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E5u,2u,0x07u,0xA5E7u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA5E7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E5u,2u,0x07u,0xA5E7u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA5E7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E5u,2u,0x07u,0xA5E7u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA5E7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E5u,2u,0x07u,0xA5E7u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA5E7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5E7u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E7u,1u,0x28u,0xA5E8u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E7u,1u,0x28u,0xA5E8u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E7u,1u,0x28u,0xA5E8u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E7u,1u,0x28u,0xA5E8u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5E8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E8u,2u,0x20u,0xA5EAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E8u,2u,0x20u,0xA5EAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E8u,2u,0x20u,0xA5EAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5E8u,2u,0x20u,0xA5EAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5EAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5EAu,3u,0x00u,0xA5EDu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5EAu,3u,0x00u,0xA5EDu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5EDu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5EDu,2u,0x00u,0xA5EFu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA5EFu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5EDu,2u,0x00u,0xA5EFu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA5EFu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5EFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 B5 E6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5EFu,3u,0xE6u,0xA5F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5F1u))return 0;c->pc=0xE6B5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B5 E6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5EFu,3u,0xE6u,0xA5F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5F1u))return 0;c->pc=0xE6B5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5F2u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5F2u,2u,0x20u,0xA5F4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5F2u,2u,0x20u,0xA5F4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5F2u,2u,0x20u,0xA5F4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5F2u,2u,0x20u,0xA5F4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5F4u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5F4u,2u,0x00u,0xA5F6u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5F4u,2u,0x00u,0xA5F6u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5F6u:
    if(m==1u&&x==0u&&e==0u){ /* 85 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5F6u,2u,0x71u,0xA5F8u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5F6u,2u,0x71u,0xA5F8u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5F8u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 91 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5F8u,3u,0x03u,0xA5FBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0391u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 91 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5F8u,3u,0x03u,0xA5FBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0391u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5FBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5FBu,2u,0x20u,0xA5FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5FBu,2u,0x20u,0xA5FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A5FDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5FDu,3u,0x00u,0xA600u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A5FDu,3u,0x00u,0xA600u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A600u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A600u,2u,0x00u,0xA602u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA602u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A600u,2u,0x00u,0xA602u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA602u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A602u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FE E5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A602u,3u,0xE5u,0xA605u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA604u))return 0;c->pc=0xE5FEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FE E5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A602u,3u,0xE5u,0xA605u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA604u))return 0;c->pc=0xE5FEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A605u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A605u,2u,0x20u,0xA607u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A605u,2u,0x20u,0xA607u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A605u,2u,0x20u,0xA607u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A605u,2u,0x20u,0xA607u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A607u:
    if(m==1u&&x==0u&&e==0u){ /* A9 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A607u,2u,0x17u,0xA609u);
      sc_v11_op_lda(r,0x0017u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A607u,2u,0x17u,0xA609u);
      sc_v11_op_lda(r,0x0017u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A609u:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A609u,2u,0x68u,0xA60Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A609u,2u,0x68u,0xA60Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A60Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A60Bu,2u,0x04u,0xA60Du);
      sc_v11_op_lda(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A60Bu,2u,0x04u,0xA60Du);
      sc_v11_op_lda(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A60Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 69 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A60Du,2u,0x69u,0xA60Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 69 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A60Du,2u,0x69u,0xA60Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A60Fu:
    if(m==1u&&x==0u&&e==0u){ /* 64 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A60Fu,2u,0x6Au,0xA611u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A60Fu,2u,0x6Au,0xA611u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A611u:
    if(m==1u&&x==0u&&e==0u){ /* 64 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A611u,2u,0x6Fu,0xA613u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A611u,2u,0x6Fu,0xA613u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A613u:
    if(m==1u&&x==0u&&e==0u){ /* 64 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A613u,2u,0x6Du,0xA615u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A613u,2u,0x6Du,0xA615u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A615u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A615u,2u,0x30u,0xA617u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A615u,2u,0x30u,0xA617u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A617u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A617u,3u,0x00u,0xA61Au);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A61Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A61Au,3u,0x01u,0xA61Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A61Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D E5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A61Du,3u,0x01u,0xA620u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A620u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B7 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A620u,3u,0xC8u,0xA623u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA622u))return 0;c->pc=0xC8B7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A623u:
    if(m==0u&&x==0u&&e==0u){ /* 20 17 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A623u,3u,0xC8u,0xA626u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA625u))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 17 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A623u,3u,0xC8u,0xA626u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA625u))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 17 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A623u,3u,0xC8u,0xA626u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA625u))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 17 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A623u,3u,0xC8u,0xA626u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA625u))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A626u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A626u,2u,0x10u,0xA628u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A626u,2u,0x10u,0xA628u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A626u,2u,0x10u,0xA628u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A626u,2u,0x10u,0xA628u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A628u:
    if(m==0u&&x==0u&&e==0u){ /* 20 60 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A628u,3u,0xC6u,0xA62Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA62Au))return 0;c->pc=0xC660u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 60 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A628u,3u,0xC6u,0xA62Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA62Au))return 0;c->pc=0xC660u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A62Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 FE 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A62Bu,3u,0x9Eu,0xA62Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA62Du))return 0;c->pc=0x9EFEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 FE 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A62Bu,3u,0x9Eu,0xA62Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA62Du))return 0;c->pc=0x9EFEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FE 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A62Bu,3u,0x9Eu,0xA62Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA62Du))return 0;c->pc=0x9EFEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FE 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A62Bu,3u,0x9Eu,0xA62Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA62Du))return 0;c->pc=0x9EFEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A62Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 7B DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A62Eu,3u,0xDFu,0xA631u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA630u))return 0;c->pc=0xDF7Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7B DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A62Eu,3u,0xDFu,0xA631u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA630u))return 0;c->pc=0xDF7Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 7B DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A62Eu,3u,0xDFu,0xA631u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA630u))return 0;c->pc=0xDF7Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 7B DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A62Eu,3u,0xDFu,0xA631u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA630u))return 0;c->pc=0xDF7Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A631u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4F D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A631u,3u,0xD9u,0xA634u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA633u))return 0;c->pc=0xD94Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 4F D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A631u,3u,0xD9u,0xA634u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA633u))return 0;c->pc=0xD94Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 4F D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A631u,3u,0xD9u,0xA634u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA633u))return 0;c->pc=0xD94Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 4F D9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A631u,3u,0xD9u,0xA634u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA633u))return 0;c->pc=0xD94Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A634u:
    if(m==0u&&x==0u&&e==0u){ /* 20 E7 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A634u,3u,0xB3u,0xA637u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA636u))return 0;c->pc=0xB3E7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E7 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A634u,3u,0xB3u,0xA637u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA636u))return 0;c->pc=0xB3E7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E7 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A634u,3u,0xB3u,0xA637u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA636u))return 0;c->pc=0xB3E7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E7 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A634u,3u,0xB3u,0xA637u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA636u))return 0;c->pc=0xB3E7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A637u:
    if(m==0u&&x==0u&&e==0u){ /* 20 C3 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A637u,3u,0xBFu,0xA63Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA639u))return 0;c->pc=0xBFC3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C3 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A637u,3u,0xBFu,0xA63Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA639u))return 0;c->pc=0xBFC3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C3 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A637u,3u,0xBFu,0xA63Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA639u))return 0;c->pc=0xBFC3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C3 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A637u,3u,0xBFu,0xA63Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA639u))return 0;c->pc=0xBFC3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A63Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A63Au,2u,0x20u,0xA63Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A63Au,2u,0x20u,0xA63Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A63Au,2u,0x20u,0xA63Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A63Au,2u,0x20u,0xA63Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A63Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A63Cu,3u,0x03u,0xA63Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A63Cu,3u,0x03u,0xA63Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A63Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A63Fu,1u,0x60u,0xA640u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A63Fu,1u,0x60u,0xA640u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A640u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A640u,2u,0x20u,0xA642u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A640u,2u,0x20u,0xA642u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A642u:
    if(m==0u&&x==0u&&e==0u){ /* AD 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A642u,3u,0x04u,0xA645u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0400u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A645u:
    if(m==0u&&x==0u&&e==0u){ /* 20 88 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A645u,3u,0xA6u,0xA648u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA647u))return 0;c->pc=0xA688u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A648u:
    if(m==0u&&x==0u&&e==0u){ /* 8D BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A648u,3u,0x01u,0xA64Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A648u,3u,0x01u,0xA64Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A648u,3u,0x01u,0xA64Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01BDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D BD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A648u,3u,0x01u,0xA64Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01BDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A64Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A64Bu,3u,0x04u,0xA64Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0402u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A64Bu,3u,0x04u,0xA64Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0402u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A64Bu,3u,0x04u,0xA64Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0402u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A64Bu,3u,0x04u,0xA64Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0402u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A64Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 A1 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A64Eu,3u,0xA6u,0xA651u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA650u))return 0;c->pc=0xA6A1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A1 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A64Eu,3u,0xA6u,0xA651u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA650u))return 0;c->pc=0xA6A1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A1 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A64Eu,3u,0xA6u,0xA651u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA650u))return 0;c->pc=0xA6A1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A1 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A64Eu,3u,0xA6u,0xA651u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA650u))return 0;c->pc=0xA6A1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A651u:
    if(m==0u&&x==0u&&e==0u){ /* 8D BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A651u,3u,0x01u,0xA654u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A651u,3u,0x01u,0xA654u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01BFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A651u,3u,0x01u,0xA654u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01BFu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D BF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A651u,3u,0x01u,0xA654u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01BFu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A654u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A654u,3u,0xA0u,0xA657u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA656u))return 0;c->pc=0xA02Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2A A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A654u,3u,0xA0u,0xA657u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA656u))return 0;c->pc=0xA02Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 2A A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A654u,3u,0xA0u,0xA657u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA656u))return 0;c->pc=0xA02Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 2A A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A654u,3u,0xA0u,0xA657u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA656u))return 0;c->pc=0xA02Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A657u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A657u,2u,0x20u,0xA659u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A657u,2u,0x20u,0xA659u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A657u,2u,0x20u,0xA659u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A657u,2u,0x20u,0xA659u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A659u:
    if(m==0u&&x==0u&&e==0u){ /* 9C FA 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A659u,3u,0x03u,0xA65Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FAu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C FA 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A659u,3u,0x03u,0xA65Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FAu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A65Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9C FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A65Cu,3u,0x03u,0xA65Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FEu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A65Cu,3u,0x03u,0xA65Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FEu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A65Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A65Fu,1u,0x60u,0xA660u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A65Fu,1u,0x60u,0xA660u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A660u:
    if(m==0u&&x==0u&&e==0u){ /* 20 40 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A660u,3u,0xA6u,0xA663u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA662u))return 0;c->pc=0xA640u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A663u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A663u,2u,0x20u,0xA665u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A663u,2u,0x20u,0xA665u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A663u,2u,0x20u,0xA665u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A663u,2u,0x20u,0xA665u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A665u:
    if(m==0u&&x==0u&&e==0u){ /* AD FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A665u,3u,0x03u,0xA668u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03FEu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A665u,3u,0x03u,0xA668u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03FEu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A668u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A668u,3u,0x00u,0xA66Bu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A668u,3u,0x00u,0xA66Bu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A66Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 C0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A66Bu,3u,0x00u,0xA66Eu);
      sc_v11_op_compare(r,c->a,0x00C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 C0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A66Bu,3u,0x00u,0xA66Eu);
      sc_v11_op_compare(r,c->a,0x00C0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A66Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A66Eu,2u,0x08u,0xA670u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA678u;}
      if(c->pc!=0xA670u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA670u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A66Eu,2u,0x08u,0xA670u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA678u;}
      if(c->pc!=0xA670u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA670u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A670u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A670u,1u,0x08u,0xA671u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A670u,1u,0x08u,0xA671u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A671u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A671u,4u,0x00u,0xA675u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA674u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A671u,4u,0x00u,0xA675u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA674u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A675u:
    if(m==0u&&x==0u&&e==0u){ /* 03 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A675u,2u,0x0Au,0xA677u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x0Au)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A675u,2u,0x0Au,0xA677u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x0Au)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A675u,2u,0x0Au,0xA677u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x0Au)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A675u,2u,0x0Au,0xA677u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x0Au)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A677u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A677u,1u,0x28u,0xA678u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A677u,1u,0x28u,0xA678u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A677u,1u,0x28u,0xA678u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A677u,1u,0x28u,0xA678u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A678u:
    if(m==0u&&x==0u&&e==0u){ /* 9C FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A678u,3u,0x03u,0xA67Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FEu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A678u,3u,0x03u,0xA67Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FEu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A678u,3u,0x03u,0xA67Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x03FEu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A678u,3u,0x03u,0xA67Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x03FEu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A67Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C FA 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A67Bu,3u,0x03u,0xA67Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FAu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C FA 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A67Bu,3u,0x03u,0xA67Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FAu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C FA 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A67Bu,3u,0x03u,0xA67Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x03FAu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C FA 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A67Bu,3u,0x03u,0xA67Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x03FAu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A67Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 0F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A67Eu,3u,0x01u,0xA681u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x010Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 0F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A67Eu,3u,0x01u,0xA681u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x010Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 0F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A67Eu,3u,0x01u,0xA681u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x010Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 0F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A67Eu,3u,0x01u,0xA681u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x010Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A681u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 11 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A681u,3u,0x01u,0xA684u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 11 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A681u,3u,0x01u,0xA684u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 11 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A681u,3u,0x01u,0xA684u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 11 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A681u,3u,0x01u,0xA684u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0111u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A684u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 15 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A684u,3u,0x01u,0xA687u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0115u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C 15 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A684u,3u,0x01u,0xA687u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0115u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C 15 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A684u,3u,0x01u,0xA687u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0115u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 15 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A684u,3u,0x01u,0xA687u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0115u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A687u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A687u,1u,0x60u,0xA688u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A687u,1u,0x60u,0xA688u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A687u,1u,0x60u,0xA688u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A687u,1u,0x60u,0xA688u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A688u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A688u,1u,0x38u,0xA689u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A689u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A689u,3u,0x00u,0xA68Cu);
      sc_v11_op_sbc(r,0x000Fu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A68Cu:
    if(m==0u&&x==0u&&e==0u){ /* 10 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A68Cu,2u,0x0Au,0xA68Eu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xA698u;}
      if(c->pc!=0xA68Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA68Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A68Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A68Eu,3u,0xFFu,0xA691u);
      sc_v11_op_compare(r,c->a,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A691u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A691u,2u,0x0Du,0xA693u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA6A0u;}
      if(c->pc!=0xA693u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA693u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A693u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A693u,3u,0xFFu,0xA696u);
      sc_v11_op_lda(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A696u:
    if(m==0u&&x==0u&&e==0u){ /* 80 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A696u,2u,0x08u,0xA698u);
      if(1){c->pc=0xA6A0u;}
      if(c->pc!=0xA698u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA698u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A698u:
    if(m==0u&&x==0u&&e==0u){ /* C9 5A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A698u,3u,0x00u,0xA69Bu);
      sc_v11_op_compare(r,c->a,0x005Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A69Bu:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A69Bu,2u,0x03u,0xA69Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA6A0u;}
      if(c->pc!=0xA69Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA69Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A69Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 5A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A69Du,3u,0x00u,0xA6A0u);
      sc_v11_op_lda(r,0x005Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6A0u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A0u,1u,0x60u,0xA6A1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6A1u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A1u,1u,0x38u,0xA6A2u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A1u,1u,0x38u,0xA6A2u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A1u,1u,0x38u,0xA6A2u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A1u,1u,0x38u,0xA6A2u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6A2u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A2u,3u,0x00u,0xA6A5u);
      sc_v11_op_sbc(r,0x000Fu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A2u,3u,0x00u,0xA6A5u);
      sc_v11_op_sbc(r,0x000Fu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E9 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A2u,2u,0x0Fu,0xA6A4u);
      sc_v11_op_sbc(r,0x000Fu,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E9 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A2u,2u,0x0Fu,0xA6A4u);
      sc_v11_op_sbc(r,0x000Fu,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6A5u:
    if(m==0u&&x==0u&&e==0u){ /* 10 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A5u,2u,0x0Au,0xA6A7u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xA6B1u;}
      if(c->pc!=0xA6A7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA6A7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 10 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A5u,2u,0x0Au,0xA6A7u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xA6B1u;}
      if(c->pc!=0xA6A7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA6A7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6A7u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A7u,3u,0xFFu,0xA6AAu);
      sc_v11_op_compare(r,c->a,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6A7u,3u,0xFFu,0xA6AAu);
      sc_v11_op_compare(r,c->a,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6AAu:
    if(m==0u&&x==0u&&e==0u){ /* B0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6AAu,2u,0x0Du,0xA6ACu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA6B9u;}
      if(c->pc!=0xA6ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA6ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6AAu,2u,0x0Du,0xA6ACu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA6B9u;}
      if(c->pc!=0xA6ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA6ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6ACu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6ACu,3u,0xFFu,0xA6AFu);
      sc_v11_op_lda(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6ACu,3u,0xFFu,0xA6AFu);
      sc_v11_op_lda(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6AFu:
    if(m==0u&&x==0u&&e==0u){ /* 80 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6AFu,2u,0x08u,0xA6B1u);
      if(1){c->pc=0xA6B9u;}
      if(c->pc!=0xA6B1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA6B1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6AFu,2u,0x08u,0xA6B1u);
      if(1){c->pc=0xA6B9u;}
      if(c->pc!=0xA6B1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA6B1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6B1u:
    if(m==0u&&x==0u&&e==0u){ /* C9 48 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6B1u,3u,0x00u,0xA6B4u);
      sc_v11_op_compare(r,c->a,0x0048u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 48 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6B1u,3u,0x00u,0xA6B4u);
      sc_v11_op_compare(r,c->a,0x0048u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6B4u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6B4u,2u,0x03u,0xA6B6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA6B9u;}
      if(c->pc!=0xA6B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA6B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6B4u,2u,0x03u,0xA6B6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA6B9u;}
      if(c->pc!=0xA6B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA6B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6B6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 48 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6B6u,3u,0x00u,0xA6B9u);
      sc_v11_op_lda(r,0x0048u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 48 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6B6u,3u,0x00u,0xA6B9u);
      sc_v11_op_lda(r,0x0048u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6B9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6B9u,1u,0x60u,0xA6BAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6B9u,1u,0x60u,0xA6BAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6EEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6EEu,2u,0x20u,0xA6F0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6F0u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6F0u,2u,0x00u,0xA6F2u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6F2u:
    if(m==1u&&x==0u&&e==0u){ /* 85 69 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6F2u,2u,0x69u,0xA6F4u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6F4u:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6F4u,2u,0x03u,0xA6F6u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6F6u:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6F6u,2u,0x68u,0xA6F8u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6F8u:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6F8u,2u,0x02u,0xA6FAu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6FAu:
    if(m==1u&&x==0u&&e==0u){ /* 85 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6FAu,2u,0x70u,0xA6FCu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x70u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6FCu:
    if(m==1u&&x==0u&&e==0u){ /* 64 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6FCu,2u,0x6Au,0xA6FEu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A6FEu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A6FEu,2u,0x20u,0xA700u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A700u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A700u,3u,0x00u,0xA703u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A703u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A703u,2u,0x00u,0xA705u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA705u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A705u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A705u,2u,0x20u,0xA707u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A707u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A707u,2u,0x20u,0xA709u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A709u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A709u,2u,0xB3u,0xA70Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A70Bu:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A70Bu,2u,0x7Fu,0xA70Du);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A70Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A70Du,2u,0xB1u,0xA70Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A70Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A70Fu,2u,0x20u,0xA711u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A711u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A711u,3u,0x00u,0xA714u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A714u:
    if(m==0u&&x==0u&&e==0u){ /* 85 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A714u,2u,0xE3u,0xA716u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xE3u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A716u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A716u,3u,0x00u,0xA719u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A719u:
    if(m==0u&&x==0u&&e==0u){ /* 85 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A719u,2u,0xD7u,0xA71Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xD7u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A71Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 9F 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A71Bu,3u,0x8Fu,0xA71Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA71Du))return 0;c->pc=0x8F9Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A71Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 47 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A71Eu,3u,0xA0u,0xA721u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA720u))return 0;c->pc=0xA047u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 47 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A71Eu,3u,0xA0u,0xA721u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA720u))return 0;c->pc=0xA047u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 47 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A71Eu,3u,0xA0u,0xA721u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA720u))return 0;c->pc=0xA047u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 47 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A71Eu,3u,0xA0u,0xA721u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA720u))return 0;c->pc=0xA047u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A721u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A721u,2u,0x20u,0xA723u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A721u,2u,0x20u,0xA723u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A721u,2u,0x20u,0xA723u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A721u,2u,0x20u,0xA723u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A723u:
    if(m==1u&&x==0u&&e==0u){ /* A5 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A723u,2u,0x61u,0xA725u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x61u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A723u,2u,0x61u,0xA725u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x61u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A725u:
    if(m==1u&&x==0u&&e==0u){ /* 09 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A725u,2u,0x08u,0xA727u);
      sc_v11_op_ora(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A725u,2u,0x08u,0xA727u);
      sc_v11_op_ora(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A727u:
    if(m==1u&&x==0u&&e==0u){ /* 85 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A727u,2u,0x61u,0xA729u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x61u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A727u,2u,0x61u,0xA729u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x61u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A729u:
    if(m==1u&&x==0u&&e==0u){ /* 20 6C A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A729u,3u,0xA8u,0xA72Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA72Bu))return 0;c->pc=0xA86Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 6C A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A729u,3u,0xA8u,0xA72Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA72Bu))return 0;c->pc=0xA86Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A72Cu:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A72Cu,1u,0x08u,0xA72Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A72Cu,1u,0x08u,0xA72Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A72Cu,1u,0x08u,0xA72Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A72Cu,1u,0x08u,0xA72Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A72Du:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A72Du,4u,0x00u,0xA731u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA730u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A72Du,4u,0x00u,0xA731u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA730u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A72Du,4u,0x00u,0xA731u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA730u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A72Du,4u,0x00u,0xA731u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA730u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A731u:
    if(m==0u&&x==0u&&e==0u){ /* 02 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A731u,2u,0x0Cu,0xA733u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA733u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A731u,2u,0x0Cu,0xA733u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA733u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A731u,2u,0x0Cu,0xA733u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA733u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A731u,2u,0x0Cu,0xA733u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA733u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A733u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A733u,1u,0x28u,0xA734u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A733u,1u,0x28u,0xA734u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A733u,1u,0x28u,0xA734u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A733u,1u,0x28u,0xA734u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A734u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A734u,2u,0x20u,0xA736u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A734u,2u,0x20u,0xA736u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A734u,2u,0x20u,0xA736u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A734u,2u,0x20u,0xA736u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A736u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A736u,3u,0x00u,0xA739u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A736u,3u,0x00u,0xA739u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A739u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 63 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A739u,3u,0x04u,0xA73Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0463u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 63 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A739u,3u,0x04u,0xA73Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0463u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A73Cu:
    if(m==0u&&x==0u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A73Cu,4u,0x00u,0xA740u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA73Fu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 06 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A73Cu,4u,0x00u,0xA740u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA73Fu))return 0;
      c->pbr=0x00u;c->pc=0x8206u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A740u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A740u,2u,0x20u,0xA742u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A740u,2u,0x20u,0xA742u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A740u,2u,0x20u,0xA742u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A740u,2u,0x20u,0xA742u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A742u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 0C 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A742u,3u,0x42u,0xA745u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Cu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C 0C 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A742u,3u,0x42u,0xA745u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Cu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A745u:
    if(m==1u&&x==0u&&e==0u){ /* 64 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A745u,2u,0xB5u,0xA747u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A745u,2u,0xB5u,0xA747u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A747u:
    if(m==1u&&x==0u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A747u,2u,0x07u,0xA749u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A747u,2u,0x07u,0xA749u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A749u:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A749u,2u,0x68u,0xA74Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A749u,2u,0x68u,0xA74Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A74Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A74Bu,2u,0x20u,0xA74Du);
      sc_v11_op_lda(r,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A74Bu,2u,0x20u,0xA74Du);
      sc_v11_op_lda(r,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A74Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A74Du,2u,0x6Cu,0xA74Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A74Du,2u,0x6Cu,0xA74Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A74Fu:
    if(m==1u&&x==0u&&e==0u){ /* A9 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A74Fu,2u,0x1Fu,0xA751u);
      sc_v11_op_lda(r,0x001Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A74Fu,2u,0x1Fu,0xA751u);
      sc_v11_op_lda(r,0x001Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A751u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A751u,2u,0x6Du,0xA753u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A751u,2u,0x6Du,0xA753u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A753u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A753u,2u,0x0Eu,0xA755u);
      sc_v11_op_lda(r,0x000Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A753u,2u,0x0Eu,0xA755u);
      sc_v11_op_lda(r,0x000Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A755u:
    if(m==1u&&x==0u&&e==0u){ /* 85 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A755u,2u,0x71u,0xA757u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A755u,2u,0x71u,0xA757u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A757u:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A757u,2u,0x03u,0xA759u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A757u,2u,0x03u,0xA759u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A759u:
    if(m==1u&&x==0u&&e==0u){ /* 85 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A759u,2u,0x72u,0xA75Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 72 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A759u,2u,0x72u,0xA75Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A75Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A75Bu,2u,0x30u,0xA75Du);
      sc_v11_op_lda(r,0x0030u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A75Bu,2u,0x30u,0xA75Du);
      sc_v11_op_lda(r,0x0030u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A75Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A75Du,2u,0x6Fu,0xA75Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A75Du,2u,0x6Fu,0xA75Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A75Fu:
    if(m==1u&&x==0u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A75Fu,2u,0x07u,0xA761u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A75Fu,2u,0x07u,0xA761u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A761u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A761u,2u,0x6Au,0xA763u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A761u,2u,0x6Au,0xA763u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A763u:
    if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A763u,2u,0xFFu,0xA765u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A763u,2u,0xFFu,0xA765u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A765u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 9B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A765u,3u,0x01u,0xA768u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x019Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 9B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A765u,3u,0x01u,0xA768u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x019Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A768u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A768u,2u,0x01u,0xA76Au);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A768u,2u,0x01u,0xA76Au);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A76Au:
    if(m==1u&&x==0u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A76Au,3u,0x21u,0xA76Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 26 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A76Au,3u,0x21u,0xA76Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A76Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A76Du,2u,0x00u,0xA76Fu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A76Du,2u,0x00u,0xA76Fu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A76Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 27 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A76Fu,3u,0x21u,0xA772u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 27 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A76Fu,3u,0x21u,0xA772u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A772u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A772u,2u,0x20u,0xA774u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A772u,2u,0x20u,0xA774u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A774u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A774u,2u,0xB3u,0xA776u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A774u,2u,0xB3u,0xA776u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A776u:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A776u,2u,0x80u,0xA778u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A776u,2u,0x80u,0xA778u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A778u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A778u,2u,0xB1u,0xA77Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A778u,2u,0xB1u,0xA77Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A77Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A77Au,2u,0x20u,0xA77Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A77Au,2u,0x20u,0xA77Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A77Au,2u,0x20u,0xA77Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A77Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A77Cu,3u,0x00u,0xA77Fu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A77Cu,3u,0x00u,0xA77Fu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A77Fu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A77Fu,2u,0x00u,0xA781u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA781u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A77Fu,2u,0x00u,0xA781u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA781u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A781u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A781u,2u,0x20u,0xA783u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A781u,2u,0x20u,0xA783u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A783u:
    if(m==1u&&x==0u&&e==0u){ /* A9 E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A783u,2u,0xE7u,0xA785u);
      sc_v11_op_lda(r,0x00E7u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A783u,2u,0xE7u,0xA785u);
      sc_v11_op_lda(r,0x00E7u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A785u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A785u,2u,0x6Eu,0xA787u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A785u,2u,0x6Eu,0xA787u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A787u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A787u,2u,0x30u,0xA789u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A787u,2u,0x30u,0xA789u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A789u:
    if(m==0u&&x==0u&&e==0u){ /* AD 63 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A789u,3u,0x04u,0xA78Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0463u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A78Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A78Cu,3u,0x00u,0xA78Fu);
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A78Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A78Fu,2u,0x0Bu,0xA791u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA79Cu;}
      if(c->pc!=0xA791u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA791u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A791u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A791u,1u,0x0Au,0xA792u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A792u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A792u,1u,0xAAu,0xA793u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A793u:
    if(m==0u&&x==0u&&e==0u){ /* BF BA A6 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A793u,4u,0x01u,0xA797u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01A6BAu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A797u:
    if(m==0u&&x==0u&&e==0u){ /* EE 63 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A797u,3u,0x04u,0xA79Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0463u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A79Au:
    if(m==0u&&x==0u&&e==0u){ /* 80 DE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A79Au,2u,0xDEu,0xA79Cu);
      if(1){c->pc=0xA77Au;}
      if(c->pc!=0xA79Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA79Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A79Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A79Cu,2u,0x20u,0xA79Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A79Cu,2u,0x20u,0xA79Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A79Cu,2u,0x20u,0xA79Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A79Cu,2u,0x20u,0xA79Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A79Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A79Eu,3u,0x00u,0xA7A1u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A79Eu,3u,0x00u,0xA7A1u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7A1u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7A1u,2u,0x00u,0xA7A3u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA7A3u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7A1u,2u,0x00u,0xA7A3u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA7A3u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7A3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7A3u,2u,0x20u,0xA7A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7A3u,2u,0x20u,0xA7A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7A5u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7A5u,3u,0x01u,0xA7A8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7A5u,3u,0x01u,0xA7A8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7A8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7A8u,2u,0x19u,0xA7AAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA7C3u;}
      if(c->pc!=0xA7AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7AAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7A8u,2u,0x19u,0xA7AAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA7C3u;}
      if(c->pc!=0xA7AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7AAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7AAu:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7AAu,2u,0xC9u,0xA7ACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7AAu,2u,0xC9u,0xA7ACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7ACu:
    if(m==0u&&x==0u&&e==0u){ /* 29 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7ACu,3u,0x00u,0xA7AFu);
      sc_v11_op_and(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7ACu,3u,0x00u,0xA7AFu);
      sc_v11_op_and(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7AFu:
    if(m==0u&&x==0u&&e==0u){ /* D0 5C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7AFu,2u,0x5Cu,0xA7B1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA80Du;}
      if(c->pc!=0xA7B1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7B1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 5C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7AFu,2u,0x5Cu,0xA7B1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA80Du;}
      if(c->pc!=0xA7B1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7B1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7B1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7B1u,2u,0xC9u,0xA7B3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7B1u,2u,0xC9u,0xA7B3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7B3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7B3u,3u,0x80u,0xA7B6u);
      sc_v11_op_and(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7B3u,3u,0x80u,0xA7B6u);
      sc_v11_op_and(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7B6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7B6u,2u,0x10u,0xA7B8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA7C8u;}
      if(c->pc!=0xA7B8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7B8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7B6u,2u,0x10u,0xA7B8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA7C8u;}
      if(c->pc!=0xA7B8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7B8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7B8u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7B8u,3u,0x01u,0xA7BBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7B8u,3u,0x01u,0xA7BBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7BBu:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7BBu,3u,0x0Fu,0xA7BEu);
      sc_v11_op_and(r,0x0F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 00 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7BBu,3u,0x0Fu,0xA7BEu);
      sc_v11_op_and(r,0x0F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7BEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7BEu,2u,0x03u,0xA7C0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA7C3u;}
      if(c->pc!=0xA7C0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7C0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7BEu,2u,0x03u,0xA7C0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA7C3u;}
      if(c->pc!=0xA7C0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7C0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7C0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 33 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C0u,3u,0xC0u,0xA7C3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA7C2u))return 0;c->pc=0xC033u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 33 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C0u,3u,0xC0u,0xA7C3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA7C2u))return 0;c->pc=0xC033u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7C3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 26 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C3u,3u,0x8Du,0xA7C6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA7C5u))return 0;c->pc=0x8D26u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 26 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C3u,3u,0x8Du,0xA7C6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA7C5u))return 0;c->pc=0x8D26u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 26 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C3u,3u,0x8Du,0xA7C6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA7C5u))return 0;c->pc=0x8D26u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 26 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C3u,3u,0x8Du,0xA7C6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA7C5u))return 0;c->pc=0x8D26u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7C6u:
    if(m==0u&&x==0u&&e==0u){ /* 80 D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C6u,2u,0xD4u,0xA7C8u);
      if(1){c->pc=0xA79Cu;}
      if(c->pc!=0xA7C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C6u,2u,0xD4u,0xA7C8u);
      if(1){c->pc=0xA79Cu;}
      if(c->pc!=0xA7C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C6u,2u,0xD4u,0xA7C8u);
      if(1){c->pc=0xA79Cu;}
      if(c->pc!=0xA7C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C6u,2u,0xD4u,0xA7C8u);
      if(1){c->pc=0xA79Cu;}
      if(c->pc!=0xA7C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7C8u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C8u,1u,0x08u,0xA7C9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C8u,1u,0x08u,0xA7C9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C8u,1u,0x08u,0xA7C9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7C9u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C9u,4u,0x00u,0xA7CDu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA7CCu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C9u,4u,0x00u,0xA7CDu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA7CCu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7C9u,4u,0x00u,0xA7CDu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xA7CCu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7CDu:
    if(m==0u&&x==0u&&e==0u){ /* 02 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7CDu,2u,0x0Du,0xA7CFu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA7CFu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7CDu,2u,0x0Du,0xA7CFu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA7CFu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7CDu,2u,0x0Du,0xA7CFu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA7CFu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7CDu,2u,0x0Du,0xA7CFu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA7CFu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7CFu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7CFu,1u,0x28u,0xA7D0u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7CFu,1u,0x28u,0xA7D0u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7CFu,1u,0x28u,0xA7D0u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7CFu,1u,0x28u,0xA7D0u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7D0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7D0u,2u,0x20u,0xA7D2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7D0u,2u,0x20u,0xA7D2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7D0u,2u,0x20u,0xA7D2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7D0u,2u,0x20u,0xA7D2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7D2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7D2u,3u,0x00u,0xA7D5u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7D2u,3u,0x00u,0xA7D5u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7D5u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7D5u,2u,0x00u,0xA7D7u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA7D7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7D5u,2u,0x00u,0xA7D7u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA7D7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7D7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7D7u,2u,0x30u,0xA7D9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7D7u,2u,0x30u,0xA7D9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7D9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 63 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7D9u,3u,0x04u,0xA7DCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0463u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7DCu:
    if(m==0u&&x==0u&&e==0u){ /* C9 19 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7DCu,3u,0x00u,0xA7DFu);
      sc_v11_op_compare(r,c->a,0x0019u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7DFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7DFu,2u,0x07u,0xA7E1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA7E8u;}
      if(c->pc!=0xA7E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7E1u:
    if(m==0u&&x==0u&&e==0u){ /* EE 63 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7E1u,3u,0x04u,0xA7E4u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0463u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7E4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7E4u,2u,0x20u,0xA7E6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7E6u:
    if(m==1u&&x==0u&&e==0u){ /* 80 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7E6u,2u,0xE0u,0xA7E8u);
      if(1){c->pc=0xA7C8u;}
      if(c->pc!=0xA7E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7E8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7E8u,2u,0x20u,0xA7EAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7E8u,2u,0x20u,0xA7EAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7E8u,2u,0x20u,0xA7EAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7E8u,2u,0x20u,0xA7EAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7EAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7EAu,3u,0x00u,0xA7EDu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7EAu,3u,0x00u,0xA7EDu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7EDu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7EDu,2u,0x00u,0xA7EFu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA7EFu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7EDu,2u,0x00u,0xA7EFu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xA7EFu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7EFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7EFu,2u,0x20u,0xA7F1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7EFu,2u,0x20u,0xA7F1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7F1u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7F1u,3u,0x01u,0xA7F4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7F1u,3u,0x01u,0xA7F4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7F4u:
    if(m==0u&&x==0u&&e==0u){ /* D0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7F4u,2u,0x12u,0xA7F6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA808u;}
      if(c->pc!=0xA7F6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7F6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7F4u,2u,0x12u,0xA7F6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA808u;}
      if(c->pc!=0xA7F6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7F6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7F6u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7F6u,2u,0xC9u,0xA7F8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7F6u,2u,0xC9u,0xA7F8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7F8u:
    if(m==0u&&x==0u&&e==0u){ /* 29 40 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7F8u,3u,0x80u,0xA7FBu);
      sc_v11_op_and(r,0x8040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 40 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7F8u,3u,0x80u,0xA7FBu);
      sc_v11_op_and(r,0x8040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7FBu:
    if(m==0u&&x==0u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7FBu,2u,0x10u,0xA7FDu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA80Du;}
      if(c->pc!=0xA7FDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7FDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7FBu,2u,0x10u,0xA7FDu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA80Du;}
      if(c->pc!=0xA7FDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7FDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01A7FDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7FDu,3u,0x01u,0xA800u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01A7FDu,3u,0x01u,0xA800u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
