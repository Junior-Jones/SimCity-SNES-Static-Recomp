/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00063(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x018C01u:
    if(m==0u&&x==0u&&e==0u){ /* F0 31 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C01u,2u,0x31u,0x8C03u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C34u;}
      if(c->pc!=0x8C03u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C03u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C03u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 2653; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C03u,2u,0xC9u,0x8C05u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C05u:
    if(m==0u&&x==0u&&e==0u){ /* 89 00 80 Mesen corrected gameplay frame 2653; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C05u,3u,0x80u,0x8C08u);
      {uint16_t z=(uint16_t)((c->a&0xFFFFu)&0x8000u);if(z)c->p&=(uint8_t)~SC_FLAG_Z;else c->p|=SC_FLAG_Z;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C08u:
    if(m==0u&&x==0u&&e==0u){ /* D0 25 Mesen corrected gameplay frame 2653; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C08u,2u,0x25u,0x8C0Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8C2Fu;}
      if(c->pc!=0x8C0Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C0Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C0Au:
    if(m==0u&&x==0u&&e==0u){ /* AD F5 01 Mesen corrected gameplay frame 2653; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C0Au,3u,0x01u,0x8C0Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01F5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C0Du:
    if(m==0u&&x==0u&&e==0u){ /* 0D FF 01 Mesen corrected gameplay frame 2653; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C0Du,3u,0x01u,0x8C10u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C10u:
    if(m==0u&&x==0u&&e==0u){ /* F0 10 Mesen corrected gameplay frame 2653; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C10u,2u,0x10u,0x8C12u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C22u;}
      if(c->pc!=0x8C12u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C12u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C12u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C12u,3u,0x01u,0x8C15u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C15u:
    if(m==0u&&x==0u&&e==0u){ /* 89 00 80 Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C15u,3u,0x80u,0x8C18u);
      {uint16_t z=(uint16_t)((c->a&0xFFFFu)&0x8000u);if(z)c->p&=(uint8_t)~SC_FLAG_Z;else c->p|=SC_FLAG_Z;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C18u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1A Mesen corrected gameplay frame 4041; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C18u,2u,0x1Au,0x8C1Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C34u;}
      if(c->pc!=0x8C1Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C1Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C1Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 4302; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C1Au,3u,0x00u,0x8C1Du);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C1Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3B 02 Mesen corrected gameplay frame 4302; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C1Du,3u,0x02u,0x8C20u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C20u:
    if(m==0u&&x==0u&&e==0u){ /* 80 2D Mesen corrected gameplay frame 4302; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C20u,2u,0x2Du,0x8C22u);
      if(1){c->pc=0x8C4Fu;}
      if(c->pc!=0x8C22u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C22u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C22u:
    if(m==0u&&x==0u&&e==0u){ /* AD 3B 02 Mesen corrected gameplay frame 2653; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C22u,3u,0x02u,0x8C25u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x023Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C25u:
    if(m==0u&&x==0u&&e==0u){ /* F0 28 Mesen corrected gameplay frame 2653; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C25u,2u,0x28u,0x8C27u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C4Fu;}
      if(c->pc!=0x8C27u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C27u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C27u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C27u,3u,0x02u,0x8C2Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C2Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 05 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C2Au,3u,0x00u,0x8C2Du);
      sc_v11_op_compare(r,c->a,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C2Du:
    if(m==0u&&x==0u&&e==0u){ /* B0 20 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C2Du,2u,0x20u,0x8C2Fu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8C4Fu;}
      if(c->pc!=0x8C2Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C2Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C2Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C2Fu,3u,0x00u,0x8C32u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C32u:
    if(m==0u&&x==0u&&e==0u){ /* 80 1E Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C32u,2u,0x1Eu,0x8C34u);
      if(1){c->pc=0x8C52u;}
      if(c->pc!=0x8C34u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C34u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C34u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C34u,2u,0xC9u,0x8C36u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C36u:
    if(m==0u&&x==0u&&e==0u){ /* 89 00 80 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C36u,3u,0x80u,0x8C39u);
      {uint16_t z=(uint16_t)((c->a&0xFFFFu)&0x8000u);if(z)c->p&=(uint8_t)~SC_FLAG_Z;else c->p|=SC_FLAG_Z;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C39u:
    if(m==0u&&x==0u&&e==0u){ /* F0 14 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C39u,2u,0x14u,0x8C3Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8C4Fu;}
      if(c->pc!=0x8C3Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C3Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C3Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 A6 8C Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C3Bu,3u,0x8Cu,0x8C3Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8C3Du))return 0;c->pc=0x8CA6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C3Eu:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C3Eu,2u,0x05u,0x8C40u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8C45u;}
      if(c->pc!=0x8C40u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C40u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C40u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C40u,3u,0x00u,0x8C43u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C43u:
    if(m==0u&&x==0u&&e==0u){ /* 80 0D Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C43u,2u,0x0Du,0x8C45u);
      if(1){c->pc=0x8C52u;}
      if(c->pc!=0x8C45u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8C45u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C4Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C4Fu,3u,0x00u,0x8C52u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C52u:
    if(m==0u&&x==0u&&e==0u){ /* 85 C5 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C52u,2u,0xC5u,0x8C54u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xC5u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018C54u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018C54u,1u,0x60u,0x8C55u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CA6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CA6u,2u,0x30u,0x8CA8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CA8u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CA8u,3u,0x01u,0x8CABu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CABu:
    if(m==0u&&x==0u&&e==0u){ /* C9 16 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CABu,3u,0x00u,0x8CAEu);
      sc_v11_op_compare(r,c->a,0x0016u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CAEu:
    if(m==0u&&x==0u&&e==0u){ /* 90 2B Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CAEu,2u,0x2Bu,0x8CB0u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8CDBu;}
      if(c->pc!=0x8CB0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CB0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CB0u:
    if(m==0u&&x==0u&&e==0u){ /* C9 26 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CB0u,3u,0x00u,0x8CB3u);
      sc_v11_op_compare(r,c->a,0x0026u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CB3u:
    if(m==0u&&x==0u&&e==0u){ /* B0 0F Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CB3u,2u,0x0Fu,0x8CB5u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8CC4u;}
      if(c->pc!=0x8CB5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CB5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CC4u:
    if(m==0u&&x==0u&&e==0u){ /* C9 2B 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CC4u,3u,0x00u,0x8CC7u);
      sc_v11_op_compare(r,c->a,0x002Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CC7u:
    if(m==0u&&x==0u&&e==0u){ /* 90 12 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CC7u,2u,0x12u,0x8CC9u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8CDBu;}
      if(c->pc!=0x8CC9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CC9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CC9u:
    if(m==0u&&x==0u&&e==0u){ /* C9 AB 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CC9u,3u,0x00u,0x8CCCu);
      sc_v11_op_compare(r,c->a,0x00ABu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CCCu:
    if(m==0u&&x==0u&&e==0u){ /* B0 0D Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CCCu,2u,0x0Du,0x8CCEu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8CDBu;}
      if(c->pc!=0x8CCEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CCEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CCEu:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CCEu,3u,0x01u,0x8CD1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CD1u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CD1u,3u,0x00u,0x8CD4u);
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CD4u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CD4u,2u,0x05u,0x8CD6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8CDBu;}
      if(c->pc!=0x8CD6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CD6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CD6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 2F 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CD6u,3u,0x00u,0x8CD9u);
      sc_v11_op_compare(r,c->a,0x002Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018CD9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 29 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018CD9u,2u,0x29u,0x8CDBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8D04u;}
      if(c->pc!=0x8CDBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8CDBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D04u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D04u,1u,0x38u,0x8D05u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D05u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0F 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D05u,3u,0x00u,0x8D08u);
      sc_v11_op_sbc(r,0x000Fu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D08u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D08u,1u,0x4Au,0x8D09u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D09u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D09u,1u,0x4Au,0x8D0Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D0Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D0Au,1u,0x4Au,0x8D0Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D0Bu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D0Bu,1u,0x4Au,0x8D0Cu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D0Cu:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D0Cu,3u,0x00u,0x8D0Fu);
      sc_v11_op_and(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D0Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D0Fu,2u,0x79u,0x8D11u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D11u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D11u,3u,0x01u,0x8D14u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D14u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D14u,1u,0x38u,0x8D15u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D15u:
    if(m==0u&&x==0u&&e==0u){ /* E9 2B 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D15u,3u,0x00u,0x8D18u);
      sc_v11_op_sbc(r,0x002Bu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D18u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D18u,1u,0x4Au,0x8D19u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D19u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D19u,1u,0x4Au,0x8D1Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D1Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D1Au,1u,0x4Au,0x8D1Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D1Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FE FF Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D1Bu,3u,0xFFu,0x8D1Eu);
      sc_v11_op_and(r,0xFFFEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D1Eu:
    if(m==0u&&x==0u&&e==0u){ /* 05 79 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D1Eu,2u,0x79u,0x8D20u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D20u:
    if(m==0u&&x==0u&&e==0u){ /* 8D DD 01 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D20u,3u,0x01u,0x8D23u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01DDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D23u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D23u,1u,0x38u,0x8D24u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D24u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D24u,1u,0x60u,0x8D25u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018D25u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2649; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018D25u,1u,0x60u,0x8D26u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E28u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E28u,2u,0x30u,0x8E2Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E2Au:
    if(m==0u&&x==0u&&e==0u){ /* 9C 49 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E2Au,3u,0x02u,0x8E2Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0249u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E2Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E2Du,3u,0x02u,0x8E30u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E30u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E30u,2u,0x10u,0x8E32u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E32u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E32u,1u,0x0Au,0x8E33u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E33u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E33u,1u,0xAAu,0x8E34u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E34u:
    if(m==0u&&x==0u&&e==0u){ /* FC FA 9C Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E34u,3u,0x9Cu,0x8E37u);
      {uint32_t q=((uint32_t)c->pbr<<16)|((0x9CFAu+c->x)&0xffffu);uint16_t t=sc_v11_bus_read16(r,q);sc_v11_scheduler_internal_cycle(r,2u);if(!sc_v11_push16(r,0x8E36u))return 0;c->pc=t;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E37u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E37u,2u,0x20u,0x8E39u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E39u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 3B 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E39u,3u,0x02u,0x8E3Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x023Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E3Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E3Cu,1u,0x60u,0x8E3Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E3Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E3Du,2u,0x30u,0x8E3Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 9B 8E Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E3Fu,3u,0x8Eu,0x8E42u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E41u))return 0;c->pc=0x8E9Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E42u:
    if(m==0u&&x==0u&&e==0u){ /* B0 44 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E42u,2u,0x44u,0x8E44u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8E88u;}
      if(c->pc!=0x8E44u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E44u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E44u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A B4 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E44u,3u,0xB4u,0x8E47u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E46u))return 0;c->pc=0xB42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E47u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E47u,2u,0x30u,0x8E49u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E49u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E49u,3u,0x02u,0x8E4Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E4Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E4Cu,3u,0x00u,0x8E4Fu);
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E4Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E4Fu,2u,0x05u,0x8E51u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8E56u;}
      if(c->pc!=0x8E51u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E51u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E51u:
    if(m==0u&&x==0u&&e==0u){ /* EC 0D 02 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E51u,3u,0x02u,0x8E54u);
      sc_v11_op_compare(r,c->x,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E54u:
    if(m==0u&&x==0u&&e==0u){ /* F0 31 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E54u,2u,0x31u,0x8E56u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8E87u;}
      if(c->pc!=0x8E56u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E56u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E56u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D5 8E Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E56u,3u,0x8Eu,0x8E59u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E58u))return 0;c->pc=0x8ED5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E59u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E59u,2u,0x20u,0x8E5Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E5Bu:
    if(m==0u&&x==1u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E5Bu,3u,0x02u,0x8E5Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E5Eu:
    if(m==0u&&x==1u&&e==0u){ /* 8D AB 02 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E5Eu,3u,0x02u,0x8E61u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x02ABu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E61u:
    if(m==0u&&x==1u&&e==0u){ /* 20 25 8F Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E61u,3u,0x8Fu,0x8E64u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E63u))return 0;c->pc=0x8F25u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E64u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FA 8E Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E64u,3u,0x8Eu,0x8E67u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E66u))return 0;c->pc=0x8EFAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E67u:
    if(m==0u&&x==0u&&e==0u){ /* 20 13 8F Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E67u,3u,0x8Fu,0x8E6Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E69u))return 0;c->pc=0x8F13u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E6Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E6Au,2u,0x20u,0x8E6Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E6Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E6Cu,3u,0x02u,0x8E6Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E6Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D E1 01 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E6Fu,3u,0x01u,0x8E72u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01E1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E72u:
    if(m==0u&&x==0u&&e==0u){ /* 20 A6 CA Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E72u,3u,0xCAu,0x8E75u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8E74u))return 0;c->pc=0xCAA6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E75u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E75u,2u,0x20u,0x8E77u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E77u:
    if(m==0u&&x==1u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E77u,3u,0x02u,0x8E7Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E7Au:
    if(m==0u&&x==1u&&e==0u){ /* C9 0F 00 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E7Au,3u,0x00u,0x8E7Du);
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E7Du:
    if(m==0u&&x==1u&&e==0u){ /* F0 08 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E7Du,2u,0x08u,0x8E7Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8E87u;}
      if(c->pc!=0x8E7Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8E7Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E7Fu:
    if(m==0u&&x==1u&&e==0u){ /* 08 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E7Fu,1u,0x08u,0x8E80u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E80u:
    if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E80u,4u,0x00u,0x8E84u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8E83u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E86u:
    if(m==1u&&x==1u&&e==0u){ /* 28 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E86u,1u,0x28u,0x8E87u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E87u:
    if(m==0u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 3422; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E87u,1u,0x60u,0x8E88u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E9Bu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E9Bu,2u,0x20u,0x8E9Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E9Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E9Du,2u,0x10u,0x8E9Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018E9Fu:
    if(m==1u&&x==0u&&e==0u){ /* AD 25 04 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018E9Fu,3u,0x04u,0x8EA2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0425u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EA2u:
    if(m==1u&&x==0u&&e==0u){ /* 29 02 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EA2u,2u,0x02u,0x8EA4u);
      sc_v11_op_and(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EA4u:
    if(m==1u&&x==0u&&e==0u){ /* D0 17 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EA4u,2u,0x17u,0x8EA6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8EBDu;}
      if(c->pc!=0x8EA6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EA6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EA6u:
    if(m==1u&&x==0u&&e==0u){ /* AD 9F 0B Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EA6u,3u,0x0Bu,0x8EA9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B9Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EA9u:
    if(m==1u&&x==0u&&e==0u){ /* D0 12 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EA9u,2u,0x12u,0x8EABu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8EBDu;}
      if(c->pc!=0x8EABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EABu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EABu,2u,0x20u,0x8EADu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EADu:
    if(m==0u&&x==0u&&e==0u){ /* AD DD 01 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EADu,3u,0x01u,0x8EB0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EB0u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EB0u,1u,0x0Au,0x8EB1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EB1u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EB1u,1u,0xAAu,0x8EB2u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EB2u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9D 0B Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EB2u,3u,0x0Bu,0x8EB5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EB5u:
    if(m==0u&&x==0u&&e==0u){ /* DF 4E 88 01 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EB5u,4u,0x01u,0x8EB9u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01884Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EB9u:
    if(m==0u&&x==0u&&e==0u){ /* B0 02 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EB9u,2u,0x02u,0x8EBBu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0x8EBDu;}
      if(c->pc!=0x8EBBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EBBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EBDu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EBDu,2u,0x20u,0x8EBFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EBFu:
    if(m==0u&&x==0u&&e==0u){ /* AD DD 01 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EBFu,3u,0x01u,0x8EC2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EC2u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EC2u,3u,0x00u,0x8EC5u);
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EC5u:
    if(m==0u&&x==0u&&e==0u){ /* F0 02 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EC5u,2u,0x02u,0x8EC7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8EC9u;}
      if(c->pc!=0x8EC7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EC7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EC7u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EC7u,1u,0x18u,0x8EC8u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EC8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EC8u,1u,0x60u,0x8EC9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ED5u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018ED5u,2u,0x20u,0x8ED7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ED7u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018ED7u,2u,0x10u,0x8ED9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018ED9u:
    if(m==1u&&x==0u&&e==0u){ /* A2 0F 00 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018ED9u,3u,0x00u,0x8EDCu);
      sc_v11_op_ldx(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EDCu:
    if(m==1u&&x==0u&&e==0u){ /* BD 8B 02 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EDCu,3u,0x02u,0x8EDFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x028Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EDFu:
    if(m==1u&&x==0u&&e==0u){ /* EC DD 01 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EDFu,3u,0x01u,0x8EE2u);
      sc_v11_op_compare(r,c->x,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01DDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EE2u:
    if(m==1u&&x==0u&&e==0u){ /* F0 0C Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EE2u,2u,0x0Cu,0x8EE4u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8EF0u;}
      if(c->pc!=0x8EE4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EE4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EE4u:
    if(m==1u&&x==0u&&e==0u){ /* 29 80 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EE4u,2u,0x80u,0x8EE6u);
      sc_v11_op_and(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EE6u:
    if(m==1u&&x==0u&&e==0u){ /* 9D 9B 02 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EE6u,3u,0x02u,0x8EE9u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x029Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EE9u:
    if(m==1u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EE9u,1u,0xCAu,0x8EEAu);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EEAu:
    if(m==1u&&x==0u&&e==0u){ /* 10 F0 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EEAu,2u,0xF0u,0x8EECu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x8EDCu;}
      if(c->pc!=0x8EECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EECu:
    if(m==1u&&x==0u&&e==0u){ /* 20 17 C8 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EECu,3u,0xC8u,0x8EEFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8EEEu))return 0;c->pc=0xC817u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EEFu:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EEFu,1u,0x60u,0x8EF0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EF0u:
    if(m==1u&&x==0u&&e==0u){ /* 09 01 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EF0u,2u,0x01u,0x8EF2u);
      sc_v11_op_ora(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EF2u:
    if(m==1u&&x==0u&&e==0u){ /* 9D 9B 02 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EF2u,3u,0x02u,0x8EF5u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x029Bu),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EF5u:
    if(m==1u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EF5u,1u,0xCAu,0x8EF6u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EF6u:
    if(m==1u&&x==0u&&e==0u){ /* 10 E4 Mesen corrected gameplay frame 3420; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EF6u,2u,0xE4u,0x8EF8u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x8EDCu;}
      if(c->pc!=0x8EF8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8EF8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EFAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EFAu,2u,0x20u,0x8EFCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EFCu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EFCu,3u,0x02u,0x8EFFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018EFFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018EFFu,3u,0x00u,0x8F02u);
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F02u:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F02u,2u,0x01u,0x8F04u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8F05u;}
      if(c->pc!=0x8F04u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F04u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F04u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F04u,1u,0x60u,0x8F05u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F13u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F13u,2u,0x20u,0x8F15u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F15u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F15u,2u,0x10u,0x8F17u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F17u:
    if(m==0u&&x==0u&&e==0u){ /* AE 0D 02 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F17u,3u,0x02u,0x8F1Au);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F1Au:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 80 01 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F1Au,4u,0x01u,0x8F1Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F1Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F1Eu,3u,0x00u,0x8F21u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F21u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F9 01 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F21u,3u,0x01u,0x8F24u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x01F9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F24u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F24u,1u,0x60u,0x8F25u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F25u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3421; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F25u,2u,0x30u,0x8F27u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F25u,2u,0x30u,0x8F27u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F27u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F27u,3u,0x02u,0x8F2Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F2Au:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F2Au,1u,0x0Au,0x8F2Bu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F2Bu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F2Bu,1u,0xAAu,0x8F2Cu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F2Cu:
    if(m==0u&&x==0u&&e==0u){ /* BF C4 8F 01 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F2Cu,4u,0x01u,0x8F30u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018FC4u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F30u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F30u,1u,0x48u,0x8F31u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F31u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F31u,3u,0x00u,0x8F34u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F34u:
    if(m==0u&&x==0u&&e==0u){ /* BB Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F34u,1u,0xBBu,0x8F35u);
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F35u:
    if(m==0u&&x==0u&&e==0u){ /* 4B Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F35u,1u,0x4Bu,0x8F36u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F36u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F36u,1u,0xABu,0x8F37u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F37u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F37u,2u,0x01u,0x8F39u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F39u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F39u,1u,0xC8u,0x8F3Au);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F3Au:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F3Au,1u,0xC8u,0x8F3Bu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F3Bu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F3Bu,1u,0x18u,0x8F3Cu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F3Cu:
    if(m==0u&&x==0u&&e==0u){ /* 69 07 AF Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F3Cu,3u,0xAFu,0x8F3Fu);
      sc_v11_op_adc(r,0xAF07u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 88 20 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F3Fu,4u,0x7Eu,0x8F43u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2088u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F43u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F43u,2u,0x01u,0x8F45u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F45u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F45u,1u,0xC8u,0x8F46u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F46u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F46u,1u,0xC8u,0x8F47u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F47u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 8A 20 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F47u,4u,0x7Eu,0x8F4Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E208Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F4Bu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F4Bu,1u,0xE8u,0x8F4Cu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F4Cu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F4Cu,1u,0xE8u,0x8F4Du);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F4Du:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F4Du,1u,0xE8u,0x8F4Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F4Eu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F4Eu,1u,0xE8u,0x8F4Fu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F4Fu:
    if(m==0u&&x==0u&&e==0u){ /* C0 14 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F4Fu,3u,0x00u,0x8F52u);
      sc_v11_op_compare(r,c->y,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F52u:
    if(m==0u&&x==0u&&e==0u){ /* 90 E3 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F52u,2u,0xE3u,0x8F54u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8F37u;}
      if(c->pc!=0x8F54u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F54u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F54u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F54u,3u,0x00u,0x8F57u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F57u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F57u,2u,0x01u,0x8F59u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F59u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F59u,1u,0xC8u,0x8F5Au);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F5Au:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F5Au,1u,0xC8u,0x8F5Bu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F5Bu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F5Bu,1u,0x18u,0x8F5Cu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F5Cu:
    if(m==0u&&x==0u&&e==0u){ /* 69 07 AF Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F5Cu,3u,0xAFu,0x8F5Fu);
      sc_v11_op_adc(r,0xAF07u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F5Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 60 21 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F5Fu,4u,0x7Eu,0x8F63u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2160u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F63u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F63u,2u,0x01u,0x8F65u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F65u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F65u,1u,0xC8u,0x8F66u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F66u:
    if(m==0u&&x==0u&&e==0u){ /* C8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F66u,1u,0xC8u,0x8F67u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F67u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 62 21 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F67u,4u,0x7Eu,0x8F6Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2162u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F6Bu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F6Bu,1u,0xE8u,0x8F6Cu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F6Cu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F6Cu,1u,0xE8u,0x8F6Du);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F6Du:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F6Du,1u,0xE8u,0x8F6Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F6Eu:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F6Eu,1u,0xE8u,0x8F6Fu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F6Fu:
    if(m==0u&&x==0u&&e==0u){ /* C0 3C 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F6Fu,3u,0x00u,0x8F72u);
      sc_v11_op_compare(r,c->y,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F72u:
    if(m==0u&&x==0u&&e==0u){ /* 90 E3 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F72u,2u,0xE3u,0x8F74u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8F57u;}
      if(c->pc!=0x8F74u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8F74u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F74u:
    if(m==0u&&x==0u&&e==0u){ /* F4 00 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F74u,3u,0x00u,0x8F77u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F77u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F77u,1u,0xABu,0x8F78u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F78u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F78u,1u,0xABu,0x8F79u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F79u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F79u,2u,0x20u,0x8F7Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F7Bu:
    if(m==1u&&x==0u&&e==0u){ /* AF 08 22 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F7Bu,4u,0x7Eu,0x8F7Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x7E2208u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F7Fu:
    if(m==1u&&x==0u&&e==0u){ /* 29 0F Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F7Fu,2u,0x0Fu,0x8F81u);
      sc_v11_op_and(r,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F81u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 08 22 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F81u,4u,0x7Eu,0x8F85u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2208u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F85u:
    if(m==1u&&x==0u&&e==0u){ /* A9 40 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F85u,2u,0x40u,0x8F87u);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F87u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 09 22 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F87u,4u,0x7Eu,0x8F8Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2209u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F8Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F8Bu,2u,0x00u,0x8F8Du);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F8Du:
    if(m==1u&&x==0u&&e==0u){ /* 8F 16 22 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F8Du,4u,0x7Eu,0x8F91u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2216u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F91u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 17 22 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F91u,4u,0x7Eu,0x8F95u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2217u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F95u:
    if(m==1u&&x==0u&&e==0u){ /* A9 50 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F95u,2u,0x50u,0x8F97u);
      sc_v11_op_lda(r,0x0050u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F97u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 18 22 7E Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F97u,4u,0x7Eu,0x8F9Bu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x7E2218u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F9Bu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F9Bu,2u,0x20u,0x8F9Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F9Du:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F9Du,1u,0x68u,0x8F9Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x018F9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2577; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x018F9Eu,1u,0x60u,0x8F9Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
