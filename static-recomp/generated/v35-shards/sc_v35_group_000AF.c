/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000AF(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x02BC48u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC48u,2u,0x20u,0xBC4Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC48u,2u,0x20u,0xBC4Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC48u,2u,0x20u,0xBC4Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC48u,2u,0x20u,0xBC4Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC4Au:
    if(m==0u&&x==1u&&e==0u){ /* 64 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC4Au,2u,0x16u,0xBC4Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x16u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 64 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC4Au,2u,0x16u,0xBC4Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x16u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC4Cu:
    if(m==0u&&x==1u&&e==0u){ /* 64 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC4Cu,2u,0x1Au,0xBC4Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x1Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 64 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC4Cu,2u,0x1Au,0xBC4Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x1Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC4Eu:
    if(m==0u&&x==1u&&e==0u){ /* 64 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC4Eu,2u,0x1Eu,0xBC50u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x1Eu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 64 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC4Eu,2u,0x1Eu,0xBC50u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x1Eu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC50u:
    if(m==0u&&x==1u&&e==0u){ /* 64 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC50u,2u,0x18u,0xBC52u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x18u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 64 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC50u,2u,0x18u,0xBC52u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x18u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC52u:
    if(m==0u&&x==1u&&e==0u){ /* 64 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC52u,2u,0x1Cu,0xBC54u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x1Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 64 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC52u,2u,0x1Cu,0xBC54u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x1Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC54u:
    if(m==0u&&x==1u&&e==0u){ /* 64 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC54u,2u,0x20u,0xBC56u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x20u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 64 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC54u,2u,0x20u,0xBC56u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x20u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC56u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC56u,2u,0x20u,0xBC58u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC56u,2u,0x20u,0xBC58u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC58u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC58u,2u,0x01u,0xBC5Au);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC58u,2u,0x01u,0xBC5Au);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC5Au:
    if(m==1u&&x==1u&&e==0u){ /* 85 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC5Au,2u,0x61u,0xBC5Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x61u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 85 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC5Au,2u,0x61u,0xBC5Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x61u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC5Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC5Cu,2u,0x30u,0xBC5Eu);
      sc_v11_op_lda(r,0x0030u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* A9 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC5Cu,2u,0x30u,0xBC5Eu);
      sc_v11_op_lda(r,0x0030u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC5Eu:
    if(m==1u&&x==1u&&e==0u){ /* 85 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC5Eu,2u,0x64u,0xBC60u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 85 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC5Eu,2u,0x64u,0xBC60u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC60u:
    if(m==1u&&x==1u&&e==0u){ /* A9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC60u,2u,0x04u,0xBC62u);
      sc_v11_op_lda(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* A9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC60u,2u,0x04u,0xBC62u);
      sc_v11_op_lda(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC62u:
    if(m==1u&&x==1u&&e==0u){ /* 85 67 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC62u,2u,0x67u,0xBC64u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x67u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 85 67 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC62u,2u,0x67u,0xBC64u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x67u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC64u:
    if(m==1u&&x==1u&&e==0u){ /* 64 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC64u,2u,0x60u,0xBC66u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 64 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC64u,2u,0x60u,0xBC66u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC66u:
    if(m==1u&&x==1u&&e==0u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC66u,2u,0x14u,0xBC68u);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* A9 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC66u,2u,0x14u,0xBC68u);
      sc_v11_op_lda(r,0x0014u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC68u:
    if(m==1u&&x==1u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC68u,2u,0x68u,0xBC6Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC68u,2u,0x68u,0xBC6Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC6Au:
    if(m==1u&&x==1u&&e==0u){ /* 64 69 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC6Au,2u,0x69u,0xBC6Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 64 69 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC6Au,2u,0x69u,0xBC6Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC6Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC6Cu,2u,0xE0u,0xBC6Eu);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* A9 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC6Cu,2u,0xE0u,0xBC6Eu);
      sc_v11_op_lda(r,0x00E0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC6Eu:
    if(m==1u&&x==1u&&e==0u){ /* 85 6E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC6Eu,2u,0x6Eu,0xBC70u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 85 6E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC6Eu,2u,0x6Eu,0xBC70u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC70u:
    if(m==1u&&x==1u&&e==0u){ /* 64 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC70u,2u,0x6Du,0xBC72u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 64 6D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC70u,2u,0x6Du,0xBC72u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC72u:
    if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC72u,2u,0x08u,0xBC74u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC72u,2u,0x08u,0xBC74u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC74u:
    if(m==1u&&x==1u&&e==0u){ /* C5 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC74u,2u,0x08u,0xBC76u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* C5 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC74u,2u,0x08u,0xBC76u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x08u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC76u:
    if(m==1u&&x==1u&&e==0u){ /* F0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC76u,2u,0x02u,0xBC78u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC7Au;}
      if(c->pc!=0xBC78u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC78u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* F0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC76u,2u,0x02u,0xBC78u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC7Au;}
      if(c->pc!=0xBC78u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC78u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC78u:
    if(m==1u&&x==1u&&e==0u){ /* 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC78u,2u,0x03u,0xBC7Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 85 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC78u,2u,0x03u,0xBC7Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC7Au:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC7Au,2u,0x20u,0xBC7Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC7Au,2u,0x20u,0xBC7Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC7Cu:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC7Cu,2u,0xB3u,0xBC7Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC7Cu,2u,0xB3u,0xBC7Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC7Eu:
    if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC7Eu,2u,0x80u,0xBC80u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC7Eu,2u,0x80u,0xBC80u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC80u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC80u,2u,0xB1u,0xBC82u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC80u,2u,0xB1u,0xBC82u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC82u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC82u,2u,0x20u,0xBC84u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC82u,2u,0x20u,0xBC84u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC84u:
    if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC84u,3u,0x00u,0xBC87u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC84u,2u,0x03u,0xBC86u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC87u:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC87u,2u,0x00u,0xBC89u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBC89u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC89u:
    if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC89u,3u,0x00u,0xBC8Cu);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC8Cu:
    if(m==0u&&x==1u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC8Cu,2u,0x14u,0xBC8Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC8Eu:
    if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC8Eu,1u,0x6Bu,0xBC8Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC8Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC8Fu,2u,0x30u,0xBC91u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC8Fu,2u,0x30u,0xBC91u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC8Fu,2u,0x30u,0xBC91u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC8Fu,2u,0x30u,0xBC91u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC91u:
    if(m==1u&&x==1u&&e==1u){ /* 9C 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC91u,3u,0x02u,0xBC94u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0253u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BC94u:
    if(m==1u&&x==1u&&e==1u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BC94u,2u,0x80u,0xBC96u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD0Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD0Eu,2u,0x30u,0xBD10u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD10u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD10u,2u,0x20u,0xBD12u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD12u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD12u,3u,0x00u,0xBD15u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD15u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD15u,2u,0x00u,0xBD17u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBD17u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD17u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 21 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD17u,3u,0x04u,0xBD1Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0421u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD1Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD1Au,3u,0x00u,0xBD1Du);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD1Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD1Du,3u,0x02u,0xBD20u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD20u:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD20u,3u,0x00u,0xBD23u);
      sc_v11_op_lda(r,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD23u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD23u,3u,0x02u,0xBD26u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD26u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD26u,3u,0x02u,0xBD29u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD29u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD29u,3u,0x00u,0xBD2Cu);
      sc_v11_op_lda(r,0x000Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD2Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD2Cu,3u,0x02u,0xBD2Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD2Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD2Fu,2u,0x20u,0xBD31u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD31u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD31u,3u,0x00u,0xBD34u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD34u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD34u,2u,0x00u,0xBD36u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBD36u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD36u:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD36u,3u,0x00u,0xBD39u);
      sc_v11_op_lda(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD39u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD39u,3u,0x02u,0xBD3Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD3Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD3Cu,2u,0x20u,0xBD3Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD3Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD3Eu,3u,0x00u,0xBD41u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD41u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD41u,2u,0x00u,0xBD43u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBD43u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD43u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD43u,3u,0x00u,0xBD46u);
      sc_v11_op_lda(r,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD46u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD46u,3u,0x02u,0xBD49u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD49u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD49u,2u,0x20u,0xBD4Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD4Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD4Bu,3u,0x00u,0xBD4Eu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD4Eu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD4Eu,2u,0x00u,0xBD50u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBD50u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD50u:
    if(m==0u&&x==0u&&e==0u){ /* A9 2B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD50u,3u,0x00u,0xBD53u);
      sc_v11_op_lda(r,0x002Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD53u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD53u,3u,0x02u,0xBD56u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD56u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD56u,2u,0x20u,0xBD58u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD58u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD58u,3u,0x00u,0xBD5Bu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD5Bu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD5Bu,2u,0x00u,0xBD5Du);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBD5Du))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD5Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 20 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD5Du,3u,0x01u,0xBD60u);
      sc_v11_op_lda(r,0x0120u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD60u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD60u,3u,0x02u,0xBD63u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD63u:
    if(m==0u&&x==0u&&e==0u){ /* A9 70 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD63u,3u,0x00u,0xBD66u);
      sc_v11_op_lda(r,0x0070u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD66u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD66u,3u,0x02u,0xBD69u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD69u:
    if(m==0u&&x==0u&&e==0u){ /* A9 84 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD69u,3u,0x00u,0xBD6Cu);
      sc_v11_op_lda(r,0x0084u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD6Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD6Cu,3u,0x02u,0xBD6Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD6Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 2A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD6Fu,3u,0x00u,0xBD72u);
      sc_v11_op_lda(r,0x002Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD72u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD72u,3u,0x02u,0xBD75u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD75u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD75u,2u,0x20u,0xBD77u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD77u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD77u,3u,0x00u,0xBD7Au);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD7Au:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD7Au,2u,0x00u,0xBD7Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBD7Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD7Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 A4 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD7Cu,3u,0x00u,0xBD7Fu);
      sc_v11_op_lda(r,0x00A4u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD7Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD7Fu,3u,0x02u,0xBD82u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD82u:
    if(m==0u&&x==0u&&e==0u){ /* A9 2A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD82u,3u,0x00u,0xBD85u);
      sc_v11_op_lda(r,0x002Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD85u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD85u,3u,0x02u,0xBD88u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD88u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD88u,2u,0x20u,0xBD8Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD8Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD8Au,3u,0x00u,0xBD8Du);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD8Du:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD8Du,2u,0x00u,0xBD8Fu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBD8Fu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD8Fu:
    if(m==0u&&x==0u&&e==0u){ /* A5 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD8Fu,2u,0x44u,0xBD91u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x44u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD91u:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD91u,3u,0x00u,0xBD94u);
      sc_v11_op_and(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD94u:
    if(m==0u&&x==0u&&e==0u){ /* F0 73 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD94u,2u,0x73u,0xBD96u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBE09u;}
      if(c->pc!=0xBD96u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBD96u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD96u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD96u,2u,0x20u,0xBD98u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD98u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD98u,2u,0x10u,0xBD9Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD9Au:
    if(m==1u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD9Au,1u,0x8Bu,0xBD9Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD9Bu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD9Bu,2u,0x00u,0xBD9Du);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD9Du:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD9Du,1u,0x48u,0xBD9Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD9Eu:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD9Eu,1u,0xABu,0xBD9Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BD9Fu:
    if(m==1u&&x==0u&&e==0u){ /* AE 67 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BD9Fu,3u,0x0Bu,0xBDA2u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B67u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDA2u:
    if(m==1u&&x==0u&&e==0u){ /* 86 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDA2u,2u,0x7Fu,0xBDA4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDA4u:
    if(m==1u&&x==0u&&e==0u){ /* 64 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDA4u,2u,0x81u,0xBDA6u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x81u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDA6u:
    if(m==1u&&x==0u&&e==0u){ /* A2 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDA6u,3u,0x00u,0xBDA9u);
      sc_v11_op_ldx(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDA9u:
    if(m==1u&&x==0u&&e==0u){ /* 22 EB 8F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDA9u,4u,0x00u,0xBDADu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xBDACu))return 0;
      c->pbr=0x00u;c->pc=0x8FEBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDADu:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDADu,1u,0xABu,0xBDAEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDADu,1u,0xABu,0xBDAEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDADu,1u,0xABu,0xBDAEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDADu,1u,0xABu,0xBDAEu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDAEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDAEu,2u,0x30u,0xBDB0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDAEu,2u,0x30u,0xBDB0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDAEu,2u,0x30u,0xBDB0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDAEu,2u,0x30u,0xBDB0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDB0u:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDB0u,2u,0x00u,0xBDB2u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDB2u:
    if(m==1u&&x==1u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDB2u,1u,0xBBu,0xBDB3u);
      c->x=(uint16_t)(c->y&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDB3u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDB3u,1u,0x18u,0xBDB4u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDB4u:
    if(m==1u&&x==1u&&e==0u){ /* BF 22 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDB4u,4u,0x7Eu,0xBDB8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2122u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDB8u:
    if(m==1u&&x==1u&&e==0u){ /* 79 7B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDB8u,3u,0x00u,0xBDBBu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x007Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDBBu:
    if(m==1u&&x==1u&&e==0u){ /* 9F 22 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDBBu,4u,0x7Eu,0xBDBFu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2122u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDBFu:
    if(m==1u&&x==1u&&e==0u){ /* BF 26 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDBFu,4u,0x7Eu,0xBDC3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2126u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDC3u:
    if(m==1u&&x==1u&&e==0u){ /* 79 7B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDC3u,3u,0x00u,0xBDC6u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x007Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDC6u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 26 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDC6u,4u,0x7Eu,0xBDCAu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDCAu:
    if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDCAu,1u,0x8Au,0xBDCBu);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDCBu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDCBu,1u,0x18u,0xBDCCu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDCCu:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDCCu,2u,0x08u,0xBDCEu);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDCEu:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDCEu,1u,0xAAu,0xBDCFu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDCFu:
    if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDCFu,1u,0xC8u,0xBDD0u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDD0u:
    if(m==1u&&x==1u&&e==0u){ /* C0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDD0u,2u,0x04u,0xBDD2u);
      sc_v11_op_compare(r,c->y,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDD2u:
    if(m==1u&&x==1u&&e==0u){ /* D0 E0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDD2u,2u,0xE0u,0xBDD4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBDB4u;}
      if(c->pc!=0xBDD4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDD4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDD4u:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDD4u,2u,0x00u,0xBDD6u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDD6u:
    if(m==1u&&x==1u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDD6u,1u,0xBBu,0xBDD7u);
      c->x=(uint16_t)(c->y&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDD7u:
    if(m==1u&&x==1u&&e==0u){ /* AD 6B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDD7u,3u,0x0Bu,0xBDDAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B6Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDDAu:
    if(m==1u&&x==1u&&e==0u){ /* F0 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDDAu,2u,0x4Bu,0xBDDCu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBE27u;}
      if(c->pc!=0xBDDCu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBDDCu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDDCu:
    if(m==1u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDDCu,1u,0x5Au,0xBDDDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDDDu:
    if(m==1u&&x==1u&&e==0u){ /* B9 6C 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDDDu,3u,0x0Bu,0xBDE0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0B6Cu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDE0u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDE0u,1u,0x0Au,0xBDE1u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDE1u:
    if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDE1u,1u,0xA8u,0xBDE2u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDE2u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDE2u,2u,0x20u,0xBDE4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDE4u:
    if(m==0u&&x==1u&&e==0u){ /* B9 00 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDE4u,3u,0xDDu,0xBDE7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDD00u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDE7u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDE7u,3u,0x31u,0xBDEAu);
      sc_v11_op_and(r,0x31FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDEAu:
    if(m==0u&&x==1u&&e==0u){ /* 9F 42 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDEAu,4u,0x7Eu,0xBDEEu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2142u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDEEu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDEEu,1u,0x18u,0xBDEFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDEFu:
    if(m==0u&&x==1u&&e==0u){ /* 69 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDEFu,3u,0x00u,0xBDF2u);
      sc_v11_op_adc(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDF2u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDF2u,3u,0x31u,0xBDF5u);
      sc_v11_op_and(r,0x31FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDF5u:
    if(m==0u&&x==1u&&e==0u){ /* 9F 46 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDF5u,4u,0x7Eu,0xBDF9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2146u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDF9u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDF9u,2u,0x20u,0xBDFBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDFBu:
    if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDFBu,1u,0x8Au,0xBDFCu);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDFCu:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDFCu,1u,0x18u,0xBDFDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDFDu:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDFDu,2u,0x08u,0xBDFFu);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BDFFu:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BDFFu,1u,0xAAu,0xBE00u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE00u:
    if(m==1u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE00u,1u,0x7Au,0xBE01u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE01u:
    if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE01u,1u,0xC8u,0xBE02u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE02u:
    if(m==1u&&x==1u&&e==0u){ /* CC 6B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE02u,3u,0x0Bu,0xBE05u);
      sc_v11_op_compare(r,c->y,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B6Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE05u:
    if(m==1u&&x==1u&&e==0u){ /* D0 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE05u,2u,0xD5u,0xBE07u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBDDCu;}
      if(c->pc!=0xBE07u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE07u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE07u:
    if(m==1u&&x==1u&&e==0u){ /* 80 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE07u,2u,0x1Eu,0xBE09u);
      if(1){c->pc=0xBE27u;}
      if(c->pc!=0xBE09u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE09u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE09u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE09u,3u,0x00u,0xBE0Cu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE0Cu:
    if(m==0u&&x==0u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE0Cu,1u,0xBBu,0xBE0Du);
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE0Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 2C 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE0Du,3u,0x30u,0xBE10u);
      sc_v11_op_lda(r,0x302Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE10u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 22 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE10u,4u,0x7Eu,0xBE14u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2122u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE14u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3C 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE14u,3u,0x30u,0xBE17u);
      sc_v11_op_lda(r,0x303Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE17u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 26 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE17u,4u,0x7Eu,0xBE1Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2126u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE1Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE1Bu,1u,0x8Au,0xBE1Cu);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE1Cu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE1Cu,1u,0x18u,0xBE1Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE1Du:
    if(m==0u&&x==0u&&e==0u){ /* 69 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE1Du,3u,0x00u,0xBE20u);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE20u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE20u,1u,0xAAu,0xBE21u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE21u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE21u,1u,0xC8u,0xBE22u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE22u:
    if(m==0u&&x==0u&&e==0u){ /* C0 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE22u,3u,0x00u,0xBE25u);
      sc_v11_op_compare(r,c->y,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE25u:
    if(m==0u&&x==0u&&e==0u){ /* D0 E6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE25u,2u,0xE6u,0xBE27u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBE0Du;}
      if(c->pc!=0xBE27u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE27u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE27u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE27u,2u,0x30u,0xBE29u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE27u,2u,0x30u,0xBE29u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE29u:
    if(m==0u&&x==0u&&e==0u){ /* A5 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE29u,2u,0x44u,0xBE2Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x44u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE2Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE2Bu,3u,0x00u,0xBE2Eu);
      sc_v11_op_and(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE2Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 73 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE2Eu,2u,0x73u,0xBE30u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBEA3u;}
      if(c->pc!=0xBE30u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE30u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE30u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE30u,2u,0x20u,0xBE32u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE32u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE32u,2u,0x10u,0xBE34u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE34u:
    if(m==1u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE34u,1u,0x8Bu,0xBE35u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE35u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE35u,2u,0x00u,0xBE37u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE37u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE37u,1u,0x48u,0xBE38u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE38u:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE38u,1u,0xABu,0xBE39u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE39u:
    if(m==1u&&x==0u&&e==0u){ /* AE 77 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE39u,3u,0x0Bu,0xBE3Cu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B77u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE3Cu:
    if(m==1u&&x==0u&&e==0u){ /* 86 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE3Cu,2u,0x7Fu,0xBE3Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x7Fu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE3Eu:
    if(m==1u&&x==0u&&e==0u){ /* 64 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE3Eu,2u,0x81u,0xBE40u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x81u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE40u:
    if(m==1u&&x==0u&&e==0u){ /* A2 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE40u,3u,0x00u,0xBE43u);
      sc_v11_op_ldx(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE43u:
    if(m==1u&&x==0u&&e==0u){ /* 22 EB 8F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE43u,4u,0x00u,0xBE47u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xBE46u))return 0;
      c->pbr=0x00u;c->pc=0x8FEBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE47u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE47u,1u,0xABu,0xBE48u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE47u,1u,0xABu,0xBE48u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE47u,1u,0xABu,0xBE48u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE47u,1u,0xABu,0xBE48u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE48u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE48u,2u,0x30u,0xBE4Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE48u,2u,0x30u,0xBE4Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE48u,2u,0x30u,0xBE4Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE48u,2u,0x30u,0xBE4Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE4Au:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE4Au,2u,0x00u,0xBE4Cu);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE4Cu:
    if(m==1u&&x==1u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE4Cu,1u,0xBBu,0xBE4Du);
      c->x=(uint16_t)(c->y&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE4Du:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE4Du,1u,0x18u,0xBE4Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE4Eu:
    if(m==1u&&x==1u&&e==0u){ /* BF 82 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE4Eu,4u,0x7Eu,0xBE52u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2182u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE52u:
    if(m==1u&&x==1u&&e==0u){ /* 79 7B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE52u,3u,0x00u,0xBE55u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x007Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE55u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 82 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE55u,4u,0x7Eu,0xBE59u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2182u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE59u:
    if(m==1u&&x==1u&&e==0u){ /* BF 86 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE59u,4u,0x7Eu,0xBE5Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7E2186u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE5Du:
    if(m==1u&&x==1u&&e==0u){ /* 79 7B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE5Du,3u,0x00u,0xBE60u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x007Bu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE60u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 86 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE60u,4u,0x7Eu,0xBE64u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7E2186u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE64u:
    if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE64u,1u,0x8Au,0xBE65u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE65u:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE65u,2u,0x08u,0xBE67u);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE67u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE67u,1u,0xAAu,0xBE68u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE68u:
    if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE68u,1u,0xC8u,0xBE69u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE69u:
    if(m==1u&&x==1u&&e==0u){ /* C0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE69u,2u,0x04u,0xBE6Bu);
      sc_v11_op_compare(r,c->y,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE6Bu:
    if(m==1u&&x==1u&&e==0u){ /* D0 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE6Bu,2u,0xE1u,0xBE6Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBE4Eu;}
      if(c->pc!=0xBE6Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE6Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE6Du:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE6Du,2u,0x00u,0xBE6Fu);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE6Fu:
    if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE6Fu,2u,0x00u,0xBE71u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE71u:
    if(m==1u&&x==1u&&e==0u){ /* AD 7B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE71u,3u,0x0Bu,0xBE74u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B7Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE74u:
    if(m==1u&&x==1u&&e==0u){ /* F0 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE74u,2u,0x4Bu,0xBE76u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBEC1u;}
      if(c->pc!=0xBE76u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBE76u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE76u:
    if(m==1u&&x==1u&&e==0u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE76u,1u,0x5Au,0xBE77u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE77u:
    if(m==1u&&x==1u&&e==0u){ /* B9 7C 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE77u,3u,0x0Bu,0xBE7Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0x0B7Cu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE7Au:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE7Au,1u,0x0Au,0xBE7Bu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE7Bu:
    if(m==1u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE7Bu,1u,0xA8u,0xBE7Cu);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE7Cu:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE7Cu,2u,0x20u,0xBE7Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE7Eu:
    if(m==0u&&x==1u&&e==0u){ /* B9 00 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE7Eu,3u,0xDDu,0xBE81u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xDD00u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE81u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE81u,3u,0x31u,0xBE84u);
      sc_v11_op_and(r,0x31FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE84u:
    if(m==0u&&x==1u&&e==0u){ /* 9F A2 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE84u,4u,0x7Eu,0xBE88u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E21A2u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE88u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE88u,1u,0x18u,0xBE89u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE89u:
    if(m==0u&&x==1u&&e==0u){ /* 69 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE89u,3u,0x00u,0xBE8Cu);
      sc_v11_op_adc(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE8Cu:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE8Cu,3u,0x31u,0xBE8Fu);
      sc_v11_op_and(r,0x31FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE8Fu:
    if(m==0u&&x==1u&&e==0u){ /* 9F A6 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE8Fu,4u,0x7Eu,0xBE93u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E21A6u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE93u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE93u,2u,0x20u,0xBE95u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE95u:
    if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE95u,1u,0x8Au,0xBE96u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE96u:
    if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE96u,1u,0x18u,0xBE97u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE97u:
    if(m==1u&&x==1u&&e==0u){ /* 69 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE97u,2u,0x08u,0xBE99u);
      sc_v11_op_adc(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE99u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE99u,1u,0xAAu,0xBE9Au);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE9Au:
    if(m==1u&&x==1u&&e==0u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE9Au,1u,0x7Au,0xBE9Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE9Bu:
    if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE9Bu,1u,0xC8u,0xBE9Cu);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE9Cu:
    if(m==1u&&x==1u&&e==0u){ /* CC 7B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE9Cu,3u,0x0Bu,0xBE9Fu);
      sc_v11_op_compare(r,c->y,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B7Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BE9Fu:
    if(m==1u&&x==1u&&e==0u){ /* D0 D5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BE9Fu,2u,0xD5u,0xBEA1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBE76u;}
      if(c->pc!=0xBEA1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEA1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEA1u:
    if(m==1u&&x==1u&&e==0u){ /* 80 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEA1u,2u,0x1Eu,0xBEA3u);
      if(1){c->pc=0xBEC1u;}
      if(c->pc!=0xBEA3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEA3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEA3u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEA3u,3u,0x00u,0xBEA6u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEA6u:
    if(m==0u&&x==0u&&e==0u){ /* BB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEA6u,1u,0xBBu,0xBEA7u);
      c->x=c->y;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEA7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 2C 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEA7u,3u,0x30u,0xBEAAu);
      sc_v11_op_lda(r,0x302Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEAAu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 82 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEAAu,4u,0x7Eu,0xBEAEu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2182u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEAEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 3C 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEAEu,3u,0x30u,0xBEB1u);
      sc_v11_op_lda(r,0x303Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEB1u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 86 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEB1u,4u,0x7Eu,0xBEB5u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2186u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEB5u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEB5u,1u,0x8Au,0xBEB6u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEB6u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEB6u,1u,0x18u,0xBEB7u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEB7u:
    if(m==0u&&x==0u&&e==0u){ /* 69 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEB7u,3u,0x00u,0xBEBAu);
      sc_v11_op_adc(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEBAu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEBAu,1u,0xAAu,0xBEBBu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEBBu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEBBu,1u,0xC8u,0xBEBCu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEBCu:
    if(m==0u&&x==0u&&e==0u){ /* C0 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEBCu,3u,0x00u,0xBEBFu);
      sc_v11_op_compare(r,c->y,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEBFu:
    if(m==0u&&x==0u&&e==0u){ /* D0 E6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEBFu,2u,0xE6u,0xBEC1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBEA7u;}
      if(c->pc!=0xBEC1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEC1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEC1u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEC1u,2u,0x30u,0xBEC3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEC1u,2u,0x30u,0xBEC3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEC3u:
    if(m==0u&&x==0u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEC3u,2u,0x14u,0xBEC5u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEC5u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEC5u,1u,0x6Bu,0xBEC6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEC6u:
    if(m==0u&&x==0u&&e==0u){ /* A5 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEC6u,2u,0xCAu,0xBEC8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xCAu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEC6u,2u,0xCAu,0xBEC8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xCAu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEC6u,2u,0xCAu,0xBEC8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xCAu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEC6u,2u,0xCAu,0xBEC8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xCAu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEC8u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEC8u,3u,0x00u,0xBECBu);
      sc_v11_op_and(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEC8u,3u,0x00u,0xBECBu);
      sc_v11_op_and(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEC8u,2u,0x0Cu,0xBECAu);
      sc_v11_op_and(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEC8u,2u,0x0Cu,0xBECAu);
      sc_v11_op_and(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BECBu:
    if(m==0u&&x==0u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BECBu,2u,0x11u,0xBECDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBEDEu;}
      if(c->pc!=0xBECDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBECDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BECBu,2u,0x11u,0xBECDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBEDEu;}
      if(c->pc!=0xBECDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBECDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BECDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BECDu,2u,0x20u,0xBECFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BECDu,2u,0x20u,0xBECFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BECFu:
    if(m==1u&&x==0u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BECFu,2u,0x07u,0xBED1u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BECFu,2u,0x07u,0xBED1u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BED1u:
    if(m==1u&&x==0u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BED1u,2u,0x06u,0xBED3u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BED1u,2u,0x06u,0xBED3u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BED3u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BED3u,2u,0x20u,0xBED5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BED3u,2u,0x20u,0xBED5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BED5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 21 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BED5u,3u,0x04u,0xBED8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0421u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 21 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BED5u,3u,0x04u,0xBED8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0421u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BED8u:
    if(m==0u&&x==0u&&e==0u){ /* 49 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BED8u,3u,0x00u,0xBEDBu);
      sc_v11_op_eor(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 49 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BED8u,3u,0x00u,0xBEDBu);
      sc_v11_op_eor(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEDBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 21 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEDBu,3u,0x04u,0xBEDEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0421u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 21 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEDBu,3u,0x04u,0xBEDEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0421u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEDEu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEDEu,2u,0x30u,0xBEE0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEDEu,2u,0x30u,0xBEE0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEE0u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 53 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEE0u,3u,0x02u,0xBEE3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0253u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEE3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 32 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEE3u,3u,0x00u,0xBEE6u);
      sc_v11_op_lda(r,0x0032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEE6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5D 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEE6u,3u,0x02u,0xBEE9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEE9u:
    if(m==0u&&x==0u&&e==0u){ /* AE 21 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEE9u,3u,0x04u,0xBEECu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0421u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEECu:
    if(m==0u&&x==0u&&e==0u){ /* BD DD E2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEECu,3u,0xE2u,0xBEEFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xE2DDu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEEFu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEEFu,3u,0x00u,0xBEF2u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEF2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 5F 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEF2u,3u,0x02u,0xBEF5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x025Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEF5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEF5u,3u,0x00u,0xBEF8u);
      sc_v11_op_lda(r,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEF8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 61 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEF8u,3u,0x02u,0xBEFBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0261u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEFBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEFBu,2u,0x20u,0xBEFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BEFDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BEFDu,3u,0x00u,0xBF00u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BF00u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BF00u,2u,0x00u,0xBF02u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xBF02u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x02BF02u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x02BF02u,1u,0x6Bu,0xBF03u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
