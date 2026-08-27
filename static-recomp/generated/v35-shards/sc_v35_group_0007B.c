/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0007B(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01EC00u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC00u,3u,0xFFu,0xEC03u);
      sc_v11_op_compare(r,c->a,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC00u,3u,0xFFu,0xEC03u);
      sc_v11_op_compare(r,c->a,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC03u:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC03u,2u,0x06u,0xEC05u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEC0Bu;}
      if(c->pc!=0xEC05u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC05u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC03u,2u,0x06u,0xEC05u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEC0Bu;}
      if(c->pc!=0xEC05u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC05u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC05u:
    if(m==0u&&x==0u&&e==0u){ /* 99 C7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC05u,3u,0x02u,0xEC08u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02C7u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 C7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC05u,3u,0x02u,0xEC08u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02C7u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC08u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 8D EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC08u,3u,0xECu,0xEC0Bu);
      c->pc=0xEC8Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 8D EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC08u,3u,0xECu,0xEC0Bu);
      c->pc=0xEC8Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC0Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC0Bu,3u,0xFFu,0xEC0Eu);
      sc_v11_op_compare(r,c->a,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 FE FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC0Bu,3u,0xFFu,0xEC0Eu);
      sc_v11_op_compare(r,c->a,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC0Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC0Eu,2u,0x12u,0xEC10u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEC22u;}
      if(c->pc!=0xEC10u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC10u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC0Eu,2u,0x12u,0xEC10u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEC22u;}
      if(c->pc!=0xEC10u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC10u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC10u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC10u,1u,0xE8u,0xEC11u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC10u,1u,0xE8u,0xEC11u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC11u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC11u,1u,0xE8u,0xEC12u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC11u,1u,0xE8u,0xEC12u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC12u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 8C 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC12u,4u,0x7Eu,0xEC16u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8C00u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 00 8C 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC12u,4u,0x7Eu,0xEC16u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8C00u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC16u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC16u,1u,0xE8u,0xEC17u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC16u,1u,0xE8u,0xEC17u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC17u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC17u,1u,0xE8u,0xEC18u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC17u,1u,0xE8u,0xEC18u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC18u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC18u,1u,0x0Au,0xEC19u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC18u,1u,0x0Au,0xEC19u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC19u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC19u,2u,0x79u,0xEC1Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC19u,2u,0x79u,0xEC1Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC1Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC1Bu,1u,0x8Au,0xEC1Cu);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC1Bu,1u,0x8Au,0xEC1Cu);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC1Cu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC1Cu,1u,0x38u,0xEC1Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC1Cu,1u,0x38u,0xEC1Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC1Du:
    if(m==0u&&x==0u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC1Du,2u,0x79u,0xEC1Fu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC1Du,2u,0x79u,0xEC1Fu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC1Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC1Fu,1u,0x4Au,0xEC20u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC1Fu,1u,0x4Au,0xEC20u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC20u:
    if(m==0u&&x==0u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC20u,2u,0xD5u,0xEC22u);
      if(1){c->pc=0xEBF7u;}
      if(c->pc!=0xEC22u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC22u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC20u,2u,0xD5u,0xEC22u);
      if(1){c->pc=0xEBF7u;}
      if(c->pc!=0xEC22u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC22u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC22u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FD FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC22u,3u,0xFFu,0xEC25u);
      sc_v11_op_compare(r,c->a,0xFFFDu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 FD FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC22u,3u,0xFFu,0xEC25u);
      sc_v11_op_compare(r,c->a,0xFFFDu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC25u:
    if(m==0u&&x==0u&&e==0u){ /* D0 2D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC25u,2u,0x2Du,0xEC27u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEC54u;}
      if(c->pc!=0xEC27u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC27u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 2D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC25u,2u,0x2Du,0xEC27u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEC54u;}
      if(c->pc!=0xEC27u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC27u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC27u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC27u,1u,0xE8u,0xEC28u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC27u,1u,0xE8u,0xEC28u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC28u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC28u,1u,0xE8u,0xEC29u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC28u,1u,0xE8u,0xEC29u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC29u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 8C 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC29u,4u,0x7Eu,0xEC2Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8C00u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 00 8C 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC29u,4u,0x7Eu,0xEC2Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8C00u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC2Du:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC2Du,1u,0xE8u,0xEC2Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC2Du,1u,0xE8u,0xEC2Eu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC2Eu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC2Eu,1u,0xE8u,0xEC2Fu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC2Eu,1u,0xE8u,0xEC2Fu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC2Fu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC2Fu,1u,0x0Au,0xEC30u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC2Fu,1u,0x0Au,0xEC30u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC30u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC30u,2u,0x79u,0xEC32u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC30u,2u,0x79u,0xEC32u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC32u:
    if(m==0u&&x==0u&&e==0u){ /* B9 67 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC32u,3u,0x03u,0xEC35u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0367u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 67 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC32u,3u,0x03u,0xEC35u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0367u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC35u:
    if(m==0u&&x==0u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC35u,2u,0x07u,0xEC37u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEC3Eu;}
      if(c->pc!=0xEC37u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC37u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC35u,2u,0x07u,0xEC37u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEC3Eu;}
      if(c->pc!=0xEC37u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC37u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC37u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 8C 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC37u,4u,0x7Eu,0xEC3Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8C00u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 00 8C 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC37u,4u,0x7Eu,0xEC3Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8C00u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC3Bu:
    if(m==0u&&x==0u&&e==0u){ /* 99 67 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC3Bu,3u,0x03u,0xEC3Eu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0367u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 67 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC3Bu,3u,0x03u,0xEC3Eu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0367u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC3Eu:
    if(m==0u&&x==0u&&e==0u){ /* B9 67 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC3Eu,3u,0x03u,0xEC41u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0367u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 67 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC3Eu,3u,0x03u,0xEC41u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0367u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC41u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC41u,1u,0x3Au,0xEC42u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC41u,1u,0x3Au,0xEC42u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC42u:
    if(m==0u&&x==0u&&e==0u){ /* 99 67 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC42u,3u,0x03u,0xEC45u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0367u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 67 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC42u,3u,0x03u,0xEC45u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0367u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC45u:
    if(m==0u&&x==0u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC45u,2u,0x07u,0xEC47u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEC4Eu;}
      if(c->pc!=0xEC47u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC47u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC45u,2u,0x07u,0xEC47u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEC4Eu;}
      if(c->pc!=0xEC47u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC47u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC47u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC47u,1u,0x8Au,0xEC48u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC47u,1u,0x8Au,0xEC48u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC48u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC48u,1u,0x38u,0xEC49u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC48u,1u,0x38u,0xEC49u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC49u:
    if(m==0u&&x==0u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC49u,2u,0x79u,0xEC4Bu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E5 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC49u,2u,0x79u,0xEC4Bu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC4Bu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC4Bu,1u,0x4Au,0xEC4Cu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC4Bu,1u,0x4Au,0xEC4Cu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC4Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC4Cu,2u,0xA9u,0xEC4Eu);
      if(1){c->pc=0xEBF7u;}
      if(c->pc!=0xEC4Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC4Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC4Cu,2u,0xA9u,0xEC4Eu);
      if(1){c->pc=0xEBF7u;}
      if(c->pc!=0xEC4Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC4Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC4Eu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC4Eu,1u,0xE8u,0xEC4Fu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC4Eu,1u,0xE8u,0xEC4Fu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC4Fu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC4Fu,1u,0xE8u,0xEC50u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC4Fu,1u,0xE8u,0xEC50u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC50u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC50u,1u,0x8Au,0xEC51u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC50u,1u,0x8Au,0xEC51u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC51u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC51u,1u,0x4Au,0xEC52u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC51u,1u,0x4Au,0xEC52u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC52u:
    if(m==0u&&x==0u&&e==0u){ /* 80 A3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC52u,2u,0xA3u,0xEC54u);
      if(1){c->pc=0xEBF7u;}
      if(c->pc!=0xEC54u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC54u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 A3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC52u,2u,0xA3u,0xEC54u);
      if(1){c->pc=0xEBF7u;}
      if(c->pc!=0xEC54u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC54u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC54u:
    if(m==0u&&x==0u&&e==0u){ /* 99 07 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC54u,3u,0x03u,0xEC57u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0307u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 07 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC54u,3u,0x03u,0xEC57u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0307u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC57u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 88 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC57u,4u,0x7Eu,0xEC5Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8800u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 00 88 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC57u,4u,0x7Eu,0xEC5Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7E8800u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC5Bu:
    if(m==0u&&x==0u&&e==0u){ /* 99 F7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC5Bu,3u,0x02u,0xEC5Eu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02F7u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 F7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC5Bu,3u,0x02u,0xEC5Eu);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x02F7u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC5Eu:
    if(m==0u&&x==0u&&e==0u){ /* B9 07 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC5Eu,3u,0x03u,0xEC61u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0307u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 07 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC5Eu,3u,0x03u,0xEC61u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0307u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC61u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC61u,1u,0x3Au,0xEC62u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC61u,1u,0x3Au,0xEC62u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC62u:
    if(m==0u&&x==0u&&e==0u){ /* 99 07 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC62u,3u,0x03u,0xEC65u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0307u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 99 07 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC62u,3u,0x03u,0xEC65u);
      sc_v11_bus_write16(r,sc_v11_ea_absy(r,0x0307u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC65u:
    if(m==0u&&x==0u&&e==0u){ /* B9 F7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC65u,3u,0x02u,0xEC68u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x02F7u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 F7 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC65u,3u,0x02u,0xEC68u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x02F7u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC68u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC68u,3u,0x02u,0xEC6Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC68u,3u,0x02u,0xEC6Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC6Bu:
    if(m==0u&&x==0u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC6Bu,1u,0x98u,0xEC6Cu);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC6Bu,1u,0x98u,0xEC6Cu);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC6Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC6Cu,2u,0x05u,0xEC6Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEC73u;}
      if(c->pc!=0xEC6Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC6Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC6Cu,2u,0x05u,0xEC6Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEC73u;}
      if(c->pc!=0xEC6Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC6Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC6Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC6Eu,3u,0x00u,0xEC71u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC6Eu,3u,0x00u,0xEC71u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC71u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC71u,2u,0x03u,0xEC73u);
      if(1){c->pc=0xEC76u;}
      if(c->pc!=0xEC73u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC73u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC71u,2u,0x03u,0xEC73u);
      if(1){c->pc=0xEC76u;}
      if(c->pc!=0xEC73u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC73u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC73u:
    if(m==0u&&x==0u&&e==0u){ /* A9 F0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC73u,3u,0x00u,0xEC76u);
      sc_v11_op_lda(r,0x00F0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 F0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC73u,3u,0x00u,0xEC76u);
      sc_v11_op_lda(r,0x00F0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC76u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC76u,3u,0x02u,0xEC79u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC76u,3u,0x02u,0xEC79u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC79u:
    if(m==0u&&x==0u&&e==0u){ /* B9 37 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC79u,3u,0x03u,0xEC7Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0337u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 37 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC79u,3u,0x03u,0xEC7Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0337u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC7Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC7Cu,3u,0x02u,0xEC7Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC7Cu,3u,0x02u,0xEC7Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC7Fu:
    if(m==0u&&x==0u&&e==0u){ /* B9 47 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC7Fu,3u,0x03u,0xEC82u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0347u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 47 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC7Fu,3u,0x03u,0xEC82u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0347u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC82u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC82u,3u,0x02u,0xEC85u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC82u,3u,0x02u,0xEC85u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC85u:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC85u,1u,0x5Au,0xEC86u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC85u,1u,0x5Au,0xEC86u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC86u:
    if(m==0u&&x==0u&&e==0u){ /* 22 58 90 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC86u,4u,0x00u,0xEC8Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xEC89u))return 0;
      c->pbr=0x00u;c->pc=0x9058u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 58 90 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC86u,4u,0x00u,0xEC8Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xEC89u))return 0;
      c->pbr=0x00u;c->pc=0x9058u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC8Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC8Au,2u,0x30u,0xEC8Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC8Au,2u,0x30u,0xEC8Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC8Au,2u,0x30u,0xEC8Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC8Au,2u,0x30u,0xEC8Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC8Cu:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC8Cu,1u,0x7Au,0xEC8Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC8Du:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC8Du,1u,0x88u,0xEC8Eu);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC8Du,1u,0x88u,0xEC8Eu);
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC8Eu:
    if(m==0u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC8Eu,1u,0x88u,0xEC8Fu);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC8Eu,1u,0x88u,0xEC8Fu);
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC8Fu,2u,0x03u,0xEC91u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEC94u;}
      if(c->pc!=0xEC91u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC91u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC8Fu,2u,0x03u,0xEC91u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xEC94u;}
      if(c->pc!=0xEC91u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEC91u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC91u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 37 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC91u,3u,0xEBu,0xEC94u);
      c->pc=0xEB37u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 37 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC91u,3u,0xEBu,0xEC94u);
      c->pc=0xEB37u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EC94u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC94u,1u,0x60u,0xEC95u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EC94u,1u,0x60u,0xEC95u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECA3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECA3u,2u,0x30u,0xECA5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECA5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECA5u,3u,0x03u,0xECA8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x039Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECA8u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECA8u,1u,0x0Au,0xECA9u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECA9u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECA9u,1u,0xAAu,0xECAAu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECAAu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECAAu,1u,0x48u,0xECABu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECABu:
    if(m==0u&&x==0u&&e==0u){ /* BF 3B BF 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECABu,4u,0x02u,0xECAFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02BF3Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECAFu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECAFu,1u,0x48u,0xECB0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECB0u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECB0u,3u,0x84u,0xECB3u);
      sc_v11_op_ldy(r,0x8400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECB3u:
    if(m==0u&&x==0u&&e==0u){ /* BF AB BF 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECB3u,4u,0x02u,0xECB7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02BFABu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECB7u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECB7u,1u,0x3Au,0xECB8u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECB8u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECB8u,1u,0xFAu,0xECB9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECB9u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECB9u,3u,0x02u,0xECBCu);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x02u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xECB9u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECBCu:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECBCu,3u,0x00u,0xECBFu);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECBFu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECBFu,1u,0xABu,0xECC0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECC0u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECC0u,1u,0xABu,0xECC1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECC1u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECC1u,1u,0xFAu,0xECC2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECC2u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECC2u,1u,0xDAu,0xECC3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECC3u:
    if(m==0u&&x==0u&&e==0u){ /* BF 57 BF 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECC3u,4u,0x02u,0xECC7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02BF57u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECC7u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECC7u,1u,0x48u,0xECC8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECC8u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECC8u,3u,0x80u,0xECCBu);
      sc_v11_op_ldy(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECCBu:
    if(m==0u&&x==0u&&e==0u){ /* BF C7 BF 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECCBu,4u,0x02u,0xECCFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02BFC7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECCFu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECCFu,1u,0x3Au,0xECD0u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECD0u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECD0u,1u,0xFAu,0xECD1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECD1u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECD1u,3u,0x02u,0xECD4u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x02u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xECD1u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECD4u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECD4u,3u,0x00u,0xECD7u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECD7u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECD7u,1u,0xABu,0xECD8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECD8u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECD8u,1u,0xABu,0xECD9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECD9u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECD9u,1u,0xFAu,0xECDAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECDAu:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECDAu,1u,0xDAu,0xECDBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECDBu:
    if(m==0u&&x==0u&&e==0u){ /* BF 03 BF 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECDBu,4u,0x02u,0xECDFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02BF03u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECDFu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECDFu,1u,0x48u,0xECE0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECE0u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECE0u,3u,0x88u,0xECE3u);
      sc_v11_op_ldy(r,0x8800u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECE3u:
    if(m==0u&&x==0u&&e==0u){ /* BF 73 BF 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECE3u,4u,0x02u,0xECE7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02BF73u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECE7u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECE7u,1u,0x3Au,0xECE8u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECE8u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECE8u,1u,0xFAu,0xECE9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECE9u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECE9u,3u,0x02u,0xECECu);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x02u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xECE9u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECECu:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECECu,3u,0x00u,0xECEFu);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECEFu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECEFu,1u,0xABu,0xECF0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECF0u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECF0u,1u,0xABu,0xECF1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECF1u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECF1u,1u,0xFAu,0xECF2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECF2u:
    if(m==0u&&x==0u&&e==0u){ /* BF 1F BF 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECF2u,4u,0x02u,0xECF6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02BF1Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECF6u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECF6u,1u,0x48u,0xECF7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECF7u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECF7u,3u,0x8Cu,0xECFAu);
      sc_v11_op_ldy(r,0x8C00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECFAu:
    if(m==0u&&x==0u&&e==0u){ /* BF 8F BF 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECFAu,4u,0x02u,0xECFEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02BF8Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECFEu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECFEu,1u,0x3Au,0xECFFu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ECFFu:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ECFFu,1u,0xFAu,0xED00u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED00u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED00u,3u,0x02u,0xED03u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x02u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xED00u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED03u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED03u,3u,0x00u,0xED06u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED06u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED06u,1u,0xABu,0xED07u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED07u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED07u,1u,0xABu,0xED08u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED08u:
    if(m==0u&&x==0u&&e==0u){ /* AE 9F 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED08u,3u,0x03u,0xED0Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x039Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED0Bu:
    if(m==0u&&x==0u&&e==0u){ /* BF 95 EC 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED0Bu,4u,0x01u,0xED0Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01EC95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED0Fu,3u,0x00u,0xED12u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED12u:
    if(m==0u&&x==0u&&e==0u){ /* F0 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED12u,2u,0x61u,0xED14u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xED75u;}
      if(c->pc!=0xED14u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xED14u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED14u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED14u,1u,0x3Au,0xED15u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED15u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED15u,1u,0x0Au,0xED16u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED16u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED16u,1u,0xAAu,0xED17u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED17u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED17u,1u,0x48u,0xED18u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED18u:
    if(m==0u&&x==0u&&e==0u){ /* BF CD CA 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED18u,4u,0x02u,0xED1Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02CACDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED1Cu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED1Cu,1u,0x48u,0xED1Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED1Du:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED1Du,3u,0x86u,0xED20u);
      sc_v11_op_ldy(r,0x8600u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED20u:
    if(m==0u&&x==0u&&e==0u){ /* BF 05 CB 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED20u,4u,0x02u,0xED24u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02CB05u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED24u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED24u,1u,0x3Au,0xED25u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED25u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED25u,1u,0xFAu,0xED26u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED26u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED26u,3u,0x02u,0xED29u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x02u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xED26u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED29u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED29u,3u,0x00u,0xED2Cu);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED2Cu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED2Cu,1u,0xABu,0xED2Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED2Du:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED2Du,1u,0xABu,0xED2Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED2Eu:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED2Eu,1u,0xFAu,0xED2Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED2Fu:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED2Fu,1u,0xDAu,0xED30u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED30u:
    if(m==0u&&x==0u&&e==0u){ /* BF DB CA 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED30u,4u,0x02u,0xED34u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02CADBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED34u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED34u,1u,0x48u,0xED35u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED35u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED35u,3u,0x82u,0xED38u);
      sc_v11_op_ldy(r,0x8200u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED38u:
    if(m==0u&&x==0u&&e==0u){ /* BF 13 CB 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED38u,4u,0x02u,0xED3Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02CB13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED3Cu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED3Cu,1u,0x3Au,0xED3Du);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED3Du:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED3Du,1u,0xFAu,0xED3Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED3Eu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED3Eu,3u,0x02u,0xED41u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x02u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xED3Eu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED41u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED41u,3u,0x00u,0xED44u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED44u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED44u,1u,0xABu,0xED45u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED45u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED45u,1u,0xABu,0xED46u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED46u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED46u,1u,0xFAu,0xED47u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED47u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED47u,1u,0xDAu,0xED48u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED48u:
    if(m==0u&&x==0u&&e==0u){ /* BF B1 CA 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED48u,4u,0x02u,0xED4Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02CAB1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED4Cu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED4Cu,1u,0x48u,0xED4Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED4Du:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED4Du,3u,0x8Au,0xED50u);
      sc_v11_op_ldy(r,0x8A00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED50u:
    if(m==0u&&x==0u&&e==0u){ /* BF E9 CA 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED50u,4u,0x02u,0xED54u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02CAE9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED54u:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED54u,1u,0x3Au,0xED55u);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED55u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED55u,1u,0xFAu,0xED56u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED56u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED56u,3u,0x02u,0xED59u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x02u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xED56u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED59u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED59u,3u,0x00u,0xED5Cu);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED5Cu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED5Cu,1u,0xABu,0xED5Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED5Du:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED5Du,1u,0xABu,0xED5Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED5Eu:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED5Eu,1u,0xFAu,0xED5Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED5Fu:
    if(m==0u&&x==0u&&e==0u){ /* BF BF CA 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED5Fu,4u,0x02u,0xED63u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02CABFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED63u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED63u,1u,0x48u,0xED64u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED64u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED64u,3u,0x8Eu,0xED67u);
      sc_v11_op_ldy(r,0x8E00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED67u:
    if(m==0u&&x==0u&&e==0u){ /* BF F7 CA 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED67u,4u,0x02u,0xED6Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x02CAF7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED6Bu:
    if(m==0u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED6Bu,1u,0x3Au,0xED6Cu);
      sc_v11_op_incdec_accumulator(r,16u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED6Cu:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED6Cu,1u,0xFAu,0xED6Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED6Du:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED6Du,3u,0x02u,0xED70u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x02u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xED6Du;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED70u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED70u,3u,0x00u,0xED73u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED73u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED73u,1u,0xABu,0xED74u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED74u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED74u,1u,0xABu,0xED75u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01ED75u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01ED75u,1u,0x60u,0xED76u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EECFu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EECFu,2u,0x20u,0xEED1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EECFu,2u,0x20u,0xEED1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EECFu,2u,0x20u,0xEED1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EED1u:

    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EED1u,2u,0x10u,0xEED3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEDBu:
    if(m==1u&&x==0u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEDBu,1u,0x3Au,0xEEDCu);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEDCu:
    if(m==1u&&x==0u&&e==0u){ /* 8D F8 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEDCu,3u,0x01u,0xEEDFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01F8u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEDFu:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEDFu,2u,0x03u,0xEEE1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEEE4u;}
      if(c->pc!=0xEEE1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEEE1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEE1u:
    if(m==1u&&x==0u&&e==0u){ /* 9C F7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEE1u,3u,0x01u,0xEEE4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01F7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEE5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEE5u,2u,0x10u,0xEEE7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEE5u,2u,0x10u,0xEEE7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEE5u,2u,0x10u,0xEEE7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEE5u,2u,0x10u,0xEEE7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEE7u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEE7u,3u,0x00u,0xEEEAu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEE7u,3u,0x00u,0xEEEAu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEEAu:
    if(m==0u&&x==0u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEEAu,2u,0x05u,0xEEECu);
      if(1){c->pc=0xEEF1u;}
      if(c->pc!=0xEEECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEEECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEEAu,2u,0x05u,0xEEECu);
      if(1){c->pc=0xEEF1u;}
      if(c->pc!=0xEEECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEEECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEECu:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEECu,2u,0x10u,0xEEEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEECu,2u,0x10u,0xEEEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEECu,2u,0x10u,0xEEEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEECu,2u,0x10u,0xEEEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEEEu:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEEEu,3u,0x00u,0xEEF1u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEEEu,3u,0x00u,0xEEF1u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEF1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEF1u,2u,0x20u,0xEEF3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEF1u,2u,0x20u,0xEEF3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEF3u:
    if(m==0u&&x==0u&&e==0u){ /* A2 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEF3u,3u,0x00u,0xEEF6u);
      sc_v11_op_ldx(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEF6u:
    if(m==0u&&x==0u&&e==0u){ /* BD 8B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEF6u,3u,0x0Au,0xEEF9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A8Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BD 8B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEF6u,3u,0x0Au,0xEEF9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A8Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEF9u:
    if(m==0u&&x==0u&&e==0u){ /* F0 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEF9u,2u,0x42u,0xEEFBu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF3Du;}
      if(c->pc!=0xEEFBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEEFBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEF9u,2u,0x42u,0xEEFBu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF3Du;}
      if(c->pc!=0xEEFBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEEFBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEFBu:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEFBu,1u,0xDAu,0xEEFCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEFBu,1u,0xDAu,0xEEFCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEFCu:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEFCu,1u,0x5Au,0xEEFDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEFCu,1u,0x5Au,0xEEFDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EEFDu:
    if(m==0u&&x==0u&&e==0u){ /* BF B2 EE 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEFDu,4u,0x01u,0xEF01u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01EEB2u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF B2 EE 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EEFDu,4u,0x01u,0xEF01u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01EEB2u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF01u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF01u,1u,0xAAu,0xEF02u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF01u,1u,0xAAu,0xEF02u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF02u:
    if(m==0u&&x==0u&&e==0u){ /* C0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF02u,3u,0x00u,0xEF05u);
      sc_v11_op_compare(r,c->y,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF02u,3u,0x00u,0xEF05u);
      sc_v11_op_compare(r,c->y,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF05u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF05u,2u,0x01u,0xEF07u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEF08u;}
      if(c->pc!=0xEF07u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF07u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF05u,2u,0x01u,0xEF07u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEF08u;}
      if(c->pc!=0xEF07u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF07u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF07u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF07u,1u,0xE8u,0xEF08u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF07u,1u,0xE8u,0xEF08u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF08u:
    if(m==0u&&x==0u&&e==0u){ /* A0 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF08u,3u,0x00u,0xEF0Bu);
      sc_v11_op_ldy(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF08u,3u,0x00u,0xEF0Bu);
      sc_v11_op_ldy(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF0Bu:
    if(m==0u&&x==0u&&e==0u){ /* E0 D4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF0Bu,3u,0x01u,0xEF0Eu);
      sc_v11_op_compare(r,c->x,0x01D4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 D4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF0Bu,3u,0x01u,0xEF0Eu);
      sc_v11_op_compare(r,c->x,0x01D4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF0Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF0Eu,2u,0x14u,0xEF10u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF24u;}
      if(c->pc!=0xEF10u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF10u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF0Eu,2u,0x14u,0xEF10u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF24u;}
      if(c->pc!=0xEF10u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF10u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF10u:
    if(m==0u&&x==0u&&e==0u){ /* E0 D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF10u,3u,0x01u,0xEF13u);
      sc_v11_op_compare(r,c->x,0x01D5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF10u,3u,0x01u,0xEF13u);
      sc_v11_op_compare(r,c->x,0x01D5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF13u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF13u,2u,0x0Fu,0xEF15u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF24u;}
      if(c->pc!=0xEF15u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF15u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF13u,2u,0x0Fu,0xEF15u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF24u;}
      if(c->pc!=0xEF15u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF15u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF15u:
    if(m==0u&&x==0u&&e==0u){ /* E0 EC 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF15u,3u,0x01u,0xEF18u);
      sc_v11_op_compare(r,c->x,0x01ECu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 EC 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF15u,3u,0x01u,0xEF18u);
      sc_v11_op_compare(r,c->x,0x01ECu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF18u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF18u,2u,0x05u,0xEF1Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF1Fu;}
      if(c->pc!=0xEF1Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF1Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF18u,2u,0x05u,0xEF1Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF1Fu;}
      if(c->pc!=0xEF1Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF1Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF1Au:
    if(m==0u&&x==0u&&e==0u){ /* E0 ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF1Au,3u,0x01u,0xEF1Du);
      sc_v11_op_compare(r,c->x,0x01EDu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF1Au,3u,0x01u,0xEF1Du);
      sc_v11_op_compare(r,c->x,0x01EDu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF1Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF1Du,2u,0x08u,0xEF1Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEF27u;}
      if(c->pc!=0xEF1Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF1Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF1Du,2u,0x08u,0xEF1Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEF27u;}
      if(c->pc!=0xEF1Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF1Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF1Fu:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF1Fu,3u,0x00u,0xEF22u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF1Fu,3u,0x00u,0xEF22u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF22u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF22u,2u,0x03u,0xEF24u);
      if(1){c->pc=0xEF27u;}
      if(c->pc!=0xEF24u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF24u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF22u,2u,0x03u,0xEF24u);
      if(1){c->pc=0xEF27u;}
      if(c->pc!=0xEF24u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF24u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF24u:
    if(m==0u&&x==0u&&e==0u){ /* A0 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF24u,3u,0x00u,0xEF27u);
      sc_v11_op_ldy(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF24u,3u,0x00u,0xEF27u);
      sc_v11_op_ldy(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF27u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF27u,2u,0x20u,0xEF29u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF27u,2u,0x20u,0xEF29u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF29u:
    if(m==1u&&x==0u&&e==0u){ /* BF 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF29u,4u,0x7Eu,0xEF2Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2000u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF2Du:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF2Du,1u,0x18u,0xEF2Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF2Eu:
    if(m==1u&&x==0u&&e==0u){ /* 69 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF2Eu,2u,0x02u,0xEF30u);
      sc_v11_op_adc(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF30u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF30u,4u,0x7Eu,0xEF34u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF34u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF34u,1u,0xE8u,0xEF35u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF35u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF35u,1u,0xE8u,0xEF36u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF36u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF36u,1u,0xE8u,0xEF37u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF37u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF37u,1u,0xE8u,0xEF38u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF38u:
    if(m==1u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF38u,1u,0x88u,0xEF39u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF39u:
    if(m==1u&&x==0u&&e==0u){ /* D0 EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF39u,2u,0xECu,0xEF3Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEF27u;}
      if(c->pc!=0xEF3Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF3Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF3Bu:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF3Bu,1u,0x7Au,0xEF3Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF3Cu:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF3Cu,1u,0xFAu,0xEF3Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF3Du:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF3Du,1u,0xCAu,0xEF3Eu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF3Du,1u,0xCAu,0xEF3Eu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF3Eu:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF3Eu,1u,0xCAu,0xEF3Fu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF3Eu,1u,0xCAu,0xEF3Fu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 10 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF3Fu,2u,0xB5u,0xEF41u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xEEF6u;}
      if(c->pc!=0xEF41u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF41u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 10 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF3Fu,2u,0xB5u,0xEF41u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xEEF6u;}
      if(c->pc!=0xEF41u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF41u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF41u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF41u,1u,0x60u,0xEF42u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF41u,1u,0x60u,0xEF42u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF42u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF42u,2u,0x10u,0xEF44u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF42u,2u,0x10u,0xEF44u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF42u,2u,0x10u,0xEF44u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF42u,2u,0x10u,0xEF44u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF44u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF44u,3u,0x00u,0xEF47u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF44u,3u,0x00u,0xEF47u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF47u:
    if(m==0u&&x==0u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF47u,2u,0x05u,0xEF49u);
      if(1){c->pc=0xEF4Eu;}
      if(c->pc!=0xEF49u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF49u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF47u,2u,0x05u,0xEF49u);
      if(1){c->pc=0xEF4Eu;}
      if(c->pc!=0xEF49u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF49u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF49u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF49u,2u,0x10u,0xEF4Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF49u,2u,0x10u,0xEF4Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF49u,2u,0x10u,0xEF4Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF49u,2u,0x10u,0xEF4Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF4Bu:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF4Bu,3u,0x00u,0xEF4Eu);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF4Bu,3u,0x00u,0xEF4Eu);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF4Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF4Eu,2u,0x30u,0xEF50u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF4Eu,2u,0x30u,0xEF50u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF50u:
    if(m==0u&&x==0u&&e==0u){ /* A2 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF50u,3u,0x00u,0xEF53u);
      sc_v11_op_ldx(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF53u:
    if(m==0u&&x==0u&&e==0u){ /* BD 8B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF53u,3u,0x0Au,0xEF56u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0A8Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BD 8B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF53u,3u,0x0Au,0xEF56u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0A8Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF56u:
    if(m==0u&&x==0u&&e==0u){ /* F0 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF56u,2u,0x42u,0xEF58u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF9Au;}
      if(c->pc!=0xEF58u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF58u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF56u,2u,0x42u,0xEF58u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF9Au;}
      if(c->pc!=0xEF58u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF58u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF58u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF58u,1u,0xDAu,0xEF59u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF58u,1u,0xDAu,0xEF59u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF59u:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF59u,1u,0x5Au,0xEF5Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF59u,1u,0x5Au,0xEF5Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF5Au:
    if(m==0u&&x==0u&&e==0u){ /* BF B2 EE 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF5Au,4u,0x01u,0xEF5Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01EEB2u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF B2 EE 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF5Au,4u,0x01u,0xEF5Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x01EEB2u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF5Eu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF5Eu,1u,0xAAu,0xEF5Fu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF5Eu,1u,0xAAu,0xEF5Fu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF5Fu:
    if(m==0u&&x==0u&&e==0u){ /* C0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF5Fu,3u,0x00u,0xEF62u);
      sc_v11_op_compare(r,c->y,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF5Fu,3u,0x00u,0xEF62u);
      sc_v11_op_compare(r,c->y,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF62u:
    if(m==0u&&x==0u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF62u,2u,0x01u,0xEF64u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEF65u;}
      if(c->pc!=0xEF64u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF64u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF62u,2u,0x01u,0xEF64u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEF65u;}
      if(c->pc!=0xEF64u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF64u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF64u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF64u,1u,0xE8u,0xEF65u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF64u,1u,0xE8u,0xEF65u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF65u:
    if(m==0u&&x==0u&&e==0u){ /* A0 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF65u,3u,0x00u,0xEF68u);
      sc_v11_op_ldy(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF65u,3u,0x00u,0xEF68u);
      sc_v11_op_ldy(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF68u:
    if(m==0u&&x==0u&&e==0u){ /* E0 D4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF68u,3u,0x01u,0xEF6Bu);
      sc_v11_op_compare(r,c->x,0x01D4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 D4 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF68u,3u,0x01u,0xEF6Bu);
      sc_v11_op_compare(r,c->x,0x01D4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF6Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF6Bu,2u,0x14u,0xEF6Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF81u;}
      if(c->pc!=0xEF6Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF6Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF6Bu,2u,0x14u,0xEF6Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF81u;}
      if(c->pc!=0xEF6Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF6Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF6Du:
    if(m==0u&&x==0u&&e==0u){ /* E0 D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF6Du,3u,0x01u,0xEF70u);
      sc_v11_op_compare(r,c->x,0x01D5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 D5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF6Du,3u,0x01u,0xEF70u);
      sc_v11_op_compare(r,c->x,0x01D5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF70u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF70u,2u,0x0Fu,0xEF72u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF81u;}
      if(c->pc!=0xEF72u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF72u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF70u,2u,0x0Fu,0xEF72u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF81u;}
      if(c->pc!=0xEF72u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF72u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF72u:
    if(m==0u&&x==0u&&e==0u){ /* E0 EC 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF72u,3u,0x01u,0xEF75u);
      sc_v11_op_compare(r,c->x,0x01ECu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 EC 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF72u,3u,0x01u,0xEF75u);
      sc_v11_op_compare(r,c->x,0x01ECu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF75u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF75u,2u,0x05u,0xEF77u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF7Cu;}
      if(c->pc!=0xEF77u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF77u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF75u,2u,0x05u,0xEF77u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xEF7Cu;}
      if(c->pc!=0xEF77u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF77u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF77u:
    if(m==0u&&x==0u&&e==0u){ /* E0 ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF77u,3u,0x01u,0xEF7Au);
      sc_v11_op_compare(r,c->x,0x01EDu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 ED 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF77u,3u,0x01u,0xEF7Au);
      sc_v11_op_compare(r,c->x,0x01EDu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF7Au:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF7Au,2u,0x08u,0xEF7Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEF84u;}
      if(c->pc!=0xEF7Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF7Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF7Au,2u,0x08u,0xEF7Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEF84u;}
      if(c->pc!=0xEF7Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF7Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF7Cu:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF7Cu,3u,0x00u,0xEF7Fu);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF7Cu,3u,0x00u,0xEF7Fu);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF7Fu,2u,0x03u,0xEF81u);
      if(1){c->pc=0xEF84u;}
      if(c->pc!=0xEF81u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF81u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF7Fu,2u,0x03u,0xEF81u);
      if(1){c->pc=0xEF84u;}
      if(c->pc!=0xEF81u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF81u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF81u:
    if(m==0u&&x==0u&&e==0u){ /* A0 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF81u,3u,0x00u,0xEF84u);
      sc_v11_op_ldy(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF81u,3u,0x00u,0xEF84u);
      sc_v11_op_ldy(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF84u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF84u,2u,0x20u,0xEF86u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF84u,2u,0x20u,0xEF86u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF86u:
    if(m==1u&&x==0u&&e==0u){ /* BF 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF86u,4u,0x7Eu,0xEF8Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2000u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF8Au:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF8Au,1u,0x38u,0xEF8Bu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF8Bu:
    if(m==1u&&x==0u&&e==0u){ /* E9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF8Bu,2u,0x02u,0xEF8Du);
      sc_v11_op_sbc(r,0x0002u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF8Du:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 20 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF8Du,4u,0x7Eu,0xEF91u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2000u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF91u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF91u,1u,0xE8u,0xEF92u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF92u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF92u,1u,0xE8u,0xEF93u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF93u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF93u,1u,0xE8u,0xEF94u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF94u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF94u,1u,0xE8u,0xEF95u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF95u:
    if(m==1u&&x==0u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF95u,1u,0x88u,0xEF96u);
      c->y=(uint16_t)((c->y-1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF96u:
    if(m==1u&&x==0u&&e==0u){ /* D0 EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF96u,2u,0xECu,0xEF98u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xEF84u;}
      if(c->pc!=0xEF98u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF98u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF98u:
    if(m==1u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF98u,1u,0x7Au,0xEF99u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF99u:
    if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF99u,1u,0xFAu,0xEF9Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF9Au:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF9Au,1u,0xCAu,0xEF9Bu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF9Au,1u,0xCAu,0xEF9Bu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF9Bu:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF9Bu,1u,0xCAu,0xEF9Cu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF9Bu,1u,0xCAu,0xEF9Cu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF9Cu:
    if(m==0u&&x==0u&&e==0u){ /* 10 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF9Cu,2u,0xB5u,0xEF9Eu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xEF53u;}
      if(c->pc!=0xEF9Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF9Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 10 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF9Cu,2u,0xB5u,0xEF9Eu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xEF53u;}
      if(c->pc!=0xEF9Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xEF9Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF9Eu,1u,0x60u,0xEF9Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF9Eu,1u,0x60u,0xEF9Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EF9Fu:

    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EF9Fu,2u,0x30u,0xEFA1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFA9u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFA9u,3u,0x00u,0xEFACu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFACu:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFACu,3u,0x00u,0xEFAFu);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFAFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFAFu,2u,0x79u,0xEFB1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFB1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 17 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFB1u,3u,0x2Fu,0xEFB4u);
      sc_v11_op_lda(r,0x2F17u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFB4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFB4u,3u,0xF0u,0xEFB7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xEFB6u))return 0;c->pc=0xF04Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFB7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 27 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFB7u,3u,0x2Fu,0xEFBAu);
      sc_v11_op_lda(r,0x2F27u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 27 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFB7u,3u,0x2Fu,0xEFBAu);
      sc_v11_op_lda(r,0x2F27u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFB7u,2u,0x27u,0xEFB9u);
      sc_v11_op_lda(r,0x0027u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFB7u,2u,0x27u,0xEFB9u);
      sc_v11_op_lda(r,0x0027u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFB9u:
    if(m==1u&&x==0u&&e==0u){ /* 2F 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFB9u,4u,0xF0u,0xEFBDu);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_long(0xF04D20u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2F 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFB9u,4u,0xF0u,0xEFBDu);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_long(0xF04D20u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFBAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFBAu,3u,0xF0u,0xEFBDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xEFBCu))return 0;c->pc=0xF04Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFBAu,3u,0xF0u,0xEFBDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xEFBCu))return 0;c->pc=0xF04Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFBDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 E5 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFBDu,3u,0x2Fu,0xEFC0u);
      sc_v11_op_lda(r,0x2FE5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 E5 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFBDu,3u,0x2Fu,0xEFC0u);
      sc_v11_op_lda(r,0x2FE5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 E5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFBDu,2u,0xE5u,0xEFBFu);
      sc_v11_op_lda(r,0x00E5u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 E5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFBDu,2u,0xE5u,0xEFBFu);
      sc_v11_op_lda(r,0x00E5u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFBFu:
    if(m==1u&&x==0u&&e==0u){ /* 2F 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFBFu,4u,0xF0u,0xEFC3u);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_long(0xF04D20u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2F 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFBFu,4u,0xF0u,0xEFC3u);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_long(0xF04D20u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFC0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC0u,3u,0xF0u,0xEFC3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xEFC2u))return 0;c->pc=0xF04Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC0u,3u,0xF0u,0xEFC3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xEFC2u))return 0;c->pc=0xF04Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFC3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 F5 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC3u,3u,0x2Fu,0xEFC6u);
      sc_v11_op_lda(r,0x2FF5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 F5 2F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC3u,3u,0x2Fu,0xEFC6u);
      sc_v11_op_lda(r,0x2FF5u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC3u,2u,0xF5u,0xEFC5u);
      sc_v11_op_lda(r,0x00F5u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 F5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC3u,2u,0xF5u,0xEFC5u);
      sc_v11_op_lda(r,0x00F5u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFC5u:
    if(m==1u&&x==0u&&e==0u){ /* 2F 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC5u,4u,0xF0u,0xEFC9u);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_long(0xF04D20u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2F 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC5u,4u,0xF0u,0xEFC9u);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_long(0xF04D20u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFC6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC6u,3u,0xF0u,0xEFC9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xEFC8u))return 0;c->pc=0xF04Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 4D F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC6u,3u,0xF0u,0xEFC9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xEFC8u))return 0;c->pc=0xF04Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFC9u:
    if(m==0u&&x==0u&&e==0u){ /* A0 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC9u,3u,0x00u,0xEFCCu);
      sc_v11_op_ldy(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC9u,2u,0x0Fu,0xEFCBu);
      sc_v11_op_ldy(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC9u,3u,0x00u,0xEFCCu);
      sc_v11_op_ldy(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFC9u,2u,0x0Fu,0xEFCBu);
      sc_v11_op_ldy(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFCCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 18 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFCCu,3u,0x1Fu,0xEFCFu);
      sc_v11_op_lda(r,0x1F18u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFCCu,2u,0x18u,0xEFCEu);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFCEu:
    if(m==1u&&x==0u&&e==0u){ /* 1F 20 38 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFCEu,4u,0xF0u,0xEFD2u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0xF03820u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFCFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 38 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFCFu,3u,0xF0u,0xEFD2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xEFD1u))return 0;c->pc=0xF038u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFD2u:
    if(m==0u&&x==0u&&e==0u){ /* A0 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFD2u,3u,0x00u,0xEFD5u);
      sc_v11_op_ldy(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFD2u,2u,0x0Fu,0xEFD4u);
      sc_v11_op_ldy(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFD2u,3u,0x00u,0xEFD5u);
      sc_v11_op_ldy(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFD2u,2u,0x0Fu,0xEFD4u);
      sc_v11_op_ldy(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFD5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 F8 CF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFD5u,3u,0xCFu,0xEFD8u);
      sc_v11_op_lda(r,0xCFF8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFD5u,2u,0xF8u,0xEFD7u);
      sc_v11_op_lda(r,0x00F8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFD7u:
    if(m==1u&&x==0u&&e==0u){ /* CF 20 38 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFD7u,4u,0xF0u,0xEFDBu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_long(0xF03820u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFD8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 38 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFD8u,3u,0xF0u,0xEFDBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xEFDAu))return 0;c->pc=0xF038u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFDBu:
    if(m==0u&&x==0u&&e==0u){ /* A2 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFDBu,3u,0x00u,0xEFDEu);
      sc_v11_op_ldx(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFDBu,2u,0x02u,0xEFDDu);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFDBu,3u,0x00u,0xEFDEu);
      sc_v11_op_ldx(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFDBu,2u,0x02u,0xEFDDu);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFDEu:
    if(m==0u&&x==0u&&e==0u){ /* 64 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFDEu,2u,0x79u,0xEFE0u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 64 79 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFDEu,2u,0x79u,0xEFE0u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x79u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFE0u:
    if(m==0u&&x==0u&&e==0u){ /* A0 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFE0u,3u,0x00u,0xEFE3u);
      sc_v11_op_ldy(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFE0u,3u,0x00u,0xEFE3u);
      sc_v11_op_ldy(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFE3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 A8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFE3u,3u,0x00u,0xEFE6u);
      sc_v11_op_lda(r,0x00A8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFE3u,2u,0xA8u,0xEFE5u);
      sc_v11_op_lda(r,0x00A8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFE6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 38 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFE6u,3u,0xF0u,0xEFE9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xEFE8u))return 0;c->pc=0xF038u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFE9u:
    if(m==0u&&x==0u&&e==0u){ /* A0 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFE9u,3u,0x00u,0xEFECu);
      sc_v11_op_ldy(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFE9u,2u,0x0Au,0xEFEBu);
      sc_v11_op_ldy(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFE9u,3u,0x00u,0xEFECu);
      sc_v11_op_ldy(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFE9u,2u,0x0Au,0xEFEBu);
      sc_v11_op_ldy(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFECu:
    if(m==0u&&x==0u&&e==0u){ /* A9 AA 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFECu,3u,0x00u,0xEFEFu);
      sc_v11_op_lda(r,0x00AAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFECu,2u,0xAAu,0xEFEEu);
      sc_v11_op_lda(r,0x00AAu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFEFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 38 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFEFu,3u,0xF0u,0xEFF2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xEFF1u))return 0;c->pc=0xF038u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFF2u:
    if(m==0u&&x==0u&&e==0u){ /* A0 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFF2u,3u,0x00u,0xEFF5u);
      sc_v11_op_ldy(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFF2u,2u,0x0Au,0xEFF4u);
      sc_v11_op_ldy(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFF2u,3u,0x00u,0xEFF5u);
      sc_v11_op_ldy(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFF2u,2u,0x0Au,0xEFF4u);
      sc_v11_op_ldy(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFF5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 AC 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFF5u,3u,0x00u,0xEFF8u);
      sc_v11_op_lda(r,0x00ACu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 AC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFF5u,2u,0xACu,0xEFF7u);
      sc_v11_op_lda(r,0x00ACu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFF8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 38 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFF8u,3u,0xF0u,0xEFFBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xEFFAu))return 0;c->pc=0xF038u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFFBu:
    if(m==0u&&x==0u&&e==0u){ /* A0 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFFBu,3u,0x00u,0xEFFEu);
      sc_v11_op_ldy(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFFBu,2u,0x0Au,0xEFFDu);
      sc_v11_op_ldy(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFFBu,3u,0x00u,0xEFFEu);
      sc_v11_op_ldy(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFFBu,2u,0x0Au,0xEFFDu);
      sc_v11_op_ldy(r,0x000Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01EFFEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 A8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFFEu,3u,0x00u,0xF001u);
      sc_v11_op_lda(r,0x00A8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x01EFFEu,2u,0xA8u,0xF000u);
      sc_v11_op_lda(r,0x00A8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
