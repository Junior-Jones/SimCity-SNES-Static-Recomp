/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000EC(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03B000u:
    if(m==0u&&x==1u&&e==0u){ /* CD 59 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B000u,3u,0x0Cu,0xB003u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C59u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CD 59 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B000u,3u,0x0Cu,0xB003u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C59u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CD 59 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B000u,3u,0x0Cu,0xB003u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C59u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B003u:
    if(m==0u&&x==1u&&e==0u){ /* F0 65 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B003u,2u,0x65u,0xB005u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB06Au;}
      if(c->pc!=0xB005u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB005u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 65 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B003u,2u,0x65u,0xB005u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB06Au;}
      if(c->pc!=0xB005u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB005u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 65 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B003u,2u,0x65u,0xB005u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB06Au;}
      if(c->pc!=0xB005u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB005u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B005u:
    if(m==0u&&x==1u&&e==0u){ /* 20 A3 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B005u,3u,0xB0u,0xB008u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB007u))return 0;c->pc=0xB0A3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 A3 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B005u,3u,0xB0u,0xB008u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB007u))return 0;c->pc=0xB0A3u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 A3 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B005u,3u,0xB0u,0xB008u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB007u))return 0;c->pc=0xB0A3u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B008u:
    if(m==0u&&x==1u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B008u,3u,0x00u,0xB00Bu);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B008u,2u,0x04u,0xB00Au);
      sc_v11_op_lda(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B008u,2u,0x04u,0xB00Au);
      sc_v11_op_lda(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B00Bu:
    if(m==0u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B00Bu,2u,0x00u,0xB00Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B00Du:
    if(m==0u&&x==1u&&e==0u){ /* E6 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B00Du,2u,0x12u,0xB00Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x12u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E6 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B00Du,2u,0x12u,0xB00Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x12u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B00Du,2u,0x12u,0xB00Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x12u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B00Fu:
    if(m==0u&&x==1u&&e==0u){ /* D0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B00Fu,2u,0x02u,0xB011u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB013u;}
      if(c->pc!=0xB011u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB011u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B00Fu,2u,0x02u,0xB011u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB013u;}
      if(c->pc!=0xB011u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB011u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B00Fu,2u,0x02u,0xB011u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB013u;}
      if(c->pc!=0xB011u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB011u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B011u:
    if(m==0u&&x==0u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B011u,2u,0x14u,0xB013u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B011u,2u,0x14u,0xB013u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B011u,2u,0x14u,0xB013u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B011u,2u,0x14u,0xB013u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B013u:
    if(m==0u&&x==1u&&e==0u){ /* A5 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B013u,2u,0x0Eu,0xB015u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B013u,2u,0x0Eu,0xB015u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B013u,2u,0x0Eu,0xB015u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B015u:
    if(m==0u&&x==1u&&e==0u){ /* C5 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B015u,2u,0x12u,0xB017u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x12u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C5 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B015u,2u,0x12u,0xB017u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x12u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C5 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B015u,2u,0x12u,0xB017u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x12u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B017u:
    if(m==0u&&x==1u&&e==0u){ /* A5 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B017u,2u,0x10u,0xB019u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x10u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B017u,2u,0x10u,0xB019u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x10u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B017u,2u,0x10u,0xB019u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x10u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B019u:
    if(m==0u&&x==1u&&e==0u){ /* E5 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B019u,2u,0x14u,0xB01Bu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x14u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E5 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B019u,2u,0x14u,0xB01Bu);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x14u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E5 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B019u,2u,0x14u,0xB01Bu);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x14u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B01Bu:
    if(m==0u&&x==1u&&e==0u){ /* B0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B01Bu,2u,0x14u,0xB01Du);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB031u;}
      if(c->pc!=0xB01Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB01Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B01Bu,2u,0x14u,0xB01Du);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB031u;}
      if(c->pc!=0xB01Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB01Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B01Bu,2u,0x14u,0xB01Du);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB031u;}
      if(c->pc!=0xB01Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB01Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B01Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 1A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B01Du,3u,0x00u,0xB020u);
      sc_v11_op_lda(r,0x001Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 1A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B01Du,3u,0x00u,0xB020u);
      sc_v11_op_lda(r,0x001Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B01Du,2u,0x1Au,0xB01Fu);
      sc_v11_op_lda(r,0x001Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B01Du,2u,0x1Au,0xB01Fu);
      sc_v11_op_lda(r,0x001Au,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B020u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 81 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B020u,3u,0x03u,0xB023u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0381u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 81 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B020u,3u,0x03u,0xB023u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0381u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B023u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B023u,3u,0x00u,0xB026u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B023u,3u,0x00u,0xB026u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B026u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 83 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B026u,3u,0x03u,0xB029u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0383u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 83 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B026u,3u,0x03u,0xB029u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0383u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B029u:
    if(m==0u&&x==0u&&e==0u){ /* A9 2C 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B029u,3u,0x01u,0xB02Cu);
      sc_v11_op_lda(r,0x012Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 2C 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B029u,3u,0x01u,0xB02Cu);
      sc_v11_op_lda(r,0x012Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B02Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 8B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B02Cu,3u,0x03u,0xB02Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x038Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 8B 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B02Cu,3u,0x03u,0xB02Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x038Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B02Fu:
    if(m==0u&&x==0u&&e==0u){ /* 80 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B02Fu,2u,0x39u,0xB031u);
      if(1){c->pc=0xB06Au;}
      if(c->pc!=0xB031u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB031u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B02Fu,2u,0x39u,0xB031u);
      if(1){c->pc=0xB06Au;}
      if(c->pc!=0xB031u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB031u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B031u:
    if(m==0u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B031u,2u,0x00u,0xB033u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B031u,2u,0x00u,0xB033u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B031u,2u,0x00u,0xB033u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B033u:
    if(m==0u&&x==1u&&e==0u){ /* 20 F4 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B033u,3u,0x8Fu,0xB036u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB035u))return 0;c->pc=0x8FF4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F4 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B033u,3u,0x8Fu,0xB036u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB035u))return 0;c->pc=0x8FF4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F4 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B033u,3u,0x8Fu,0xB036u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB035u))return 0;c->pc=0x8FF4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B036u:
    if(m==0u&&x==1u&&e==0u){ /* 20 E5 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B036u,3u,0xB0u,0xB039u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB038u))return 0;c->pc=0xB0E5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 E5 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B036u,3u,0xB0u,0xB039u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB038u))return 0;c->pc=0xB0E5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 E5 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B036u,3u,0xB0u,0xB039u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB038u))return 0;c->pc=0xB0E5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B039u:
    if(m==0u&&x==1u&&e==0u){ /* 64 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B039u,2u,0x02u,0xB03Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 64 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B039u,2u,0x02u,0xB03Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B039u,2u,0x02u,0xB03Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B03Bu:
    if(m==0u&&x==1u&&e==0u){ /* 64 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B03Bu,2u,0x04u,0xB03Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 64 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B03Bu,2u,0x04u,0xB03Du);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 64 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B03Bu,2u,0x04u,0xB03Du);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B03Du:
    if(m==0u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B03Du,2u,0x02u,0xB03Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B03Du,2u,0x02u,0xB03Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B03Du,2u,0x02u,0xB03Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B03Fu:
    if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B03Fu,3u,0x00u,0xB042u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B03Fu,2u,0x02u,0xB041u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B03Fu,2u,0x02u,0xB041u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B042u:
    if(m==0u&&x==1u&&e==0u){ /* B0 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B042u,2u,0x16u,0xB044u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB05Au;}
      if(c->pc!=0xB044u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB044u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B044u:
    if(m==0u&&x==1u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B044u,2u,0x04u,0xB046u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B046u:
    if(m==0u&&x==1u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B046u,3u,0x00u,0xB049u);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B049u:
    if(m==0u&&x==1u&&e==0u){ /* B0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B049u,2u,0x0Fu,0xB04Bu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB05Au;}
      if(c->pc!=0xB04Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB04Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B04Bu:
    if(m==0u&&x==1u&&e==0u){ /* 20 6C B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B04Bu,3u,0xB0u,0xB04Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB04Du))return 0;c->pc=0xB06Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B04Eu:
    if(m==0u&&x==1u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B04Eu,2u,0x06u,0xB050u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB056u;}
      if(c->pc!=0xB050u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB050u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B04Eu,2u,0x06u,0xB050u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB056u;}
      if(c->pc!=0xB050u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB050u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B04Eu,2u,0x06u,0xB050u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB056u;}
      if(c->pc!=0xB050u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB050u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B050u:
    if(m==0u&&x==1u&&e==0u){ /* E6 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B050u,2u,0x02u,0xB052u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E6 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B050u,2u,0x02u,0xB052u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B050u,2u,0x02u,0xB052u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B052u:
    if(m==0u&&x==1u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B052u,2u,0x04u,0xB054u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B052u,2u,0x04u,0xB054u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B052u,2u,0x04u,0xB054u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B054u:
    if(m==0u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B054u,2u,0x00u,0xB056u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B054u,2u,0x00u,0xB056u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B054u,2u,0x00u,0xB056u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B056u:
    if(m==0u&&x==1u&&e==0u){ /* E6 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B056u,2u,0x04u,0xB058u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x04u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E6 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B056u,2u,0x04u,0xB058u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x04u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B056u,2u,0x04u,0xB058u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x04u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B058u:
    if(m==0u&&x==1u&&e==0u){ /* 80 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B058u,2u,0xE3u,0xB05Au);
      if(1){c->pc=0xB03Du;}
      if(c->pc!=0xB05Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB05Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B058u,2u,0xE3u,0xB05Au);
      if(1){c->pc=0xB03Du;}
      if(c->pc!=0xB05Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB05Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B058u,2u,0xE3u,0xB05Au);
      if(1){c->pc=0xB03Du;}
      if(c->pc!=0xB05Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB05Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B05Au:
    if(m==0u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B05Au,2u,0x02u,0xB05Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B05Cu:
    if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B05Cu,3u,0x00u,0xB05Fu);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B05Fu:
    if(m==0u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B05Fu,2u,0x03u,0xB061u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB064u;}
      if(c->pc!=0xB061u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB061u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B061u:
    if(m==0u&&x==1u&&e==0u){ /* 20 BE B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B061u,3u,0xB0u,0xB064u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB063u))return 0;c->pc=0xB0BEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B064u:
    if(m==0u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B064u,2u,0x02u,0xB066u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B064u,2u,0x02u,0xB066u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B064u,2u,0x02u,0xB066u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B066u:
    if(m==0u&&x==1u&&e==0u){ /* D0 A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B066u,2u,0xA5u,0xB068u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB00Du;}
      if(c->pc!=0xB068u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB068u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B066u,2u,0xA5u,0xB068u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB00Du;}
      if(c->pc!=0xB068u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB068u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B066u,2u,0xA5u,0xB068u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB00Du;}
      if(c->pc!=0xB068u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB068u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B068u:
    if(m==0u&&x==1u&&e==0u){ /* 80 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B068u,2u,0x93u,0xB06Au);
      if(1){c->pc=0xAFFDu;}
      if(c->pc!=0xB06Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB06Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B068u,2u,0x93u,0xB06Au);
      if(1){c->pc=0xAFFDu;}
      if(c->pc!=0xB06Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB06Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 93 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B068u,2u,0x93u,0xB06Au);
      if(1){c->pc=0xAFFDu;}
      if(c->pc!=0xB06Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB06Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B06Au:
    if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B06Au,1u,0x2Bu,0xB06Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B06Au,1u,0x2Bu,0xB06Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B06Au,1u,0x2Bu,0xB06Bu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B06Bu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B06Bu,1u,0x60u,0xB06Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B06Bu,1u,0x60u,0xB06Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B06Bu,1u,0x60u,0xB06Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B06Cu:
    if(m==0u&&x==1u&&e==0u){ /* AE 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B06Cu,3u,0x0Bu,0xB06Fu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B06Fu:
    if(m==0u&&x==1u&&e==0u){ /* 86 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B06Fu,2u,0x16u,0xB071u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x16u),(uint8_t)c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B071u:
    if(m==0u&&x==1u&&e==0u){ /* 20 F4 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B071u,3u,0x8Fu,0xB074u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB073u))return 0;c->pc=0x8FF4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B074u:
    if(m==0u&&x==1u&&e==0u){ /* F0 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B074u,2u,0x24u,0xB076u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB09Au;}
      if(c->pc!=0xB076u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB076u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B074u,2u,0x24u,0xB076u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB09Au;}
      if(c->pc!=0xB076u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB076u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 24 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B074u,2u,0x24u,0xB076u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB09Au;}
      if(c->pc!=0xB076u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB076u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B076u:
    if(m==0u&&x==1u&&e==0u){ /* 20 F8 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B076u,3u,0xB0u,0xB079u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB078u))return 0;c->pc=0xB0F8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F8 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B076u,3u,0xB0u,0xB079u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB078u))return 0;c->pc=0xB0F8u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F8 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B076u,3u,0xB0u,0xB079u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB078u))return 0;c->pc=0xB0F8u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B079u:
    if(m==0u&&x==1u&&e==0u){ /* C0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B079u,2u,0x00u,0xB07Bu);
      sc_v11_op_compare(r,c->y,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B079u,3u,0x00u,0xB07Cu);
      sc_v11_op_compare(r,c->y,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B079u,2u,0x00u,0xB07Bu);
      sc_v11_op_compare(r,c->y,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B07Cu:
    if(m==1u&&x==0u&&e==0u){ /* D0 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B07Cu,2u,0x1Cu,0xB07Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB09Au;}
      if(c->pc!=0xB07Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB07Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B07Eu:
    if(m==1u&&x==0u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B07Eu,3u,0x0Bu,0xB081u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B081u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B081u,3u,0x84u,0xB084u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB083u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B084u:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B084u,3u,0x03u,0xB087u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B084u,2u,0xFFu,0xB086u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B084u,2u,0xFFu,0xB086u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B086u:
    if(m==1u&&x==0u&&e==0u){ /* 03 AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B086u,2u,0xAAu,0xB088u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0xAAu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B086u,2u,0xAAu,0xB088u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0xAAu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B087u:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B087u,1u,0xAAu,0xB088u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B088u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B088u,2u,0x20u,0xB08Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B088u,2u,0x20u,0xB08Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B088u,2u,0x20u,0xB08Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B08Au:
    if(m==1u&&x==1u&&e==0u){ /* BD EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B08Au,3u,0x84u,0xB08Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x84EBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B08Du:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B08Du,2u,0x20u,0xB08Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B08Fu:
    if(m==0u&&x==1u&&e==0u){ /* 10 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B08Fu,2u,0x09u,0xB091u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB09Au;}
      if(c->pc!=0xB091u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB091u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B091u:
    if(m==0u&&x==1u&&e==0u){ /* A5 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B091u,2u,0x16u,0xB093u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x16u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B093u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B093u,3u,0x0Bu,0xB096u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B096u:
    if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B096u,3u,0x00u,0xB099u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B099u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B099u,1u,0x60u,0xB09Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B09Au:
    if(m==0u&&x==1u&&e==0u){ /* A5 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B09Au,2u,0x16u,0xB09Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x16u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B09Au,2u,0x16u,0xB09Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x16u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B09Au,2u,0x16u,0xB09Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x16u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B09Cu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B09Cu,3u,0x0Bu,0xB09Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B09Cu,3u,0x0Bu,0xB09Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B09Cu,3u,0x0Bu,0xB09Fu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B09Fu:
    if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B09Fu,3u,0x00u,0xB0A2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B09Fu,2u,0x00u,0xB0A1u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B09Fu,2u,0x00u,0xB0A1u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0A2u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0A2u,1u,0x60u,0xB0A3u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0A3u:
    if(m==0u&&x==1u&&e==0u){ /* AE 57 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0A3u,3u,0x0Cu,0xB0A6u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C57u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 57 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0A3u,3u,0x0Cu,0xB0A6u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C57u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 57 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0A3u,3u,0x0Cu,0xB0A6u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C57u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0A6u:
    if(m==0u&&x==1u&&e==0u){ /* F0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0A6u,2u,0x15u,0xB0A8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB0BDu;}
      if(c->pc!=0xB0A8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB0A8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0A6u,2u,0x15u,0xB0A8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB0BDu;}
      if(c->pc!=0xB0A8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB0A8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0A6u,2u,0x15u,0xB0A8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB0BDu;}
      if(c->pc!=0xB0A8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB0A8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0A8u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0A8u,2u,0x20u,0xB0AAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0A8u,2u,0x20u,0xB0AAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0A8u,2u,0x20u,0xB0AAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0AAu:
    if(m==1u&&x==1u&&e==0u){ /* BF E4 D1 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0AAu,4u,0x7Fu,0xB0AEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FD1E4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0AEu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0AEu,3u,0x0Bu,0xB0B1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0B1u:
    if(m==1u&&x==1u&&e==0u){ /* BF 6C E5 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0B1u,4u,0x7Fu,0xB0B5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FE56Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0B5u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0B5u,3u,0x0Bu,0xB0B8u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0B8u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0B8u,2u,0x20u,0xB0BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0BAu:
    if(m==0u&&x==1u&&e==0u){ /* CE 57 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0BAu,3u,0x0Cu,0xB0BDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C57u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0BDu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0BDu,1u,0x60u,0xB0BEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0BDu,1u,0x60u,0xB0BEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0BDu,1u,0x60u,0xB0BEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0BEu:
    if(m==0u&&x==1u&&e==0u){ /* AE 57 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0BEu,3u,0x0Cu,0xB0C1u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C57u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 57 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0BEu,3u,0x0Cu,0xB0C1u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C57u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 57 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0BEu,3u,0x0Cu,0xB0C1u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C57u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0C1u:
    if(m==0u&&x==1u&&e==0u){ /* E0 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0C1u,2u,0x88u,0xB0C3u);
      sc_v11_op_compare(r,c->x,0x0088u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 88 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0C1u,3u,0x13u,0xB0C4u);
      sc_v11_op_compare(r,c->x,0x1388u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E0 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0C1u,2u,0x88u,0xB0C3u);
      sc_v11_op_compare(r,c->x,0x0088u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0C4u:
    if(m==1u&&x==0u&&e==0u){ /* B0 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0C4u,2u,0x16u,0xB0C6u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB0DCu;}
      if(c->pc!=0xB0C6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB0C6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0C6u:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0C6u,1u,0xE8u,0xB0C7u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0C7u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0C7u,2u,0x20u,0xB0C9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0DCu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0DCu,1u,0x60u,0xB0DDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0E5u:
    if(m==0u&&x==1u&&e==0u){ /* 20 20 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0E5u,3u,0xB1u,0xB0E8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB0E7u))return 0;c->pc=0xB120u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 20 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0E5u,3u,0xB1u,0xB0E8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB0E7u))return 0;c->pc=0xB120u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 20 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0E5u,3u,0xB1u,0xB0E8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB0E7u))return 0;c->pc=0xB120u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0E8u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0E8u,2u,0x20u,0xB0EAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0E8u,2u,0x20u,0xB0EAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0E8u,2u,0x20u,0xB0EAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0EAu:
    if(m==1u&&x==1u&&e==0u){ /* BF 98 A5 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0EAu,4u,0x7Fu,0xB0EEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FA598u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0EEu:
    if(m==1u&&x==1u&&e==0u){ /* 19 DD B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0EEu,3u,0xB0u,0xB0F1u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xB0DDu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0F1u:
    if(m==1u&&x==1u&&e==0u){ /* 9F 98 A5 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0F1u,4u,0x7Fu,0xB0F5u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7FA598u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0F5u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0F5u,2u,0x20u,0xB0F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0F7u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0F7u,1u,0x60u,0xB0F8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0F8u:
    if(m==0u&&x==1u&&e==0u){ /* A0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0F8u,2u,0x01u,0xB0FAu);
      sc_v11_op_ldy(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0F8u,3u,0x00u,0xB0FBu);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0F8u,2u,0x01u,0xB0FAu);
      sc_v11_op_ldy(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0FBu:
    if(m==1u&&x==0u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0FBu,3u,0x0Bu,0xB0FEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B89u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B0FEu:
    if(m==1u&&x==0u&&e==0u){ /* C9 7C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B0FEu,2u,0x7Cu,0xB100u);
      sc_v11_op_compare(r,c->a,0x007Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B100u:
    if(m==1u&&x==0u&&e==0u){ /* 02 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B100u,2u,0xF0u,0xB102u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xB102u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B10Bu:
    if(m==0u&&x==1u&&e==0u){ /* E0 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B10Bu,2u,0xDCu,0xB10Du);
      sc_v11_op_compare(r,c->x,0x00DCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 DC 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B10Bu,3u,0x05u,0xB10Eu);
      sc_v11_op_compare(r,c->x,0x05DCu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E0 DC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B10Bu,2u,0xDCu,0xB10Du);
      sc_v11_op_compare(r,c->x,0x00DCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B10Du:
    if(m==0u&&x==1u&&e==0u){ /* 05 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B10Du,2u,0xB0u,0xB10Fu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xB0u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 05 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B10Du,2u,0xB0u,0xB10Fu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB0u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B10Eu:
    if(m==1u&&x==0u&&e==0u){ /* B0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B10Eu,2u,0x0Fu,0xB110u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB11Fu;}
      if(c->pc!=0xB110u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB110u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B10Fu:
    if(m==0u&&x==1u&&e==0u){ /* 0F E2 20 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B10Fu,4u,0xBFu,0xB113u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_long(0xBF20E2u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0F E2 20 BF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B10Fu,4u,0xBFu,0xB113u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_long(0xBF20E2u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B110u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B110u,2u,0x20u,0xB112u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B113u:
    if(m==0u&&x==1u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B113u,1u,0x98u,0xB114u);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B113u,1u,0x98u,0xB114u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->y&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B114u:
    if(m==0u&&x==1u&&e==0u){ /* A5 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B114u,2u,0x7Fu,0xB116u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x7Fu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B114u,2u,0x7Fu,0xB116u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x7Fu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B116u:
    if(m==0u&&x==1u&&e==0u){ /* 39 DD B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B116u,3u,0xB0u,0xB119u);
      sc_v11_op_and(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xB0DDu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 39 DD B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B116u,3u,0xB0u,0xB119u);
      sc_v11_op_and(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xB0DDu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B119u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B119u,2u,0x20u,0xB11Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B119u,2u,0x20u,0xB11Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B11Bu:
    if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B11Bu,3u,0x00u,0xB11Eu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B11Eu:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B11Eu,1u,0xA8u,0xB11Fu);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B11Fu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B11Fu,1u,0x60u,0xB120u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B11Fu,1u,0x60u,0xB120u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B120u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B120u,2u,0x20u,0xB122u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B120u,2u,0x20u,0xB122u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B120u,2u,0x20u,0xB122u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B122u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B122u,2u,0x00u,0xB124u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B124u:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B124u,1u,0xEBu,0xB125u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B125u:
    if(m==1u&&x==1u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B125u,3u,0x0Bu,0xB128u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B128u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B128u,2u,0x20u,0xB12Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B12Au:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B12Au,3u,0x0Cu,0xB12Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C5Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B12Du:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B12Du,1u,0x0Au,0xB12Eu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B12Eu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B12Eu,1u,0x0Au,0xB12Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B12Fu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B12Fu,1u,0x0Au,0xB130u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B130u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B130u,1u,0x0Au,0xB131u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B131u:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B131u,1u,0x38u,0xB132u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B132u:
    if(m==0u&&x==1u&&e==0u){ /* ED 5B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B132u,3u,0x0Cu,0xB135u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C5Bu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B135u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 5B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B135u,3u,0x0Cu,0xB138u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C5Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B138u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B138u,2u,0x20u,0xB13Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B13Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B13Au,2u,0x00u,0xB13Cu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B13Cu:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B13Cu,1u,0xEBu,0xB13Du);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B13Du:
    if(m==1u&&x==1u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B13Du,3u,0x0Bu,0xB140u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B140u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B140u,2u,0x20u,0xB142u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B142u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B142u,1u,0x4Au,0xB143u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B143u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B143u,1u,0x4Au,0xB144u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B144u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B144u,1u,0x4Au,0xB145u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B145u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B145u,1u,0x18u,0xB146u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B146u:
    if(m==0u&&x==1u&&e==0u){ /* 6D 5B 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B146u,3u,0x0Cu,0xB149u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C5Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B149u:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B149u,1u,0xAAu,0xB14Au);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B14Au:
    if(m==0u&&x==1u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B14Au,3u,0x0Bu,0xB14Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B14Du:
    if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B14Du,3u,0x00u,0xB150u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B150u:
    if(m==0u&&x==1u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B150u,1u,0xA8u,0xB151u);
      c->y=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B151u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B151u,1u,0x60u,0xB152u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B152u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B152u,2u,0x20u,0xB154u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B152u,2u,0x20u,0xB154u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B152u,2u,0x20u,0xB154u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B154u:
    if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B154u,1u,0x0Bu,0xB155u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B155u:
    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B155u,1u,0x48u,0xB156u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B156u:
    if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B156u,1u,0x7Bu,0xB157u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B157u:
    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B157u,1u,0x38u,0xB158u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B158u:
    if(m==0u&&x==1u&&e==0u){ /* E9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B158u,3u,0x00u,0xB15Bu);
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B15Bu:
    if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B15Bu,1u,0x5Bu,0xB15Cu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B15Cu:
    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B15Cu,1u,0x68u,0xB15Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B15Du:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B15Du,2u,0x20u,0xB15Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B15Fu:
    if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B15Fu,1u,0x8Bu,0xB160u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B160u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B160u,2u,0x7Fu,0xB162u);
      sc_v11_op_lda(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B162u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B162u,1u,0x48u,0xB163u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B163u:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B163u,1u,0xABu,0xB164u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B164u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B164u,2u,0x20u,0xB166u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B166u:
    if(m==0u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B166u,2u,0x00u,0xB168u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B197u:
    if(m==0u&&x==0u&&e==0u){ /* 66 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B197u,2u,0x00u,0xB199u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x00u),16u,3u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B199u:
    if(m==0u&&x==0u&&e==0u){ /* 80 DF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B199u,2u,0xDFu,0xB19Bu);
      if(1){c->pc=0xB17Au;}
      if(c->pc!=0xB19Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB19Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1A5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1A5u,2u,0x20u,0xB1A7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1A5u,2u,0x20u,0xB1A7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1A7u:
    if(m==0u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1A7u,1u,0x0Bu,0xB1A8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1A7u,1u,0x0Bu,0xB1A8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1A8u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1A8u,1u,0x48u,0xB1A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1A8u,1u,0x48u,0xB1A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1A9u:
    if(m==0u&&x==0u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1A9u,1u,0x7Bu,0xB1AAu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1A9u,1u,0x7Bu,0xB1AAu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1AAu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1AAu,1u,0x38u,0xB1ABu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1AAu,1u,0x38u,0xB1ABu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1ABu:
    if(m==0u&&x==0u&&e==0u){ /* E9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1ABu,3u,0x00u,0xB1AEu);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1ABu,3u,0x00u,0xB1AEu);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1AEu:
    if(m==0u&&x==0u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1AEu,1u,0x5Bu,0xB1AFu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1AEu,1u,0x5Bu,0xB1AFu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1AFu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1AFu,1u,0x68u,0xB1B0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1AFu,1u,0x68u,0xB1B0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1B0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1B0u,2u,0x30u,0xB1B2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1B0u,2u,0x30u,0xB1B2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1B2u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1B2u,1u,0x0Au,0xB1B3u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1B3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 55 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1B3u,3u,0x0Cu,0xB1B6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C55u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1B6u:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1B6u,3u,0x0Bu,0xB1B9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1B9u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1B9u,2u,0x00u,0xB1BBu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1BBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1BBu,3u,0x0Bu,0xB1BEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B86u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1BEu:
    if(m==0u&&x==0u&&e==0u){ /* 85 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1BEu,2u,0x02u,0xB1C0u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1C0u:
    if(m==0u&&x==0u&&e==0u){ /* 9C 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1C0u,3u,0x0Cu,0xB1C3u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C13u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1C3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 6B B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1C3u,3u,0xB2u,0xB1C6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB1C5u))return 0;c->pc=0xB26Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1C6u:
    if(m==0u&&x==0u&&e==0u){ /* F0 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1C6u,2u,0x28u,0xB1C8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB1F0u;}
      if(c->pc!=0xB1C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB1C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1C6u,2u,0x28u,0xB1C8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB1F0u;}
      if(c->pc!=0xB1C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB1C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1C6u,2u,0x28u,0xB1C8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB1F0u;}
      if(c->pc!=0xB1C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB1C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1C6u,2u,0x28u,0xB1C8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB1F0u;}
      if(c->pc!=0xB1C8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB1C8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1C8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 D6 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1C8u,3u,0xB2u,0xB1CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB1CAu))return 0;c->pc=0xB2D6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 D6 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1C8u,3u,0xB2u,0xB1CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB1CAu))return 0;c->pc=0xB2D6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 D6 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1C8u,3u,0xB2u,0xB1CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB1CAu))return 0;c->pc=0xB2D6u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 D6 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1C8u,3u,0xB2u,0xB1CBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB1CAu))return 0;c->pc=0xB2D6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1CBu:
    if(m==0u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1CBu,2u,0x14u,0xB1CDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB1E1u;}
      if(c->pc!=0xB1CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB1CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1CBu,2u,0x14u,0xB1CDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB1E1u;}
      if(c->pc!=0xB1CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB1CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1CBu,2u,0x14u,0xB1CDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB1E1u;}
      if(c->pc!=0xB1CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB1CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1CBu,2u,0x14u,0xB1CDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB1E1u;}
      if(c->pc!=0xB1CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB1CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1CDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1CDu,3u,0xB1u,0xB1D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB1CFu))return 0;c->pc=0xB1F5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F5 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1CDu,3u,0xB1u,0xB1D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB1CFu))return 0;c->pc=0xB1F5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F5 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1CDu,3u,0xB1u,0xB1D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB1CFu))return 0;c->pc=0xB1F5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F5 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1CDu,3u,0xB1u,0xB1D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB1CFu))return 0;c->pc=0xB1F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1D0u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D0u,2u,0x00u,0xB1D2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D0u,2u,0x00u,0xB1D2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D0u,2u,0x00u,0xB1D2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D0u,2u,0x00u,0xB1D2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1D2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D2u,3u,0x0Bu,0xB1D5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D2u,3u,0x0Bu,0xB1D5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D2u,3u,0x0Bu,0xB1D5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D2u,3u,0x0Bu,0xB1D5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1D5u:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D5u,2u,0x02u,0xB1D7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D5u,2u,0x02u,0xB1D7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D5u,2u,0x02u,0xB1D7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D5u,2u,0x02u,0xB1D7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1D7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D7u,3u,0x0Bu,0xB1DAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B86u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D7u,3u,0x0Bu,0xB1DAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B86u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D7u,3u,0x0Bu,0xB1DAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1D7u,3u,0x0Bu,0xB1DAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1DAu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1DAu,2u,0x20u,0xB1DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1DAu,2u,0x20u,0xB1DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1DAu,2u,0x20u,0xB1DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1DAu,2u,0x20u,0xB1DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1DCu:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1DCu,1u,0x2Bu,0xB1DDu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1DCu,1u,0x2Bu,0xB1DDu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1DDu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1DDu,3u,0x00u,0xB1E0u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1DDu,3u,0x00u,0xB1E0u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1E0u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E0u,1u,0x60u,0xB1E1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E0u,1u,0x60u,0xB1E1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1E1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E1u,2u,0x00u,0xB1E3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E1u,2u,0x00u,0xB1E3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E1u,2u,0x00u,0xB1E3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E1u,2u,0x00u,0xB1E3u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1E3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E3u,3u,0x0Bu,0xB1E6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E3u,3u,0x0Bu,0xB1E6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E3u,3u,0x0Bu,0xB1E6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E3u,3u,0x0Bu,0xB1E6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1E6u:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E6u,2u,0x02u,0xB1E8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E6u,2u,0x02u,0xB1E8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E6u,2u,0x02u,0xB1E8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E6u,2u,0x02u,0xB1E8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1E8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E8u,3u,0x0Bu,0xB1EBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B86u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E8u,3u,0x0Bu,0xB1EBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B86u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E8u,3u,0x0Bu,0xB1EBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1E8u,3u,0x0Bu,0xB1EBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1EBu:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1EBu,1u,0x2Bu,0xB1ECu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1EBu,1u,0x2Bu,0xB1ECu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1EBu,1u,0x2Bu,0xB1ECu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1EBu,1u,0x2Bu,0xB1ECu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1ECu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1ECu,3u,0x00u,0xB1EFu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1ECu,3u,0x00u,0xB1EFu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1ECu,2u,0x00u,0xB1EEu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1ECu,2u,0x00u,0xB1EEu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1EFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1EFu,1u,0x60u,0xB1F0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1EFu,1u,0x60u,0xB1F0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1F0u:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F0u,1u,0x2Bu,0xB1F1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F0u,1u,0x2Bu,0xB1F1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F0u,1u,0x2Bu,0xB1F1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F0u,1u,0x2Bu,0xB1F1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1F1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F1u,3u,0xFFu,0xB1F4u);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F1u,3u,0xFFu,0xB1F4u);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F1u,2u,0xFFu,0xB1F3u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F1u,2u,0xFFu,0xB1F3u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1F3u:
    if(m==1u&&x==0u&&e==0u){ /* FF 60 C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F3u,4u,0x20u,0xB1F7u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x20C260u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FF 60 C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F3u,4u,0x20u,0xB1F7u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x20C260u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1F4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F4u,1u,0x60u,0xB1F5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F4u,1u,0x60u,0xB1F5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1F5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F5u,2u,0x20u,0xB1F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F5u,2u,0x20u,0xB1F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F5u,2u,0x20u,0xB1F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F5u,2u,0x20u,0xB1F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1F7u:
    if(m==0u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F7u,1u,0x0Bu,0xB1F8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F7u,1u,0x0Bu,0xB1F8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F7u,1u,0x0Bu,0xB1F8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F7u,1u,0x0Bu,0xB1F8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1F8u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F8u,1u,0x48u,0xB1F9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F8u,1u,0x48u,0xB1F9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F8u,1u,0x48u,0xB1F9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F8u,1u,0x48u,0xB1F9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1F9u:
    if(m==0u&&x==0u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F9u,1u,0x7Bu,0xB1FAu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F9u,1u,0x7Bu,0xB1FAu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F9u,1u,0x7Bu,0xB1FAu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1F9u,1u,0x7Bu,0xB1FAu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1FAu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1FAu,1u,0x38u,0xB1FBu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1FAu,1u,0x38u,0xB1FBu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1FAu,1u,0x38u,0xB1FBu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1FAu,1u,0x38u,0xB1FBu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1FBu:
    if(m==0u&&x==0u&&e==0u){ /* E9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1FBu,3u,0x00u,0xB1FEu);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1FBu,3u,0x00u,0xB1FEu);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1FBu,2u,0x04u,0xB1FDu);
      sc_v11_op_sbc(r,0x0004u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E9 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1FBu,2u,0x04u,0xB1FDu);
      sc_v11_op_sbc(r,0x0004u,8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1FEu:
    if(m==0u&&x==0u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1FEu,1u,0x5Bu,0xB1FFu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1FEu,1u,0x5Bu,0xB1FFu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B1FFu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1FFu,1u,0x68u,0xB200u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B1FFu,1u,0x68u,0xB200u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B200u:
    if(m==0u&&x==0u&&e==0u){ /* AE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B200u,3u,0x0Cu,0xB203u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B200u,3u,0x0Cu,0xB203u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C13u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B203u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B203u,1u,0xDAu,0xB204u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B203u,1u,0xDAu,0xB204u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B203u,1u,0xDAu,0xB204u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B203u,1u,0xDAu,0xB204u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B204u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B204u,2u,0x20u,0xB206u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B204u,2u,0x20u,0xB206u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B204u,2u,0x20u,0xB206u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B204u,2u,0x20u,0xB206u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B206u:
    if(m==1u&&x==0u&&e==0u){ /* 20 58 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B206u,3u,0xB2u,0xB209u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB208u))return 0;c->pc=0xB258u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 58 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B206u,3u,0xB2u,0xB209u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB208u))return 0;c->pc=0xB258u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B209u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B209u,2u,0x20u,0xB20Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B209u,2u,0x20u,0xB20Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B209u,2u,0x20u,0xB20Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B209u,2u,0x20u,0xB20Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B20Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B20Bu,3u,0x0Bu,0xB20Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B20Bu,3u,0x0Bu,0xB20Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B20Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B20Eu,3u,0x84u,0xB211u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB210u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B20Eu,3u,0x84u,0xB211u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB210u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B211u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B211u,3u,0x03u,0xB214u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B211u,3u,0x03u,0xB214u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B211u,2u,0xFFu,0xB213u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B211u,2u,0xFFu,0xB213u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B213u:
    if(m==1u&&x==0u&&e==0u){ /* 03 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B213u,2u,0xC9u,0xB215u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0xC9u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B213u,2u,0xC9u,0xB215u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0xC9u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B214u:
    if(m==0u&&x==0u&&e==0u){ /* C9 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B214u,3u,0x00u,0xB217u);
      sc_v11_op_compare(r,c->a,0x0030u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B214u,3u,0x00u,0xB217u);
      sc_v11_op_compare(r,c->a,0x0030u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B215u:
    if(m==1u&&x==0u&&e==0u){ /* 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B215u,2u,0x00u,0xB217u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB217u;}
      if(c->pc!=0xB217u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB217u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B215u,2u,0x00u,0xB217u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB217u;}
      if(c->pc!=0xB217u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB217u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B217u:
    if(m==0u&&x==0u&&e==0u){ /* 90 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B217u,2u,0x26u,0xB219u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB23Fu;}
      if(c->pc!=0xB219u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB219u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B217u,2u,0x26u,0xB219u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB23Fu;}
      if(c->pc!=0xB219u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB219u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B217u,2u,0x26u,0xB219u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB23Fu;}
      if(c->pc!=0xB219u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB219u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B217u,2u,0x26u,0xB219u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB23Fu;}
      if(c->pc!=0xB219u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB219u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B219u:
    if(m==0u&&x==0u&&e==0u){ /* C9 60 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B219u,3u,0x00u,0xB21Cu);
      sc_v11_op_compare(r,c->a,0x0060u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 60 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B219u,3u,0x00u,0xB21Cu);
      sc_v11_op_compare(r,c->a,0x0060u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B219u,2u,0x60u,0xB21Bu);
      sc_v11_op_compare(r,c->a,0x0060u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B219u,2u,0x60u,0xB21Bu);
      sc_v11_op_compare(r,c->a,0x0060u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B21Cu:
    if(m==0u&&x==0u&&e==0u){ /* B0 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B21Cu,2u,0x21u,0xB21Eu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB23Fu;}
      if(c->pc!=0xB21Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB21Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B21Cu,2u,0x21u,0xB21Eu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB23Fu;}
      if(c->pc!=0xB21Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB21Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B21Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B21Eu,2u,0x20u,0xB220u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B21Eu,2u,0x20u,0xB220u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B220u:
    if(m==1u&&x==0u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B220u,3u,0x0Bu,0xB223u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B220u,3u,0x0Bu,0xB223u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B223u:
    if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B223u,1u,0x4Au,0xB224u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B223u,1u,0x4Au,0xB224u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B224u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B224u,1u,0xEBu,0xB225u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B224u,1u,0xEBu,0xB225u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B225u:
    if(m==1u&&x==0u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B225u,3u,0x0Bu,0xB228u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B225u,3u,0x0Bu,0xB228u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B228u:
    if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B228u,1u,0x4Au,0xB229u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B228u,1u,0x4Au,0xB229u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B229u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9A A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B229u,3u,0xA2u,0xB22Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB22Bu))return 0;c->pc=0xA29Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9A A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B229u,3u,0xA2u,0xB22Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB22Bu))return 0;c->pc=0xA29Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B22Cu:
    if(m==0u&&x==0u&&e==0u){ /* BF E0 99 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B22Cu,4u,0x7Fu,0xB230u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F99E0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF E0 99 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B22Cu,4u,0x7Fu,0xB230u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F99E0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF E0 99 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B22Cu,4u,0x7Fu,0xB230u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7F99E0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BF E0 99 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B22Cu,4u,0x7Fu,0xB230u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7F99E0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B230u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B230u,1u,0x18u,0xB231u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B230u,1u,0x18u,0xB231u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B230u,1u,0x18u,0xB231u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B230u,1u,0x18u,0xB231u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B231u:
    if(m==0u&&x==0u&&e==0u){ /* 69 32 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B231u,3u,0xB0u,0xB234u);
      sc_v11_op_adc(r,0xB032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 32 B0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B231u,3u,0xB0u,0xB234u);
      sc_v11_op_adc(r,0xB032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B231u,2u,0x32u,0xB233u);
      sc_v11_op_adc(r,0x0032u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B231u,2u,0x32u,0xB233u);
      sc_v11_op_adc(r,0x0032u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B233u:
    if(m==1u&&x==0u&&e==0u){ /* B0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B233u,2u,0x04u,0xB235u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB239u;}
      if(c->pc!=0xB235u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB235u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B233u,2u,0x04u,0xB235u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB239u;}
      if(c->pc!=0xB235u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB235u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B235u:
    if(m==1u&&x==0u&&e==0u){ /* C9 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B235u,2u,0xF0u,0xB237u);
      sc_v11_op_compare(r,c->a,0x00F0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B235u,2u,0xF0u,0xB237u);
      sc_v11_op_compare(r,c->a,0x00F0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B237u:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B237u,2u,0x02u,0xB239u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB23Bu;}
      if(c->pc!=0xB239u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB239u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B237u,2u,0x02u,0xB239u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB23Bu;}
      if(c->pc!=0xB239u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB239u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B239u:
    if(m==1u&&x==0u&&e==0u){ /* A9 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B239u,2u,0xF0u,0xB23Bu);
      sc_v11_op_lda(r,0x00F0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 F0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B239u,2u,0xF0u,0xB23Bu);
      sc_v11_op_lda(r,0x00F0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B23Bu:
    if(m==1u&&x==0u&&e==0u){ /* 9F E0 99 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B23Bu,4u,0x7Fu,0xB23Fu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7F99E0u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9F E0 99 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B23Bu,4u,0x7Fu,0xB23Fu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7F99E0u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B23Fu:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B23Fu,1u,0xFAu,0xB240u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B23Fu,1u,0xFAu,0xB240u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B23Fu,1u,0xFAu,0xB240u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B23Fu,1u,0xFAu,0xB240u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B240u:
    if(m==0u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B240u,1u,0xCAu,0xB241u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B240u,1u,0xCAu,0xB241u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B240u,1u,0xCAu,0xB241u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B240u,1u,0xCAu,0xB241u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B241u:
    if(m==0u&&x==0u&&e==0u){ /* 10 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B241u,2u,0xC0u,0xB243u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB203u;}
      if(c->pc!=0xB243u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB243u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 10 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B241u,2u,0xC0u,0xB243u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB203u;}
      if(c->pc!=0xB243u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB243u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 10 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B241u,2u,0xC0u,0xB243u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB203u;}
      if(c->pc!=0xB243u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB243u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 10 C0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B241u,2u,0xC0u,0xB243u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB203u;}
      if(c->pc!=0xB243u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB243u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B243u:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B243u,1u,0x2Bu,0xB244u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B243u,1u,0x2Bu,0xB244u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B243u,1u,0x2Bu,0xB244u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B243u,1u,0x2Bu,0xB244u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B244u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B244u,1u,0x60u,0xB245u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B244u,1u,0x60u,0xB245u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B244u,1u,0x60u,0xB245u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B244u,1u,0x60u,0xB245u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B245u:
    if(m==0u&&x==0u&&e==0u){ /* EE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B245u,3u,0x0Cu,0xB248u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C13u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B245u,3u,0x0Cu,0xB248u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C13u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B248u:
    if(m==0u&&x==0u&&e==0u){ /* AE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B248u,3u,0x0Cu,0xB24Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B248u,3u,0x0Cu,0xB24Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C13u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B24Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B24Bu,3u,0x0Bu,0xB24Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B24Bu,3u,0x0Bu,0xB24Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B24Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9D 15 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B24Eu,3u,0x0Cu,0xB251u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0C15u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9D 15 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B24Eu,3u,0x0Cu,0xB251u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0C15u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B251u:
    if(m==0u&&x==0u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B251u,3u,0x0Bu,0xB254u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B86u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B251u,3u,0x0Bu,0xB254u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B86u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B254u:
    if(m==0u&&x==0u&&e==0u){ /* 9D 34 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B254u,3u,0x0Cu,0xB257u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0C34u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9D 34 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B254u,3u,0x0Cu,0xB257u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x0C34u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B257u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B257u,1u,0x60u,0xB258u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B257u,1u,0x60u,0xB258u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B258u:
    if(m==1u&&x==0u&&e==0u){ /* AE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B258u,3u,0x0Cu,0xB25Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B258u,3u,0x0Cu,0xB25Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C13u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B25Bu:
    if(m==1u&&x==0u&&e==0u){ /* BD 15 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B25Bu,3u,0x0Cu,0xB25Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0C15u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BD 15 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B25Bu,3u,0x0Cu,0xB25Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0C15u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B25Eu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B25Eu,3u,0x0Bu,0xB261u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B25Eu,3u,0x0Bu,0xB261u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B261u:
    if(m==1u&&x==0u&&e==0u){ /* BD 34 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B261u,3u,0x0Cu,0xB264u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0C34u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BD 34 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B261u,3u,0x0Cu,0xB264u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0C34u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B264u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B264u,3u,0x0Bu,0xB267u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B264u,3u,0x0Bu,0xB267u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B267u:
    if(m==1u&&x==0u&&e==0u){ /* CE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B267u,3u,0x0Cu,0xB26Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C13u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B267u,3u,0x0Cu,0xB26Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C13u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B26Au:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B26Au,1u,0x60u,0xB26Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B26Au,1u,0x60u,0xB26Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B26Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B26Bu,2u,0x20u,0xB26Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B26Du:
    if(m==0u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B26Du,1u,0x0Bu,0xB26Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B26Eu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B26Eu,1u,0x48u,0xB26Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B26Fu:
    if(m==0u&&x==0u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B26Fu,1u,0x7Bu,0xB270u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B270u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B270u,1u,0x38u,0xB271u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B271u:
    if(m==0u&&x==0u&&e==0u){ /* E9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B271u,3u,0x00u,0xB274u);
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B274u:
    if(m==0u&&x==0u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B274u,1u,0x5Bu,0xB275u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B275u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B275u,1u,0x68u,0xB276u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B276u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B276u,3u,0x00u,0xB279u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B279u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B279u,1u,0xDAu,0xB27Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B279u,1u,0xDAu,0xB27Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B27Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B27Au,2u,0x20u,0xB27Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B27Au,2u,0x20u,0xB27Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B27Cu:
    if(m==1u&&x==0u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B27Cu,3u,0x0Bu,0xB27Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B27Fu:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B27Fu,1u,0x18u,0xB280u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B280u:
    if(m==1u&&x==0u&&e==0u){ /* 7D CA B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B280u,3u,0xB2u,0xB283u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB2CAu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B283u:
    if(m==1u&&x==0u&&e==0u){ /* 85 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B283u,2u,0x01u,0xB285u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x01u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B285u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B285u,1u,0xEBu,0xB286u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B286u:
    if(m==1u&&x==0u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B286u,3u,0x0Bu,0xB289u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B289u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B289u,1u,0x18u,0xB28Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B28Au:
    if(m==1u&&x==0u&&e==0u){ /* 7D BE B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B28Au,3u,0xB2u,0xB28Du);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB2BEu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B28Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B28Du,2u,0x00u,0xB28Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B28Fu:
    if(m==1u&&x==0u&&e==0u){ /* 20 20 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B28Fu,3u,0xB4u,0xB292u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB291u))return 0;c->pc=0xB420u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B292u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B292u,2u,0x1Cu,0xB294u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2B0u;}
      if(c->pc!=0xB294u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB294u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B292u,2u,0x1Cu,0xB294u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2B0u;}
      if(c->pc!=0xB294u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB294u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B292u,2u,0x1Cu,0xB294u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2B0u;}
      if(c->pc!=0xB294u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB294u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B292u,2u,0x1Cu,0xB294u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2B0u;}
      if(c->pc!=0xB294u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB294u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B294u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B294u,2u,0x20u,0xB296u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B294u,2u,0x20u,0xB296u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B294u,2u,0x20u,0xB296u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B294u,2u,0x20u,0xB296u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B296u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B296u,2u,0x00u,0xB298u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B296u,2u,0x00u,0xB298u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B298u:
    if(m==0u&&x==0u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B298u,3u,0x84u,0xB29Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB29Au))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B298u,3u,0x84u,0xB29Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB29Au))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B29Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 01 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B29Bu,3u,0xB4u,0xB29Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB29Du))return 0;c->pc=0xB401u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 01 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B29Bu,3u,0xB4u,0xB29Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB29Du))return 0;c->pc=0xB401u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 01 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B29Bu,3u,0xB4u,0xB29Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB29Du))return 0;c->pc=0xB401u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 01 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B29Bu,3u,0xB4u,0xB29Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB29Du))return 0;c->pc=0xB401u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B29Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B29Eu,2u,0x10u,0xB2A0u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2B0u;}
      if(c->pc!=0xB2A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B29Eu,2u,0x10u,0xB2A0u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2B0u;}
      if(c->pc!=0xB2A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B29Eu,2u,0x10u,0xB2A0u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2B0u;}
      if(c->pc!=0xB2A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B29Eu,2u,0x10u,0xB2A0u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2B0u;}
      if(c->pc!=0xB2A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2A0u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A0u,2u,0x00u,0xB2A2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A0u,2u,0x00u,0xB2A2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A0u,2u,0x00u,0xB2A2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A0u,2u,0x00u,0xB2A2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2A2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A2u,3u,0x0Bu,0xB2A5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A2u,3u,0x0Bu,0xB2A5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B85u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A2u,3u,0x0Bu,0xB2A5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A2u,3u,0x0Bu,0xB2A5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B85u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2A5u:
    if(m==0u&&x==0u&&e==0u){ /* A5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A5u,2u,0x01u,0xB2A7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x01u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A5u,2u,0x01u,0xB2A7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x01u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A5u,2u,0x01u,0xB2A7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x01u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A5u,2u,0x01u,0xB2A7u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x01u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2A7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A7u,3u,0x0Bu,0xB2AAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B86u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A7u,3u,0x0Bu,0xB2AAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B86u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A7u,3u,0x0Bu,0xB2AAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2A7u,3u,0x0Bu,0xB2AAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B86u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2AAu:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2AAu,1u,0xFAu,0xB2ABu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2AAu,1u,0xFAu,0xB2ABu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2AAu,1u,0xFAu,0xB2ABu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2AAu,1u,0xFAu,0xB2ABu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2ABu:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2ABu,1u,0x2Bu,0xB2ACu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2ABu,1u,0x2Bu,0xB2ACu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2ABu,1u,0x2Bu,0xB2ACu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2ABu,1u,0x2Bu,0xB2ACu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2ACu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2ACu,3u,0x00u,0xB2AFu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2ACu,3u,0x00u,0xB2AFu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2ACu,2u,0x01u,0xB2AEu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2ACu,2u,0x01u,0xB2AEu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2AFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2AFu,1u,0x60u,0xB2B0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2AFu,1u,0x60u,0xB2B0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2B0u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B0u,1u,0xFAu,0xB2B1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B0u,1u,0xFAu,0xB2B1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B0u,1u,0xFAu,0xB2B1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B0u,1u,0xFAu,0xB2B1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2B1u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B1u,1u,0xE8u,0xB2B2u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B1u,1u,0xE8u,0xB2B2u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B1u,1u,0xE8u,0xB2B2u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B1u,1u,0xE8u,0xB2B2u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2B2u:
    if(m==0u&&x==0u&&e==0u){ /* E0 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B2u,3u,0x00u,0xB2B5u);
      sc_v11_op_compare(r,c->x,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B2u,2u,0x0Cu,0xB2B4u);
      sc_v11_op_compare(r,c->x,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 0C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B2u,3u,0x00u,0xB2B5u);
      sc_v11_op_compare(r,c->x,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B2u,2u,0x0Cu,0xB2B4u);
      sc_v11_op_compare(r,c->x,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2B5u:
    if(m==0u&&x==0u&&e==0u){ /* D0 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B5u,2u,0xC2u,0xB2B7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB279u;}
      if(c->pc!=0xB2B7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2B7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B5u,2u,0xC2u,0xB2B7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB279u;}
      if(c->pc!=0xB2B7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2B7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2B7u:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B7u,1u,0x2Bu,0xB2B8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B7u,1u,0x2Bu,0xB2B8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2B8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B8u,2u,0x20u,0xB2BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2B8u,2u,0x20u,0xB2BAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2BAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2BAu,3u,0x00u,0xB2BDu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2BDu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2BDu,1u,0x60u,0xB2BEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2D6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2D6u,2u,0x20u,0xB2D8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2D6u,2u,0x20u,0xB2D8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2D6u,2u,0x20u,0xB2D8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2D6u,2u,0x20u,0xB2D8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2D8u:
    if(m==0u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2D8u,1u,0x0Bu,0xB2D9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2D8u,1u,0x0Bu,0xB2D9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2D9u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2D9u,1u,0x48u,0xB2DAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2D9u,1u,0x48u,0xB2DAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2DAu:
    if(m==0u&&x==0u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2DAu,1u,0x7Bu,0xB2DBu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2DAu,1u,0x7Bu,0xB2DBu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2DBu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2DBu,1u,0x38u,0xB2DCu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2DBu,1u,0x38u,0xB2DCu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2DCu:
    if(m==0u&&x==0u&&e==0u){ /* E9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2DCu,3u,0x00u,0xB2DFu);
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2DCu,3u,0x00u,0xB2DFu);
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2DFu:
    if(m==0u&&x==0u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2DFu,1u,0x5Bu,0xB2E0u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2DFu,1u,0x5Bu,0xB2E0u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2E0u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2E0u,1u,0x68u,0xB2E1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2E0u,1u,0x68u,0xB2E1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2E1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2E1u,3u,0x00u,0xB2E4u);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 05 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2E1u,3u,0x00u,0xB2E4u);
      sc_v11_op_lda(r,0x0005u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2E4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2E4u,3u,0x0Cu,0xB2E7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C53u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2E4u,3u,0x0Cu,0xB2E7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C53u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2E7u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2E7u,3u,0x00u,0xB2EAu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2E7u,2u,0x00u,0xB2E9u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2EAu:
    if(m==0u&&x==0u&&e==0u){ /* 86 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2EAu,2u,0x00u,0xB2ECu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 86 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2EAu,2u,0x00u,0xB2ECu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2ECu:
    if(m==0u&&x==0u&&e==0u){ /* 20 18 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2ECu,3u,0xB3u,0xB2EFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB2EEu))return 0;c->pc=0xB318u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 18 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2ECu,3u,0xB3u,0xB2EFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB2EEu))return 0;c->pc=0xB318u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2EFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2EFu,2u,0x0Au,0xB2F1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2FBu;}
      if(c->pc!=0xB2F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2EFu,2u,0x0Au,0xB2F1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2FBu;}
      if(c->pc!=0xB2F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2EFu,2u,0x0Au,0xB2F1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2FBu;}
      if(c->pc!=0xB2F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2EFu,2u,0x0Au,0xB2F1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB2FBu;}
      if(c->pc!=0xB2F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2F1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 B0 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F1u,3u,0xB3u,0xB2F4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB2F3u))return 0;c->pc=0xB3B0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 B0 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F1u,3u,0xB3u,0xB2F4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB2F3u))return 0;c->pc=0xB3B0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B0 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F1u,3u,0xB3u,0xB2F4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB2F3u))return 0;c->pc=0xB3B0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B0 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F1u,3u,0xB3u,0xB2F4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB2F3u))return 0;c->pc=0xB3B0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2F4u:
    if(m==0u&&x==0u&&e==0u){ /* F0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F4u,2u,0x15u,0xB2F6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB30Bu;}
      if(c->pc!=0xB2F6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2F6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F4u,2u,0x15u,0xB2F6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB30Bu;}
      if(c->pc!=0xB2F6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2F6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F4u,2u,0x15u,0xB2F6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB30Bu;}
      if(c->pc!=0xB2F6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2F6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F4u,2u,0x15u,0xB2F6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB30Bu;}
      if(c->pc!=0xB2F6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB2F6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2F6u:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F6u,1u,0x2Bu,0xB2F7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F6u,1u,0x2Bu,0xB2F7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F6u,1u,0x2Bu,0xB2F7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F6u,1u,0x2Bu,0xB2F7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2F7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F7u,3u,0x00u,0xB2FAu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F7u,3u,0x00u,0xB2FAu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F7u,2u,0x01u,0xB2F9u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2F7u,2u,0x01u,0xB2F9u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2FAu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2FAu,1u,0x60u,0xB2FBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2FAu,1u,0x60u,0xB2FBu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2FBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2FBu,3u,0x0Cu,0xB2FEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2FBu,3u,0x0Cu,0xB2FEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2FBu,3u,0x0Cu,0xB2FEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C13u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2FBu,3u,0x0Cu,0xB2FEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C13u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B2FEu:
    if(m==0u&&x==0u&&e==0u){ /* F0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2FEu,2u,0x13u,0xB300u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB313u;}
      if(c->pc!=0xB300u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB300u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2FEu,2u,0x13u,0xB300u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB313u;}
      if(c->pc!=0xB300u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB300u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2FEu,2u,0x13u,0xB300u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB313u;}
      if(c->pc!=0xB300u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB300u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B2FEu,2u,0x13u,0xB300u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB313u;}
      if(c->pc!=0xB300u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB300u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B300u:
    if(m==0u&&x==0u&&e==0u){ /* CE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B300u,3u,0x0Cu,0xB303u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C13u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B300u,3u,0x0Cu,0xB303u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C13u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* CE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B300u,3u,0x0Cu,0xB303u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C13u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* CE 13 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B300u,3u,0x0Cu,0xB303u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0C13u),8u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B303u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B303u,2u,0x00u,0xB305u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B303u,2u,0x00u,0xB305u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B303u,2u,0x00u,0xB305u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B303u,2u,0x00u,0xB305u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B305u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B305u,1u,0x18u,0xB306u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B305u,1u,0x18u,0xB306u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B305u,1u,0x18u,0xB306u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B305u,1u,0x18u,0xB306u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B306u:
    if(m==0u&&x==0u&&e==0u){ /* 69 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B306u,3u,0x00u,0xB309u);
      sc_v11_op_adc(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B306u,3u,0x00u,0xB309u);
      sc_v11_op_adc(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B306u,2u,0x03u,0xB308u);
      sc_v11_op_adc(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B306u,2u,0x03u,0xB308u);
      sc_v11_op_adc(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B309u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B309u,2u,0x00u,0xB30Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B309u,2u,0x00u,0xB30Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B30Bu:
    if(m==0u&&x==0u&&e==0u){ /* A6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B30Bu,2u,0x00u,0xB30Du);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B30Bu,2u,0x00u,0xB30Du);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B30Bu,2u,0x00u,0xB30Du);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B30Bu,2u,0x00u,0xB30Du);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B30Du:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B30Du,1u,0xE8u,0xB30Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B30Du,1u,0xE8u,0xB30Eu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B30Du,1u,0xE8u,0xB30Eu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B30Du,1u,0xE8u,0xB30Eu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B30Eu:
    if(m==0u&&x==0u&&e==0u){ /* E0 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B30Eu,3u,0x00u,0xB311u);
      sc_v11_op_compare(r,c->x,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E0 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B30Eu,2u,0x1Eu,0xB310u);
      sc_v11_op_compare(r,c->x,0x001Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B30Eu,3u,0x00u,0xB311u);
      sc_v11_op_compare(r,c->x,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E0 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B30Eu,2u,0x1Eu,0xB310u);
      sc_v11_op_compare(r,c->x,0x001Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B311u:
    if(m==0u&&x==0u&&e==0u){ /* D0 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B311u,2u,0xD7u,0xB313u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB2EAu;}
      if(c->pc!=0xB313u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB313u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B311u,2u,0xD7u,0xB313u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB2EAu;}
      if(c->pc!=0xB313u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB313u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B313u:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B313u,1u,0x2Bu,0xB314u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B313u,1u,0x2Bu,0xB314u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B313u,1u,0x2Bu,0xB314u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B313u,1u,0x2Bu,0xB314u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B314u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B314u,3u,0x00u,0xB317u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B314u,3u,0x00u,0xB317u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B314u,2u,0x00u,0xB316u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B314u,2u,0x00u,0xB316u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B317u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B317u,1u,0x60u,0xB318u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B317u,1u,0x60u,0xB318u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B318u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B318u,2u,0x20u,0xB31Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B318u,2u,0x20u,0xB31Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B31Au:
    if(m==0u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B31Au,1u,0x0Bu,0xB31Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B31Bu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B31Bu,1u,0x48u,0xB31Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B31Cu:
    if(m==0u&&x==0u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B31Cu,1u,0x7Bu,0xB31Du);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B31Du:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B31Du,1u,0x38u,0xB31Eu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B31Eu:
    if(m==0u&&x==0u&&e==0u){ /* E9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B31Eu,3u,0x00u,0xB321u);
      sc_v11_op_sbc(r,0x0008u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B321u:
    if(m==0u&&x==0u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B321u,1u,0x5Bu,0xB322u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B322u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B322u,1u,0x68u,0xB323u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B323u:
    if(m==0u&&x==0u&&e==0u){ /* 86 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B323u,2u,0x00u,0xB325u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B325u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B325u,3u,0x90u,0xB328u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB327u))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B328u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B328u,3u,0x00u,0xB32Bu);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B328u,3u,0x00u,0xB32Bu);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B328u,2u,0x03u,0xB32Au);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B328u,2u,0x03u,0xB32Au);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B32Bu:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B32Bu,2u,0x04u,0xB32Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B32Bu,2u,0x04u,0xB32Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B32Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B32Du,2u,0x02u,0xB32Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B32Du,2u,0x02u,0xB32Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B32Fu:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B32Fu,2u,0x02u,0xB331u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B32Fu,2u,0x02u,0xB331u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B331u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B331u,3u,0x00u,0xB334u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B331u,3u,0x00u,0xB334u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B334u:
    if(m==0u&&x==0u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B334u,2u,0x06u,0xB336u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B334u,2u,0x06u,0xB336u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B336u:
    if(m==0u&&x==0u&&e==0u){ /* CD 53 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B336u,3u,0x0Cu,0xB339u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C53u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CD 53 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B336u,3u,0x0Cu,0xB339u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C53u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B339u:
    if(m==0u&&x==0u&&e==0u){ /* F0 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B339u,2u,0x25u,0xB33Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB360u;}
      if(c->pc!=0xB33Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB33Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B339u,2u,0x25u,0xB33Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB360u;}
      if(c->pc!=0xB33Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB33Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B33Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 70 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B33Bu,3u,0xB3u,0xB33Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB33Du))return 0;c->pc=0xB370u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 70 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B33Bu,3u,0xB3u,0xB33Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB33Du))return 0;c->pc=0xB370u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B33Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 01 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B33Eu,3u,0xB4u,0xB341u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB340u))return 0;c->pc=0xB401u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 01 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B33Eu,3u,0xB4u,0xB341u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB340u))return 0;c->pc=0xB401u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 01 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B33Eu,3u,0xB4u,0xB341u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB340u))return 0;c->pc=0xB401u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 01 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B33Eu,3u,0xB4u,0xB341u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB340u))return 0;c->pc=0xB401u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B341u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B341u,2u,0x1Du,0xB343u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB360u;}
      if(c->pc!=0xB343u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB343u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B341u,2u,0x1Du,0xB343u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB360u;}
      if(c->pc!=0xB343u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB343u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B341u,2u,0x1Du,0xB343u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB360u;}
      if(c->pc!=0xB343u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB343u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B341u,2u,0x1Du,0xB343u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB360u;}
      if(c->pc!=0xB343u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB343u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B343u:
    if(m==0u&&x==0u&&e==0u){ /* A5 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B343u,2u,0x06u,0xB345u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B343u,2u,0x06u,0xB345u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B343u,2u,0x06u,0xB345u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x06u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B343u,2u,0x06u,0xB345u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x06u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B345u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F4 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B345u,3u,0x8Fu,0xB348u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB347u))return 0;c->pc=0x8FF4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 F4 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B345u,3u,0x8Fu,0xB348u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB347u))return 0;c->pc=0x8FF4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F4 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B345u,3u,0x8Fu,0xB348u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB347u))return 0;c->pc=0x8FF4u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F4 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B345u,3u,0x8Fu,0xB348u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB347u))return 0;c->pc=0x8FF4u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B348u:
    if(m==0u&&x==0u&&e==0u){ /* A5 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B348u,2u,0x06u,0xB34Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B348u,2u,0x06u,0xB34Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B348u,2u,0x06u,0xB34Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x06u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B348u,2u,0x06u,0xB34Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x06u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B34Au:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B34Au,1u,0x18u,0xB34Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B34Au,1u,0x18u,0xB34Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B34Au,1u,0x18u,0xB34Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B34Au,1u,0x18u,0xB34Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B34Bu:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B34Bu,3u,0x00u,0xB34Eu);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B34Bu,3u,0x00u,0xB34Eu);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 69 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B34Bu,2u,0x02u,0xB34Du);
      sc_v11_op_adc(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 69 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B34Bu,2u,0x02u,0xB34Du);
      sc_v11_op_adc(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B34Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B34Eu,3u,0x00u,0xB351u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B34Eu,3u,0x00u,0xB351u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B351u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 53 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B351u,3u,0x0Cu,0xB354u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C53u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 53 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B351u,3u,0x0Cu,0xB354u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C53u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B354u:
    if(m==0u&&x==0u&&e==0u){ /* 46 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B354u,2u,0x00u,0xB356u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x00u),16u,1u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 46 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B354u,2u,0x00u,0xB356u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x00u),16u,1u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B356u:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B356u,2u,0x03u,0xB358u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB35Bu;}
      if(c->pc!=0xB358u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB358u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B356u,2u,0x03u,0xB358u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB35Bu;}
      if(c->pc!=0xB358u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB358u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B358u:
    if(m==0u&&x==0u&&e==0u){ /* 20 45 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B358u,3u,0xB2u,0xB35Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB35Au))return 0;c->pc=0xB245u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 45 B2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B358u,3u,0xB2u,0xB35Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB35Au))return 0;c->pc=0xB245u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B35Bu:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B35Bu,1u,0x2Bu,0xB35Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B35Bu,1u,0x2Bu,0xB35Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B35Bu,1u,0x2Bu,0xB35Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B35Bu,1u,0x2Bu,0xB35Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B35Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B35Cu,3u,0x00u,0xB35Fu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B35Cu,3u,0x00u,0xB35Fu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B35Cu,2u,0x01u,0xB35Eu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B35Cu,2u,0x01u,0xB35Eu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B35Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B35Fu,1u,0x60u,0xB360u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B35Fu,1u,0x60u,0xB360u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B360u:
    if(m==0u&&x==0u&&e==0u){ /* E6 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B360u,2u,0x02u,0xB362u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E6 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B360u,2u,0x02u,0xB362u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E6 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B360u,2u,0x02u,0xB362u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B360u,2u,0x02u,0xB362u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B362u:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B362u,2u,0x02u,0xB364u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B362u,2u,0x02u,0xB364u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B362u,2u,0x02u,0xB364u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B362u,2u,0x02u,0xB364u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B364u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B364u,3u,0x00u,0xB367u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B364u,3u,0x00u,0xB367u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B364u,2u,0x03u,0xB366u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B364u,2u,0x03u,0xB366u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B367u:
    if(m==0u&&x==0u&&e==0u){ /* C5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B367u,2u,0x04u,0xB369u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B367u,2u,0x04u,0xB369u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B369u:
    if(m==0u&&x==0u&&e==0u){ /* D0 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B369u,2u,0xC4u,0xB36Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB32Fu;}
      if(c->pc!=0xB36Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB36Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B369u,2u,0xC4u,0xB36Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB32Fu;}
      if(c->pc!=0xB36Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB36Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B36Bu:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B36Bu,1u,0x2Bu,0xB36Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B36Bu,1u,0x2Bu,0xB36Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B36Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B36Cu,3u,0x00u,0xB36Fu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B36Cu,3u,0x00u,0xB36Fu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B36Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B36Fu,1u,0x60u,0xB370u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B36Fu,1u,0x60u,0xB370u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B370u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B370u,1u,0x08u,0xB371u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B370u,1u,0x08u,0xB371u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B370u,1u,0x08u,0xB371u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B371u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B371u,2u,0x30u,0xB373u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B371u,2u,0x30u,0xB373u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B371u,2u,0x30u,0xB373u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B373u:
    if(m==1u&&x==1u&&e==0u){ /* AE 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B373u,3u,0x0Bu,0xB376u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B376u:
    if(m==1u&&x==1u&&e==0u){ /* AC 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B376u,3u,0x0Bu,0xB379u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B379u:
    if(m==1u&&x==1u&&e==0u){ /* C9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B379u,2u,0x00u,0xB37Bu);
      sc_v11_op_compare(r,c->a,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B37Bu:
    if(m==1u&&x==1u&&e==0u){ /* D0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B37Bu,2u,0x05u,0xB37Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB382u;}
      if(c->pc!=0xB37Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB37Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B37Du:
    if(m==1u&&x==1u&&e==0u){ /* 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B37Du,1u,0x88u,0xB37Eu);
      c->y=(uint16_t)((c->y-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B37Eu:
    if(m==1u&&x==1u&&e==0u){ /* 30 29 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B37Eu,2u,0x29u,0xB380u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB3A9u;}
      if(c->pc!=0xB380u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB380u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B380u:
    if(m==1u&&x==1u&&e==0u){ /* 80 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B380u,2u,0x1Au,0xB382u);
      if(1){c->pc=0xB39Cu;}
      if(c->pc!=0xB382u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB382u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B382u:
    if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B382u,1u,0x3Au,0xB383u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B383u:
    if(m==1u&&x==1u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B383u,2u,0x07u,0xB385u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB38Cu;}
      if(c->pc!=0xB385u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB385u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B385u:
    if(m==1u&&x==1u&&e==0u){ /* E0 77 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B385u,2u,0x77u,0xB387u);
      sc_v11_op_compare(r,c->x,0x0077u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B387u:
    if(m==1u&&x==1u&&e==0u){ /* B0 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B387u,2u,0x20u,0xB389u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB3A9u;}
      if(c->pc!=0xB389u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB389u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B389u:
    if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B389u,1u,0xE8u,0xB38Au);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B38Au:
    if(m==1u&&x==1u&&e==0u){ /* 80 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B38Au,2u,0x10u,0xB38Cu);
      if(1){c->pc=0xB39Cu;}
      if(c->pc!=0xB38Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB38Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B38Cu:
    if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B38Cu,1u,0x3Au,0xB38Du);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B38Du:
    if(m==1u&&x==1u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B38Du,2u,0x07u,0xB38Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB396u;}
      if(c->pc!=0xB38Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB38Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B38Fu:
    if(m==1u&&x==1u&&e==0u){ /* C0 63 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B38Fu,2u,0x63u,0xB391u);
      sc_v11_op_compare(r,c->y,0x0063u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B391u:
    if(m==1u&&x==1u&&e==0u){ /* B0 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B391u,2u,0x16u,0xB393u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB3A9u;}
      if(c->pc!=0xB393u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB393u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B393u:
    if(m==1u&&x==1u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B393u,1u,0xC8u,0xB394u);
      c->y=(uint16_t)((c->y+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B394u:
    if(m==1u&&x==1u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B394u,2u,0x06u,0xB396u);
      if(1){c->pc=0xB39Cu;}
      if(c->pc!=0xB396u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB396u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B396u:
    if(m==1u&&x==1u&&e==0u){ /* 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B396u,1u,0x3Au,0xB397u);
      sc_v11_op_incdec_accumulator(r,8u,-1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B397u:
    if(m==1u&&x==1u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B397u,2u,0x10u,0xB399u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB3A9u;}
      if(c->pc!=0xB399u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB399u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B399u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B399u,1u,0xCAu,0xB39Au);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B39Au:
    if(m==1u&&x==1u&&e==0u){ /* 30 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B39Au,2u,0x0Du,0xB39Cu);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB3A9u;}
      if(c->pc!=0xB39Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB39Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B39Cu:
    if(m==1u&&x==1u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B39Cu,1u,0x98u,0xB39Du);
      c->a=(uint16_t)((c->a&0xff00u)|(c->y&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B39Du:
    if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B39Du,1u,0xEBu,0xB39Eu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B39Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B39Eu,1u,0x8Au,0xB39Fu);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B39Fu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B39Fu,2u,0x10u,0xB3A1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3A1u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9E 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A1u,3u,0x84u,0xB3A4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB3A3u))return 0;c->pc=0x849Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3A4u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A4u,3u,0x03u,0xB3A7u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A4u,3u,0x03u,0xB3A7u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A4u,2u,0xFFu,0xB3A6u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A4u,2u,0xFFu,0xB3A6u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3A6u:
    if(m==1u&&x==0u&&e==0u){ /* 03 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A6u,2u,0x28u,0xB3A8u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x28u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A6u,2u,0x28u,0xB3A8u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x28u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3A7u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A7u,1u,0x28u,0xB3A8u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A7u,1u,0x28u,0xB3A8u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3A8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A8u,1u,0x60u,0xB3A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A8u,1u,0x60u,0xB3A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A8u,1u,0x60u,0xB3A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A8u,1u,0x60u,0xB3A9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3A9u:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3A9u,2u,0x30u,0xB3ABu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3ABu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3ABu,3u,0x00u,0xB3AEu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3AEu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3AEu,1u,0x28u,0xB3AFu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3AFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3AFu,1u,0x60u,0xB3B0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3AFu,1u,0x60u,0xB3B0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3AFu,1u,0x60u,0xB3B0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3AFu,1u,0x60u,0xB3B0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3B0u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B0u,3u,0x00u,0xB3B3u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B0u,2u,0x00u,0xB3B2u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B0u,3u,0x00u,0xB3B3u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B0u,2u,0x00u,0xB3B2u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3B3u:
    if(m==0u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B3u,1u,0xDAu,0xB3B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* DA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B3u,1u,0xDAu,0xB3B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3B4u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B4u,1u,0x8Au,0xB3B5u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B4u,1u,0x8Au,0xB3B5u);
      c->a=(uint16_t)((c->a&0xff00u)|(c->x&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3B5u:
    if(m==0u&&x==0u&&e==0u){ /* 20 70 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B5u,3u,0xB3u,0xB3B8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB3B7u))return 0;c->pc=0xB370u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 70 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B5u,3u,0xB3u,0xB3B8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB3B7u))return 0;c->pc=0xB370u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3B8u:
    if(m==0u&&x==0u&&e==0u){ /* AE 55 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B8u,3u,0x0Cu,0xB3BBu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C55u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AE 55 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B8u,3u,0x0Cu,0xB3BBu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C55u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AE 55 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B8u,3u,0x0Cu,0xB3BBu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C55u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AE 55 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3B8u,3u,0x0Cu,0xB3BBu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0C55u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3BBu:
    if(m==0u&&x==0u&&e==0u){ /* DD E9 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3BBu,3u,0xB3u,0xB3BEu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xB3E9u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* DD E9 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3BBu,3u,0xB3u,0xB3BEu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xB3E9u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* DD E9 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3BBu,3u,0xB3u,0xB3BEu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB3E9u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* DD E9 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3BBu,3u,0xB3u,0xB3BEu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB3E9u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3BEu:
    if(m==0u&&x==0u&&e==0u){ /* 90 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3BEu,2u,0x1Eu,0xB3C0u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3C0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3C0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3BEu,2u,0x1Eu,0xB3C0u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3C0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3C0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3BEu,2u,0x1Eu,0xB3C0u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3C0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3C0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3BEu,2u,0x1Eu,0xB3C0u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3C0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3C0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3C0u:
    if(m==0u&&x==0u&&e==0u){ /* DD EF B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C0u,3u,0xB3u,0xB3C3u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xB3EFu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* DD EF B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C0u,3u,0xB3u,0xB3C3u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xB3EFu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* DD EF B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C0u,3u,0xB3u,0xB3C3u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB3EFu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* DD EF B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C0u,3u,0xB3u,0xB3C3u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB3EFu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3C3u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C3u,2u,0x0Au,0xB3C5u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3CFu;}
      if(c->pc!=0xB3C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C3u,2u,0x0Au,0xB3C5u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3CFu;}
      if(c->pc!=0xB3C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C3u,2u,0x0Au,0xB3C5u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3CFu;}
      if(c->pc!=0xB3C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C3u,2u,0x0Au,0xB3C5u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3CFu;}
      if(c->pc!=0xB3C5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3C5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3C5u:
    if(m==0u&&x==0u&&e==0u){ /* DD F5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C5u,3u,0xB3u,0xB3C8u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xB3F5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* DD F5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C5u,3u,0xB3u,0xB3C8u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xB3F5u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* DD F5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C5u,3u,0xB3u,0xB3C8u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB3F5u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* DD F5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C5u,3u,0xB3u,0xB3C8u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB3F5u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3C8u:
    if(m==0u&&x==0u&&e==0u){ /* 90 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C8u,2u,0x14u,0xB3CAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C8u,2u,0x14u,0xB3CAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C8u,2u,0x14u,0xB3CAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3C8u,2u,0x14u,0xB3CAu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3CAu:
    if(m==0u&&x==0u&&e==0u){ /* DD FB B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3CAu,3u,0xB3u,0xB3CDu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xB3FBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* DD FB B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3CAu,3u,0xB3u,0xB3CDu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xB3FBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* DD FB B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3CAu,3u,0xB3u,0xB3CDu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB3FBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* DD FB B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3CAu,3u,0xB3u,0xB3CDu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB3FBu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3CDu:
    if(m==0u&&x==0u&&e==0u){ /* B0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3CDu,2u,0x0Fu,0xB3CFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3CDu,2u,0x0Fu,0xB3CFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3CDu,2u,0x0Fu,0xB3CFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3CDu,2u,0x0Fu,0xB3CFu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3CFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3CFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3CFu:
    if(m==0u&&x==0u&&e==0u){ /* C9 77 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3CFu,3u,0x02u,0xB3D2u);
      sc_v11_op_compare(r,c->a,0x0277u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 77 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3CFu,3u,0x02u,0xB3D2u);
      sc_v11_op_compare(r,c->a,0x0277u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 77 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3CFu,2u,0x77u,0xB3D1u);
      sc_v11_op_compare(r,c->a,0x0077u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 77 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3CFu,2u,0x77u,0xB3D1u);
      sc_v11_op_compare(r,c->a,0x0077u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3D1u:
    if(m==1u&&x==0u&&e==0u){ /* 02 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3D1u,2u,0x90u,0xB3D3u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xB3D3u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3D1u,2u,0x90u,0xB3D3u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xB3D3u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3D2u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3D2u,2u,0x05u,0xB3D4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3D9u;}
      if(c->pc!=0xB3D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3D2u,2u,0x05u,0xB3D4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3D9u;}
      if(c->pc!=0xB3D4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3D4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3D3u:
    if(m==1u&&x==0u&&e==0u){ /* 05 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3D3u,2u,0xC9u,0xB3D5u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC9u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 05 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3D3u,2u,0xC9u,0xB3D5u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xC9u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3D4u:
    if(m==0u&&x==0u&&e==0u){ /* C9 87 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3D4u,3u,0x02u,0xB3D7u);
      sc_v11_op_compare(r,c->a,0x0287u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 87 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3D4u,3u,0x02u,0xB3D7u);
      sc_v11_op_compare(r,c->a,0x0287u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3D7u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3D7u,2u,0x05u,0xB3D9u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3D9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3D9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3D7u,2u,0x05u,0xB3D9u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB3DEu;}
      if(c->pc!=0xB3D9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3D9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3D9u:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3D9u,1u,0xFAu,0xB3DAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3D9u,1u,0xFAu,0xB3DAu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3DAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3DAu,3u,0x00u,0xB3DDu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3DAu,3u,0x00u,0xB3DDu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3DDu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3DDu,1u,0x60u,0xB3DEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3DDu,1u,0x60u,0xB3DEu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3DEu:
    if(m==0u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3DEu,1u,0xFAu,0xB3DFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3DEu,1u,0xFAu,0xB3DFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3DEu,1u,0xFAu,0xB3DFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3DEu,1u,0xFAu,0xB3DFu);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop8(r);sc_v11_set_nz8(c,(uint8_t)c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3DFu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3DFu,1u,0xE8u,0xB3E0u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3DFu,1u,0xE8u,0xB3E0u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3DFu,1u,0xE8u,0xB3E0u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3DFu,1u,0xE8u,0xB3E0u);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3E0u:
    if(m==0u&&x==0u&&e==0u){ /* E0 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3E0u,3u,0x00u,0xB3E3u);
      sc_v11_op_compare(r,c->x,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3E0u,2u,0x04u,0xB3E2u);
      sc_v11_op_compare(r,c->x,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3E0u,3u,0x00u,0xB3E3u);
      sc_v11_op_compare(r,c->x,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3E0u,2u,0x04u,0xB3E2u);
      sc_v11_op_compare(r,c->x,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3E3u:
    if(m==0u&&x==0u&&e==0u){ /* D0 CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3E3u,2u,0xCEu,0xB3E5u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB3B3u;}
      if(c->pc!=0xB3E5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3E5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 CE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3E3u,2u,0xCEu,0xB3E5u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB3B3u;}
      if(c->pc!=0xB3E5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB3E5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3E5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3E5u,3u,0x00u,0xB3E8u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3E5u,2u,0x00u,0xB3E7u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B3E8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B3E8u,1u,0x60u,0xB3E9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
