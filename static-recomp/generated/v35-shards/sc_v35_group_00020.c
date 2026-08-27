/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00020(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00804Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00804Du,2u,0x12u,0x804Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x12u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00804Du,2u,0x12u,0x804Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x12u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00804Du,2u,0x12u,0x804Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x12u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00804Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00804Fu,2u,0x0Bu,0x8051u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x805Cu;}
      if(c->pc!=0x8051u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8051u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00804Fu,2u,0x0Bu,0x8051u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x805Cu;}
      if(c->pc!=0x8051u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8051u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00804Fu,2u,0x0Bu,0x8051u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x805Cu;}
      if(c->pc!=0x8051u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8051u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008051u:
    if(m==0u&&x==0u&&e==0u){ /* 64 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008051u,2u,0xB7u,0x8053u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xB7u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008051u,2u,0xB7u,0x8053u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xB7u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 64 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008051u,2u,0xB7u,0x8053u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008051u,2u,0xB7u,0x8053u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB7u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008053u:
    if(m==0u&&x==0u&&e==0u){ /* 20 65 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008053u,3u,0x8Du,0x8056u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8055u))return 0;c->pc=0x8D65u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 65 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008053u,3u,0x8Du,0x8056u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8055u))return 0;c->pc=0x8D65u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 65 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008053u,3u,0x8Du,0x8056u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8055u))return 0;c->pc=0x8D65u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 65 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008053u,3u,0x8Du,0x8056u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8055u))return 0;c->pc=0x8D65u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008056u:
    if(m==0u&&x==0u&&e==0u){ /* 22 83 D2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008056u,4u,0x03u,0x805Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8059u))return 0;
      c->pbr=0x03u;c->pc=0xD283u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 83 D2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008056u,4u,0x03u,0x805Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8059u))return 0;
      c->pbr=0x03u;c->pc=0xD283u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 83 D2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008056u,4u,0x03u,0x805Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8059u))return 0;
      c->pbr=0x03u;c->pc=0xD283u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 83 D2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008056u,4u,0x03u,0x805Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8059u))return 0;
      c->pbr=0x03u;c->pc=0xD283u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00805Au:
    if(m==0u&&x==0u&&e==0u){ /* 80 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00805Au,2u,0xF1u,0x805Cu);
      if(1){c->pc=0x804Du;}
      if(c->pc!=0x805Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x805Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00805Au,2u,0xF1u,0x805Cu);
      if(1){c->pc=0x804Du;}
      if(c->pc!=0x805Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x805Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 F1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00805Au,2u,0xF1u,0x805Cu);
      if(1){c->pc=0x804Du;}
      if(c->pc!=0x805Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x805Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00805Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 61 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00805Cu,3u,0x80u,0x805Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x805Eu))return 0;c->pc=0x8061u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 61 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00805Cu,3u,0x80u,0x805Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x805Eu))return 0;c->pc=0x8061u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 61 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00805Cu,3u,0x80u,0x805Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x805Eu))return 0;c->pc=0x8061u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00805Fu:
    if(m==0u&&x==0u&&e==0u){ /* 80 EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00805Fu,2u,0xECu,0x8061u);
      if(1){c->pc=0x804Du;}
      if(c->pc!=0x8061u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8061u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00805Fu,2u,0xECu,0x8061u);
      if(1){c->pc=0x804Du;}
      if(c->pc!=0x8061u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8061u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00805Fu,2u,0xECu,0x8061u);
      if(1){c->pc=0x804Du;}
      if(c->pc!=0x8061u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8061u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 EC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00805Fu,2u,0xECu,0x8061u);
      if(1){c->pc=0x804Du;}
      if(c->pc!=0x8061u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8061u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008061u:
    if(m==0u&&x==0u&&e==0u){ /* 20 88 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008061u,3u,0x82u,0x8064u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8063u))return 0;c->pc=0x8288u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 88 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008061u,3u,0x82u,0x8064u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8063u))return 0;c->pc=0x8288u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 88 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008061u,3u,0x82u,0x8064u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8063u))return 0;c->pc=0x8288u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008064u:
    if(m==0u&&x==0u&&e==0u){ /* 20 90 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008064u,3u,0x86u,0x8067u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8066u))return 0;c->pc=0x8690u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 90 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008064u,3u,0x86u,0x8067u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8066u))return 0;c->pc=0x8690u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 90 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008064u,3u,0x86u,0x8067u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8066u))return 0;c->pc=0x8690u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008067u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008067u,2u,0x20u,0x8069u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008067u,2u,0x20u,0x8069u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008067u,2u,0x20u,0x8069u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008069u:
    if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008069u,3u,0x00u,0x806Cu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00806Cu:
    if(m==0u&&x==1u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00806Cu,2u,0x00u,0x806Eu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x806Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00806Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 5F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00806Eu,3u,0x82u,0x8071u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8070u))return 0;c->pc=0x825Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008071u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008071u,2u,0x20u,0x8073u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008071u,2u,0x20u,0x8073u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008071u,2u,0x20u,0x8073u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008073u:
    if(m==1u&&x==1u&&e==0u){ /* 20 BE 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008073u,3u,0x96u,0x8076u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8075u))return 0;c->pc=0x96BEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008076u:
    if(m==0u&&x==1u&&e==0u){ /* 22 C8 C6 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008076u,4u,0x01u,0x807Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8079u))return 0;
      c->pbr=0x01u;c->pc=0xC6C8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 C8 C6 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008076u,4u,0x01u,0x807Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8079u))return 0;
      c->pbr=0x01u;c->pc=0xC6C8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 C8 C6 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008076u,4u,0x01u,0x807Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x8079u))return 0;
      c->pbr=0x01u;c->pc=0xC6C8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00807Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 1C 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00807Au,3u,0x96u,0x807Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x807Cu))return 0;c->pc=0x961Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 1C 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00807Au,3u,0x96u,0x807Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x807Cu))return 0;c->pc=0x961Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 1C 96 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00807Au,3u,0x96u,0x807Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x807Cu))return 0;c->pc=0x961Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00807Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00807Du,2u,0x20u,0x807Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00807Du,2u,0x20u,0x807Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00807Du,2u,0x20u,0x807Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00807Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00807Fu,3u,0x00u,0x8082u);
      sc_v11_op_lda(r,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008082u:
    if(m==0u&&x==0u&&e==0u){ /* 8D BF 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008082u,3u,0x02u,0x8085u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x02BFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008085u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008085u,2u,0x20u,0x8087u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008087u:
    if(m==1u&&x==0u&&e==0u){ /* AD 95 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008087u,3u,0x01u,0x808Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0195u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00808Au:
    if(m==1u&&x==0u&&e==0u){ /* 29 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00808Au,2u,0x08u,0x808Cu);
      sc_v11_op_and(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00808Cu:
    if(m==1u&&x==0u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00808Cu,2u,0x04u,0x808Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8092u;}
      if(c->pc!=0x808Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x808Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00808Eu:
    if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00808Eu,2u,0x02u,0x8090u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008090u:
    if(m==1u&&x==0u&&e==0u){ /* 80 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008090u,2u,0x02u,0x8092u);
      if(1){c->pc=0x8094u;}
      if(c->pc!=0x8092u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8092u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008092u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008092u,2u,0x01u,0x8094u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008094u:
    if(m==1u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008094u,2u,0x04u,0x8096u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008096u:
    if(m==1u&&x==0u&&e==0u){ /* A9 81 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008096u,2u,0x81u,0x8098u);
      sc_v11_op_lda(r,0x0081u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008098u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008098u,2u,0xB1u,0x809Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00809Au:
    if(m==1u&&x==0u&&e==0u){ /* 85 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00809Au,2u,0xB3u,0x809Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB3u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00809Cu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 00 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00809Cu,3u,0x42u,0x809Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4200u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00809Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00809Fu,2u,0x20u,0x80A1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080A1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080A1u,3u,0x00u,0x80A4u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080A4u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080A4u,2u,0x00u,0x80A6u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x80A6u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080A6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080A6u,2u,0x20u,0x80A8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080A8u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080A8u,3u,0x00u,0x80ABu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080ABu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080ABu,2u,0x00u,0x80ADu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x80ADu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080ADu:
    if(m==0u&&x==0u&&e==0u){ /* 22 07 89 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080ADu,4u,0x01u,0x80B1u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x80B0u))return 0;
      c->pbr=0x01u;c->pc=0x8907u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080B1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080B1u,1u,0x60u,0x80B2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080B1u,1u,0x60u,0x80B2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080B1u,1u,0x60u,0x80B2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080C0u:
    if(m==1u&&x==1u&&e==1u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080C0u,1u,0x68u,0x80C1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080C1u:
    if(m==1u&&x==1u&&e==1u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080C1u,2u,0x30u,0x80C3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080C3u:
    if(m==1u&&x==1u&&e==1u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080C3u,1u,0x0Bu,0x80C4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080C4u:
    if(m==1u&&x==1u&&e==1u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080C4u,1u,0x8Bu,0x80C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080C5u:
    if(m==1u&&x==1u&&e==1u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080C5u,1u,0x48u,0x80C6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080C6u:
    if(m==1u&&x==1u&&e==1u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080C6u,1u,0xDAu,0x80C7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080C7u:
    if(m==1u&&x==1u&&e==1u){ /* 5A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080C7u,1u,0x5Au,0x80C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->y))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080C8u:
    if(m==1u&&x==1u&&e==1u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080C8u,2u,0x00u,0x80CAu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080DDu:
    if(m==0u&&x==1u&&e==0u){ /* 20 28 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080DDu,3u,0x8Cu,0x80E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80DFu))return 0;c->pc=0x8C28u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 28 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080DDu,3u,0x8Cu,0x80E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80DFu))return 0;c->pc=0x8C28u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 28 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080DDu,3u,0x8Cu,0x80E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80DFu))return 0;c->pc=0x8C28u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080E0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 DD 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E0u,3u,0x8Cu,0x80E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E2u))return 0;c->pc=0x8CDDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 DD 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E0u,3u,0x8Cu,0x80E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E2u))return 0;c->pc=0x8CDDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 DD 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E0u,3u,0x8Cu,0x80E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E2u))return 0;c->pc=0x8CDDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080E3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 07 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E3u,3u,0x87u,0x80E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E5u))return 0;c->pc=0x8707u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 07 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E3u,3u,0x87u,0x80E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E5u))return 0;c->pc=0x8707u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 07 87 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E3u,3u,0x87u,0x80E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E5u))return 0;c->pc=0x8707u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080E6u:
    if(m==0u&&x==1u&&e==0u){ /* 20 3A 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E6u,3u,0x83u,0x80E9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E8u))return 0;c->pc=0x833Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 3A 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E6u,3u,0x83u,0x80E9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E8u))return 0;c->pc=0x833Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080E9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 18 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E9u,3u,0x93u,0x80ECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80EBu))return 0;c->pc=0x9318u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 18 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E9u,3u,0x93u,0x80ECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80EBu))return 0;c->pc=0x9318u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 18 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E9u,3u,0x93u,0x80ECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80EBu))return 0;c->pc=0x9318u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080ECu:
    if(m==0u&&x==0u&&e==0u){ /* 20 14 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080ECu,3u,0x8Au,0x80EFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80EEu))return 0;c->pc=0x8A14u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 14 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080ECu,3u,0x8Au,0x80EFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80EEu))return 0;c->pc=0x8A14u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 14 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080ECu,3u,0x8Au,0x80EFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80EEu))return 0;c->pc=0x8A14u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080EFu:
    if(m==0u&&x==1u&&e==0u){ /* 20 42 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080EFu,3u,0x8Cu,0x80F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F1u))return 0;c->pc=0x8C42u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 42 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080EFu,3u,0x8Cu,0x80F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F1u))return 0;c->pc=0x8C42u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 42 8C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080EFu,3u,0x8Cu,0x80F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F1u))return 0;c->pc=0x8C42u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080F2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 97 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080F2u,3u,0x83u,0x80F5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F4u))return 0;c->pc=0x8397u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 97 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080F2u,3u,0x83u,0x80F5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F4u))return 0;c->pc=0x8397u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 97 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080F2u,3u,0x83u,0x80F5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F4u))return 0;c->pc=0x8397u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080F5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 51 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080F5u,3u,0x88u,0x80F8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F7u))return 0;c->pc=0x8851u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 51 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080F5u,3u,0x88u,0x80F8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F7u))return 0;c->pc=0x8851u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 51 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080F5u,3u,0x88u,0x80F8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F7u))return 0;c->pc=0x8851u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080F8u:
    if(m==0u&&x==1u&&e==0u){ /* 20 3F BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080F8u,3u,0xBCu,0x80FBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80FAu))return 0;c->pc=0xBC3Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 3F BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080F8u,3u,0xBCu,0x80FBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80FAu))return 0;c->pc=0xBC3Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 3F BC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080F8u,3u,0xBCu,0x80FBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80FAu))return 0;c->pc=0xBC3Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080FBu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080FBu,2u,0x20u,0x80FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080FBu,2u,0x20u,0x80FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080FBu,2u,0x20u,0x80FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080FDu:
    if(m==0u&&x==1u&&e==0u){ /* AD 79 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0080FDu,3u,0x03u,0x8100u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0379u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008100u:
    if(m==0u&&x==1u&&e==0u){ /* D0 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008100u,2u,0x20u,0x8102u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8122u;}
      if(c->pc!=0x8102u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8102u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008102u:
    if(m==0u&&x==1u&&e==0u){ /* 20 24 89 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008102u,3u,0x89u,0x8105u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8104u))return 0;c->pc=0x8924u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008105u:
    if(m==0u&&x==1u&&e==0u){ /* 20 82 89 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008105u,3u,0x89u,0x8108u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8107u))return 0;c->pc=0x8982u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 82 89 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008105u,3u,0x89u,0x8108u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8107u))return 0;c->pc=0x8982u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 82 89 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008105u,3u,0x89u,0x8108u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8107u))return 0;c->pc=0x8982u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008108u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008108u,2u,0x20u,0x810Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008108u,2u,0x20u,0x810Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008108u,2u,0x20u,0x810Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00810Au:
    if(m==0u&&x==1u&&e==0u){ /* AD 03 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00810Au,3u,0x01u,0x810Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0103u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00810Du:
    if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00810Du,2u,0x03u,0x810Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8112u;}
      if(c->pc!=0x810Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x810Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00810Fu:
    if(m==0u&&x==0u&&e==0u){ /* CE 03 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00810Fu,3u,0x01u,0x8112u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0103u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CE 03 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00810Fu,3u,0x01u,0x8112u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0103u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008112u:
    if(m==0u&&x==1u&&e==0u){ /* AD 0F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008112u,3u,0x01u,0x8115u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x010Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008115u:
    if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008115u,2u,0x03u,0x8117u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x811Au;}
      if(c->pc!=0x8117u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8117u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008117u:
    if(m==0u&&x==0u&&e==0u){ /* CE 0F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008117u,3u,0x01u,0x811Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x010Fu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CE 0F 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008117u,3u,0x01u,0x811Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x010Fu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00811Au:
    if(m==0u&&x==1u&&e==0u){ /* AD 8B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00811Au,3u,0x03u,0x811Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x038Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00811Du:
    if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00811Du,2u,0x03u,0x811Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8122u;}
      if(c->pc!=0x811Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x811Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00811Fu:
    if(m==0u&&x==1u&&e==0u){ /* CE 8B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00811Fu,3u,0x03u,0x8122u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x038Bu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008122u:
    if(m==0u&&x==1u&&e==0u){ /* A5 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008122u,2u,0x56u,0x8124u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x56u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008124u:
    if(m==0u&&x==1u&&e==0u){ /* F0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008124u,2u,0x02u,0x8126u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8128u;}
      if(c->pc!=0x8126u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8126u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008126u:
    if(m==0u&&x==0u&&e==0u){ /* C6 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008126u,2u,0x56u,0x8128u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x56u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C6 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008126u,2u,0x56u,0x8128u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x56u),16u,-1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008128u:

    if(m==0u&&x==1u&&e==0u){ /* AD 8D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008128u,3u,0x03u,0x812Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x038Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00812Bu:

    if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00812Bu,2u,0x03u,0x812Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8130u;}
      if(c->pc!=0x812Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x812Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00812Du:
    if(m==0u&&x==0u&&e==0u){ /* CE 8D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00812Du,3u,0x03u,0x8130u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x038Du),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CE 8D 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00812Du,3u,0x03u,0x8130u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x038Du),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008130u:

    if(m==0u&&x==1u&&e==0u){ /* 20 FA C1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008130u,3u,0xC1u,0x8133u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8132u))return 0;c->pc=0xC1FAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008133u:
    if(m==0u&&x==1u&&e==0u){ /* 90 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008133u,2u,0x1Cu,0x8135u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8151u;}
      if(c->pc!=0x8135u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8135u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008133u,2u,0x1Cu,0x8135u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8151u;}
      if(c->pc!=0x8135u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8135u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008133u,2u,0x1Cu,0x8135u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8151u;}
      if(c->pc!=0x8135u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8135u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008135u:
    if(m==0u&&x==1u&&e==0u){ /* AD F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008135u,3u,0x0Au,0x8138u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008135u,3u,0x0Au,0x8138u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD F1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008135u,3u,0x0Au,0x8138u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AF1u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008138u:
    if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008138u,2u,0x05u,0x813Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x813Fu;}
      if(c->pc!=0x813Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x813Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008138u,2u,0x05u,0x813Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x813Fu;}
      if(c->pc!=0x813Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x813Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008138u,2u,0x05u,0x813Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x813Fu;}
      if(c->pc!=0x813Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x813Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00813Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 F9 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00813Au,3u,0xC3u,0x813Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x813Cu))return 0;c->pc=0xC3F9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F9 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00813Au,3u,0xC3u,0x813Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x813Cu))return 0;c->pc=0xC3F9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F9 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00813Au,3u,0xC3u,0x813Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x813Cu))return 0;c->pc=0xC3F9u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F9 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00813Au,3u,0xC3u,0x813Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x813Cu))return 0;c->pc=0xC3F9u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00813Du:
    if(m==0u&&x==0u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00813Du,2u,0x12u,0x813Fu);
      if(1){c->pc=0x8151u;}
      if(c->pc!=0x813Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x813Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00813Du,2u,0x12u,0x813Fu);
      if(1){c->pc=0x8151u;}
      if(c->pc!=0x813Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x813Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00813Du,2u,0x12u,0x813Fu);
      if(1){c->pc=0x8151u;}
      if(c->pc!=0x813Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x813Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00813Du,2u,0x12u,0x813Fu);
      if(1){c->pc=0x8151u;}
      if(c->pc!=0x813Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x813Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00813Fu:
    if(m==0u&&x==1u&&e==0u){ /* 20 02 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00813Fu,3u,0xB5u,0x8142u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8141u))return 0;c->pc=0xB502u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 02 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00813Fu,3u,0xB5u,0x8142u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8141u))return 0;c->pc=0xB502u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 02 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00813Fu,3u,0xB5u,0x8142u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8141u))return 0;c->pc=0xB502u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008142u:
    if(m==0u&&x==1u&&e==0u){ /* 20 43 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008142u,3u,0xB7u,0x8145u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8144u))return 0;c->pc=0xB743u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 43 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008142u,3u,0xB7u,0x8145u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8144u))return 0;c->pc=0xB743u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 43 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008142u,3u,0xB7u,0x8145u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8144u))return 0;c->pc=0xB743u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008145u:
    if(m==0u&&x==1u&&e==0u){ /* 20 AB B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008145u,3u,0xB1u,0x8148u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8147u))return 0;c->pc=0xB1ABu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 AB B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008145u,3u,0xB1u,0x8148u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8147u))return 0;c->pc=0xB1ABu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 AB B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008145u,3u,0xB1u,0x8148u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8147u))return 0;c->pc=0xB1ABu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008148u:
    if(m==0u&&x==1u&&e==0u){ /* 20 83 AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008148u,3u,0xAEu,0x814Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x814Au))return 0;c->pc=0xAE83u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 83 AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008148u,3u,0xAEu,0x814Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x814Au))return 0;c->pc=0xAE83u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 83 AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008148u,3u,0xAEu,0x814Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x814Au))return 0;c->pc=0xAE83u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00814Bu:
    if(m==0u&&x==1u&&e==0u){ /* 20 92 AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00814Bu,3u,0xABu,0x814Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x814Du))return 0;c->pc=0xAB92u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 92 AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00814Bu,3u,0xABu,0x814Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x814Du))return 0;c->pc=0xAB92u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 92 AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00814Bu,3u,0xABu,0x814Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x814Du))return 0;c->pc=0xAB92u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00814Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 C1 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00814Eu,3u,0xB0u,0x8151u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8150u))return 0;c->pc=0xB0C1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 C1 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00814Eu,3u,0xB0u,0x8151u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8150u))return 0;c->pc=0xB0C1u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 C1 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00814Eu,3u,0xB0u,0x8151u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8150u))return 0;c->pc=0xB0C1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008151u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7C 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008151u,3u,0x92u,0x8154u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8153u))return 0;c->pc=0x927Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 7C 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008151u,3u,0x92u,0x8154u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8153u))return 0;c->pc=0x927Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 7C 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008151u,3u,0x92u,0x8154u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8153u))return 0;c->pc=0x927Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008154u:
    if(m==0u&&x==1u&&e==0u){ /* 20 F6 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008154u,3u,0x86u,0x8157u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8156u))return 0;c->pc=0x86F6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F6 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008154u,3u,0x86u,0x8157u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8156u))return 0;c->pc=0x86F6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F6 86 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008154u,3u,0x86u,0x8157u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8156u))return 0;c->pc=0x86F6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008157u:
    if(m==0u&&x==0u&&e==0u){ /* 20 CC 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008157u,3u,0x92u,0x815Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8159u))return 0;c->pc=0x92CCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 CC 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008157u,3u,0x92u,0x815Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8159u))return 0;c->pc=0x92CCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 CC 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008157u,3u,0x92u,0x815Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8159u))return 0;c->pc=0x92CCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00815Au:
    if(m==0u&&x==1u&&e==0u){ /* A5 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00815Au,2u,0xC3u,0x815Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC3u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00815Au,2u,0xC3u,0x815Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 C3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00815Au,2u,0xC3u,0x815Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00815Cu:
    if(m==0u&&x==1u&&e==0u){ /* D0 46 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00815Cu,2u,0x46u,0x815Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x81A4u;}
      if(c->pc!=0x815Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x815Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 46 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00815Cu,2u,0x46u,0x815Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x81A4u;}
      if(c->pc!=0x815Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x815Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 46 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00815Cu,2u,0x46u,0x815Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x81A4u;}
      if(c->pc!=0x815Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x815Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00815Eu:
    if(m==0u&&x==1u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00815Eu,3u,0x01u,0x8161u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00815Eu,3u,0x01u,0x8161u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01FFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00815Eu,3u,0x01u,0x8161u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x01FFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008161u:
    if(m==0u&&x==1u&&e==0u){ /* D0 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008161u,2u,0x30u,0x8163u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8193u;}
      if(c->pc!=0x8163u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8163u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008161u,2u,0x30u,0x8163u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8193u;}
      if(c->pc!=0x8163u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8163u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008161u,2u,0x30u,0x8163u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8193u;}
      if(c->pc!=0x8163u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8163u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008163u:
    if(m==0u&&x==1u&&e==0u){ /* A6 AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008163u,2u,0xADu,0x8165u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xADu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A6 AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008163u,2u,0xADu,0x8165u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xADu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A6 AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008163u,2u,0xADu,0x8165u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xADu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008165u:
    if(m==0u&&x==1u&&e==0u){ /* D0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008165u,2u,0x15u,0x8167u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x817Cu;}
      if(c->pc!=0x8167u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8167u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008165u,2u,0x15u,0x8167u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x817Cu;}
      if(c->pc!=0x8167u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8167u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008165u,2u,0x15u,0x8167u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x817Cu;}
      if(c->pc!=0x8167u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8167u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008167u:
    if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008167u,3u,0x01u,0x816Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008167u,3u,0x01u,0x816Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x011Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008167u,3u,0x01u,0x816Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x011Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00816Au:
    if(m==0u&&x==1u&&e==0u){ /* 29 F0 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00816Au,3u,0xFFu,0x816Du);
      sc_v11_op_and(r,0xFFF0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00816Au,2u,0xF0u,0x816Cu);
      sc_v11_op_and(r,0x00F0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00816Au,2u,0xF0u,0x816Cu);
      sc_v11_op_and(r,0x00F0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00816Cu:
    if(m==1u&&x==0u&&e==0u){ /* FF D0 24 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00816Cu,4u,0x3Bu,0x8170u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x3B24D0u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FF D0 24 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00816Cu,4u,0x3Bu,0x8170u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x3B24D0u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00816Du:
    if(m==0u&&x==1u&&e==0u){ /* D0 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00816Du,2u,0x24u,0x816Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8193u;}
      if(c->pc!=0x816Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x816Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00816Fu:
    if(m==0u&&x==1u&&e==0u){ /* 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00816Fu,1u,0x3Bu,0x8170u);
      c->a=c->sp;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008170u:
    if(m==0u&&x==1u&&e==0u){ /* 85 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008170u,2u,0xA9u,0x8172u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xA9u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008170u,2u,0xA9u,0x8172u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xA9u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008170u,2u,0xA9u,0x8172u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xA9u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008172u:
    if(m==0u&&x==1u&&e==0u){ /* A5 AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008172u,2u,0xABu,0x8174u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xABu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008172u,2u,0xABu,0x8174u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xABu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008172u,2u,0xABu,0x8174u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xABu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008174u:
    if(m==0u&&x==1u&&e==0u){ /* 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008174u,1u,0x1Bu,0x8175u);
      c->sp=c->emulation?(uint16_t)(0x0100u|(c->a&0xffu)):c->a;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008174u,1u,0x1Bu,0x8175u);
      c->sp=c->emulation?(uint16_t)(0x0100u|(c->a&0xffu)):c->a;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008174u,1u,0x1Bu,0x8175u);
      c->sp=c->emulation?(uint16_t)(0x0100u|(c->a&0xffu)):c->a;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008175u:
    if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008175u,3u,0x00u,0x8178u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008175u,2u,0x01u,0x8177u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008175u,2u,0x01u,0x8177u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008178u:
    if(m==0u&&x==1u&&e==0u){ /* 85 AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008178u,2u,0xADu,0x817Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xADu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00817Au:
    if(m==0u&&x==1u&&e==0u){ /* 80 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00817Au,2u,0x17u,0x817Cu);
      if(1){c->pc=0x8193u;}
      if(c->pc!=0x817Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x817Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00817Cu:
    if(m==0u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00817Cu,3u,0x01u,0x817Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00817Cu,3u,0x01u,0x817Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x011Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00817Cu,3u,0x01u,0x817Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x011Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00817Fu:
    if(m==0u&&x==1u&&e==0u){ /* 29 F0 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00817Fu,3u,0xFFu,0x8182u);
      sc_v11_op_and(r,0xFFF0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00817Fu,2u,0xF0u,0x8181u);
      sc_v11_op_and(r,0x00F0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00817Fu,2u,0xF0u,0x8181u);
      sc_v11_op_and(r,0x00F0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008181u:
    if(m==1u&&x==0u&&e==0u){ /* FF D0 07 A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008181u,4u,0xA5u,0x8185u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0xA507D0u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FF D0 07 A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008181u,4u,0xA5u,0x8185u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0xA507D0u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008182u:
    if(m==0u&&x==1u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008182u,2u,0x07u,0x8184u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x818Bu;}
      if(c->pc!=0x8184u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8184u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008184u:
    if(m==0u&&x==1u&&e==0u){ /* A5 D1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008184u,2u,0xD1u,0x8186u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008186u:
    if(m==0u&&x==1u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008186u,3u,0x00u,0x8189u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008189u:
    if(m==0u&&x==1u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008189u,2u,0x08u,0x818Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8193u;}
      if(c->pc!=0x818Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x818Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00818Bu:
    if(m==0u&&x==1u&&e==0u){ /* 64 AD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00818Bu,2u,0xADu,0x818Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xADu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00818Du:
    if(m==0u&&x==1u&&e==0u){ /* 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00818Du,1u,0x3Bu,0x818Eu);
      c->a=c->sp;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00818Eu:
    if(m==0u&&x==1u&&e==0u){ /* 85 AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00818Eu,2u,0xABu,0x8190u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xABu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008190u:
    if(m==0u&&x==1u&&e==0u){ /* A5 A9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008190u,2u,0xA9u,0x8192u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xA9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008192u:
    if(m==0u&&x==1u&&e==0u){ /* 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008192u,1u,0x1Bu,0x8193u);
      c->sp=c->emulation?(uint16_t)(0x0100u|(c->a&0xffu)):c->a;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008193u:
    if(m==0u&&x==1u&&e==0u){ /* 20 70 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008193u,3u,0x98u,0x8196u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8195u))return 0;c->pc=0x9870u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 70 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008193u,3u,0x98u,0x8196u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8195u))return 0;c->pc=0x9870u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 70 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008193u,3u,0x98u,0x8196u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8195u))return 0;c->pc=0x9870u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 20 70 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008193u,3u,0x98u,0x8196u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8195u))return 0;c->pc=0x9870u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008196u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008196u,2u,0x20u,0x8198u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008196u,2u,0x20u,0x8198u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008196u,2u,0x20u,0x8198u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008196u,2u,0x20u,0x8198u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008198u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008198u,2u,0x01u,0x819Au);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008198u,2u,0x01u,0x819Au);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00819Au:
    if(m==1u&&x==1u&&e==0u){ /* 85 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00819Au,2u,0xB9u,0x819Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB9u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 85 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00819Au,2u,0xB9u,0x819Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB9u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00819Cu:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00819Cu,2u,0x30u,0x819Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00819Cu,2u,0x30u,0x819Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00819Eu:
    if(m==1u&&x==1u&&e==1u){ /* 7A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00819Eu,1u,0x7Au,0x819Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00819Fu:
    if(m==1u&&x==1u&&e==1u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00819Fu,1u,0xFAu,0x81A0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081A0u:
    if(m==1u&&x==1u&&e==1u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A0u,1u,0x68u,0x81A1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081A1u:
    if(m==1u&&x==1u&&e==1u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A1u,1u,0xABu,0x81A2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081A2u:
    if(m==1u&&x==1u&&e==1u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A2u,1u,0x2Bu,0x81A3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081A3u:
    if(m==1u&&x==1u&&e==1u){ /* 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A3u,1u,0x40u,0x81A4u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081A4u:
    if(m==0u&&x==1u&&e==0u){ /* 20 70 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A4u,3u,0x98u,0x81A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81A6u))return 0;c->pc=0x9870u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 70 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A4u,3u,0x98u,0x81A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81A6u))return 0;c->pc=0x9870u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 70 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A4u,3u,0x98u,0x81A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81A6u))return 0;c->pc=0x9870u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081A7u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A7u,2u,0x20u,0x81A9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A7u,2u,0x20u,0x81A9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A7u,2u,0x20u,0x81A9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081A9u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A9u,2u,0x01u,0x81ABu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081ABu:
    if(m==1u&&x==1u&&e==0u){ /* 85 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081ABu,2u,0xB9u,0x81ADu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB9u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081ADu:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081ADu,2u,0x30u,0x81AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081BFu:
    if(m==0u&&x==0u&&e==0u){ /* A5 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081BFu,2u,0x16u,0x81C1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x16u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081BFu,2u,0x16u,0x81C1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x16u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081BFu,2u,0x16u,0x81C1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x16u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081C1u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0D 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081C1u,3u,0x21u,0x81C4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 0D 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081C1u,3u,0x21u,0x81C4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 0D 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081C1u,3u,0x21u,0x81C4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081C4u:
    if(m==0u&&x==0u&&e==0u){ /* A5 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081C4u,2u,0x17u,0x81C6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x17u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081C4u,2u,0x17u,0x81C6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x17u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081C4u,2u,0x17u,0x81C6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x17u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081C6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0D 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081C6u,3u,0x21u,0x81C9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 0D 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081C6u,3u,0x21u,0x81C9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 0D 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081C6u,3u,0x21u,0x81C9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081C9u:
    if(m==0u&&x==0u&&e==0u){ /* A5 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081C9u,2u,0x1Au,0x81CBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081C9u,2u,0x1Au,0x81CBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081C9u,2u,0x1Au,0x81CBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Au)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081CBu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0F 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081CBu,3u,0x21u,0x81CEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 0F 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081CBu,3u,0x21u,0x81CEu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 0F 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081CBu,3u,0x21u,0x81CEu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081CEu:
    if(m==0u&&x==0u&&e==0u){ /* A5 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081CEu,2u,0x1Bu,0x81D0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Bu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081CEu,2u,0x1Bu,0x81D0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Bu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081CEu,2u,0x1Bu,0x81D0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Bu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081D0u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0F 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081D0u,3u,0x21u,0x81D3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 0F 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081D0u,3u,0x21u,0x81D3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 0F 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081D0u,3u,0x21u,0x81D3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081D3u:
    if(m==0u&&x==0u&&e==0u){ /* A5 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081D3u,2u,0x1Eu,0x81D5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081D3u,2u,0x1Eu,0x81D5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081D3u,2u,0x1Eu,0x81D5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081D5u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 11 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081D5u,3u,0x21u,0x81D8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2111u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 11 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081D5u,3u,0x21u,0x81D8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2111u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 11 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081D5u,3u,0x21u,0x81D8u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081D8u:
    if(m==0u&&x==0u&&e==0u){ /* A5 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081D8u,2u,0x1Fu,0x81DAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081D8u,2u,0x1Fu,0x81DAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081D8u,2u,0x1Fu,0x81DAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081DAu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 11 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081DAu,3u,0x21u,0x81DDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2111u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 11 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081DAu,3u,0x21u,0x81DDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2111u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 11 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081DAu,3u,0x21u,0x81DDu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2111u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081DDu:
    if(m==0u&&x==0u&&e==0u){ /* A5 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081DDu,2u,0x18u,0x81DFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x18u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081DDu,2u,0x18u,0x81DFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x18u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081DDu,2u,0x18u,0x81DFu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x18u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081DFu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0E 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081DFu,3u,0x21u,0x81E2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 0E 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081DFu,3u,0x21u,0x81E2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 0E 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081DFu,3u,0x21u,0x81E2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081E2u:
    if(m==0u&&x==0u&&e==0u){ /* A5 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081E2u,2u,0x19u,0x81E4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x19u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081E2u,2u,0x19u,0x81E4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x19u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081E2u,2u,0x19u,0x81E4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x19u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081E4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0E 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081E4u,3u,0x21u,0x81E7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 0E 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081E4u,3u,0x21u,0x81E7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x210Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 0E 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081E4u,3u,0x21u,0x81E7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x210Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081E7u:
    if(m==0u&&x==0u&&e==0u){ /* A5 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081E7u,2u,0x1Cu,0x81E9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081E7u,2u,0x1Cu,0x81E9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081E7u,2u,0x1Cu,0x81E9u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081E9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 10 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081E9u,3u,0x21u,0x81ECu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2110u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 10 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081E9u,3u,0x21u,0x81ECu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2110u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 10 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081E9u,3u,0x21u,0x81ECu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2110u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081ECu:
    if(m==0u&&x==0u&&e==0u){ /* A5 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081ECu,2u,0x1Du,0x81EEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Du)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081ECu,2u,0x1Du,0x81EEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x1Du)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081ECu,2u,0x1Du,0x81EEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x1Du)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081EEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 10 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081EEu,3u,0x21u,0x81F1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2110u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 10 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081EEu,3u,0x21u,0x81F1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2110u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 10 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081EEu,3u,0x21u,0x81F1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2110u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081F1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081F1u,2u,0x20u,0x81F3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x20u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081F1u,2u,0x20u,0x81F3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x20u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081F1u,2u,0x20u,0x81F3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x20u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081F3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 12 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081F3u,3u,0x21u,0x81F6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2112u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 12 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081F3u,3u,0x21u,0x81F6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2112u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 12 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081F3u,3u,0x21u,0x81F6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081F6u:
    if(m==0u&&x==0u&&e==0u){ /* A5 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081F6u,2u,0x21u,0x81F8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x21u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081F6u,2u,0x21u,0x81F8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x21u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081F6u,2u,0x21u,0x81F8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x21u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081F8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 12 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081F8u,3u,0x21u,0x81FBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2112u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 12 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081F8u,3u,0x21u,0x81FBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2112u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 12 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081F8u,3u,0x21u,0x81FBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2112u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081FBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 3A 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081FBu,3u,0x83u,0x81FEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81FDu))return 0;c->pc=0x833Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 3A 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081FBu,3u,0x83u,0x81FEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81FDu))return 0;c->pc=0x833Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 3A 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081FBu,3u,0x83u,0x81FEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81FDu))return 0;c->pc=0x833Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081FEu:
    if(m==0u&&x==0u&&e==0u){ /* 20 65 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081FEu,3u,0x8Du,0x8201u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8200u))return 0;c->pc=0x8D65u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 65 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081FEu,3u,0x8Du,0x8201u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8200u))return 0;c->pc=0x8D65u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 65 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0081FEu,3u,0x8Du,0x8201u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8200u))return 0;c->pc=0x8D65u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008201u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7C 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008201u,3u,0x92u,0x8204u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8203u))return 0;c->pc=0x927Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7C 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008201u,3u,0x92u,0x8204u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8203u))return 0;c->pc=0x927Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 7C 92 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008201u,3u,0x92u,0x8204u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8203u))return 0;c->pc=0x927Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008204u:
    if(m==0u&&x==1u&&e==0u){ /* 80 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008204u,2u,0x8Du,0x8206u);
      if(1){c->pc=0x8193u;}
      if(c->pc!=0x8206u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8206u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008204u,2u,0x8Du,0x8206u);
      if(1){c->pc=0x8193u;}
      if(c->pc!=0x8206u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8206u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008204u,2u,0x8Du,0x8206u);
      if(1){c->pc=0x8193u;}
      if(c->pc!=0x8206u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8206u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 80 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008204u,2u,0x8Du,0x8206u);
      if(1){c->pc=0x8193u;}
      if(c->pc!=0x8206u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8206u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008206u:
    if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008206u,1u,0x08u,0x8207u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008207u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008207u,2u,0x20u,0x8209u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00820Fu:
    if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00820Fu,1u,0x6Bu,0x8210u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008211u:
    if(m==1u&&x==0u&&e==0u){ /* 58 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008211u,1u,0x58u,0x8212u);
      c->p&=(uint8_t)~SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 58 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008211u,1u,0x58u,0x8212u);
      c->p&=(uint8_t)~SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008212u:
    if(m==1u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008212u,1u,0x8Bu,0x8213u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008212u,1u,0x8Bu,0x8213u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008213u:
    if(m==1u&&x==0u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008213u,3u,0x00u,0x8216u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F4 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008213u,3u,0x00u,0x8216u);
      if(!sc_v11_push16(r,0x0000u))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008216u:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008216u,1u,0xABu,0x8217u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008216u,1u,0xABu,0x8217u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008217u:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008217u,1u,0xABu,0x8218u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008217u,1u,0xABu,0x8218u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008218u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008218u,2u,0x20u,0x821Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008218u,2u,0x20u,0x821Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008221u:
    if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008221u,1u,0xABu,0x8222u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008221u,1u,0xABu,0x8222u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008222u:
    if(m==0u&&x==1u&&e==0u){ /* 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008222u,1u,0x40u,0x8223u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008222u,1u,0x40u,0x8223u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00823Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 3E 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00823Au,3u,0x82u,0x823Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x823Cu))return 0;c->pc=0x823Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 3E 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00823Au,3u,0x82u,0x823Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x823Cu))return 0;c->pc=0x823Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 3E 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00823Au,3u,0x82u,0x823Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x823Cu))return 0;c->pc=0x823Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00823Du:
    if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00823Du,1u,0x6Bu,0x823Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00823Du,1u,0x6Bu,0x823Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00823Du,1u,0x6Bu,0x823Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00823Eu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00823Eu,2u,0x20u,0x8240u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00823Eu,2u,0x20u,0x8240u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00823Eu,2u,0x20u,0x8240u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008240u:
    if(m==0u&&x==1u&&e==0u){ /* A5 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008240u,2u,0xC7u,0x8242u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008242u:
    if(m==0u&&x==1u&&e==0u){ /* 85 59 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008242u,2u,0x59u,0x8244u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x59u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008244u:
    if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008244u,1u,0x1Au,0x8245u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008245u:
    if(m==0u&&x==1u&&e==0u){ /* 85 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008245u,2u,0x5Bu,0x8247u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Bu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008247u:
    if(m==0u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008247u,1u,0x1Au,0x8248u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008248u:
    if(m==0u&&x==1u&&e==0u){ /* 85 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008248u,2u,0x5Du,0x824Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Du),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00824Au:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Au,1u,0x60u,0x824Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00824Bu:
    if(m==0u&&x==1u&&e==0u){ /* 20 4F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Bu,3u,0x82u,0x824Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x824Du))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 4F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Bu,3u,0x82u,0x824Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x824Du))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 4F 82 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Bu,3u,0x82u,0x824Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x824Du))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00824Eu:
    if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Eu,1u,0x6Bu,0x824Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Eu,1u,0x6Bu,0x824Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Eu,1u,0x6Bu,0x824Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00824Fu:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Fu,2u,0x20u,0x8251u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Fu,2u,0x20u,0x8251u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Fu,2u,0x20u,0x8251u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008251u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008251u,1u,0x18u,0x8252u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008252u:
    if(m==0u&&x==1u&&e==0u){ /* A5 59 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008252u,2u,0x59u,0x8254u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x59u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008254u:
    if(m==0u&&x==1u&&e==0u){ /* 85 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008254u,2u,0x5Du,0x8256u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Du),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008256u:
    if(m==0u&&x==1u&&e==0u){ /* 65 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008256u,2u,0x5Bu,0x8258u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x5Bu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008258u:
    if(m==0u&&x==1u&&e==0u){ /* 85 59 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008258u,2u,0x59u,0x825Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x59u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00825Au:
    if(m==0u&&x==1u&&e==0u){ /* 65 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00825Au,2u,0x5Du,0x825Cu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x5Du)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00825Cu:
    if(m==0u&&x==1u&&e==0u){ /* 85 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00825Cu,2u,0x5Bu,0x825Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Bu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00825Eu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00825Eu,1u,0x60u,0x825Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00825Fu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00825Fu,2u,0x20u,0x8261u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008261u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008261u,2u,0x10u,0x8263u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008288u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008288u,2u,0x20u,0x828Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008288u,2u,0x20u,0x828Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008288u,2u,0x20u,0x828Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00828Au:
    if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00828Au,2u,0x10u,0x828Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00833Au:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00833Au,2u,0x20u,0x833Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00833Au,2u,0x20u,0x833Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00833Cu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00833Cu,2u,0x10u,0x833Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008397u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008397u,2u,0x20u,0x8399u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008397u,2u,0x20u,0x8399u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008397u,2u,0x20u,0x8399u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008399u:
    if(m==0u&&x==1u&&e==0u){ /* AD 9B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x008399u,3u,0x01u,0x839Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x019Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00839Cu:
    if(m==0u&&x==1u&&e==0u){ /* D0 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00839Cu,2u,0x1Au,0x839Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x83B8u;}
      if(c->pc!=0x839Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x839Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00839Eu:
    if(m==0u&&x==1u&&e==0u){ /* A5 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00839Eu,2u,0xD7u,0x83A0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083A0u:
    if(m==0u&&x==1u&&e==0u){ /* 30 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083A0u,2u,0x0Au,0x83A2u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x83ACu;}
      if(c->pc!=0x83A2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83A2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083A2u:
    if(m==0u&&x==1u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083A2u,3u,0x00u,0x83A5u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083A5u:
    if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083A5u,2u,0x05u,0x83A7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x83ACu;}
      if(c->pc!=0x83A7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83A7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083A7u:
    if(m==0u&&x==1u&&e==0u){ /* AD 79 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083A7u,3u,0x03u,0x83AAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0379u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083AAu:
    if(m==0u&&x==1u&&e==0u){ /* F0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083AAu,2u,0x01u,0x83ACu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x83ADu;}
      if(c->pc!=0x83ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083ACu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083ACu,1u,0x60u,0x83ADu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083ACu,1u,0x60u,0x83ADu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083ADu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083ADu,2u,0x20u,0x83AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083AFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083AFu,2u,0x0Cu,0x83B1u);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083B1u:
    if(m==1u&&x==1u&&e==0u){ /* 85 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083B1u,2u,0x71u,0x83B3u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083B3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083B3u,2u,0x01u,0x83B5u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083B5u:
    if(m==1u&&x==1u&&e==0u){ /* 85 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083B5u,2u,0x6Au,0x83B7u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083B7u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083B7u,1u,0x60u,0x83B8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083B8u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083B8u,2u,0x20u,0x83BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083B8u,2u,0x20u,0x83BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083BAu:
    if(m==1u&&x==0u&&e==0u){ /* A9 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083BAu,2u,0x0Eu,0x83BCu);
      sc_v11_op_lda(r,0x000Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083BAu,2u,0x0Eu,0x83BCu);
      sc_v11_op_lda(r,0x000Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083BCu:
    if(m==1u&&x==0u&&e==0u){ /* 85 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083BCu,2u,0x71u,0x83BEu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083BCu,2u,0x71u,0x83BEu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083BEu:
    if(m==1u&&x==0u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083BEu,2u,0x07u,0x83C0u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083BEu,2u,0x07u,0x83C0u);
      sc_v11_op_lda(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083C0u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083C0u,2u,0x6Au,0x83C2u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083C0u,2u,0x6Au,0x83C2u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083C2u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083C2u,1u,0x60u,0x83C3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x0083C2u,1u,0x60u,0x83C3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
