/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000EF(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03BC02u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC02u,2u,0x20u,0xBC04u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC02u,2u,0x20u,0xBC04u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC04u:
    if(m==0u&&x==0u&&e==0u){ /* 80 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC04u,2u,0x04u,0xBC06u);
      if(1){c->pc=0xBC0Au;}
      if(c->pc!=0xBC06u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC06u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC04u,2u,0x04u,0xBC06u);
      if(1){c->pc=0xBC0Au;}
      if(c->pc!=0xBC06u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC06u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC06u:
    if(m==0u&&x==0u&&e==0u){ /* C6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC06u,2u,0x00u,0xBC08u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC06u,2u,0x00u,0xBC08u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC08u:
    if(m==0u&&x==0u&&e==0u){ /* D0 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC08u,2u,0xB6u,0xBC0Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBBC0u;}
      if(c->pc!=0xBC0Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC0Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC08u,2u,0xB6u,0xBC0Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBBC0u;}
      if(c->pc!=0xBC0Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC0Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC0Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC0Au,1u,0x60u,0xBC0Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC0Au,1u,0x60u,0xBC0Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC0Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 2C 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC0Bu,3u,0x01u,0xBC0Eu);
      sc_v11_op_lda(r,0x012Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 2C 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC0Bu,3u,0x01u,0xBC0Eu);
      sc_v11_op_lda(r,0x012Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC0Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC0Eu,2u,0x00u,0xBC10u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC0Eu,2u,0x00u,0xBC10u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC10u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC10u,2u,0x30u,0xBC12u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC10u,2u,0x30u,0xBC12u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC12u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9F BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC12u,3u,0xBCu,0xBC15u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC14u))return 0;c->pc=0xBC9Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC15u:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC15u,3u,0x00u,0xBC18u);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC15u,3u,0x00u,0xBC18u);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC15u,2u,0x04u,0xBC17u);
      sc_v11_op_compare(r,c->a,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC15u,2u,0x04u,0xBC17u);
      sc_v11_op_compare(r,c->a,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC18u:
    if(m==0u&&x==0u&&e==0u){ /* 90 74 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC18u,2u,0x74u,0xBC1Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBC8Eu;}
      if(c->pc!=0xBC1Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC1Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 74 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC18u,2u,0x74u,0xBC1Au);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBC8Eu;}
      if(c->pc!=0xBC1Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC1Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC1Au:
    if(m==0u&&x==0u&&e==0u){ /* C9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC1Au,3u,0x00u,0xBC1Du);
      sc_v11_op_compare(r,c->a,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC1Au,3u,0x00u,0xBC1Du);
      sc_v11_op_compare(r,c->a,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC1Du:
    if(m==0u&&x==0u&&e==0u){ /* B0 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC1Du,2u,0x6Fu,0xBC1Fu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBC8Eu;}
      if(c->pc!=0xBC1Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC1Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 6F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC1Du,2u,0x6Fu,0xBC1Fu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBC8Eu;}
      if(c->pc!=0xBC1Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC1Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC1Fu:
    if(m==0u&&x==0u&&e==0u){ /* 64 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC1Fu,2u,0x08u,0xBC21u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC1Fu,2u,0x08u,0xBC21u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC21u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC21u,2u,0x20u,0xBC23u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC21u,2u,0x20u,0xBC23u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC21u,2u,0x20u,0xBC23u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC21u,2u,0x20u,0xBC23u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC23u:
    if(m==1u&&x==0u&&e==0u){ /* A4 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC23u,2u,0x08u,0xBC25u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A4 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC23u,2u,0x08u,0xBC25u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC25u:
    if(m==1u&&x==0u&&e==0u){ /* A5 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC25u,2u,0x05u,0xBC27u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x05u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC25u,2u,0x05u,0xBC27u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x05u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC27u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC27u,1u,0x18u,0xBC28u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC27u,1u,0x18u,0xBC28u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC28u:
    if(m==1u&&x==0u&&e==0u){ /* 79 9B BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC28u,3u,0xBCu,0xBC2Bu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xBC9Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 79 9B BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC28u,3u,0xBCu,0xBC2Bu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xBC9Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC2Bu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC2Bu,2u,0x0Du,0xBC2Du);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC2Bu,2u,0x0Du,0xBC2Du);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Du),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC2Du:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC2Du,1u,0xEBu,0xBC2Eu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC2Du,1u,0xEBu,0xBC2Eu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC2Eu:
    if(m==1u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC2Eu,2u,0x04u,0xBC30u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC2Eu,2u,0x04u,0xBC30u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC30u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC30u,1u,0x18u,0xBC31u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC30u,1u,0x18u,0xBC31u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC31u:
    if(m==1u&&x==0u&&e==0u){ /* 79 97 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC31u,3u,0xBCu,0xBC34u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xBC97u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 79 97 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC31u,3u,0xBCu,0xBC34u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xBC97u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC34u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC34u,2u,0x0Cu,0xBC36u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC34u,2u,0x0Cu,0xBC36u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC36u:
    if(m==1u&&x==0u&&e==0u){ /* 20 20 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC36u,3u,0xB4u,0xBC39u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC38u))return 0;c->pc=0xB420u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 20 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC36u,3u,0xB4u,0xBC39u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC38u))return 0;c->pc=0xB420u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC39u:
    if(m==0u&&x==0u&&e==0u){ /* F0 49 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC39u,2u,0x49u,0xBC3Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC84u;}
      if(c->pc!=0xBC3Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC3Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 49 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC39u,2u,0x49u,0xBC3Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC84u;}
      if(c->pc!=0xBC3Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC3Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 49 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC39u,2u,0x49u,0xBC3Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC84u;}
      if(c->pc!=0xBC3Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC3Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 49 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC39u,2u,0x49u,0xBC3Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC84u;}
      if(c->pc!=0xBC3Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC3Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC3Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC3Bu,2u,0x20u,0xBC3Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC3Bu,2u,0x20u,0xBC3Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC3Bu,2u,0x20u,0xBC3Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC3Bu,2u,0x20u,0xBC3Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC3Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC3Du,2u,0x0Cu,0xBC3Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC3Du,2u,0x0Cu,0xBC3Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC3Fu,3u,0x84u,0xBC42u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC41u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC3Fu,3u,0x84u,0xBC42u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC41u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC42u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC42u,3u,0x03u,0xBC45u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC42u,3u,0x03u,0xBC45u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC42u,2u,0xFFu,0xBC44u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC42u,2u,0xFFu,0xBC44u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC44u:
    if(m==1u&&x==0u&&e==0u){ /* 03 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC44u,2u,0xF0u,0xBC46u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0xF0u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC44u,2u,0xF0u,0xBC46u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0xF0u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC45u:
    if(m==0u&&x==0u&&e==0u){ /* F0 3D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC45u,2u,0x3Du,0xBC47u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC84u;}
      if(c->pc!=0xBC47u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC47u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 3D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC45u,2u,0x3Du,0xBC47u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC84u;}
      if(c->pc!=0xBC47u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC47u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC47u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC47u,1u,0xA8u,0xBC48u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC47u,1u,0xA8u,0xBC48u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC48u:
    if(m==0u&&x==0u&&e==0u){ /* B9 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC48u,3u,0x84u,0xBC4Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC48u,3u,0x84u,0xBC4Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC4Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC4Bu,3u,0x00u,0xBC4Eu);
      sc_v11_op_and(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC4Bu,3u,0x00u,0xBC4Eu);
      sc_v11_op_and(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC4Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 34 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC4Eu,2u,0x34u,0xBC50u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC84u;}
      if(c->pc!=0xBC50u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC50u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 34 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC4Eu,2u,0x34u,0xBC50u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC84u;}
      if(c->pc!=0xBC50u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC50u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC50u:
    if(m==0u&&x==0u&&e==0u){ /* A9 65 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC50u,3u,0x03u,0xBC53u);
      sc_v11_op_lda(r,0x0365u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 65 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC50u,3u,0x03u,0xBC53u);
      sc_v11_op_lda(r,0x0365u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC53u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC53u,4u,0x7Fu,0xBC57u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC53u,4u,0x7Fu,0xBC57u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC57u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC57u,3u,0x00u,0xBC5Au);
      sc_v11_op_lda(r,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 3C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC57u,3u,0x00u,0xBC5Au);
      sc_v11_op_lda(r,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC5Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 11 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC5Au,3u,0x0Cu,0xBC5Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C11u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 11 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC5Au,3u,0x0Cu,0xBC5Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C11u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC5Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC5Du,2u,0x20u,0xBC5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC5Du,2u,0x20u,0xBC5Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC5Fu:
    if(m==1u&&x==0u&&e==0u){ /* A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC5Fu,2u,0x0Cu,0xBC61u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC5Fu,2u,0x0Cu,0xBC61u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC61u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC61u,3u,0x04u,0xBC64u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0400u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC61u,3u,0x04u,0xBC64u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0400u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC64u:
    if(m==1u&&x==0u&&e==0u){ /* A5 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC64u,2u,0x0Du,0xBC66u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Du)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC64u,2u,0x0Du,0xBC66u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Du)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC66u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC66u,3u,0x04u,0xBC69u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0402u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC66u,3u,0x04u,0xBC69u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0402u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC69u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC69u,2u,0x20u,0xBC6Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC69u,2u,0x20u,0xBC6Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC6Bu:
    if(m==0u&&x==0u&&e==0u){ /* EE FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC6Bu,3u,0x03u,0xBC6Eu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x03FEu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC6Bu,3u,0x03u,0xBC6Eu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x03FEu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC6Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 21 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC6Eu,3u,0x00u,0xBC71u);
      sc_v11_op_lda(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 21 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC6Eu,3u,0x00u,0xBC71u);
      sc_v11_op_lda(r,0x0021u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC71u:
    if(m==0u&&x==0u&&e==0u){ /* 20 04 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC71u,3u,0xBEu,0xBC74u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC73u))return 0;c->pc=0xBE04u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 04 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC71u,3u,0xBEu,0xBC74u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC73u))return 0;c->pc=0xBE04u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC74u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC74u,3u,0x00u,0xBC77u);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC74u,3u,0x00u,0xBC77u);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC74u,2u,0x0Cu,0xBC76u);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC74u,2u,0x0Cu,0xBC76u);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC77u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC77u,3u,0xC4u,0xBC7Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC79u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC77u,3u,0xC4u,0xBC7Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBC79u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC7Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC7Au,2u,0x20u,0xBC7Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC7Au,2u,0x20u,0xBC7Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC7Au,2u,0x20u,0xBC7Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC7Au,2u,0x20u,0xBC7Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC7Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC7Cu,2u,0x24u,0xBC7Eu);
      sc_v11_op_lda(r,0x0024u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC7Cu,2u,0x24u,0xBC7Eu);
      sc_v11_op_lda(r,0x0024u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC7Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC7Eu,3u,0x00u,0xBC81u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC7Eu,3u,0x00u,0xBC81u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC81u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC81u,2u,0x20u,0xBC83u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC81u,2u,0x20u,0xBC83u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC81u,2u,0x20u,0xBC83u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC81u,2u,0x20u,0xBC83u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC83u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC83u,1u,0x60u,0xBC84u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC83u,1u,0x60u,0xBC84u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC84u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC84u,2u,0x20u,0xBC86u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC84u,2u,0x20u,0xBC86u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC84u,2u,0x20u,0xBC86u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC84u,2u,0x20u,0xBC86u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC86u:
    if(m==1u&&x==0u&&e==0u){ /* E6 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC86u,2u,0x08u,0xBC88u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x08u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC86u,2u,0x08u,0xBC88u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x08u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC88u:
    if(m==1u&&x==0u&&e==0u){ /* A5 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC88u,2u,0x08u,0xBC8Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC88u,2u,0x08u,0xBC8Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC8Au:
    if(m==1u&&x==0u&&e==0u){ /* C9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC8Au,2u,0x04u,0xBC8Cu);
      sc_v11_op_compare(r,c->a,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC8Au,2u,0x04u,0xBC8Cu);
      sc_v11_op_compare(r,c->a,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC8Cu:
    if(m==1u&&x==0u&&e==0u){ /* D0 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC8Cu,2u,0x93u,0xBC8Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC21u;}
      if(c->pc!=0xBC8Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC8Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC8Cu,2u,0x93u,0xBC8Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC21u;}
      if(c->pc!=0xBC8Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC8Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC8Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC8Eu,2u,0x20u,0xBC90u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC8Eu,2u,0x20u,0xBC90u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC8Eu,2u,0x20u,0xBC90u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC8Eu,2u,0x20u,0xBC90u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC90u:
    if(m==0u&&x==0u&&e==0u){ /* C6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC90u,2u,0x00u,0xBC92u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC90u,2u,0x00u,0xBC92u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC92u:
    if(m==0u&&x==0u&&e==0u){ /* F0 ED ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC92u,2u,0xEDu,0xBC94u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC81u;}
      if(c->pc!=0xBC94u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC94u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 ED ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC92u,2u,0xEDu,0xBC94u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC81u;}
      if(c->pc!=0xBC94u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC94u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC94u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 10 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC94u,3u,0xBCu,0xBC97u);
      c->pc=0xBC10u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 10 BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC94u,3u,0xBCu,0xBC97u);
      c->pc=0xBC10u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BC9Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 77 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC9Fu,3u,0x00u,0xBCA2u);
      sc_v11_op_lda(r,0x0077u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 77 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC9Fu,3u,0x00u,0xBCA2u);
      sc_v11_op_lda(r,0x0077u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 77 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC9Fu,2u,0x77u,0xBCA1u);
      sc_v11_op_lda(r,0x0077u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 77 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BC9Fu,2u,0x77u,0xBCA1u);
      sc_v11_op_lda(r,0x0077u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCA2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCA2u,3u,0x90u,0xBCA5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCA4u))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 35 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCA2u,3u,0x90u,0xBCA5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCA4u))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCA5u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCA5u,2u,0x04u,0xBCA7u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCA5u,2u,0x04u,0xBCA7u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCA5u,2u,0x04u,0xBCA7u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCA5u,2u,0x04u,0xBCA7u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCA7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 63 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCA7u,3u,0x00u,0xBCAAu);
      sc_v11_op_lda(r,0x0063u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 63 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCA7u,3u,0x00u,0xBCAAu);
      sc_v11_op_lda(r,0x0063u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCA7u,2u,0x63u,0xBCA9u);
      sc_v11_op_lda(r,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCA7u,2u,0x63u,0xBCA9u);
      sc_v11_op_lda(r,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCAAu:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCAAu,3u,0x90u,0xBCADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCACu))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 35 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCAAu,3u,0x90u,0xBCADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCACu))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCADu:
    if(m==0u&&x==0u&&e==0u){ /* 85 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCADu,2u,0x05u,0xBCAFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x05u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCADu,2u,0x05u,0xBCAFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x05u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCADu,2u,0x05u,0xBCAFu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x05u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCADu,2u,0x05u,0xBCAFu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x05u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCAFu:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCAFu,2u,0x04u,0xBCB1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCAFu,2u,0x04u,0xBCB1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCAFu,2u,0x04u,0xBCB1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCAFu,2u,0x04u,0xBCB1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCB1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB1u,3u,0x84u,0xBCB4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB3u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB1u,3u,0x84u,0xBCB4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB3u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB1u,3u,0x84u,0xBCB4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB3u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB1u,3u,0x84u,0xBCB4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCB3u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCB4u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB4u,3u,0x03u,0xBCB7u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB4u,3u,0x03u,0xBCB7u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB4u,2u,0xFFu,0xBCB6u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB4u,2u,0xFFu,0xBCB6u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCB6u:
    if(m==1u&&x==0u&&e==0u){ /* 03 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB6u,2u,0x60u,0xBCB8u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x60u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB6u,2u,0x60u,0xBCB8u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x60u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCB7u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB7u,1u,0x60u,0xBCB8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB7u,1u,0x60u,0xBCB8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCB8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB8u,2u,0x30u,0xBCBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB8u,2u,0x30u,0xBCBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCB8u,2u,0x30u,0xBCBAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCBAu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCBAu,3u,0x00u,0xBCBDu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCBDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCBDu,3u,0x0Bu,0xBCC0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B01u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCC0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCC0u,2u,0x2Eu,0xBCC2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCF0u;}
      if(c->pc!=0xBCC2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCC2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCC2u:
    if(m==0u&&x==0u&&e==0u){ /* EE 01 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCC2u,3u,0x0Bu,0xBCC5u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B01u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCC5u:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCC5u,3u,0x0Au,0xBCC8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCC8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 FB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCC8u,2u,0xFBu,0xBCCAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCC5u;}
      if(c->pc!=0xBCCAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCCAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCCAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCCAu,3u,0x01u,0xBCCDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCCDu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCCDu,2u,0xF6u,0xBCCFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCC5u;}
      if(c->pc!=0xBCCFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCCFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCCFu:
    if(m==0u&&x==0u&&e==0u){ /* B9 3B BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCCFu,3u,0xBDu,0xBCD2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xBD3Bu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCD2u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCD2u,3u,0x00u,0xBCD5u);
      sc_v11_op_compare(r,c->a,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCD5u:
    if(m==0u&&x==0u&&e==0u){ /* F0 54 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCD5u,2u,0x54u,0xBCD7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBD2Bu;}
      if(c->pc!=0xBCD7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCD7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCD7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCD7u,3u,0x0Au,0xBCDAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCDAu:
    if(m==0u&&x==0u&&e==0u){ /* B9 4F BD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCDAu,3u,0xBDu,0xBCDDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xBD4Fu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCDDu:
    if(m==0u&&x==0u&&e==0u){ /* 8D F7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCDDu,3u,0x0Au,0xBCE0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCE0u:
    if(m==0u&&x==0u&&e==0u){ /* 9C F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCE0u,3u,0x0Au,0xBCE3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCE3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCE3u,3u,0x80u,0xBCE6u);
      sc_v11_op_lda(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCE6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCE6u,3u,0x0Au,0xBCE9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AEFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCE9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCE9u,3u,0x0Au,0xBCECu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCECu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCECu,1u,0xC8u,0xBCEDu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCEDu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCEDu,1u,0xC8u,0xBCEEu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCEEu:
    if(m==0u&&x==0u&&e==0u){ /* 80 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCEEu,2u,0xD5u,0xBCF0u);
      if(1){c->pc=0xBCC5u;}
      if(c->pc!=0xBCF0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCF0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCF0u:
    if(m==0u&&x==0u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCF0u,1u,0x5Au,0xBCF1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCF0u,1u,0x5Au,0xBCF1u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCF1u:
    if(m==0u&&x==0u&&e==0u){ /* AD EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCF1u,3u,0x0Au,0xBCF4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCF1u,3u,0x0Au,0xBCF4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AEFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCF4u:
    if(m==0u&&x==0u&&e==0u){ /* D0 FB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCF4u,2u,0xFBu,0xBCF6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCF1u;}
      if(c->pc!=0xBCF6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCF6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 FB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCF4u,2u,0xFBu,0xBCF6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCF1u;}
      if(c->pc!=0xBCF6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCF6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCF6u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCF6u,3u,0x01u,0xBCF9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCF6u,3u,0x01u,0xBCF9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCF9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCF9u,2u,0xF6u,0xBCFBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCF1u;}
      if(c->pc!=0xBCFBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCFBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCF9u,2u,0xF6u,0xBCFBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBCF1u;}
      if(c->pc!=0xBCFBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCFBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCFBu:
    if(m==0u&&x==0u&&e==0u){ /* C0 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCFBu,3u,0x00u,0xBCFEu);
      sc_v11_op_compare(r,c->y,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCFBu,2u,0x03u,0xBCFDu);
      sc_v11_op_compare(r,c->y,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BCFEu:
    if(m==0u&&x==0u&&e==0u){ /* F0 2A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BCFEu,2u,0x2Au,0xBD00u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBD2Au;}
      if(c->pc!=0xBD00u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBD00u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD00u:
    if(m==0u&&x==0u&&e==0u){ /* A9 50 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD00u,3u,0x00u,0xBD03u);
      sc_v11_op_lda(r,0x0050u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD03u:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD03u,3u,0x90u,0xBD06u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD05u))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD06u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD06u,1u,0x18u,0xBD07u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD06u,1u,0x18u,0xBD07u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD06u,1u,0x18u,0xBD07u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD06u,1u,0x18u,0xBD07u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD07u:
    if(m==0u&&x==0u&&e==0u){ /* 69 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD07u,3u,0x00u,0xBD0Au);
      sc_v11_op_adc(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD07u,3u,0x00u,0xBD0Au);
      sc_v11_op_adc(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD07u,2u,0x14u,0xBD09u);
      sc_v11_op_adc(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD07u,2u,0x14u,0xBD09u);
      sc_v11_op_adc(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD0Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D F9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD0Au,3u,0x0Au,0xBD0Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D F9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD0Au,3u,0x0Au,0xBD0Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD0Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 3C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD0Du,3u,0x00u,0xBD10u);
      sc_v11_op_lda(r,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 3C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD0Du,3u,0x00u,0xBD10u);
      sc_v11_op_lda(r,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD10u:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD10u,3u,0x90u,0xBD13u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD12u))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 35 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD10u,3u,0x90u,0xBD13u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD12u))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD13u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD13u,1u,0x18u,0xBD14u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD13u,1u,0x18u,0xBD14u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD13u,1u,0x18u,0xBD14u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD13u,1u,0x18u,0xBD14u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD14u:
    if(m==0u&&x==0u&&e==0u){ /* 69 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD14u,3u,0x00u,0xBD17u);
      sc_v11_op_adc(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD14u,3u,0x00u,0xBD17u);
      sc_v11_op_adc(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD14u,2u,0x14u,0xBD16u);
      sc_v11_op_adc(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD14u,2u,0x14u,0xBD16u);
      sc_v11_op_adc(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD17u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD17u,3u,0x0Au,0xBD1Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D F7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD17u,3u,0x0Au,0xBD1Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD1Au:
    if(m==0u&&x==0u&&e==0u){ /* 9C F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD1Au,3u,0x0Au,0xBD1Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C F5 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD1Au,3u,0x0Au,0xBD1Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF5u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD1Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD1Du,3u,0x80u,0xBD20u);
      sc_v11_op_lda(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD1Du,3u,0x80u,0xBD20u);
      sc_v11_op_lda(r,0x8000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD20u:
    if(m==0u&&x==0u&&e==0u){ /* 8D EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD20u,3u,0x0Au,0xBD23u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AEFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D EF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD20u,3u,0x0Au,0xBD23u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AEFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD23u:
    if(m==0u&&x==0u&&e==0u){ /* 8D F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD23u,3u,0x0Au,0xBD26u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD23u,3u,0x0Au,0xBD26u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD26u:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD26u,1u,0x7Au,0xBD27u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD26u,1u,0x7Au,0xBD27u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD27u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD27u,1u,0xC8u,0xBD28u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD27u,1u,0xC8u,0xBD28u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD28u:
    if(m==0u&&x==0u&&e==0u){ /* 80 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD28u,2u,0xC6u,0xBD2Au);
      if(1){c->pc=0xBCF0u;}
      if(c->pc!=0xBD2Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBD2Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD28u,2u,0xC6u,0xBD2Au);
      if(1){c->pc=0xBCF0u;}
      if(c->pc!=0xBD2Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBD2Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD2Au:
    if(m==0u&&x==0u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD2Au,1u,0x7Au,0xBD2Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD2Bu,3u,0x0Au,0xBD2Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AF1u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD2Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD2Eu,3u,0x00u,0xBD31u);
      sc_v11_op_lda(r,0x0030u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD31u:
    if(m==0u&&x==0u&&e==0u){ /* 20 04 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD31u,3u,0xBEu,0xBD34u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD33u))return 0;c->pc=0xBE04u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD34u:
    if(m==0u&&x==0u&&e==0u){ /* A9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD34u,3u,0x00u,0xBD37u);
      sc_v11_op_lda(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD34u,3u,0x00u,0xBD37u);
      sc_v11_op_lda(r,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD34u,2u,0x14u,0xBD36u);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD34u,2u,0x14u,0xBD36u);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD37u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD37u,3u,0xC4u,0xBD3Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD39u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD37u,3u,0xC4u,0xBD3Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD39u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD3Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD3Au,1u,0x60u,0xBD3Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD3Au,1u,0x60u,0xBD3Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD3Au,1u,0x60u,0xBD3Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD3Au,1u,0x60u,0xBD3Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD61u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD61u,2u,0x20u,0xBD63u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD61u,2u,0x20u,0xBD63u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD61u,2u,0x20u,0xBD63u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD63u:
    if(m==0u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD63u,1u,0x0Bu,0xBD64u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD63u,1u,0x0Bu,0xBD64u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD64u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD64u,1u,0x48u,0xBD65u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD64u,1u,0x48u,0xBD65u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD65u:
    if(m==0u&&x==0u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD65u,1u,0x7Bu,0xBD66u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD65u,1u,0x7Bu,0xBD66u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD66u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD66u,1u,0x38u,0xBD67u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD66u,1u,0x38u,0xBD67u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD67u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD67u,3u,0x00u,0xBD6Au);
      sc_v11_op_sbc(r,0x000Cu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD67u,3u,0x00u,0xBD6Au);
      sc_v11_op_sbc(r,0x000Cu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD6Au:
    if(m==0u&&x==0u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD6Au,1u,0x5Bu,0xBD6Bu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD6Au,1u,0x5Bu,0xBD6Bu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD6Bu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD6Bu,1u,0x68u,0xBD6Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD6Bu,1u,0x68u,0xBD6Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD6Cu:
    if(m==0u&&x==0u&&e==0u){ /* AE 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD6Cu,3u,0x0Bu,0xBD6Fu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AE 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD6Cu,3u,0x0Bu,0xBD6Fu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD6Fu:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD6Fu,1u,0xDAu,0xBD70u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD6Fu,1u,0xDAu,0xBD70u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD70u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD70u,2u,0x00u,0xBD72u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD70u,2u,0x00u,0xBD72u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD72u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD72u,3u,0x0Bu,0xBD75u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD72u,3u,0x0Bu,0xBD75u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD75u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9F A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD75u,3u,0xA8u,0xBD78u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD77u))return 0;c->pc=0xA89Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9F A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD75u,3u,0xA8u,0xBD78u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD77u))return 0;c->pc=0xA89Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD78u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD78u,1u,0xFAu,0xBD79u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD78u,1u,0xFAu,0xBD79u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD78u,1u,0xFAu,0xBD79u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD78u,1u,0xFAu,0xBD79u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD79u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD79u,3u,0x0Bu,0xBD7Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8E 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD79u,3u,0x0Bu,0xBD7Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8E 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD79u,3u,0x0Bu,0xBD7Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8E 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD79u,3u,0x0Bu,0xBD7Cu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD7Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 C8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD7Cu,3u,0x00u,0xBD7Fu);
      sc_v11_op_lda(r,0x00C8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 C8 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD7Cu,3u,0x00u,0xBD7Fu);
      sc_v11_op_lda(r,0x00C8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD7Cu,2u,0xC8u,0xBD7Eu);
      sc_v11_op_lda(r,0x00C8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD7Cu,2u,0xC8u,0xBD7Eu);
      sc_v11_op_lda(r,0x00C8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD7Fu,2u,0x08u,0xBD81u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD7Fu,2u,0x08u,0xBD81u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD81u:
    if(m==0u&&x==0u&&e==0u){ /* A9 28 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD81u,3u,0x00u,0xBD84u);
      sc_v11_op_lda(r,0x0028u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 28 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD81u,3u,0x00u,0xBD84u);
      sc_v11_op_lda(r,0x0028u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD84u:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD84u,3u,0x90u,0xBD87u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD86u))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 35 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD84u,3u,0x90u,0xBD87u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD86u))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD87u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD87u,2u,0x20u,0xBD89u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD87u,2u,0x20u,0xBD89u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD87u,2u,0x20u,0xBD89u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD87u,2u,0x20u,0xBD89u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD89u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD89u,1u,0x18u,0xBD8Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD89u,1u,0x18u,0xBD8Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD8Au:
    if(m==1u&&x==0u&&e==0u){ /* 65 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD8Au,2u,0x00u,0xBD8Cu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 65 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD8Au,2u,0x00u,0xBD8Cu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD8Cu:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD8Cu,1u,0x38u,0xBD8Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD8Cu,1u,0x38u,0xBD8Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD8Du:
    if(m==1u&&x==0u&&e==0u){ /* E9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD8Du,2u,0x14u,0xBD8Fu);
      sc_v11_op_sbc(r,0x0014u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD8Du,2u,0x14u,0xBD8Fu);
      sc_v11_op_sbc(r,0x0014u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD8Fu:
    if(m==1u&&x==0u&&e==0u){ /* 85 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD8Fu,2u,0x02u,0xBD91u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x02u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD8Fu,2u,0x02u,0xBD91u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x02u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD91u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD91u,2u,0x20u,0xBD93u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD91u,2u,0x20u,0xBD93u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD93u:
    if(m==0u&&x==0u&&e==0u){ /* A9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD93u,3u,0x00u,0xBD96u);
      sc_v11_op_lda(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD93u,3u,0x00u,0xBD96u);
      sc_v11_op_lda(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD96u:
    if(m==0u&&x==0u&&e==0u){ /* 20 35 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD96u,3u,0x90u,0xBD99u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD98u))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 35 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD96u,3u,0x90u,0xBD99u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD98u))return 0;c->pc=0x9035u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD99u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD99u,2u,0x20u,0xBD9Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD99u,2u,0x20u,0xBD9Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD99u,2u,0x20u,0xBD9Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD99u,2u,0x20u,0xBD9Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD9Bu:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD9Bu,1u,0x18u,0xBD9Cu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD9Bu,1u,0x18u,0xBD9Cu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD9Cu:
    if(m==1u&&x==0u&&e==0u){ /* 65 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD9Cu,2u,0x01u,0xBD9Eu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x01u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 65 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD9Cu,2u,0x01u,0xBD9Eu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x01u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD9Eu:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD9Eu,1u,0x38u,0xBD9Fu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD9Eu,1u,0x38u,0xBD9Fu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BD9Fu:
    if(m==1u&&x==0u&&e==0u){ /* E9 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD9Fu,2u,0x0Fu,0xBDA1u);
      sc_v11_op_sbc(r,0x000Fu,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E9 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BD9Fu,2u,0x0Fu,0xBDA1u);
      sc_v11_op_sbc(r,0x000Fu,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDA1u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDA1u,1u,0xEBu,0xBDA2u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDA1u,1u,0xEBu,0xBDA2u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDA2u:
    if(m==1u&&x==0u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDA2u,2u,0x02u,0xBDA4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDA2u,2u,0x02u,0xBDA4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDA4u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDA4u,2u,0x20u,0xBDA6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDA4u,2u,0x20u,0xBDA6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDA6u:
    if(m==0u&&x==0u&&e==0u){ /* 85 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDA6u,2u,0x02u,0xBDA8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDA6u,2u,0x02u,0xBDA8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDA8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDA8u,2u,0x20u,0xBDAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDA8u,2u,0x20u,0xBDAAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDAAu:
    if(m==1u&&x==0u&&e==0u){ /* 20 20 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDAAu,3u,0xB4u,0xBDADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBDACu))return 0;c->pc=0xB420u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 20 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDAAu,3u,0xB4u,0xBDADu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBDACu))return 0;c->pc=0xB420u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDADu:
    if(m==0u&&x==0u&&e==0u){ /* F0 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDADu,2u,0x27u,0xBDAFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBDD6u;}
      if(c->pc!=0xBDAFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDAFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDADu,2u,0x27u,0xBDAFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBDD6u;}
      if(c->pc!=0xBDAFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDAFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDADu,2u,0x27u,0xBDAFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBDD6u;}
      if(c->pc!=0xBDAFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDAFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDADu,2u,0x27u,0xBDAFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBDD6u;}
      if(c->pc!=0xBDAFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDAFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDAFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDAFu,2u,0x20u,0xBDB1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDAFu,2u,0x20u,0xBDB1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDAFu,2u,0x20u,0xBDB1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDAFu,2u,0x20u,0xBDB1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDB1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDB1u,2u,0x02u,0xBDB3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDB1u,2u,0x02u,0xBDB3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDB3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDB3u,3u,0x84u,0xBDB6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBDB5u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDB3u,3u,0x84u,0xBDB6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBDB5u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDB6u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDB6u,3u,0x03u,0xBDB9u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDB6u,3u,0x03u,0xBDB9u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDB6u,2u,0xFFu,0xBDB8u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDB6u,2u,0xFFu,0xBDB8u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDB8u:
    if(m==1u&&x==0u&&e==0u){ /* 03 A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDB8u,2u,0xA8u,0xBDBAu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0xA8u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDB8u,2u,0xA8u,0xBDBAu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0xA8u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDB9u:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDB9u,1u,0xA8u,0xBDBAu);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDB9u,1u,0xA8u,0xBDBAu);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDBAu:
    if(m==0u&&x==0u&&e==0u){ /* B9 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDBAu,3u,0x84u,0xBDBDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDBAu,3u,0x84u,0xBDBDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B9 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDBAu,3u,0x84u,0xBDBDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x84EBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B9 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDBAu,3u,0x84u,0xBDBDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x84EBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDBDu:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDBDu,3u,0x00u,0xBDC0u);
      sc_v11_op_and(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDBDu,3u,0x00u,0xBDC0u);
      sc_v11_op_and(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDBDu,2u,0x01u,0xBDBFu);
      sc_v11_op_and(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDBDu,2u,0x01u,0xBDBFu);
      sc_v11_op_and(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDC0u:
    if(m==0u&&x==0u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDC0u,2u,0x14u,0xBDC2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBDD6u;}
      if(c->pc!=0xBDC2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDC2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDC0u,2u,0x14u,0xBDC2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBDD6u;}
      if(c->pc!=0xBDC2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDC2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDC2u:
    if(m==0u&&x==0u&&e==0u){ /* B9 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDC2u,3u,0x84u,0xBDC5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDC2u,3u,0x84u,0xBDC5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDC5u:
    if(m==0u&&x==0u&&e==0u){ /* 29 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDC5u,3u,0x00u,0xBDC8u);
      sc_v11_op_and(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDC5u,3u,0x00u,0xBDC8u);
      sc_v11_op_and(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDC8u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDC8u,2u,0x0Cu,0xBDCAu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBDD6u;}
      if(c->pc!=0xBDCAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDCAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDC8u,2u,0x0Cu,0xBDCAu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBDD6u;}
      if(c->pc!=0xBDCAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDCAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDCAu:
    if(m==0u&&x==0u&&e==0u){ /* C0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDCAu,3u,0x00u,0xBDCDu);
      sc_v11_op_compare(r,c->y,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDCAu,2u,0x00u,0xBDCCu);
      sc_v11_op_compare(r,c->y,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDCDu:
    if(m==0u&&x==0u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDCDu,2u,0x07u,0xBDCFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBDD6u;}
      if(c->pc!=0xBDCFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDCFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDCFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 64 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDCFu,3u,0x03u,0xBDD2u);
      sc_v11_op_lda(r,0x0364u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDD2u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDD2u,4u,0x7Fu,0xBDD6u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDD6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDD6u,2u,0x20u,0xBDD8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDD6u,2u,0x20u,0xBDD8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDD6u,2u,0x20u,0xBDD8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDD6u,2u,0x20u,0xBDD8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDD8u:
    if(m==0u&&x==0u&&e==0u){ /* C6 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDD8u,2u,0x08u,0xBDDAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x08u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C6 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDD8u,2u,0x08u,0xBDDAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x08u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDDAu:
    if(m==0u&&x==0u&&e==0u){ /* D0 A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDDAu,2u,0xA5u,0xBDDCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBD81u;}
      if(c->pc!=0xBDDCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDDCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDDAu,2u,0xA5u,0xBDDCu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBD81u;}
      if(c->pc!=0xBDDCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDDCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDDCu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDDCu,2u,0x20u,0xBDDEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDDCu,2u,0x20u,0xBDDEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDDEu:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDDEu,2u,0x00u,0xBDE0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDDEu,2u,0x00u,0xBDE0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDE0u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDE0u,3u,0x04u,0xBDE3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0400u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDE0u,3u,0x04u,0xBDE3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0400u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDE3u:
    if(m==1u&&x==0u&&e==0u){ /* A5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDE3u,2u,0x01u,0xBDE5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x01u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDE3u,2u,0x01u,0xBDE5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x01u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDE5u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDE5u,3u,0x04u,0xBDE8u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0402u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDE5u,3u,0x04u,0xBDE8u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0402u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDE8u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDE8u,2u,0x20u,0xBDEAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDE8u,2u,0x20u,0xBDEAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDEAu:
    if(m==0u&&x==0u&&e==0u){ /* EE FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDEAu,3u,0x03u,0xBDEDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x03FEu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDEAu,3u,0x03u,0xBDEDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x03FEu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDEDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 24 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDEDu,3u,0x00u,0xBDF0u);
      sc_v11_op_lda(r,0x0024u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 24 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDEDu,3u,0x00u,0xBDF0u);
      sc_v11_op_lda(r,0x0024u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDF0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 04 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDF0u,3u,0xBEu,0xBDF3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBDF2u))return 0;c->pc=0xBE04u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 04 BE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDF0u,3u,0xBEu,0xBDF3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBDF2u))return 0;c->pc=0xBE04u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDF3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDF3u,3u,0x00u,0xBDF6u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDF3u,3u,0x00u,0xBDF6u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDF3u,2u,0x08u,0xBDF5u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDF3u,2u,0x08u,0xBDF5u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDF6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDF6u,3u,0xC4u,0xBDF9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBDF8u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 2A C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDF6u,3u,0xC4u,0xBDF9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBDF8u))return 0;c->pc=0xC42Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDF9u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDF9u,2u,0x20u,0xBDFBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDF9u,2u,0x20u,0xBDFBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDF9u,2u,0x20u,0xBDFBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDF9u,2u,0x20u,0xBDFBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDFBu:
    if(m==1u&&x==0u&&e==0u){ /* A9 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDFBu,2u,0x1Eu,0xBDFDu);
      sc_v11_op_lda(r,0x001Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDFBu,2u,0x1Eu,0xBDFDu);
      sc_v11_op_lda(r,0x001Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BDFDu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDFDu,3u,0x00u,0xBE00u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BDFDu,3u,0x00u,0xBE00u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE00u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE00u,2u,0x20u,0xBE02u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE00u,2u,0x20u,0xBE02u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE02u:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE02u,1u,0x2Bu,0xBE03u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE02u,1u,0x2Bu,0xBE03u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE03u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE03u,1u,0x60u,0xBE04u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE03u,1u,0x60u,0xBE04u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE04u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE04u,2u,0x30u,0xBE06u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE04u,2u,0x30u,0xBE06u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE06u:
    if(m==0u&&x==0u&&e==0u){ /* AC 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE06u,3u,0x03u,0xBE09u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0395u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE09u:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE09u,2u,0x06u,0xBE0Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBE11u;}
      if(c->pc!=0xBE0Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE0Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE0Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE0Bu,3u,0x03u,0xBE0Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0397u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE0Eu:
    if(m==0u&&x==0u&&e==0u){ /* EE 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE0Eu,3u,0x03u,0xBE11u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0395u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE11u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE11u,1u,0x60u,0xBE12u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE12u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE12u,2u,0x30u,0xBE14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE12u,2u,0x30u,0xBE14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE12u,2u,0x30u,0xBE14u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE22u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 0E C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE22u,3u,0xC0u,0xBE25u);
      c->pc=0xC00Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE2Au:
    if(m==0u&&x==0u&&e==0u){ /* 4C F9 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE2Au,3u,0xBFu,0xBE2Du);
      c->pc=0xBFF9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE32u:
    if(m==0u&&x==0u&&e==0u){ /* 4C E4 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE32u,3u,0xBFu,0xBE35u);
      c->pc=0xBFE4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE3Au:
    if(m==0u&&x==0u&&e==0u){ /* 4C CF BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE3Au,3u,0xBFu,0xBE3Du);
      c->pc=0xBFCFu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE42u:
    if(m==0u&&x==0u&&e==0u){ /* 4C C2 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE42u,3u,0xBFu,0xBE45u);
      c->pc=0xBFC2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE4Au:
    if(m==0u&&x==0u&&e==0u){ /* 4C B0 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE4Au,3u,0xBFu,0xBE4Du);
      c->pc=0xBFB0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE52u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 9D BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE52u,3u,0xBFu,0xBE55u);
      c->pc=0xBF9Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE5Au:
    if(m==0u&&x==0u&&e==0u){ /* 4C 7C BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE5Au,3u,0xBFu,0xBE5Du);
      c->pc=0xBF7Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BE62u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 63 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BE62u,3u,0xBFu,0xBE65u);
      c->pc=0xBF63u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEDDu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEDDu,1u,0x0Au,0xBEDEu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEDEu:
    if(m==0u&&x==0u&&e==0u){ /* CD 15 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEDEu,3u,0x0Eu,0xBEE1u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E15u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEE1u:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEE1u,2u,0x06u,0xBEE3u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBEE9u;}
      if(c->pc!=0xBEE3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEE3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEE3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEE3u,3u,0x00u,0xBEE6u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEE6u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEE6u,3u,0xC0u,0xBEE9u);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEF1u:
    if(m==0u&&x==0u&&e==0u){ /* CD 17 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEF1u,3u,0x0Eu,0xBEF4u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E17u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEF4u:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEF4u,2u,0x06u,0xBEF6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBEFCu;}
      if(c->pc!=0xBEF6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEF6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEF6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEF6u,3u,0x00u,0xBEF9u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BEF9u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BEF9u,3u,0xC0u,0xBEFCu);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF04u:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF04u,3u,0x0Cu,0xBF07u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C85u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF07u:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF07u,2u,0x06u,0xBF09u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBF0Fu;}
      if(c->pc!=0xBF09u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF09u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF09u:
    if(m==0u&&x==0u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF09u,3u,0x00u,0xBF0Cu);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF0Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF0Cu,3u,0xC0u,0xBF0Fu);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF1Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 0B 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF1Au,3u,0x0Eu,0xBF1Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF1Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF1Du,2u,0x0Cu,0xBF1Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBF2Bu;}
      if(c->pc!=0xBF1Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF1Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF1Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF1Fu,3u,0x00u,0xBF22u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF22u:
    if(m==0u&&x==0u&&e==0u){ /* 8D B3 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF22u,3u,0x0Bu,0xBF25u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF25u:
    if(m==0u&&x==0u&&e==0u){ /* A9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF25u,3u,0x00u,0xBF28u);
      sc_v11_op_lda(r,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF28u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF28u,3u,0xC0u,0xBF2Bu);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF36u:
    if(m==0u&&x==0u&&e==0u){ /* AD 11 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF36u,3u,0x0Eu,0xBF39u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E11u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF39u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF39u,2u,0x0Cu,0xBF3Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBF47u;}
      if(c->pc!=0xBF3Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF3Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF3Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF3Bu,3u,0x00u,0xBF3Eu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF3Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D B7 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF3Eu,3u,0x0Bu,0xBF41u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF41u:
    if(m==0u&&x==0u&&e==0u){ /* A9 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF41u,3u,0x00u,0xBF44u);
      sc_v11_op_lda(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF44u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF44u,3u,0xC0u,0xBF47u);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF52u:
    if(m==0u&&x==0u&&e==0u){ /* AD 13 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF52u,3u,0x0Eu,0xBF55u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF55u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF55u,2u,0x0Cu,0xBF57u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBF63u;}
      if(c->pc!=0xBF57u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF57u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF57u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF57u,3u,0x00u,0xBF5Au);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF5Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D B5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF5Au,3u,0x0Bu,0xBF5Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BB5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF5Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF5Du,3u,0x00u,0xBF60u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF60u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF60u,3u,0xC0u,0xBF63u);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF6Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF6Bu,3u,0x00u,0xBF6Eu);
      sc_v11_op_lda(r,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF6Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 86 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF6Eu,3u,0xC0u,0xBF71u);
      c->pc=0xC086u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF76u:
    if(m==0u&&x==0u&&e==0u){ /* A9 09 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF76u,3u,0x00u,0xBF79u);
      sc_v11_op_lda(r,0x0009u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF79u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF79u,3u,0xC0u,0xBF7Cu);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF84u:
    if(m==0u&&x==0u&&e==0u){ /* AD 01 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF84u,3u,0x0Cu,0xBF87u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C01u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF87u:
    if(m==0u&&x==0u&&e==0u){ /* C9 78 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF87u,3u,0x00u,0xBF8Au);
      sc_v11_op_compare(r,c->a,0x0078u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF8Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF8Au,2u,0x06u,0xBF8Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBF92u;}
      if(c->pc!=0xBF8Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF8Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF8Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF8Cu,3u,0x00u,0xBF8Fu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 86 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF8Fu,3u,0xC0u,0xBF92u);
      c->pc=0xC086u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF92u:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF92u,3u,0x00u,0xBF95u);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF95u:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF95u,2u,0x06u,0xBF97u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBF9Du;}
      if(c->pc!=0xBF97u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBF97u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF97u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF97u,3u,0x00u,0xBF9Au);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BF9Au:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BF9Au,3u,0xC0u,0xBF9Du);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFA5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 09 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFA5u,3u,0x0Eu,0xBFA8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E09u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFA8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFA8u,2u,0x06u,0xBFAAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBFB0u;}
      if(c->pc!=0xBFAAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFAAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFAAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFAAu,3u,0x00u,0xBFADu);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFADu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 30 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFADu,3u,0xC0u,0xBFB0u);
      c->pc=0xC030u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFB8u:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFB8u,3u,0x0Eu,0xBFBBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E07u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFBBu:
    if(m==0u&&x==0u&&e==0u){ /* D0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFBBu,2u,0x05u,0xBFBDu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBFC2u;}
      if(c->pc!=0xBFBDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFBDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFBDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFBDu,3u,0x00u,0xBFC0u);
      sc_v11_op_lda(r,0x000Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFC0u:
    if(m==0u&&x==0u&&e==0u){ /* 80 6E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFC0u,2u,0x6Eu,0xBFC2u);
      if(1){c->pc=0xC030u;}
      if(c->pc!=0xBFC2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFC2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFCAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFCAu,3u,0x00u,0xBFCDu);
      sc_v11_op_lda(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFCDu:
    if(m==0u&&x==0u&&e==0u){ /* 80 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFCDu,2u,0x61u,0xBFCFu);
      if(1){c->pc=0xC030u;}
      if(c->pc!=0xBFCFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFCFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFD7u:
    if(m==0u&&x==0u&&e==0u){ /* AD 15 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFD7u,3u,0x0Eu,0xBFDAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E15u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFDAu:
    if(m==0u&&x==0u&&e==0u){ /* C9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFDAu,3u,0x00u,0xBFDDu);
      sc_v11_op_compare(r,c->a,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFDDu:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFDDu,2u,0x05u,0xBFDFu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBFE4u;}
      if(c->pc!=0xBFDFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFDFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFDFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFDFu,3u,0x00u,0xBFE2u);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFE2u:
    if(m==0u&&x==0u&&e==0u){ /* 80 4C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFE2u,2u,0x4Cu,0xBFE4u);
      if(1){c->pc=0xC030u;}
      if(c->pc!=0xBFE4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFE4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFECu:
    if(m==0u&&x==0u&&e==0u){ /* AD FB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFECu,3u,0x0Du,0xBFEFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFEFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 14 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFEFu,3u,0x00u,0xBFF2u);
      sc_v11_op_compare(r,c->a,0x0014u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFF2u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFF2u,2u,0x05u,0xBFF4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBFF9u;}
      if(c->pc!=0xBFF4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFF4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFF4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 11 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFF4u,3u,0x00u,0xBFF7u);
      sc_v11_op_lda(r,0x0011u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03BFF7u:
    if(m==0u&&x==0u&&e==0u){ /* 80 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03BFF7u,2u,0x37u,0xBFF9u);
      if(1){c->pc=0xC030u;}
      if(c->pc!=0xBFF9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBFF9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
