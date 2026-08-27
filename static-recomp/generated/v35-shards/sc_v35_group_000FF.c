/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000FF(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03FF27u:
    if(m==0u&&x==0u&&e==0u){ /* F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF27u,1u,0xF8u,0xFF28u);
      c->p|=SC_FLAG_D;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF27u,1u,0xF8u,0xFF28u);
      c->p|=SC_FLAG_D;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF28u:
    if(m==0u&&x==0u&&e==0u){ /* 70 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF28u,2u,0x30u,0xFF2Au);
      if((c->p&SC_FLAG_V)!=0u){c->pc=0xFF5Au;}
      if(c->pc!=0xFF2Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF2Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 70 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF28u,2u,0x30u,0xFF2Au);
      if((c->p&SC_FLAG_V)!=0u){c->pc=0xFF5Au;}
      if(c->pc!=0xFF2Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF2Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF29u:
    if(m==0u&&x==0u&&e==0u){ /* 30 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF29u,2u,0x08u,0xFF2Bu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xFF33u;}
      if(c->pc!=0xFF2Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF2Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF29u,2u,0x08u,0xFF2Bu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xFF33u;}
      if(c->pc!=0xFF2Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF2Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF2Au:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF2Au,1u,0x08u,0xFF2Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF2Au,1u,0x08u,0xFF2Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF2Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF2Bu,2u,0x63u,0xFF2Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xFF90u;}
      if(c->pc!=0xFF2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF2Bu,2u,0x63u,0xFF2Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xFF90u;}
      if(c->pc!=0xFF2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF2Du:
    if(m==0u&&x==0u&&e==0u){ /* 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF2Du,2u,0x00u,0xFF2Fu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xFF2Fu;}
      if(c->pc!=0xFF2Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF2Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF2Du,2u,0x00u,0xFF2Fu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xFF2Fu;}
      if(c->pc!=0xFF2Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF2Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF2Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 62 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF2Fu,2u,0x62u,0xFF31u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xFF93u;}
      if(c->pc!=0xFF31u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF31u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 62 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF2Fu,2u,0x62u,0xFF31u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xFF93u;}
      if(c->pc!=0xFF31u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF31u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF31u:
    if(m==0u&&x==0u&&e==0u){ /* 30 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF31u,2u,0xF8u,0xFF33u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xFF2Bu;}
      if(c->pc!=0xFF33u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF33u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF31u,2u,0xF8u,0xFF33u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xFF2Bu;}
      if(c->pc!=0xFF33u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF33u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF33u:
    if(m==0u&&x==0u&&e==0u){ /* F0 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF33u,2u,0x61u,0xFF35u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xFF96u;}
      if(c->pc!=0xFF35u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF35u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 61 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF33u,2u,0x61u,0xFF35u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xFF96u;}
      if(c->pc!=0xFF35u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF35u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF35u:
    if(m==0u&&x==0u&&e==0u){ /* 30 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF35u,2u,0xF0u,0xFF37u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xFF27u;}
      if(c->pc!=0xFF37u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF37u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF35u,2u,0xF0u,0xFF37u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xFF27u;}
      if(c->pc!=0xFF37u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF37u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF37u:
    if(m==0u&&x==0u&&e==0u){ /* F0 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF37u,2u,0x60u,0xFF39u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xFF99u;}
      if(c->pc!=0xFF39u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF39u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF37u,2u,0x60u,0xFF39u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xFF99u;}
      if(c->pc!=0xFF39u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF39u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF39u:
    if(m==0u&&x==0u&&e==0u){ /* 30 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF39u,2u,0x44u,0xFF3Bu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xFF7Fu;}
      if(c->pc!=0xFF3Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF3Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 30 44 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF39u,2u,0x44u,0xFF3Bu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xFF7Fu;}
      if(c->pc!=0xFF3Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xFF3Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF5Au:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF5Au,4u,0xFFu,0xFF5Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF5Au,4u,0xFFu,0xFF5Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF5Eu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF5Eu,4u,0xFFu,0xFF62u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF5Eu,4u,0xFFu,0xFF62u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF62u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF62u,4u,0xFFu,0xFF66u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF62u,4u,0xFFu,0xFF66u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF66u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF66u,4u,0xFFu,0xFF6Au);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF66u,4u,0xFFu,0xFF6Au);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF6Au:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF6Au,4u,0xFFu,0xFF6Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF6Au,4u,0xFFu,0xFF6Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF6Eu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF6Eu,4u,0xFFu,0xFF72u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF6Eu,4u,0xFFu,0xFF72u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF72u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF72u,4u,0xFFu,0xFF76u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF72u,4u,0xFFu,0xFF76u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF76u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF76u,4u,0xFFu,0xFF7Au);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF76u,4u,0xFFu,0xFF7Au);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF7Au:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF7Au,4u,0xFFu,0xFF7Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF7Au,4u,0xFFu,0xFF7Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF7Eu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF7Eu,4u,0xFFu,0xFF82u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF7Eu,4u,0xFFu,0xFF82u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF7Fu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF7Fu,4u,0xFFu,0xFF83u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF7Fu,4u,0xFFu,0xFF83u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF82u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF82u,4u,0xFFu,0xFF86u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF82u,4u,0xFFu,0xFF86u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF83u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF83u,4u,0xFFu,0xFF87u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF83u,4u,0xFFu,0xFF87u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF86u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF86u,4u,0xFFu,0xFF8Au);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF86u,4u,0xFFu,0xFF8Au);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF87u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF87u,4u,0xFFu,0xFF8Bu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF87u,4u,0xFFu,0xFF8Bu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF8Au:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF8Au,4u,0xFFu,0xFF8Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF8Au,4u,0xFFu,0xFF8Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF8Bu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF8Bu,4u,0xFFu,0xFF8Fu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF8Bu,4u,0xFFu,0xFF8Fu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF8Eu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF8Eu,4u,0xFFu,0xFF92u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF8Eu,4u,0xFFu,0xFF92u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF8Fu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF8Fu,4u,0xFFu,0xFF93u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF8Fu,4u,0xFFu,0xFF93u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF90u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF90u,4u,0xFFu,0xFF94u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF90u,4u,0xFFu,0xFF94u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF92u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF92u,4u,0xFFu,0xFF96u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF92u,4u,0xFFu,0xFF96u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF93u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF93u,4u,0xFFu,0xFF97u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF93u,4u,0xFFu,0xFF97u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF94u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF94u,4u,0xFFu,0xFF98u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF94u,4u,0xFFu,0xFF98u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF96u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF96u,4u,0xFFu,0xFF9Au);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF96u,4u,0xFFu,0xFF9Au);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF97u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF97u,4u,0xFFu,0xFF9Bu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF97u,4u,0xFFu,0xFF9Bu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF98u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF98u,4u,0xFFu,0xFF9Cu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF98u,4u,0xFFu,0xFF9Cu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF99u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF99u,4u,0xFFu,0xFF9Du);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF99u,4u,0xFFu,0xFF9Du);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF9Au:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF9Au,4u,0xFFu,0xFF9Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF9Au,4u,0xFFu,0xFF9Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF9Bu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF9Bu,4u,0xFFu,0xFF9Fu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF9Bu,4u,0xFFu,0xFF9Fu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF9Cu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF9Cu,4u,0xFFu,0xFFA0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF9Cu,4u,0xFFu,0xFFA0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF9Du:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF9Du,4u,0xFFu,0xFFA1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF9Du,4u,0xFFu,0xFFA1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF9Eu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF9Eu,4u,0xFFu,0xFFA2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF9Eu,4u,0xFFu,0xFFA2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FF9Fu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF9Fu,4u,0xFFu,0xFFA3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FF9Fu,4u,0xFFu,0xFFA3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFA0u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA0u,4u,0xFFu,0xFFA4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA0u,4u,0xFFu,0xFFA4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFA1u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA1u,4u,0xFFu,0xFFA5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA1u,4u,0xFFu,0xFFA5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFA2u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA2u,4u,0xFFu,0xFFA6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA2u,4u,0xFFu,0xFFA6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFA3u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA3u,4u,0xFFu,0xFFA7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA3u,4u,0xFFu,0xFFA7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFA4u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA4u,4u,0xFFu,0xFFA8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA4u,4u,0xFFu,0xFFA8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFA5u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA5u,4u,0xFFu,0xFFA9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA5u,4u,0xFFu,0xFFA9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFA6u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA6u,4u,0xFFu,0xFFAAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA6u,4u,0xFFu,0xFFAAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFA7u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA7u,4u,0xFFu,0xFFABu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA7u,4u,0xFFu,0xFFABu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFA8u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA8u,4u,0xFFu,0xFFACu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA8u,4u,0xFFu,0xFFACu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFA9u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA9u,4u,0xFFu,0xFFADu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFA9u,4u,0xFFu,0xFFADu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFAAu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFAAu,4u,0xFFu,0xFFAEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFAAu,4u,0xFFu,0xFFAEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFABu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFABu,4u,0xFFu,0xFFAFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFABu,4u,0xFFu,0xFFAFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFACu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFACu,4u,0xFFu,0xFFB0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFACu,4u,0xFFu,0xFFB0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFADu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFADu,4u,0xFFu,0xFFB1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFADu,4u,0xFFu,0xFFB1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFAEu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFAEu,4u,0xFFu,0xFFB2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFAEu,4u,0xFFu,0xFFB2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFAFu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFAFu,4u,0xFFu,0xFFB3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFAFu,4u,0xFFu,0xFFB3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFB0u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB0u,4u,0xFFu,0xFFB4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB0u,4u,0xFFu,0xFFB4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFB1u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB1u,4u,0xFFu,0xFFB5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB1u,4u,0xFFu,0xFFB5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFB2u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB2u,4u,0xFFu,0xFFB6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB2u,4u,0xFFu,0xFFB6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFB3u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB3u,4u,0xFFu,0xFFB7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB3u,4u,0xFFu,0xFFB7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFB4u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB4u,4u,0xFFu,0xFFB8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB4u,4u,0xFFu,0xFFB8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFB5u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB5u,4u,0xFFu,0xFFB9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB5u,4u,0xFFu,0xFFB9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFB6u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB6u,4u,0xFFu,0xFFBAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB6u,4u,0xFFu,0xFFBAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFB7u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB7u,4u,0xFFu,0xFFBBu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB7u,4u,0xFFu,0xFFBBu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFB8u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB8u,4u,0xFFu,0xFFBCu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB8u,4u,0xFFu,0xFFBCu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFB9u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB9u,4u,0xFFu,0xFFBDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFB9u,4u,0xFFu,0xFFBDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFBAu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFBAu,4u,0xFFu,0xFFBEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFBAu,4u,0xFFu,0xFFBEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFBBu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFBBu,4u,0xFFu,0xFFBFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFBBu,4u,0xFFu,0xFFBFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFBCu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFBCu,4u,0xFFu,0xFFC0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFBCu,4u,0xFFu,0xFFC0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFBDu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFBDu,4u,0xFFu,0xFFC1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFBDu,4u,0xFFu,0xFFC1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFBEu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFBEu,4u,0xFFu,0xFFC2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFBEu,4u,0xFFu,0xFFC2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFBFu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFBFu,4u,0xFFu,0xFFC3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFBFu,4u,0xFFu,0xFFC3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFC0u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC0u,4u,0xFFu,0xFFC4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC0u,4u,0xFFu,0xFFC4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFC1u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC1u,4u,0xFFu,0xFFC5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC1u,4u,0xFFu,0xFFC5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFC2u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC2u,4u,0xFFu,0xFFC6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC2u,4u,0xFFu,0xFFC6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFC3u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC3u,4u,0xFFu,0xFFC7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC3u,4u,0xFFu,0xFFC7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFC4u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC4u,4u,0xFFu,0xFFC8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC4u,4u,0xFFu,0xFFC8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFC5u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC5u,4u,0xFFu,0xFFC9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC5u,4u,0xFFu,0xFFC9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFC6u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC6u,4u,0xFFu,0xFFCAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC6u,4u,0xFFu,0xFFCAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFC7u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC7u,4u,0xFFu,0xFFCBu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC7u,4u,0xFFu,0xFFCBu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFC8u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC8u,4u,0xFFu,0xFFCCu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC8u,4u,0xFFu,0xFFCCu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFC9u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC9u,4u,0xFFu,0xFFCDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFC9u,4u,0xFFu,0xFFCDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFCAu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFCAu,4u,0xFFu,0xFFCEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFCAu,4u,0xFFu,0xFFCEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFCBu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFCBu,4u,0xFFu,0xFFCFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFCBu,4u,0xFFu,0xFFCFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFCCu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFCCu,4u,0xFFu,0xFFD0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFCCu,4u,0xFFu,0xFFD0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFCDu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFCDu,4u,0xFFu,0xFFD1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFCDu,4u,0xFFu,0xFFD1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFCEu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFCEu,4u,0xFFu,0xFFD2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFCEu,4u,0xFFu,0xFFD2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFCFu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFCFu,4u,0xFFu,0xFFD3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFCFu,4u,0xFFu,0xFFD3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFD0u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD0u,4u,0xFFu,0xFFD4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD0u,4u,0xFFu,0xFFD4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFD1u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD1u,4u,0xFFu,0xFFD5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD1u,4u,0xFFu,0xFFD5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFD2u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD2u,4u,0xFFu,0xFFD6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD2u,4u,0xFFu,0xFFD6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFD3u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD3u,4u,0xFFu,0xFFD7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD3u,4u,0xFFu,0xFFD7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFD4u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD4u,4u,0xFFu,0xFFD8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD4u,4u,0xFFu,0xFFD8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFD5u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD5u,4u,0xFFu,0xFFD9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD5u,4u,0xFFu,0xFFD9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFD6u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD6u,4u,0xFFu,0xFFDAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD6u,4u,0xFFu,0xFFDAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFD7u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD7u,4u,0xFFu,0xFFDBu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD7u,4u,0xFFu,0xFFDBu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFD8u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD8u,4u,0xFFu,0xFFDCu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD8u,4u,0xFFu,0xFFDCu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFD9u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD9u,4u,0xFFu,0xFFDDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFD9u,4u,0xFFu,0xFFDDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFDAu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFDAu,4u,0xFFu,0xFFDEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFDAu,4u,0xFFu,0xFFDEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFDBu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFDBu,4u,0xFFu,0xFFDFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFDBu,4u,0xFFu,0xFFDFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFDCu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFDCu,4u,0xFFu,0xFFE0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFDCu,4u,0xFFu,0xFFE0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFDDu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFDDu,4u,0xFFu,0xFFE1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFDDu,4u,0xFFu,0xFFE1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFDEu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFDEu,4u,0xFFu,0xFFE2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFDEu,4u,0xFFu,0xFFE2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFDFu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFDFu,4u,0xFFu,0xFFE3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFDFu,4u,0xFFu,0xFFE3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFE0u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE0u,4u,0xFFu,0xFFE4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE0u,4u,0xFFu,0xFFE4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFE1u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE1u,4u,0xFFu,0xFFE5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE1u,4u,0xFFu,0xFFE5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFE2u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE2u,4u,0xFFu,0xFFE6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE2u,4u,0xFFu,0xFFE6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFE3u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE3u,4u,0xFFu,0xFFE7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE3u,4u,0xFFu,0xFFE7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFE4u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE4u,4u,0xFFu,0xFFE8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE4u,4u,0xFFu,0xFFE8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFE5u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE5u,4u,0xFFu,0xFFE9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE5u,4u,0xFFu,0xFFE9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFE6u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE6u,4u,0xFFu,0xFFEAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE6u,4u,0xFFu,0xFFEAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFE7u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE7u,4u,0xFFu,0xFFEBu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE7u,4u,0xFFu,0xFFEBu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFE8u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE8u,4u,0xFFu,0xFFECu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE8u,4u,0xFFu,0xFFECu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFE9u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE9u,4u,0xFFu,0xFFEDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFE9u,4u,0xFFu,0xFFEDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFEAu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFEAu,4u,0xFFu,0xFFEEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFEAu,4u,0xFFu,0xFFEEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFEBu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFEBu,4u,0xFFu,0xFFEFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFEBu,4u,0xFFu,0xFFEFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFECu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFECu,4u,0xFFu,0xFFF0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFECu,4u,0xFFu,0xFFF0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFEDu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFEDu,4u,0xFFu,0xFFF1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFEDu,4u,0xFFu,0xFFF1u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFEEu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFEEu,4u,0xFFu,0xFFF2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFEEu,4u,0xFFu,0xFFF2u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFEFu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFEFu,4u,0xFFu,0xFFF3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFEFu,4u,0xFFu,0xFFF3u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFF0u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF0u,4u,0xFFu,0xFFF4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF0u,4u,0xFFu,0xFFF4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFF1u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF1u,4u,0xFFu,0xFFF5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF1u,4u,0xFFu,0xFFF5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFF2u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF2u,4u,0xFFu,0xFFF6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF2u,4u,0xFFu,0xFFF6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFF3u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF3u,4u,0xFFu,0xFFF7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF3u,4u,0xFFu,0xFFF7u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFF4u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF4u,4u,0xFFu,0xFFF8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF4u,4u,0xFFu,0xFFF8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFF5u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF5u,4u,0xFFu,0xFFF9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF5u,4u,0xFFu,0xFFF9u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFF6u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF6u,4u,0xFFu,0xFFFAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF6u,4u,0xFFu,0xFFFAu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFF7u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF7u,4u,0xFFu,0xFFFBu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF7u,4u,0xFFu,0xFFFBu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFF8u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF8u,4u,0xFFu,0xFFFCu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF8u,4u,0xFFu,0xFFFCu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFF9u:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF9u,4u,0xFFu,0xFFFDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFF9u,4u,0xFFu,0xFFFDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFFAu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFFAu,4u,0xFFu,0xFFFEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFFAu,4u,0xFFu,0xFFFEu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFFBu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFFBu,4u,0xFFu,0xFFFFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFFBu,4u,0xFFu,0xFFFFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFFCu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFFCu,4u,0xFFu,0x0000u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFFCu,4u,0xFFu,0x0000u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0xFFFFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFFDu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFFDu,4u,0x00u,0x0001u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x00FFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFFDu,4u,0x00u,0x0001u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x00FFFFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFFEu:
    if(m==0u&&x==0u&&e==0u){ /* FF FF 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFFEu,4u,0x00u,0x0002u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0000FFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF FF 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFFEu,4u,0x00u,0x0002u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x0000FFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03FFFFu:
    if(m==0u&&x==0u&&e==0u){ /* FF 00 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFFFu,4u,0x00u,0x0003u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x000000u)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FF 00 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03FFFFu,4u,0x00u,0x0003u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x000000u)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
