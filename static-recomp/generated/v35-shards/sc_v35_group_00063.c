/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00063(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x018C01u:
    if(m==0u&&x==1u&&e==0u){ /* F0 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C01u,2u,0x31u,0x8C03u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C34u;}
      if(c->pc!=0x8C03u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C03u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C03u:
    if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C03u,2u,0xC9u,0x8C05u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C05u:
    if(m==0u&&x==1u&&e==0u){ /* 89 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C05u,3u,0x80u,0x8C08u);
      {uint16_t z=(uint16_t)((c->a&0xFFFFu)&0x8000u);if(z)c->p&=(uint8_t)~SC_FLAG_Z;else c->p|=SC_FLAG_Z;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C08u:
    if(m==0u&&x==1u&&e==0u){ /* D0 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C08u,2u,0x25u,0x8C0Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8C2Fu;}
      if(c->pc!=0x8C0Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C0Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C0Au:
    if(m==0u&&x==1u&&e==0u){ /* AD F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C0Au,3u,0x01u,0x8C0Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C0Du:
    if(m==0u&&x==1u&&e==0u){ /* 0D FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C0Du,3u,0x01u,0x8C10u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C10u:
    if(m==0u&&x==1u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C10u,2u,0x10u,0x8C12u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C22u;}
      if(c->pc!=0x8C12u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C12u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C12u:
    if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C12u,3u,0x01u,0x8C15u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C15u:
    if(m==0u&&x==1u&&e==0u){ /* 89 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C15u,3u,0x80u,0x8C18u);
      {uint16_t z=(uint16_t)((c->a&0xFFFFu)&0x8000u);if(z)c->p&=(uint8_t)~SC_FLAG_Z;else c->p|=SC_FLAG_Z;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C18u:
    if(m==0u&&x==1u&&e==0u){ /* F0 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C18u,2u,0x1Au,0x8C1Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C34u;}
      if(c->pc!=0x8C1Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C1Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C1Au:
    if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C1Au,3u,0x00u,0x8C1Du);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C1Du:
    if(m==0u&&x==1u&&e==0u){ /* 8D 3B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C1Du,3u,0x02u,0x8C20u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C20u:
    if(m==0u&&x==1u&&e==0u){ /* 80 2D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C20u,2u,0x2Du,0x8C22u);
      if(1){c->pc=0x8C4Fu;}
      if(c->pc!=0x8C22u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C22u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C22u:
    if(m==0u&&x==1u&&e==0u){ /* AD 3B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C22u,3u,0x02u,0x8C25u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x023Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C25u:
    if(m==0u&&x==1u&&e==0u){ /* F0 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C25u,2u,0x28u,0x8C27u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C4Fu;}
      if(c->pc!=0x8C27u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C27u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C27u:
    if(m==0u&&x==1u&&e==0u){ /* AD 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C27u,3u,0x02u,0x8C2Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C2Au:
    if(m==0u&&x==1u&&e==0u){ /* C9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C2Au,3u,0x00u,0x8C2Du);
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C2Du:
    if(m==0u&&x==1u&&e==0u){ /* B0 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C2Du,2u,0x20u,0x8C2Fu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8C4Fu;}
      if(c->pc!=0x8C2Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C2Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C2Fu:
    if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C2Fu,3u,0x00u,0x8C32u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C32u:
    if(m==0u&&x==1u&&e==0u){ /* 80 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C32u,2u,0x1Eu,0x8C34u);
      if(1){c->pc=0x8C52u;}
      if(c->pc!=0x8C34u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C34u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C34u:
    if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C34u,2u,0xC9u,0x8C36u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C36u:
    if(m==0u&&x==1u&&e==0u){ /* 89 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C36u,3u,0x80u,0x8C39u);
      {uint16_t z=(uint16_t)((c->a&0xFFFFu)&0x8000u);if(z)c->p&=(uint8_t)~SC_FLAG_Z;else c->p|=SC_FLAG_Z;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C39u:
    if(m==0u&&x==1u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C39u,2u,0x14u,0x8C3Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C4Fu;}
      if(c->pc!=0x8C3Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C3Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C3Bu:
    if(m==0u&&x==1u&&e==0u){ /* 20 A6 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C3Bu,3u,0x8Cu,0x8C3Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C3Du))return 0;c->pc=0x8CA6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C3Eu:
    if(m==0u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C3Eu,2u,0x05u,0x8C40u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8C45u;}
      if(c->pc!=0x8C40u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C40u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C3Eu,2u,0x05u,0x8C40u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8C45u;}
      if(c->pc!=0x8C40u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C40u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C3Eu,2u,0x05u,0x8C40u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8C45u;}
      if(c->pc!=0x8C40u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C40u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C40u:
    if(m==0u&&x==1u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C40u,3u,0x00u,0x8C43u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C40u,2u,0x04u,0x8C42u);
      sc_v11_op_lda(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C40u,2u,0x04u,0x8C42u);
      sc_v11_op_lda(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C43u:
    if(m==0u&&x==1u&&e==0u){ /* 80 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C43u,2u,0x0Du,0x8C45u);
      if(1){c->pc=0x8C52u;}
      if(c->pc!=0x8C45u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C45u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C45u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C45u,3u,0x00u,0x8C48u);
      sc_v11_op_compare(r,c->a,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C45u,3u,0x00u,0x8C48u);
      sc_v11_op_compare(r,c->a,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C45u,2u,0x00u,0x8C47u);
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C45u,2u,0x00u,0x8C47u);
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C48u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C48u,2u,0x05u,0x8C4Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C4Fu;}
      if(c->pc!=0x8C4Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C4Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C48u,2u,0x05u,0x8C4Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C4Fu;}
      if(c->pc!=0x8C4Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C4Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C4Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C4Au,3u,0x00u,0x8C4Du);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C4Au,3u,0x00u,0x8C4Du);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C4Du:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C4Du,2u,0x03u,0x8C4Fu);
      if(1){c->pc=0x8C52u;}
      if(c->pc!=0x8C4Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C4Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C4Du,2u,0x03u,0x8C4Fu);
      if(1){c->pc=0x8C52u;}
      if(c->pc!=0x8C4Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C4Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C4Fu:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C4Fu,3u,0x00u,0x8C52u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C52u:

    if(m==0u&&x==1u&&e==0u){ /* 85 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C52u,2u,0xC5u,0x8C54u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC5u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C54u:

    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C54u,1u,0x60u,0x8C55u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C55u:
    if(m==0u&&x==0u&&e==0u){ /* 9C FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C55u,3u,0x03u,0x8C58u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FEu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C55u,3u,0x03u,0x8C58u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x03FEu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C58u:
    if(m==0u&&x==0u&&e==0u){ /* 9C D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C58u,3u,0x01u,0x8C5Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C58u,3u,0x01u,0x8C5Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C5Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD C3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C5Bu,3u,0x0Du,0x8C5Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD C3 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C5Bu,3u,0x0Du,0x8C5Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DC3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C5Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C5Eu,2u,0x08u,0x8C60u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C68u;}
      if(c->pc!=0x8C60u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C60u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C5Eu,2u,0x08u,0x8C60u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C68u;}
      if(c->pc!=0x8C60u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C60u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C60u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C60u,3u,0x00u,0x8C63u);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C60u,3u,0x00u,0x8C63u);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C63u:
    if(m==0u&&x==0u&&e==0u){ /* 8D CB 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C63u,3u,0x0Bu,0x8C66u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BCBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D CB 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C63u,3u,0x0Bu,0x8C66u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BCBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C66u:
    if(m==0u&&x==0u&&e==0u){ /* 80 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C66u,2u,0x24u,0x8C68u);
      if(1){c->pc=0x8C8Cu;}
      if(c->pc!=0x8C68u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C68u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C66u,2u,0x24u,0x8C68u);
      if(1){c->pc=0x8C8Cu;}
      if(c->pc!=0x8C68u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C68u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C68u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C68u,3u,0x01u,0x8C6Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C68u,3u,0x01u,0x8C6Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C6Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 80 4F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C6Bu,3u,0x4Fu,0x8C6Eu);
      sc_v11_op_and(r,0x4F80u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 80 4F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C6Bu,3u,0x4Fu,0x8C6Eu);
      sc_v11_op_and(r,0x4F80u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C6Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C6Eu,2u,0x05u,0x8C70u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C75u;}
      if(c->pc!=0x8C70u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C70u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C6Eu,2u,0x05u,0x8C70u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C75u;}
      if(c->pc!=0x8C70u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C70u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C70u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C70u,3u,0x00u,0x8C73u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C70u,3u,0x00u,0x8C73u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C73u:
    if(m==0u&&x==0u&&e==0u){ /* 80 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C73u,2u,0x17u,0x8C75u);
      if(1){c->pc=0x8C8Cu;}
      if(c->pc!=0x8C75u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C75u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C73u,2u,0x17u,0x8C75u);
      if(1){c->pc=0x8C8Cu;}
      if(c->pc!=0x8C75u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C75u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C75u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C75u,2u,0xC9u,0x8C77u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C75u,2u,0xC9u,0x8C77u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C77u:
    if(m==0u&&x==0u&&e==0u){ /* 29 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C77u,3u,0x00u,0x8C7Au);
      sc_v11_op_and(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C77u,3u,0x00u,0x8C7Au);
      sc_v11_op_and(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C7Au:
    if(m==0u&&x==0u&&e==0u){ /* F0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C7Au,2u,0x0Du,0x8C7Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C89u;}
      if(c->pc!=0x8C7Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C7Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C7Au,2u,0x0Du,0x8C7Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C89u;}
      if(c->pc!=0x8C7Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C7Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C7Cu:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C7Cu,1u,0x08u,0x8C7Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C7Cu,1u,0x08u,0x8C7Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C7Du:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C7Du,4u,0x00u,0x8C81u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8C80u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C7Du,4u,0x00u,0x8C81u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8C80u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C81u:
    if(m==0u&&x==0u&&e==0u){ /* 02 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C81u,2u,0x07u,0x8C83u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8C83u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C81u,2u,0x07u,0x8C83u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8C83u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C81u,2u,0x07u,0x8C83u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8C83u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C81u,2u,0x07u,0x8C83u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8C83u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C83u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C83u,1u,0x28u,0x8C84u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C83u,1u,0x28u,0x8C84u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C83u,1u,0x28u,0x8C84u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C83u,1u,0x28u,0x8C84u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C84u:
    if(m==0u&&x==0u&&e==0u){ /* A9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C84u,3u,0x00u,0x8C87u);
      sc_v11_op_lda(r,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C84u,3u,0x00u,0x8C87u);
      sc_v11_op_lda(r,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C84u,2u,0x06u,0x8C86u);
      sc_v11_op_lda(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C84u,2u,0x06u,0x8C86u);
      sc_v11_op_lda(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C87u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C87u,2u,0x03u,0x8C89u);
      if(1){c->pc=0x8C8Cu;}
      if(c->pc!=0x8C89u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C89u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C87u,2u,0x03u,0x8C89u);
      if(1){c->pc=0x8C8Cu;}
      if(c->pc!=0x8C89u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C89u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C89u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C89u,3u,0x00u,0x8C8Cu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C89u,3u,0x00u,0x8C8Cu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C8Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C8Cu,2u,0xC5u,0x8C8Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC5u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C8Cu,2u,0xC5u,0x8C8Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC5u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C8Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C8Eu,1u,0x60u,0x8C8Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C8Eu,1u,0x60u,0x8C8Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C8Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C8Fu,2u,0x20u,0x8C91u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C8Fu,2u,0x20u,0x8C91u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C91u:
    if(m==0u&&x==0u&&e==0u){ /* AD FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C91u,3u,0x03u,0x8C94u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03FEu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C91u,3u,0x03u,0x8C94u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03FEu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C94u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C94u,2u,0x0Du,0x8C96u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8CA3u;}
      if(c->pc!=0x8C96u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C96u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C94u,2u,0x0Du,0x8C96u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8CA3u;}
      if(c->pc!=0x8C96u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C96u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C96u:
    if(m==0u&&x==0u&&e==0u){ /* AD 95 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C96u,3u,0x01u,0x8C99u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0195u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 95 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C96u,3u,0x01u,0x8C99u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0195u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C99u:
    if(m==0u&&x==0u&&e==0u){ /* 29 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C99u,3u,0x00u,0x8C9Cu);
      sc_v11_op_and(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C99u,3u,0x00u,0x8C9Cu);
      sc_v11_op_and(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C9Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C9Cu,2u,0x05u,0x8C9Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8CA3u;}
      if(c->pc!=0x8C9Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C9Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C9Cu,2u,0x05u,0x8C9Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8CA3u;}
      if(c->pc!=0x8C9Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C9Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C9Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C9Eu,3u,0x00u,0x8CA1u);
      sc_v11_op_lda(r,0x0009u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018C9Eu,3u,0x00u,0x8CA1u);
      sc_v11_op_lda(r,0x0009u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CA1u:
    if(m==0u&&x==0u&&e==0u){ /* 80 AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CA1u,2u,0xAFu,0x8CA3u);
      if(1){c->pc=0x8C52u;}
      if(c->pc!=0x8CA3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CA3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CA1u,2u,0xAFu,0x8CA3u);
      if(1){c->pc=0x8C52u;}
      if(c->pc!=0x8CA3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CA3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CA3u:
    if(m==0u&&x==0u&&e==0u){ /* 64 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CA3u,2u,0xC5u,0x8CA5u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 C5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CA3u,2u,0xC5u,0x8CA5u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CA5u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CA5u,1u,0x60u,0x8CA6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CA5u,1u,0x60u,0x8CA6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CA6u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CA6u,2u,0x30u,0x8CA8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CB5u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CB5u,3u,0x01u,0x8CB8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CB8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CB8u,3u,0x00u,0x8CBBu);
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CBBu:
    if(m==0u&&x==0u&&e==0u){ /* 90 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CBBu,2u,0x1Eu,0x8CBDu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8CDBu;}
      if(c->pc!=0x8CBDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CBDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CBDu:
    if(m==0u&&x==0u&&e==0u){ /* C9 8F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CBDu,3u,0x00u,0x8CC0u);
      sc_v11_op_compare(r,c->a,0x008Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CC0u:
    if(m==0u&&x==0u&&e==0u){ /* B0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CC0u,2u,0x19u,0x8CC2u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8CDBu;}
      if(c->pc!=0x8CC2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CC2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CC2u:
    if(m==0u&&x==0u&&e==0u){ /* 90 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CC2u,2u,0x1Cu,0x8CC4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8CE0u;}
      if(c->pc!=0x8CC4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CC4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CDBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CDBu,3u,0x00u,0x8CDEu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CDBu,3u,0x00u,0x8CDEu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CDBu,2u,0x00u,0x8CDDu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CDBu,2u,0x00u,0x8CDDu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CDEu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CDEu,1u,0x18u,0x8CDFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CDEu,1u,0x18u,0x8CDFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CDFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CDFu,1u,0x60u,0x8CE0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CDFu,1u,0x60u,0x8CE0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CE0u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CE0u,1u,0x38u,0x8CE1u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CE1u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CE1u,3u,0x00u,0x8CE4u);
      sc_v11_op_sbc(r,0x000Fu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CE4u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CE4u,1u,0x4Au,0x8CE5u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CE5u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CE5u,1u,0x4Au,0x8CE6u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CE6u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CE6u,1u,0x4Au,0x8CE7u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CE7u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CE7u,1u,0x4Au,0x8CE8u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CE8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D DF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CE8u,3u,0x01u,0x8CEBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01DFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CEBu:
    if(m==0u&&x==0u&&e==0u){ /* C9 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CEBu,3u,0x00u,0x8CEEu);
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CEEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CEEu,2u,0x0Fu,0x8CF0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8CFFu;}
      if(c->pc!=0x8CF0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CF0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CF0u:
    if(m==0u&&x==0u&&e==0u){ /* AD FA 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CF0u,3u,0x03u,0x8CF3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03FAu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CF3u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CF3u,2u,0x0Au,0x8CF5u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8CFFu;}
      if(c->pc!=0x8CF5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CF5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CF5u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CF5u,1u,0x08u,0x8CF6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CF6u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CF6u,4u,0x00u,0x8CFAu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8CF9u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CFAu:
    if(m==0u&&x==0u&&e==0u){ /* 02 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFAu,2u,0x02u,0x8CFCu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8CFCu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFAu,2u,0x02u,0x8CFCu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8CFCu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFAu,2u,0x02u,0x8CFCu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8CFCu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFAu,2u,0x02u,0x8CFCu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8CFCu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CFCu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFCu,1u,0x28u,0x8CFDu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFCu,1u,0x28u,0x8CFDu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFCu,1u,0x28u,0x8CFDu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFCu,1u,0x28u,0x8CFDu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CFDu:
    if(m==0u&&x==0u&&e==0u){ /* 80 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFDu,2u,0xDCu,0x8CFFu);
      if(1){c->pc=0x8CDBu;}
      if(c->pc!=0x8CFFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CFFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFDu,2u,0xDCu,0x8CFFu);
      if(1){c->pc=0x8CDBu;}
      if(c->pc!=0x8CFFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CFFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFDu,2u,0xDCu,0x8CFFu);
      if(1){c->pc=0x8CDBu;}
      if(c->pc!=0x8CFFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CFFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFDu,2u,0xDCu,0x8CFFu);
      if(1){c->pc=0x8CDBu;}
      if(c->pc!=0x8CFFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CFFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CFFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018CFFu,3u,0x00u,0x8D02u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D02u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D02u,1u,0x18u,0x8D03u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D03u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D03u,1u,0x60u,0x8D04u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D25u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D25u,1u,0x60u,0x8D26u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D26u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D26u,2u,0x20u,0x8D28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D26u,2u,0x20u,0x8D28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D26u,2u,0x20u,0x8D28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D26u,2u,0x20u,0x8D28u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D28u:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D28u,3u,0x01u,0x8D2Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD F5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D28u,3u,0x01u,0x8D2Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D2Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D2Bu,2u,0x01u,0x8D2Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8D2Eu;}
      if(c->pc!=0x8D2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D2Bu,2u,0x01u,0x8D2Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8D2Eu;}
      if(c->pc!=0x8D2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D2Du:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D2Du,1u,0x60u,0x8D2Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D2Du,1u,0x60u,0x8D2Eu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D2Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 A8 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D2Eu,3u,0x8Au,0x8D31u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D30u))return 0;c->pc=0x8AA8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 A8 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D2Eu,3u,0x8Au,0x8D31u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D30u))return 0;c->pc=0x8AA8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D31u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D31u,3u,0x01u,0x8D34u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D31u,3u,0x01u,0x8D34u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D31u,3u,0x01u,0x8D34u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01C1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D31u,3u,0x01u,0x8D34u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01C1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D34u:
    if(m==0u&&x==0u&&e==0u){ /* D0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D34u,2u,0x5Du,0x8D36u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8D93u;}
      if(c->pc!=0x8D36u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D36u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D34u,2u,0x5Du,0x8D36u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8D93u;}
      if(c->pc!=0x8D36u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D36u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D34u,2u,0x5Du,0x8D36u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8D93u;}
      if(c->pc!=0x8D36u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D36u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D34u,2u,0x5Du,0x8D36u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8D93u;}
      if(c->pc!=0x8D36u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D36u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D36u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D36u,3u,0x01u,0x8D39u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D36u,3u,0x01u,0x8D39u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D36u,3u,0x01u,0x8D39u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x011Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D36u,3u,0x01u,0x8D39u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x011Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D39u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D39u,2u,0x20u,0x8D3Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D39u,2u,0x20u,0x8D3Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D39u,2u,0x20u,0x8D3Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D39u,2u,0x20u,0x8D3Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D3Bu:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D3Bu,1u,0xEBu,0x8D3Cu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D3Bu,1u,0xEBu,0x8D3Cu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D3Cu:
    if(m==1u&&x==0u&&e==0u){ /* 29 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D3Cu,2u,0x0Fu,0x8D3Eu);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D3Cu,2u,0x0Fu,0x8D3Eu);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D3Eu:
    if(m==1u&&x==0u&&e==0u){ /* F0 50 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D3Eu,2u,0x50u,0x8D40u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8D90u;}
      if(c->pc!=0x8D40u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D40u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 50 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D3Eu,2u,0x50u,0x8D40u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8D90u;}
      if(c->pc!=0x8D40u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D40u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D40u:
    if(m==1u&&x==0u&&e==0u){ /* 8D C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D40u,3u,0x01u,0x8D43u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01C1u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D40u,3u,0x01u,0x8D43u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01C1u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D43u:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D43u,1u,0x0Au,0x8D44u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D43u,1u,0x0Au,0x8D44u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D44u:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D44u,1u,0x0Au,0x8D45u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D44u,1u,0x0Au,0x8D45u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D45u:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D45u,1u,0x0Au,0x8D46u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D45u,1u,0x0Au,0x8D46u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D46u:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D46u,1u,0x0Au,0x8D47u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D46u,1u,0x0Au,0x8D47u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D47u:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D47u,1u,0x0Au,0x8D48u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D47u,1u,0x0Au,0x8D48u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D48u:
    if(m==1u&&x==0u&&e==0u){ /* 90 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D48u,2u,0x0Du,0x8D4Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D57u;}
      if(c->pc!=0x8D4Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D4Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D48u,2u,0x0Du,0x8D4Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D57u;}
      if(c->pc!=0x8D4Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D4Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D4Au:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D4Au,1u,0x48u,0x8D4Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D4Au,1u,0x48u,0x8D4Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D4Bu:
    if(m==1u&&x==0u&&e==0u){ /* 20 F9 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D4Bu,3u,0xB2u,0x8D4Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D4Du))return 0;c->pc=0xB2F9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F9 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D4Bu,3u,0xB2u,0x8D4Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D4Du))return 0;c->pc=0xB2F9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D4Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D4Eu,2u,0x20u,0x8D50u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D4Eu,2u,0x20u,0x8D50u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D4Eu,2u,0x20u,0x8D50u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D4Eu,2u,0x20u,0x8D50u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D50u:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D50u,2u,0xBBu,0x8D52u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D50u,2u,0xBBu,0x8D52u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D52u:
    if(m==1u&&x==0u&&e==0u){ /* 09 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D52u,2u,0x0Cu,0x8D54u);
      sc_v11_op_ora(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D52u,2u,0x0Cu,0x8D54u);
      sc_v11_op_ora(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D54u:
    if(m==1u&&x==0u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D54u,2u,0xBBu,0x8D56u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D54u,2u,0xBBu,0x8D56u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D56u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D56u,1u,0x68u,0x8D57u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D56u,1u,0x68u,0x8D57u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D57u:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D57u,1u,0x0Au,0x8D58u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D57u,1u,0x0Au,0x8D58u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D58u:
    if(m==1u&&x==0u&&e==0u){ /* 90 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D58u,2u,0x0Du,0x8D5Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D67u;}
      if(c->pc!=0x8D5Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D5Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D58u,2u,0x0Du,0x8D5Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D67u;}
      if(c->pc!=0x8D5Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D5Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D5Au:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D5Au,1u,0x48u,0x8D5Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D5Au,1u,0x48u,0x8D5Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D5Bu:
    if(m==1u&&x==0u&&e==0u){ /* 20 F6 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D5Bu,3u,0xB1u,0x8D5Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D5Du))return 0;c->pc=0xB1F6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F6 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D5Bu,3u,0xB1u,0x8D5Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D5Du))return 0;c->pc=0xB1F6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D5Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D5Eu,2u,0x20u,0x8D60u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D5Eu,2u,0x20u,0x8D60u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D5Eu,2u,0x20u,0x8D60u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D5Eu,2u,0x20u,0x8D60u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D60u:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D60u,2u,0xBBu,0x8D62u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D60u,2u,0xBBu,0x8D62u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D62u:
    if(m==1u&&x==0u&&e==0u){ /* 09 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D62u,2u,0x0Cu,0x8D64u);
      sc_v11_op_ora(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D62u,2u,0x0Cu,0x8D64u);
      sc_v11_op_ora(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D64u:
    if(m==1u&&x==0u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D64u,2u,0xBBu,0x8D66u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D64u,2u,0xBBu,0x8D66u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D66u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D66u,1u,0x68u,0x8D67u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D66u,1u,0x68u,0x8D67u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D67u:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D67u,1u,0x0Au,0x8D68u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D67u,1u,0x0Au,0x8D68u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D68u:
    if(m==1u&&x==0u&&e==0u){ /* 90 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D68u,2u,0x0Du,0x8D6Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D77u;}
      if(c->pc!=0x8D6Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D6Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D68u,2u,0x0Du,0x8D6Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D77u;}
      if(c->pc!=0x8D6Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D6Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D6Au:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D6Au,1u,0x48u,0x8D6Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D6Au,1u,0x48u,0x8D6Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D6Bu:
    if(m==1u&&x==0u&&e==0u){ /* 20 66 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D6Bu,3u,0xB1u,0x8D6Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D6Du))return 0;c->pc=0xB166u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 66 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D6Bu,3u,0xB1u,0x8D6Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D6Du))return 0;c->pc=0xB166u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D6Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D6Eu,2u,0x20u,0x8D70u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D6Eu,2u,0x20u,0x8D70u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D6Eu,2u,0x20u,0x8D70u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D6Eu,2u,0x20u,0x8D70u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D70u:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D70u,2u,0xBBu,0x8D72u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D70u,2u,0xBBu,0x8D72u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D72u:
    if(m==1u&&x==0u&&e==0u){ /* 09 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D72u,2u,0x0Cu,0x8D74u);
      sc_v11_op_ora(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D72u,2u,0x0Cu,0x8D74u);
      sc_v11_op_ora(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D74u:
    if(m==1u&&x==0u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D74u,2u,0xBBu,0x8D76u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D74u,2u,0xBBu,0x8D76u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D76u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D76u,1u,0x68u,0x8D77u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D76u,1u,0x68u,0x8D77u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D77u:
    if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D77u,1u,0x0Au,0x8D78u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D77u,1u,0x0Au,0x8D78u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D78u:
    if(m==1u&&x==0u&&e==0u){ /* 90 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D78u,2u,0x0Du,0x8D7Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D87u;}
      if(c->pc!=0x8D7Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D7Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D78u,2u,0x0Du,0x8D7Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D87u;}
      if(c->pc!=0x8D7Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D7Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D7Au:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D7Au,1u,0x48u,0x8D7Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D7Au,1u,0x48u,0x8D7Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D7Bu:
    if(m==1u&&x==0u&&e==0u){ /* 20 30 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D7Bu,3u,0xB0u,0x8D7Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D7Du))return 0;c->pc=0xB030u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 30 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D7Bu,3u,0xB0u,0x8D7Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D7Du))return 0;c->pc=0xB030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D7Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D7Eu,2u,0x20u,0x8D80u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D7Eu,2u,0x20u,0x8D80u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D7Eu,2u,0x20u,0x8D80u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D7Eu,2u,0x20u,0x8D80u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D80u:
    if(m==1u&&x==0u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D80u,2u,0xBBu,0x8D82u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D80u,2u,0xBBu,0x8D82u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xBBu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D82u:
    if(m==1u&&x==0u&&e==0u){ /* 09 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D82u,2u,0x0Cu,0x8D84u);
      sc_v11_op_ora(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D82u,2u,0x0Cu,0x8D84u);
      sc_v11_op_ora(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D84u:
    if(m==1u&&x==0u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D84u,2u,0xBBu,0x8D86u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D84u,2u,0xBBu,0x8D86u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xBBu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D86u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D86u,1u,0x68u,0x8D87u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D86u,1u,0x68u,0x8D87u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D87u:
    if(m==1u&&x==0u&&e==0u){ /* 20 E0 AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D87u,3u,0xAFu,0x8D8Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D89u))return 0;c->pc=0xAFE0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E0 AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D87u,3u,0xAFu,0x8D8Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D89u))return 0;c->pc=0xAFE0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D8Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 BE AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D8Au,3u,0xAFu,0x8D8Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D8Cu))return 0;c->pc=0xAFBEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 BE AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D8Au,3u,0xAFu,0x8D8Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D8Cu))return 0;c->pc=0xAFBEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 BE AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D8Au,3u,0xAFu,0x8D8Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D8Cu))return 0;c->pc=0xAFBEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 BE AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D8Au,3u,0xAFu,0x8D8Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D8Cu))return 0;c->pc=0xAFBEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D8Du:
    if(m==0u&&x==0u&&e==0u){ /* 20 75 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D8Du,3u,0xB3u,0x8D90u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D8Fu))return 0;c->pc=0xB375u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 75 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D8Du,3u,0xB3u,0x8D90u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D8Fu))return 0;c->pc=0xB375u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 75 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D8Du,3u,0xB3u,0x8D90u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D8Fu))return 0;c->pc=0xB375u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 75 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D8Du,3u,0xB3u,0x8D90u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D8Fu))return 0;c->pc=0xB375u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D90u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D90u,2u,0x20u,0x8D92u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D90u,2u,0x20u,0x8D92u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D90u,2u,0x20u,0x8D92u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D90u,2u,0x20u,0x8D92u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D92u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D92u,1u,0x60u,0x8D93u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D92u,1u,0x60u,0x8D93u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D93u:
    if(m==0u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D93u,3u,0x01u,0x8D96u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D93u,3u,0x01u,0x8D96u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01C1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D93u,3u,0x01u,0x8D96u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01C1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D93u,3u,0x01u,0x8D96u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01C1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D96u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D96u,1u,0x4Au,0x8D97u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D96u,1u,0x4Au,0x8D97u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D96u,1u,0x4Au,0x8D97u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D96u,1u,0x4Au,0x8D97u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D97u:
    if(m==0u&&x==0u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D97u,2u,0x07u,0x8D99u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DA0u;}
      if(c->pc!=0x8D99u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D99u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D97u,2u,0x07u,0x8D99u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DA0u;}
      if(c->pc!=0x8D99u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D99u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D97u,2u,0x07u,0x8D99u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DA0u;}
      if(c->pc!=0x8D99u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D99u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D97u,2u,0x07u,0x8D99u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DA0u;}
      if(c->pc!=0x8D99u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8D99u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D99u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D99u,1u,0x48u,0x8D9Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D99u,1u,0x48u,0x8D9Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D99u,1u,0x48u,0x8D9Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D99u,1u,0x48u,0x8D9Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D9Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 3E B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D9Au,3u,0xB1u,0x8D9Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D9Cu))return 0;c->pc=0xB13Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 3E B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D9Au,3u,0xB1u,0x8D9Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D9Cu))return 0;c->pc=0xB13Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 3E B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D9Au,3u,0xB1u,0x8D9Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D9Cu))return 0;c->pc=0xB13Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 3E B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D9Au,3u,0xB1u,0x8D9Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8D9Cu))return 0;c->pc=0xB13Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D9Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D9Du,2u,0x20u,0x8D9Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D9Du,2u,0x20u,0x8D9Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D9Du,2u,0x20u,0x8D9Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D9Du,2u,0x20u,0x8D9Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D9Fu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D9Fu,1u,0x68u,0x8DA0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018D9Fu,1u,0x68u,0x8DA0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DA0u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA0u,1u,0x4Au,0x8DA1u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA0u,1u,0x4Au,0x8DA1u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA0u,1u,0x4Au,0x8DA1u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA0u,1u,0x4Au,0x8DA1u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DA1u:
    if(m==0u&&x==0u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA1u,2u,0x07u,0x8DA3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DAAu;}
      if(c->pc!=0x8DA3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DA3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA1u,2u,0x07u,0x8DA3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DAAu;}
      if(c->pc!=0x8DA3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DA3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA1u,2u,0x07u,0x8DA3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DAAu;}
      if(c->pc!=0x8DA3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DA3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA1u,2u,0x07u,0x8DA3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DAAu;}
      if(c->pc!=0x8DA3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DA3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DA3u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA3u,1u,0x48u,0x8DA4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA3u,1u,0x48u,0x8DA4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA3u,1u,0x48u,0x8DA4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA3u,1u,0x48u,0x8DA4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DA4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F1 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA4u,3u,0xB1u,0x8DA7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DA6u))return 0;c->pc=0xB1F1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F1 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA4u,3u,0xB1u,0x8DA7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DA6u))return 0;c->pc=0xB1F1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F1 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA4u,3u,0xB1u,0x8DA7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DA6u))return 0;c->pc=0xB1F1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F1 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA4u,3u,0xB1u,0x8DA7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DA6u))return 0;c->pc=0xB1F1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DA7u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA7u,2u,0x20u,0x8DA9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA7u,2u,0x20u,0x8DA9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA7u,2u,0x20u,0x8DA9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA7u,2u,0x20u,0x8DA9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DA9u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA9u,1u,0x68u,0x8DAAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DA9u,1u,0x68u,0x8DAAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DAAu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DAAu,1u,0x4Au,0x8DABu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DAAu,1u,0x4Au,0x8DABu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DAAu,1u,0x4Au,0x8DABu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DAAu,1u,0x4Au,0x8DABu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DABu:
    if(m==0u&&x==0u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DABu,2u,0x07u,0x8DADu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DB4u;}
      if(c->pc!=0x8DADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DABu,2u,0x07u,0x8DADu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DB4u;}
      if(c->pc!=0x8DADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DABu,2u,0x07u,0x8DADu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DB4u;}
      if(c->pc!=0x8DADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DABu,2u,0x07u,0x8DADu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DB4u;}
      if(c->pc!=0x8DADu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DADu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DADu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DADu,1u,0x48u,0x8DAEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DADu,1u,0x48u,0x8DAEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DADu,1u,0x48u,0x8DAEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DADu,1u,0x48u,0x8DAEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DAEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F4 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DAEu,3u,0xB2u,0x8DB1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DB0u))return 0;c->pc=0xB2F4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F4 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DAEu,3u,0xB2u,0x8DB1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DB0u))return 0;c->pc=0xB2F4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F4 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DAEu,3u,0xB2u,0x8DB1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DB0u))return 0;c->pc=0xB2F4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F4 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DAEu,3u,0xB2u,0x8DB1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DB0u))return 0;c->pc=0xB2F4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DB1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB1u,2u,0x20u,0x8DB3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB1u,2u,0x20u,0x8DB3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB1u,2u,0x20u,0x8DB3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB1u,2u,0x20u,0x8DB3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DB3u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB3u,1u,0x68u,0x8DB4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB3u,1u,0x68u,0x8DB4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DB4u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB4u,1u,0x4Au,0x8DB5u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB4u,1u,0x4Au,0x8DB5u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB4u,1u,0x4Au,0x8DB5u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB4u,1u,0x4Au,0x8DB5u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DB5u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB5u,2u,0x05u,0x8DB7u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DBCu;}
      if(c->pc!=0x8DB7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DB7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB5u,2u,0x05u,0x8DB7u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DBCu;}
      if(c->pc!=0x8DB7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DB7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB5u,2u,0x05u,0x8DB7u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DBCu;}
      if(c->pc!=0x8DB7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DB7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB5u,2u,0x05u,0x8DB7u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8DBCu;}
      if(c->pc!=0x8DB7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DB7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DB7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 74 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB7u,3u,0xB3u,0x8DBAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DB9u))return 0;c->pc=0xB374u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 74 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB7u,3u,0xB3u,0x8DBAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DB9u))return 0;c->pc=0xB374u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 74 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB7u,3u,0xB3u,0x8DBAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DB9u))return 0;c->pc=0xB374u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 74 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DB7u,3u,0xB3u,0x8DBAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DB9u))return 0;c->pc=0xB374u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DBAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DBAu,2u,0x20u,0x8DBCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DBAu,2u,0x20u,0x8DBCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DBAu,2u,0x20u,0x8DBCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DBAu,2u,0x20u,0x8DBCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DBCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 E0 AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DBCu,3u,0xAFu,0x8DBFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DBEu))return 0;c->pc=0xAFE0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 E0 AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DBCu,3u,0xAFu,0x8DBFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DBEu))return 0;c->pc=0xAFE0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E0 AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DBCu,3u,0xAFu,0x8DBFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DBEu))return 0;c->pc=0xAFE0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E0 AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DBCu,3u,0xAFu,0x8DBFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DBEu))return 0;c->pc=0xAFE0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DBFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DBFu,3u,0x00u,0x8DC2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DBFu,3u,0x00u,0x8DC2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DBFu,2u,0x00u,0x8DC1u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DBFu,2u,0x00u,0x8DC1u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DC2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DC2u,3u,0x01u,0x8DC5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D C1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DC2u,3u,0x01u,0x8DC5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01C1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DC5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DC5u,2u,0x20u,0x8DC7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DC5u,2u,0x20u,0x8DC7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DC7u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DC7u,2u,0xB7u,0x8DC9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DC7u,2u,0xB7u,0x8DC9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB7u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DC9u:
    if(m==1u&&x==0u&&e==0u){ /* 29 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DC9u,2u,0xEFu,0x8DCBu);
      sc_v11_op_and(r,0x00EFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DC9u,2u,0xEFu,0x8DCBu);
      sc_v11_op_and(r,0x00EFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DCBu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DCBu,2u,0xB7u,0x8DCDu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DCBu,2u,0xB7u,0x8DCDu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DCDu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DCDu,1u,0x60u,0x8DCEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DCDu,1u,0x60u,0x8DCEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DCEu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DCEu,2u,0x30u,0x8DD0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DCEu,2u,0x30u,0x8DD0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DD0u:
    if(m==0u&&x==0u&&e==0u){ /* AD D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DD0u,3u,0x01u,0x8DD3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01D7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DD3u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DD3u,2u,0x05u,0x8DD5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8DDAu;}
      if(c->pc!=0x8DD5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DD5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DD5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DD5u,3u,0x00u,0x8DD8u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DD8u:
    if(m==0u&&x==0u&&e==0u){ /* 80 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DD8u,2u,0x18u,0x8DDAu);
      if(1){c->pc=0x8DF2u;}
      if(c->pc!=0x8DDAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8DDAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DDAu:
    if(m==0u&&x==0u&&e==0u){ /* 9C FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DDAu,3u,0x01u,0x8DDDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DDDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DDDu,3u,0x00u,0x8DE0u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DE0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DE0u,3u,0x01u,0x8DE3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DE3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D E5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DE3u,3u,0x01u,0x8DE6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DE6u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DE6u,1u,0x08u,0x8DE7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DE7u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DE7u,4u,0x00u,0x8DEBu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8DEAu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DEBu:
    if(m==0u&&x==0u&&e==0u){ /* 02 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DEBu,2u,0x06u,0x8DEDu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8DEDu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DEBu,2u,0x06u,0x8DEDu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8DEDu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DEBu,2u,0x06u,0x8DEDu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8DEDu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DEBu,2u,0x06u,0x8DEDu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8DEDu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DEDu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DEDu,1u,0x28u,0x8DEEu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DEDu,1u,0x28u,0x8DEEu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DEDu,1u,0x28u,0x8DEEu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DEDu,1u,0x28u,0x8DEEu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DEEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DEEu,3u,0xA0u,0x8DF1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DF0u))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DEEu,3u,0xA0u,0x8DF1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DF0u))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DEEu,3u,0xA0u,0x8DF1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DF0u))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DEEu,3u,0xA0u,0x8DF1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8DF0u))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DF1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DF1u,1u,0x60u,0x8DF2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DF1u,1u,0x60u,0x8DF2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DF1u,1u,0x60u,0x8DF2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DF1u,1u,0x60u,0x8DF2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DF2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D7 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DF2u,3u,0x01u,0x8DF5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01D7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DF5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DF5u,3u,0x00u,0x8DF8u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DF8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D E5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DF8u,3u,0x01u,0x8DFBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DFBu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 08 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DFBu,3u,0x04u,0x8DFEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0408u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018DFEu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 3B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018DFEu,3u,0x02u,0x8E01u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E01u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E01u,1u,0x08u,0x8E02u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E02u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E02u,4u,0x00u,0x8E06u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8E05u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E06u:
    if(m==0u&&x==0u&&e==0u){ /* 02 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E06u,2u,0x07u,0x8E08u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E08u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E06u,2u,0x07u,0x8E08u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E08u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E06u,2u,0x07u,0x8E08u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E08u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E06u,2u,0x07u,0x8E08u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E08u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E08u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E08u,1u,0x28u,0x8E09u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E08u,1u,0x28u,0x8E09u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E08u,1u,0x28u,0x8E09u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E08u,1u,0x28u,0x8E09u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E09u:
    if(m==0u&&x==0u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E09u,3u,0xA0u,0x8E0Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E0Bu))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E09u,3u,0xA0u,0x8E0Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E0Bu))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E09u,3u,0xA0u,0x8E0Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E0Bu))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 64 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E09u,3u,0xA0u,0x8E0Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E0Bu))return 0;c->pc=0xA064u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E0Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E0Cu,2u,0x20u,0x8E0Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E0Cu,2u,0x20u,0x8E0Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E0Cu,2u,0x20u,0x8E0Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E0Cu,2u,0x20u,0x8E0Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E0Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E0Eu,3u,0x00u,0x8E11u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E0Eu,3u,0x00u,0x8E11u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E11u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 01 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E11u,3u,0x02u,0x8E14u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0201u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 01 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E11u,3u,0x02u,0x8E14u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0201u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E14u:
    if(m==0u&&x==0u&&e==0u){ /* 9C FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E14u,3u,0x01u,0x8E17u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E14u,3u,0x01u,0x8E17u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01FFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E17u:
    if(m==0u&&x==0u&&e==0u){ /* AE 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E17u,3u,0x02u,0x8E1Au);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AE 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E17u,3u,0x02u,0x8E1Au);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x020Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E1Au:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E1Au,4u,0x01u,0x8E1Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 00 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E1Au,4u,0x01u,0x8E1Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E1Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E1Eu,3u,0x00u,0x8E21u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E1Eu,3u,0x00u,0x8E21u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E21u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E21u,3u,0x01u,0x8E24u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D F9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E21u,3u,0x01u,0x8E24u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E24u:
    if(m==0u&&x==0u&&e==0u){ /* 20 75 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E24u,3u,0xB3u,0x8E27u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E26u))return 0;c->pc=0xB375u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 75 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E24u,3u,0xB3u,0x8E27u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E26u))return 0;c->pc=0xB375u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E27u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E27u,1u,0x60u,0x8E28u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E27u,1u,0x60u,0x8E28u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E27u,1u,0x60u,0x8E28u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E27u,1u,0x60u,0x8E28u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E28u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E28u,2u,0x30u,0x8E2Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E37u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E37u,2u,0x20u,0x8E39u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E37u,2u,0x20u,0x8E39u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E37u,2u,0x20u,0x8E39u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E39u:
    if(m==0u&&x==1u&&e==0u){ /* 9C 3B 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E39u,3u,0x02u,0x8E3Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E3Cu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E3Cu,1u,0x60u,0x8E3Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E3Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E3Du,2u,0x30u,0x8E3Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E42u:
    if(m==0u&&x==1u&&e==0u){ /* B0 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E42u,2u,0x44u,0x8E44u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8E88u;}
      if(c->pc!=0x8E44u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E44u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E42u,2u,0x44u,0x8E44u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8E88u;}
      if(c->pc!=0x8E44u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E44u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E42u,2u,0x44u,0x8E44u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8E88u;}
      if(c->pc!=0x8E44u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E44u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E44u:
    if(m==0u&&x==1u&&e==0u){ /* 20 2A B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E44u,3u,0xB4u,0x8E47u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E46u))return 0;c->pc=0xB42Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 2A B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E44u,3u,0xB4u,0x8E47u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E46u))return 0;c->pc=0xB42Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 2A B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E44u,3u,0xB4u,0x8E47u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E46u))return 0;c->pc=0xB42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E47u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E47u,2u,0x30u,0x8E49u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E47u,2u,0x30u,0x8E49u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E47u,2u,0x30u,0x8E49u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E59u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E59u,2u,0x20u,0x8E5Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E59u,2u,0x20u,0x8E5Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E59u,2u,0x20u,0x8E5Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E5Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E5Bu,3u,0x02u,0x8E5Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E5Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D AB 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E5Eu,3u,0x02u,0x8E61u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x02ABu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E61u:
    if(m==0u&&x==0u&&e==0u){ /* 20 25 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E61u,3u,0x8Fu,0x8E64u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E63u))return 0;c->pc=0x8F25u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E64u:
    if(m==0u&&x==1u&&e==0u){ /* 20 FA 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E64u,3u,0x8Eu,0x8E67u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E66u))return 0;c->pc=0x8EFAu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 FA 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E64u,3u,0x8Eu,0x8E67u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E66u))return 0;c->pc=0x8EFAu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 FA 8E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E64u,3u,0x8Eu,0x8E67u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E66u))return 0;c->pc=0x8EFAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E67u:
    if(m==0u&&x==1u&&e==0u){ /* 20 13 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E67u,3u,0x8Fu,0x8E6Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E69u))return 0;c->pc=0x8F13u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 13 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E67u,3u,0x8Fu,0x8E6Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E69u))return 0;c->pc=0x8F13u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 13 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E67u,3u,0x8Fu,0x8E6Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E69u))return 0;c->pc=0x8F13u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E6Au:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E6Au,2u,0x20u,0x8E6Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E6Au,2u,0x20u,0x8E6Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E6Au,2u,0x20u,0x8E6Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E6Cu:
    if(m==0u&&x==1u&&e==0u){ /* AD 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E6Cu,3u,0x02u,0x8E6Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E6Fu:
    if(m==0u&&x==1u&&e==0u){ /* 8D E1 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E6Fu,3u,0x01u,0x8E72u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E72u:
    if(m==0u&&x==1u&&e==0u){ /* 20 A6 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E72u,3u,0xCAu,0x8E75u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E74u))return 0;c->pc=0xCAA6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E75u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E75u,2u,0x20u,0x8E77u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E75u,2u,0x20u,0x8E77u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E75u,2u,0x20u,0x8E77u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E77u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E77u,3u,0x02u,0x8E7Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E7Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E7Au,3u,0x00u,0x8E7Du);
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E7Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E7Du,2u,0x08u,0x8E7Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8E87u;}
      if(c->pc!=0x8E7Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E7Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E7Fu,1u,0x08u,0x8E80u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E80u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E80u,4u,0x00u,0x8E84u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8E83u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E84u:
    if(m==0u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E84u,2u,0x01u,0x8E86u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E86u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E84u,2u,0x01u,0x8E86u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E86u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E84u,2u,0x01u,0x8E86u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E86u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E84u,2u,0x01u,0x8E86u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E86u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E86u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E86u,1u,0x28u,0x8E87u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E86u,1u,0x28u,0x8E87u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E86u,1u,0x28u,0x8E87u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E87u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E87u,1u,0x60u,0x8E88u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E87u,1u,0x60u,0x8E88u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E87u,1u,0x60u,0x8E88u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E88u:
    if(m==0u&&x==0u&&e==0u){ /* AE 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E88u,3u,0x02u,0x8E8Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AE 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E88u,3u,0x02u,0x8E8Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x020Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E88u,3u,0x02u,0x8E8Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E88u,3u,0x02u,0x8E8Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x020Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E8Bu:
    if(m==0u&&x==0u&&e==0u){ /* BF 10 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E8Bu,4u,0x01u,0x8E8Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018010u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 10 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E8Bu,4u,0x01u,0x8E8Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018010u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF 10 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E8Bu,4u,0x01u,0x8E8Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018010u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF 10 80 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E8Bu,4u,0x01u,0x8E8Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x018010u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D DD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E8Fu,3u,0x01u,0x8E92u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01DDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D DD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E8Fu,3u,0x01u,0x8E92u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01DDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D DD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E8Fu,3u,0x01u,0x8E92u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01DDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D DD 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E8Fu,3u,0x01u,0x8E92u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x01DDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E92u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E92u,1u,0x08u,0x8E93u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E92u,1u,0x08u,0x8E93u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E92u,1u,0x08u,0x8E93u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E92u,1u,0x08u,0x8E93u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E93u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E93u,4u,0x00u,0x8E97u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8E96u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E93u,4u,0x00u,0x8E97u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8E96u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E93u,4u,0x00u,0x8E97u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8E96u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E93u,4u,0x00u,0x8E97u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8E96u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E97u:
    if(m==0u&&x==0u&&e==0u){ /* 02 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E97u,2u,0x02u,0x8E99u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E99u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E97u,2u,0x02u,0x8E99u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E99u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E97u,2u,0x02u,0x8E99u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E99u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E97u,2u,0x02u,0x8E99u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8E99u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E99u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E99u,1u,0x28u,0x8E9Au);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E99u,1u,0x28u,0x8E9Au);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E99u,1u,0x28u,0x8E9Au);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E99u,1u,0x28u,0x8E9Au);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E9Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E9Au,1u,0x60u,0x8E9Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E9Au,1u,0x60u,0x8E9Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E9Au,1u,0x60u,0x8E9Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018E9Au,1u,0x60u,0x8E9Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EBBu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EBBu,1u,0x38u,0x8EBCu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EBCu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EBCu,1u,0x60u,0x8EBDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EBDu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EBDu,2u,0x20u,0x8EBFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EC9u:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EC9u,3u,0x03u,0x8ECCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ECCu:
    if(m==0u&&x==0u&&e==0u){ /* 0D F7 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ECCu,3u,0x03u,0x8ECFu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x03F7u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ECFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ECFu,2u,0x02u,0x8ED1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8ED3u;}
      if(c->pc!=0x8ED1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8ED1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ED1u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ED1u,1u,0x18u,0x8ED2u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ED2u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ED2u,1u,0x60u,0x8ED3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ED3u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ED3u,1u,0x38u,0x8ED4u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ED4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018ED4u,1u,0x60u,0x8ED5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EEFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EEFu,1u,0x60u,0x8EF0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EEFu,1u,0x60u,0x8EF0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EEFu,1u,0x60u,0x8EF0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EF8u:
    if(m==1u&&x==0u&&e==0u){ /* 30 F2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EF8u,2u,0xF2u,0x8EFAu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x8EECu;}
      if(c->pc!=0x8EFAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EFAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EFAu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EFAu,2u,0x20u,0x8EFCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EFAu,2u,0x20u,0x8EFCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EFAu,2u,0x20u,0x8EFCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EFCu:
    if(m==0u&&x==1u&&e==0u){ /* AD 0D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EFCu,3u,0x02u,0x8EFFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EFFu:
    if(m==0u&&x==1u&&e==0u){ /* C9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018EFFu,3u,0x00u,0x8F02u);
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F02u:
    if(m==0u&&x==1u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F02u,2u,0x01u,0x8F04u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8F05u;}
      if(c->pc!=0x8F04u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F04u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F04u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F04u,1u,0x60u,0x8F05u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F05u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F05u,1u,0x08u,0x8F06u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F05u,1u,0x08u,0x8F06u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F06u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F06u,4u,0x00u,0x8F0Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8F09u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F06u,4u,0x00u,0x8F0Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8F09u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F0Au:
    if(m==0u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Au,2u,0x01u,0x8F0Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8F0Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Au,2u,0x01u,0x8F0Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8F0Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Au,2u,0x01u,0x8F0Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8F0Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Au,2u,0x01u,0x8F0Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x8F0Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F0Cu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Cu,1u,0x28u,0x8F0Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Cu,1u,0x28u,0x8F0Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Cu,1u,0x28u,0x8F0Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Cu,1u,0x28u,0x8F0Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F0Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Du,2u,0x20u,0x8F0Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Du,2u,0x20u,0x8F0Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Du,2u,0x20u,0x8F0Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Du,2u,0x20u,0x8F0Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 C3 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Fu,3u,0xCAu,0x8F12u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8F11u))return 0;c->pc=0xCAC3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 C3 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F0Fu,3u,0xCAu,0x8F12u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8F11u))return 0;c->pc=0xCAC3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F12u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F12u,1u,0x60u,0x8F13u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F12u,1u,0x60u,0x8F13u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F12u,1u,0x60u,0x8F13u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F12u,1u,0x60u,0x8F13u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F13u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F13u,2u,0x20u,0x8F15u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F13u,2u,0x20u,0x8F15u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F13u,2u,0x20u,0x8F15u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F15u:
    if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F15u,2u,0x10u,0x8F17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F25u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F25u,2u,0x30u,0x8F27u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F25u,2u,0x30u,0x8F27u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F9Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F9Fu,2u,0x20u,0x8FA1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F9Fu,2u,0x20u,0x8FA1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F9Fu,2u,0x20u,0x8FA1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018F9Fu,2u,0x20u,0x8FA1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018FA1u:
    if(m==1u&&x==0u&&e==0u){ /* AF 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FA1u,4u,0x7Eu,0x8FA5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2208u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AF 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FA1u,4u,0x7Eu,0x8FA5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2208u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018FA5u:
    if(m==1u&&x==0u&&e==0u){ /* 29 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FA5u,2u,0x0Fu,0x8FA7u);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FA5u,2u,0x0Fu,0x8FA7u);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018FA7u:
    if(m==1u&&x==0u&&e==0u){ /* 09 50 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FA7u,2u,0x50u,0x8FA9u);
      sc_v11_op_ora(r,0x0050u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 50 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FA7u,2u,0x50u,0x8FA9u);
      sc_v11_op_ora(r,0x0050u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018FA9u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FA9u,4u,0x7Eu,0x8FADu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2208u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 08 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FA9u,4u,0x7Eu,0x8FADu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2208u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018FADu:
    if(m==1u&&x==0u&&e==0u){ /* A9 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FADu,2u,0x55u,0x8FAFu);
      sc_v11_op_lda(r,0x0055u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 55 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FADu,2u,0x55u,0x8FAFu);
      sc_v11_op_lda(r,0x0055u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018FAFu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 09 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FAFu,4u,0x7Eu,0x8FB3u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2209u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 09 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FAFu,4u,0x7Eu,0x8FB3u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2209u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018FB3u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 16 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FB3u,4u,0x7Eu,0x8FB7u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2216u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 16 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FB3u,4u,0x7Eu,0x8FB7u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2216u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018FB7u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 17 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FB7u,4u,0x7Eu,0x8FBBu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2217u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 17 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FB7u,4u,0x7Eu,0x8FBBu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2217u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018FBBu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 18 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FBBu,4u,0x7Eu,0x8FBFu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2218u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 18 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FBBu,4u,0x7Eu,0x8FBFu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2218u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018FBFu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 19 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FBFu,4u,0x7Eu,0x8FC3u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2219u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8F 19 22 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FBFu,4u,0x7Eu,0x8FC3u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2219u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018FC3u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FC3u,1u,0x60u,0x8FC4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x018FC3u,1u,0x60u,0x8FC4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
