/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_0002D(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00B400u:
    if(m==0u&&x==0u&&e==0u){ /* 30 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B400u,2u,0x12u,0xB402u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB414u;}
      if(c->pc!=0xB402u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB402u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B402u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B402u,2u,0x05u,0xB404u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB409u;}
      if(c->pc!=0xB404u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB404u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B404u:
    if(m==0u&&x==0u&&e==0u){ /* A2 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B404u,3u,0x00u,0xB407u);
      sc_v11_op_ldx(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B407u:
    if(m==0u&&x==0u&&e==0u){ /* 80 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B407u,2u,0x0Bu,0xB409u);
      if(1){c->pc=0xB414u;}
      if(c->pc!=0xB409u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB409u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B409u:
    if(m==0u&&x==0u&&e==0u){ /* A2 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B409u,3u,0x00u,0xB40Cu);
      sc_v11_op_ldx(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B40Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD DD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B40Cu,3u,0x0Au,0xB40Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0ADDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B40Fu:
    if(m==0u&&x==0u&&e==0u){ /* 30 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B40Fu,2u,0x03u,0xB411u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB414u;}
      if(c->pc!=0xB411u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB411u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B411u:
    if(m==0u&&x==0u&&e==0u){ /* A2 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B411u,3u,0x00u,0xB414u);
      sc_v11_op_ldx(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B414u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B414u,1u,0x8Au,0xB415u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B415u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B415u,1u,0x0Au,0xB416u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B416u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B416u,1u,0x18u,0xB417u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B417u:
    if(m==0u&&x==0u&&e==0u){ /* 65 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B417u,2u,0x91u,0xB419u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B419u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B419u,2u,0x91u,0xB41Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B41Bu:
    if(m==0u&&x==0u&&e==0u){ /* 22 4B 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B41Bu,4u,0x00u,0xB41Fu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB41Eu))return 0;
      c->pbr=0x00u;c->pc=0x824Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B41Fu:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B41Fu,3u,0x00u,0xB422u);
      sc_v11_op_and(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B41Fu,3u,0x00u,0xB422u);
      sc_v11_op_and(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B41Fu,2u,0x01u,0xB421u);
      sc_v11_op_and(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B41Fu,2u,0x01u,0xB421u);
      sc_v11_op_and(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B422u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B422u,1u,0x18u,0xB423u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B422u,1u,0x18u,0xB423u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B423u:
    if(m==0u&&x==0u&&e==0u){ /* 65 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B423u,2u,0x91u,0xB425u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 65 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B423u,2u,0x91u,0xB425u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B425u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B425u,1u,0xAAu,0xB426u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B425u,1u,0xAAu,0xB426u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B426u:
    if(m==0u&&x==0u&&e==0u){ /* AD DD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B426u,3u,0x0Au,0xB429u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0ADDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD DD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B426u,3u,0x0Au,0xB429u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0ADDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B429u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B429u,2u,0x91u,0xB42Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B429u,2u,0x91u,0xB42Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B42Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD DF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B42Bu,3u,0x0Au,0xB42Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0ADFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD DF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B42Bu,3u,0x0Au,0xB42Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0ADFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B42Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B42Eu,2u,0x94u,0xB430u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B42Eu,2u,0x94u,0xB430u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x94u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B430u:
    if(m==0u&&x==0u&&e==0u){ /* 9C DD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B430u,3u,0x0Au,0xB433u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADDu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C DD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B430u,3u,0x0Au,0xB433u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADDu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B433u:
    if(m==0u&&x==0u&&e==0u){ /* 9C DF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B433u,3u,0x0Au,0xB436u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C DF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B433u,3u,0x0Au,0xB436u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B436u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B436u,2u,0x20u,0xB438u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B436u,2u,0x20u,0xB438u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B438u:
    if(m==1u&&x==0u&&e==0u){ /* BD E2 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B438u,3u,0xB4u,0xB43Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB4E2u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* BD E2 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B438u,3u,0xB4u,0xB43Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xB4E2u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B43Bu:
    if(m==1u&&x==0u&&e==0u){ /* F0 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B43Bu,2u,0x23u,0xB43Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB460u;}
      if(c->pc!=0xB43Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB43Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B43Bu,2u,0x23u,0xB43Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB460u;}
      if(c->pc!=0xB43Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB43Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B43Du:
    if(m==1u&&x==0u&&e==0u){ /* C9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B43Du,2u,0x01u,0xB43Fu);
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B43Du,2u,0x01u,0xB43Fu);
      sc_v11_op_compare(r,c->a,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B43Fu:
    if(m==1u&&x==0u&&e==0u){ /* F0 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B43Fu,2u,0x3Au,0xB441u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB47Bu;}
      if(c->pc!=0xB441u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB441u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B43Fu,2u,0x3Au,0xB441u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB47Bu;}
      if(c->pc!=0xB441u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB441u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B441u:
    if(m==1u&&x==0u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B441u,2u,0x02u,0xB443u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B441u,2u,0x02u,0xB443u);
      sc_v11_op_compare(r,c->a,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B443u:
    if(m==1u&&x==0u&&e==0u){ /* F0 51 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B443u,2u,0x51u,0xB445u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB496u;}
      if(c->pc!=0xB445u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB445u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 51 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B443u,2u,0x51u,0xB445u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB496u;}
      if(c->pc!=0xB445u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB445u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B445u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B445u,2u,0x30u,0xB447u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B445u,2u,0x30u,0xB447u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B447u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B447u,3u,0xFFu,0xB44Au);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B44Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D DD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B44Au,3u,0x0Au,0xB44Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B44Du:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B44Du,3u,0x9Eu,0xB450u);
      sc_v11_op_ldx(r,0x9E00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B450u:
    if(m==0u&&x==0u&&e==0u){ /* C5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B450u,2u,0x91u,0xB452u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B452u:
    if(m==0u&&x==0u&&e==0u){ /* F0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B452u,2u,0x5Du,0xB454u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB4B1u;}
      if(c->pc!=0xB454u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB454u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B454u:
    if(m==0u&&x==0u&&e==0u){ /* A2 80 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B454u,3u,0x9Fu,0xB457u);
      sc_v11_op_ldx(r,0x9F80u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B457u:
    if(m==0u&&x==0u&&e==0u){ /* A5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B457u,2u,0x94u,0xB459u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B459u:
    if(m==0u&&x==0u&&e==0u){ /* 10 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B459u,2u,0x56u,0xB45Bu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB4B1u;}
      if(c->pc!=0xB45Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB45Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B45Bu:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B45Bu,3u,0x9Fu,0xB45Eu);
      sc_v11_op_ldx(r,0x9F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B45Eu:
    if(m==0u&&x==0u&&e==0u){ /* 80 51 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B45Eu,2u,0x51u,0xB460u);
      if(1){c->pc=0xB4B1u;}
      if(c->pc!=0xB460u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB460u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B460u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B460u,2u,0x30u,0xB462u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B460u,2u,0x30u,0xB462u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B462u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B462u,3u,0xFFu,0xB465u);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B465u:
    if(m==0u&&x==0u&&e==0u){ /* 8D DF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B465u,3u,0x0Au,0xB468u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B468u:
    if(m==0u&&x==0u&&e==0u){ /* A2 80 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B468u,3u,0x9Eu,0xB46Bu);
      sc_v11_op_ldx(r,0x9E80u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B46Bu:
    if(m==0u&&x==0u&&e==0u){ /* C5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B46Bu,2u,0x94u,0xB46Du);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B46Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B46Du,2u,0x42u,0xB46Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB4B1u;}
      if(c->pc!=0xB46Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB46Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B46Fu:
    if(m==0u&&x==0u&&e==0u){ /* A2 80 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B46Fu,3u,0x9Fu,0xB472u);
      sc_v11_op_ldx(r,0x9F80u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B472u:
    if(m==0u&&x==0u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B472u,2u,0x91u,0xB474u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B474u:
    if(m==0u&&x==0u&&e==0u){ /* 10 3B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B474u,2u,0x3Bu,0xB476u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB4B1u;}
      if(c->pc!=0xB476u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB476u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B476u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B476u,3u,0x9Fu,0xB479u);
      sc_v11_op_ldx(r,0x9F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B479u:
    if(m==0u&&x==0u&&e==0u){ /* 80 36 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B479u,2u,0x36u,0xB47Bu);
      if(1){c->pc=0xB4B1u;}
      if(c->pc!=0xB47Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB47Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B47Bu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B47Bu,2u,0x30u,0xB47Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B47Bu,2u,0x30u,0xB47Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B47Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B47Du,3u,0x00u,0xB480u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B480u:
    if(m==0u&&x==0u&&e==0u){ /* 8D DD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B480u,3u,0x0Au,0xB483u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B483u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B483u,3u,0x9Eu,0xB486u);
      sc_v11_op_ldx(r,0x9E00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B486u:
    if(m==0u&&x==0u&&e==0u){ /* C5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B486u,2u,0x91u,0xB488u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B488u:
    if(m==0u&&x==0u&&e==0u){ /* F0 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B488u,2u,0x27u,0xB48Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB4B1u;}
      if(c->pc!=0xB48Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB48Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B48Au:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B48Au,3u,0x9Fu,0xB48Du);
      sc_v11_op_ldx(r,0x9F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B48Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B48Du,2u,0x94u,0xB48Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B48Fu:
    if(m==0u&&x==0u&&e==0u){ /* 10 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B48Fu,2u,0x20u,0xB491u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB4B1u;}
      if(c->pc!=0xB491u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB491u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B491u:
    if(m==0u&&x==0u&&e==0u){ /* A2 80 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B491u,3u,0x9Fu,0xB494u);
      sc_v11_op_ldx(r,0x9F80u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B494u:
    if(m==0u&&x==0u&&e==0u){ /* 80 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B494u,2u,0x1Bu,0xB496u);
      if(1){c->pc=0xB4B1u;}
      if(c->pc!=0xB496u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB496u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B496u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B496u,2u,0x30u,0xB498u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B496u,2u,0x30u,0xB498u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B498u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B498u,3u,0x00u,0xB49Bu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B49Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8D DF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B49Bu,3u,0x0Au,0xB49Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B49Eu:
    if(m==0u&&x==0u&&e==0u){ /* A2 80 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B49Eu,3u,0x9Eu,0xB4A1u);
      sc_v11_op_ldx(r,0x9E80u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4A1u:
    if(m==0u&&x==0u&&e==0u){ /* C5 94 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4A1u,2u,0x94u,0xB4A3u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x94u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4A3u:
    if(m==0u&&x==0u&&e==0u){ /* F0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4A3u,2u,0x0Cu,0xB4A5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB4B1u;}
      if(c->pc!=0xB4A5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB4A5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4A5u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4A5u,3u,0x9Fu,0xB4A8u);
      sc_v11_op_ldx(r,0x9F00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4A8u:
    if(m==0u&&x==0u&&e==0u){ /* A5 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4A8u,2u,0x91u,0xB4AAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4AAu:
    if(m==0u&&x==0u&&e==0u){ /* 10 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4AAu,2u,0x05u,0xB4ACu);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB4B1u;}
      if(c->pc!=0xB4ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB4ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4ACu:
    if(m==0u&&x==0u&&e==0u){ /* A2 80 9F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4ACu,3u,0x9Fu,0xB4AFu);
      sc_v11_op_ldx(r,0x9F80u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4AFu:
    if(m==0u&&x==0u&&e==0u){ /* 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4AFu,2u,0x00u,0xB4B1u);
      if(1){c->pc=0xB4B1u;}
      if(c->pc!=0xB4B1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB4B1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4B1u:
    if(m==0u&&x==0u&&e==0u){ /* 8E DB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4B1u,3u,0x0Au,0xB4B4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADBu),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4B4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4B4u,1u,0x60u,0xB4B5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4B5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4B5u,2u,0x30u,0xB4B7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4B7u:
    if(m==0u&&x==0u&&e==0u){ /* AD E3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4B7u,3u,0x0Au,0xB4BAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AE3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4BAu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4BAu,1u,0x4Au,0xB4BBu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4BBu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4BBu,1u,0x4Au,0xB4BCu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4BCu:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4BCu,1u,0x4Au,0xB4BDu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4BDu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4BDu,2u,0x20u,0xB4BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4BFu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 02 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4BFu,3u,0x42u,0xB4C2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4C2u:
    if(m==1u&&x==0u&&e==0u){ /* A9 78 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4C2u,2u,0x78u,0xB4C4u);
      sc_v11_op_lda(r,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4C4u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 03 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4C4u,3u,0x42u,0xB4C7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4C7u:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4C7u,1u,0x48u,0xB4C8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4C8u:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4C8u,1u,0x68u,0xB4C9u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4C9u:
    if(m==1u&&x==0u&&e==0u){ /* EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4C9u,1u,0xEAu,0xB4CAu);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4CAu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4CAu,2u,0x20u,0xB4CCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4CCu:
    if(m==0u&&x==0u&&e==0u){ /* AD 16 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4CCu,3u,0x42u,0xB4CFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x4216u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4CFu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4CFu,1u,0x0Au,0xB4D0u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4D0u:
    if(m==0u&&x==0u&&e==0u){ /* 85 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4D0u,2u,0x91u,0xB4D2u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x91u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4D2u:
    if(m==0u&&x==0u&&e==0u){ /* AD E1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4D2u,3u,0x0Au,0xB4D5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AE1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4D5u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4D5u,1u,0x4Au,0xB4D6u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4D6u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4D6u,1u,0x4Au,0xB4D7u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4D7u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4D7u,1u,0x4Au,0xB4D8u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4D8u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4D8u,1u,0x0Au,0xB4D9u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4D9u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4D9u,1u,0x18u,0xB4DAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4DAu:
    if(m==0u&&x==0u&&e==0u){ /* 65 91 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4DAu,2u,0x91u,0xB4DCu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x91u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4DCu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4DCu,1u,0xAAu,0xB4DDu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4DDu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4DDu,4u,0x7Fu,0xB4E1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B4E1u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B4E1u,1u,0x60u,0xB4E2u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B502u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B502u,2u,0x30u,0xB504u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B502u,2u,0x30u,0xB504u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B502u,2u,0x30u,0xB504u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B509u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B509u,1u,0x60u,0xB50Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B509u,1u,0x60u,0xB50Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B509u,1u,0x60u,0xB50Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B50Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B50Au,2u,0xE1u,0xB50Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B50Cu:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B50Cu,3u,0x00u,0xB50Fu);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B50Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 F8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B50Fu,2u,0xF8u,0xB511u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB509u;}
      if(c->pc!=0xB511u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB511u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B511u:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B511u,3u,0x01u,0xB514u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0193u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B514u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B514u,3u,0x00u,0xB517u);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B517u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B517u,2u,0x03u,0xB519u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB51Cu;}
      if(c->pc!=0xB519u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB519u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B519u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 02 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B519u,3u,0xB6u,0xB51Cu);
      c->pc=0xB602u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B51Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B51Cu,3u,0x01u,0xB51Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B51Fu:
    if(m==0u&&x==0u&&e==0u){ /* 29 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B51Fu,3u,0x00u,0xB522u);
      sc_v11_op_and(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B522u:
    if(m==0u&&x==0u&&e==0u){ /* F0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B522u,2u,0x18u,0xB524u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB53Cu;}
      if(c->pc!=0xB524u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB524u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B524u:
    if(m==0u&&x==0u&&e==0u){ /* A5 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B524u,2u,0xE3u,0xB526u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE3u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B526u:
    if(m==0u&&x==0u&&e==0u){ /* D0 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B526u,2u,0xE1u,0xB528u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB509u;}
      if(c->pc!=0xB528u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB528u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B528u:
    if(m==0u&&x==0u&&e==0u){ /* AD 97 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B528u,3u,0x01u,0xB52Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0197u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B52Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FB FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B52Bu,3u,0xFFu,0xB52Eu);
      sc_v11_op_and(r,0xFFFBu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B52Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 97 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B52Eu,3u,0x01u,0xB531u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0197u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B531u:
    if(m==0u&&x==0u&&e==0u){ /* AD 25 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B531u,3u,0x04u,0xB534u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0425u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B534u:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B534u,3u,0x00u,0xB537u);
      sc_v11_op_and(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B537u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B537u,2u,0x03u,0xB539u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB53Cu;}
      if(c->pc!=0xB539u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB539u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B539u:
    if(m==0u&&x==0u&&e==0u){ /* 4C B0 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B539u,3u,0xB5u,0xB53Cu);
      c->pc=0xB5B0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B53Cu:
    if(m==0u&&x==0u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B53Cu,2u,0xE1u,0xB53Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B53Eu:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B53Eu,3u,0x00u,0xB541u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B541u:
    if(m==0u&&x==0u&&e==0u){ /* D0 C6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B541u,2u,0xC6u,0xB543u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB509u;}
      if(c->pc!=0xB543u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB543u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B543u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B543u,3u,0x00u,0xB546u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B546u:
    if(m==0u&&x==0u&&e==0u){ /* 8D B7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B546u,3u,0x0Au,0xB549u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AB7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B549u:
    if(m==0u&&x==0u&&e==0u){ /* AD CB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B549u,3u,0x0Au,0xB54Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0ACBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B54Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B54Cu,2u,0x03u,0xB54Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB551u;}
      if(c->pc!=0xB54Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB54Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B54Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 83 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B54Eu,3u,0xB6u,0xB551u);
      c->pc=0xB683u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B551u:
    if(m==0u&&x==0u&&e==0u){ /* 20 84 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B551u,3u,0xB5u,0xB554u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB553u))return 0;c->pc=0xB584u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B554u:
    if(m==0u&&x==0u&&e==0u){ /* B0 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B554u,2u,0xB3u,0xB556u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB509u;}
      if(c->pc!=0xB556u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB556u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B554u,2u,0xB3u,0xB556u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB509u;}
      if(c->pc!=0xB556u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB556u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B554u,2u,0xB3u,0xB556u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB509u;}
      if(c->pc!=0xB556u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB556u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B554u,2u,0xB3u,0xB556u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB509u;}
      if(c->pc!=0xB556u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB556u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B556u:
    if(m==0u&&x==0u&&e==0u){ /* AD B3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B556u,3u,0x0Au,0xB559u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD B3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B556u,3u,0x0Au,0xB559u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AB3u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD B3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B556u,3u,0x0Au,0xB559u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AB3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD B3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B556u,3u,0x0Au,0xB559u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AB3u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B559u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B559u,2u,0x03u,0xB55Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB55Eu;}
      if(c->pc!=0xB55Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB55Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B559u,2u,0x03u,0xB55Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB55Eu;}
      if(c->pc!=0xB55Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB55Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B559u,2u,0x03u,0xB55Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB55Eu;}
      if(c->pc!=0xB55Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB55Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B559u,2u,0x03u,0xB55Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB55Eu;}
      if(c->pc!=0xB55Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB55Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B55Bu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 6B B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B55Bu,3u,0xB6u,0xB55Eu);
      c->pc=0xB66Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 6B B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B55Bu,3u,0xB6u,0xB55Eu);
      c->pc=0xB66Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C 6B B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B55Bu,3u,0xB6u,0xB55Eu);
      c->pc=0xB66Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 6B B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B55Bu,3u,0xB6u,0xB55Eu);
      c->pc=0xB66Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B55Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B55Eu,2u,0x30u,0xB560u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B55Eu,2u,0x30u,0xB560u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B55Eu,2u,0x30u,0xB560u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B55Eu,2u,0x30u,0xB560u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B560u:
    if(m==1u&&x==1u&&e==0u){ /* 2C A0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B560u,3u,0x0Au,0xB563u);
      {uint16_t q=sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AA0u));uint16_t z=(uint16_t)((c->a&0x00FFu)&q);c->p=(uint8_t)(c->p&~(SC_FLAG_N|SC_FLAG_V|SC_FLAG_Z));if(!z)c->p|=SC_FLAG_Z;if(q&0x0080u)c->p|=SC_FLAG_N;if(q&0x0040u)c->p|=SC_FLAG_V;}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B563u:
    if(m==1u&&x==1u&&e==0u){ /* 10 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B563u,2u,0x05u,0xB565u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB56Au;}
      if(c->pc!=0xB565u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB565u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B565u:
    if(m==1u&&x==1u&&e==0u){ /* A2 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B565u,2u,0x04u,0xB567u);
      sc_v11_op_ldx(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B567u:
    if(m==1u&&x==1u&&e==0u){ /* 4C CC AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B567u,3u,0xAFu,0xB56Au);
      c->pc=0xAFCCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B56Au:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B56Au,2u,0x30u,0xB56Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B56Cu:
    if(m==1u&&x==1u&&e==0u){ /* A2 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B56Cu,2u,0x08u,0xB56Eu);
      sc_v11_op_ldx(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B56Eu:
    if(m==1u&&x==1u&&e==0u){ /* 20 DB AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B56Eu,3u,0xAEu,0xB571u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB570u))return 0;c->pc=0xAEDBu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B571u:
    if(m==0u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B571u,2u,0x06u,0xB573u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB579u;}
      if(c->pc!=0xB573u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB573u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B571u,2u,0x06u,0xB573u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB579u;}
      if(c->pc!=0xB573u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB573u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B571u,2u,0x06u,0xB573u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB579u;}
      if(c->pc!=0xB573u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB573u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 90 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B571u,2u,0x06u,0xB573u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB579u;}
      if(c->pc!=0xB573u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB573u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B573u:
    if(m==0u&&x==0u&&e==0u){ /* 20 02 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B573u,3u,0xB6u,0xB576u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB575u))return 0;c->pc=0xB602u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 02 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B573u,3u,0xB6u,0xB576u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB575u))return 0;c->pc=0xB602u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 02 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B573u,3u,0xB6u,0xB576u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB575u))return 0;c->pc=0xB602u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 02 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B573u,3u,0xB6u,0xB576u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB575u))return 0;c->pc=0xB602u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B576u:
    if(m==0u&&x==0u&&e==0u){ /* 4C FC B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B576u,3u,0xB6u,0xB579u);
      c->pc=0xB6FCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C FC B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B576u,3u,0xB6u,0xB579u);
      c->pc=0xB6FCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4C FC B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B576u,3u,0xB6u,0xB579u);
      c->pc=0xB6FCu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C FC B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B576u,3u,0xB6u,0xB579u);
      c->pc=0xB6FCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B579u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B579u,2u,0x20u,0xB57Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B579u,2u,0x20u,0xB57Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B579u,2u,0x20u,0xB57Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B579u,2u,0x20u,0xB57Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B57Bu:
    if(m==1u&&x==0u&&e==0u){ /* AD A0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B57Bu,3u,0x0Au,0xB57Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AA0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD A0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B57Bu,3u,0x0Au,0xB57Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0AA0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B57Eu:
    if(m==1u&&x==0u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B57Eu,2u,0x80u,0xB580u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 09 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B57Eu,2u,0x80u,0xB580u);
      sc_v11_op_ora(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B580u:
    if(m==1u&&x==0u&&e==0u){ /* 8D A0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B580u,3u,0x0Au,0xB583u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AA0u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D A0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B580u,3u,0x0Au,0xB583u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AA0u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B583u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B583u,1u,0x60u,0xB584u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B583u,1u,0x60u,0xB584u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B584u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B584u,2u,0x20u,0xB586u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B586u:
    if(m==1u&&x==0u&&e==0u){ /* AD 8F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B586u,3u,0x0Au,0xB589u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A8Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B589u:
    if(m==1u&&x==0u&&e==0u){ /* F0 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B589u,2u,0x18u,0xB58Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB5A3u;}
      if(c->pc!=0xB58Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB58Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B58Bu:
    if(m==1u&&x==0u&&e==0u){ /* AD 5D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B58Bu,3u,0x0Au,0xB58Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A5Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B58Eu:
    if(m==1u&&x==0u&&e==0u){ /* CD 61 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B58Eu,3u,0x0Au,0xB591u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A61u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B591u:
    if(m==1u&&x==0u&&e==0u){ /* D0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B591u,2u,0x10u,0xB593u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB5A3u;}
      if(c->pc!=0xB593u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB593u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B593u:
    if(m==1u&&x==0u&&e==0u){ /* AD 5B 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B593u,3u,0x0Au,0xB596u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A5Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B596u:
    if(m==1u&&x==0u&&e==0u){ /* CD 5F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B596u,3u,0x0Au,0xB599u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A5Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B599u:
    if(m==1u&&x==0u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B599u,2u,0x08u,0xB59Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB5A3u;}
      if(c->pc!=0xB59Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB59Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B59Bu:
    if(m==1u&&x==0u&&e==0u){ /* 9C 8F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B59Bu,3u,0x0Au,0xB59Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0A8Fu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B59Eu:
    if(m==1u&&x==0u&&e==0u){ /* 9C 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B59Eu,3u,0x0Au,0xB5A1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0A90u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5A1u:
    if(m==1u&&x==0u&&e==0u){ /* 80 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5A1u,2u,0x0Du,0xB5A3u);
      if(1){c->pc=0xB5B0u;}
      if(c->pc!=0xB5A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB5A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5A3u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5A3u,1u,0x18u,0xB5A4u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5A4u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5A4u,1u,0x60u,0xB5A5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5B0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5B0u,2u,0x20u,0xB5B2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5B0u,2u,0x20u,0xB5B2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5B2u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5B2u,2u,0x10u,0xB5B4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5B4u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 8D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5B4u,3u,0x0Au,0xB5B7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0A8Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5B7u:
    if(m==1u&&x==0u&&e==0u){ /* 9C 8E 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5B7u,3u,0x0Au,0xB5BAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0A8Eu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5BAu:
    if(m==1u&&x==0u&&e==0u){ /* AD 5F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5BAu,3u,0x0Au,0xB5BDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A5Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5BDu:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5BDu,1u,0xEBu,0xB5BEu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5BEu:
    if(m==1u&&x==0u&&e==0u){ /* AD 61 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5BEu,3u,0x0Au,0xB5C1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A61u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5C1u:
    if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5C1u,3u,0x00u,0xB5C4u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5C4u:
    if(m==1u&&x==0u&&e==0u){ /* 22 C2 A9 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5C4u,4u,0x03u,0xB5C8u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB5C7u))return 0;
      c->pbr=0x03u;c->pc=0xA9C2u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5C8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5C8u,2u,0x10u,0xB5CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5C8u,2u,0x10u,0xB5CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5C8u,2u,0x10u,0xB5CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5C8u,2u,0x10u,0xB5CAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5CAu:
    if(m==0u&&x==0u&&e==0u){ /* A2 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5CAu,3u,0x00u,0xB5CDu);
      sc_v11_op_ldx(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5CAu,3u,0x00u,0xB5CDu);
      sc_v11_op_ldx(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5CDu:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5CDu,3u,0x00u,0xB5D0u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5CDu,3u,0x00u,0xB5D0u);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5D0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 2E AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D0u,3u,0xAEu,0xB5D3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5D2u))return 0;c->pc=0xAE2Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 2E AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D0u,3u,0xAEu,0xB5D3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5D2u))return 0;c->pc=0xAE2Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5D3u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D3u,1u,0x08u,0xB5D4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D3u,1u,0x08u,0xB5D4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D3u,1u,0x08u,0xB5D4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D3u,1u,0x08u,0xB5D4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5D4u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D4u,4u,0x00u,0xB5D8u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB5D7u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D4u,4u,0x00u,0xB5D8u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB5D7u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D4u,4u,0x00u,0xB5D8u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB5D7u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D4u,4u,0x00u,0xB5D8u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB5D7u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5D8u:
    if(m==0u&&x==0u&&e==0u){ /* 03 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D8u,2u,0x0Fu,0xB5DAu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x0Fu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D8u,2u,0x0Fu,0xB5DAu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x0Fu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D8u,2u,0x0Fu,0xB5DAu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x0Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5D8u,2u,0x0Fu,0xB5DAu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x0Fu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5DAu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5DAu,1u,0x28u,0xB5DBu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5DAu,1u,0x28u,0xB5DBu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5DAu,1u,0x28u,0xB5DBu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5DAu,1u,0x28u,0xB5DBu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5DBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5DBu,2u,0x20u,0xB5DDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5DBu,2u,0x20u,0xB5DDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5DBu,2u,0x20u,0xB5DDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5DBu,2u,0x20u,0xB5DDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5DDu:
    if(m==1u&&x==0u&&e==0u){ /* A9 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5DDu,2u,0x09u,0xB5DFu);
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5DDu,2u,0x09u,0xB5DFu);
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5DFu:
    if(m==1u&&x==0u&&e==0u){ /* 22 26 C4 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5DFu,4u,0x03u,0xB5E3u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB5E2u))return 0;
      c->pbr=0x03u;c->pc=0xC426u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 26 C4 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5DFu,4u,0x03u,0xB5E3u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB5E2u))return 0;
      c->pbr=0x03u;c->pc=0xC426u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5E3u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5E3u,2u,0x20u,0xB5E5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5E3u,2u,0x20u,0xB5E5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5E3u,2u,0x20u,0xB5E5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5E3u,2u,0x20u,0xB5E5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5E5u:
    if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5E5u,2u,0xFFu,0xB5E7u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5E5u,2u,0xFFu,0xB5E7u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5E7u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5E7u,3u,0x03u,0xB5EAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0395u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 95 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5E7u,3u,0x03u,0xB5EAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0395u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5EAu:
    if(m==1u&&x==0u&&e==0u){ /* A9 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5EAu,2u,0x22u,0xB5ECu);
      sc_v11_op_lda(r,0x0022u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5EAu,2u,0x22u,0xB5ECu);
      sc_v11_op_lda(r,0x0022u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5ECu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5ECu,3u,0x03u,0xB5EFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0397u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 97 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5ECu,3u,0x03u,0xB5EFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0397u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5EFu:
    if(m==1u&&x==0u&&e==0u){ /* AD 61 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5EFu,3u,0x0Au,0xB5F2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A61u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 61 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5EFu,3u,0x0Au,0xB5F2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A61u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5F2u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5F2u,3u,0x04u,0xB5F5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0400u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5F2u,3u,0x04u,0xB5F5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0400u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5F5u:
    if(m==1u&&x==0u&&e==0u){ /* AD 5F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5F5u,3u,0x0Au,0xB5F8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A5Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 5F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5F5u,3u,0x0Au,0xB5F8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A5Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5F8u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5F8u,3u,0x04u,0xB5FBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0402u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 02 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5F8u,3u,0x04u,0xB5FBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0402u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5FBu:
    if(m==1u&&x==0u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5FBu,2u,0xFFu,0xB5FDu);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5FBu,2u,0xFFu,0xB5FDu);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B5FDu:
    if(m==1u&&x==0u&&e==0u){ /* 8D FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5FDu,3u,0x03u,0xB600u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x03FEu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D FE 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B5FDu,3u,0x03u,0xB600u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x03FEu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B600u:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B600u,1u,0x38u,0xB601u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B600u,1u,0x38u,0xB601u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B601u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B601u,1u,0x60u,0xB602u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B601u,1u,0x60u,0xB602u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B602u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B602u,2u,0x30u,0xB604u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B602u,2u,0x30u,0xB604u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B602u,2u,0x30u,0xB604u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B602u,2u,0x30u,0xB604u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B604u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B604u,3u,0x0Au,0xB607u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A9Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B607u:
    if(m==0u&&x==0u&&e==0u){ /* A6 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B607u,2u,0xD7u,0xB609u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B609u:
    if(m==0u&&x==0u&&e==0u){ /* E0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B609u,3u,0x00u,0xB60Cu);
      sc_v11_op_compare(r,c->x,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B60Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B60Cu,2u,0x04u,0xB60Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB612u;}
      if(c->pc!=0xB60Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB60Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B60Eu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B60Eu,1u,0x18u,0xB60Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B60Fu:
    if(m==0u&&x==0u&&e==0u){ /* 69 0B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B60Fu,3u,0x00u,0xB612u);
      sc_v11_op_adc(r,0x000Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B612u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B612u,1u,0x0Au,0xB613u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B613u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B613u,1u,0xAAu,0xB614u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B614u:
    if(m==0u&&x==0u&&e==0u){ /* BD 3F B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B614u,3u,0xB6u,0xB617u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xB63Fu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B617u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B617u,1u,0xAAu,0xB618u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B618u:
    if(m==0u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B618u,1u,0x8Bu,0xB619u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B619u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B619u,3u,0x71u,0xB61Cu);
      sc_v11_op_ldy(r,0x7100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B61Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B61Cu,3u,0x00u,0xB61Fu);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B61Fu:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B61Fu,3u,0x06u,0xB622u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x06u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xB61Fu;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B622u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 73 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B622u,3u,0x73u,0xB625u);
      sc_v11_op_ldy(r,0x7300u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B625u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B625u,3u,0x00u,0xB628u);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B628u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B628u,3u,0x06u,0xB62Bu);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x06u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xB628u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B62Bu:
    if(m==0u&&x==0u&&e==0u){ /* A0 80 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B62Bu,3u,0x71u,0xB62Eu);
      sc_v11_op_ldy(r,0x7180u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B62Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B62Eu,3u,0x00u,0xB631u);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B631u:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B631u,3u,0x06u,0xB634u);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x06u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xB631u;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B634u:
    if(m==0u&&x==0u&&e==0u){ /* A0 80 73 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B634u,3u,0x73u,0xB637u);
      sc_v11_op_ldy(r,0x7380u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B637u:
    if(m==0u&&x==0u&&e==0u){ /* A9 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B637u,3u,0x00u,0xB63Au);
      sc_v11_op_lda(r,0x007Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B63Au:
    if(m==0u&&x==0u&&e==0u){ /* 54 7E 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B63Au,3u,0x06u,0xB63Du);
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x06u<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0xB63Au;sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B63Du:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B63Du,1u,0xABu,0xB63Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B63Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B63Eu,1u,0x60u,0xB63Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B66Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B66Bu,2u,0x30u,0xB66Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B66Bu,2u,0x30u,0xB66Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B66Bu,2u,0x30u,0xB66Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B66Bu,2u,0x30u,0xB66Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B66Du:
    if(m==0u&&x==0u&&e==0u){ /* AD D9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B66Du,3u,0x0Au,0xB670u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AD9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B670u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B670u,1u,0x1Au,0xB671u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B671u:
    if(m==0u&&x==0u&&e==0u){ /* 29 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B671u,3u,0x00u,0xB674u);
      sc_v11_op_and(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B674u:
    if(m==0u&&x==0u&&e==0u){ /* 8D D9 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B674u,3u,0x0Au,0xB677u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AD9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B677u:
    if(m==0u&&x==0u&&e==0u){ /* D0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B677u,2u,0x09u,0xB679u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB682u;}
      if(c->pc!=0xB679u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB679u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B679u:
    if(m==0u&&x==0u&&e==0u){ /* A2 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B679u,3u,0x00u,0xB67Cu);
      sc_v11_op_ldx(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B67Cu:
    if(m==0u&&x==0u&&e==0u){ /* 20 B5 AF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B67Cu,3u,0xAFu,0xB67Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB67Eu))return 0;c->pc=0xAFB5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B67Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 02 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B67Fu,3u,0xB6u,0xB682u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB681u))return 0;c->pc=0xB602u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 02 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B67Fu,3u,0xB6u,0xB682u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB681u))return 0;c->pc=0xB602u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 02 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B67Fu,3u,0xB6u,0xB682u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB681u))return 0;c->pc=0xB602u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 02 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B67Fu,3u,0xB6u,0xB682u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB681u))return 0;c->pc=0xB602u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B682u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B682u,1u,0x60u,0xB683u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B682u,1u,0x60u,0xB683u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B682u,1u,0x60u,0xB683u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B682u,1u,0x60u,0xB683u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B683u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B683u,2u,0x30u,0xB685u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B685u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B685u,3u,0x0Au,0xB688u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A9Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B688u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B688u,3u,0x00u,0xB68Bu);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B68Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 2E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B68Bu,2u,0x2Eu,0xB68Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB6BBu;}
      if(c->pc!=0xB68Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB68Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B68Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 7D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B68Du,3u,0x0Au,0xB690u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A7Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B690u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B690u,1u,0x18u,0xB691u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B691u:
    if(m==0u&&x==0u&&e==0u){ /* 69 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B691u,3u,0x00u,0xB694u);
      sc_v11_op_adc(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B694u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B694u,3u,0x00u,0xB697u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B697u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B697u,3u,0x0Au,0xB69Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A7Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B69Au:
    if(m==0u&&x==0u&&e==0u){ /* D0 45 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B69Au,2u,0x45u,0xB69Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB6E1u;}
      if(c->pc!=0xB69Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB69Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B69Cu:
    if(m==0u&&x==0u&&e==0u){ /* EE 61 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B69Cu,3u,0x0Au,0xB69Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0A61u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B69Fu:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B69Fu,3u,0x0Au,0xB6A2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6A2u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6A2u,1u,0x38u,0xB6A3u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6A3u:
    if(m==0u&&x==0u&&e==0u){ /* ED AD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6A3u,3u,0x0Au,0xB6A6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AADu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6A6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6A6u,3u,0x00u,0xB6A9u);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6A9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 36 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6A9u,2u,0x36u,0xB6ABu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB6E1u;}
      if(c->pc!=0xB6ABu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6ABu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6ABu:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6ABu,1u,0x08u,0xB6ACu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6ACu:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6ACu,4u,0x00u,0xB6B0u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB6AFu))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6B0u:
    if(m==0u&&x==0u&&e==0u){ /* 03 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B0u,2u,0x0Cu,0xB6B2u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x0Cu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B0u,2u,0x0Cu,0xB6B2u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x0Cu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B0u,2u,0x0Cu,0xB6B2u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x0Cu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B0u,2u,0x0Cu,0xB6B2u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x0Cu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6B2u:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B2u,1u,0x28u,0xB6B3u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B2u,1u,0x28u,0xB6B3u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B2u,1u,0x28u,0xB6B3u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B2u,1u,0x28u,0xB6B3u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6B3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B3u,3u,0x00u,0xB6B6u);
      sc_v11_op_lda(r,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B3u,3u,0x00u,0xB6B6u);
      sc_v11_op_lda(r,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B3u,2u,0x06u,0xB6B5u);
      sc_v11_op_lda(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B3u,2u,0x06u,0xB6B5u);
      sc_v11_op_lda(r,0x0006u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6B6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B6u,3u,0x0Au,0xB6B9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A9Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 9F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B6u,3u,0x0Au,0xB6B9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A9Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6B9u:
    if(m==0u&&x==0u&&e==0u){ /* 80 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B9u,2u,0x26u,0xB6BBu);
      if(1){c->pc=0xB6E1u;}
      if(c->pc!=0xB6BBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6BBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6B9u,2u,0x26u,0xB6BBu);
      if(1){c->pc=0xB6E1u;}
      if(c->pc!=0xB6BBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6BBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6BBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 7D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6BBu,3u,0x0Au,0xB6BEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A7Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6BEu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6BEu,1u,0x38u,0xB6BFu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6BFu:
    if(m==0u&&x==0u&&e==0u){ /* E9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6BFu,3u,0x00u,0xB6C2u);
      sc_v11_op_sbc(r,0x0001u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6C2u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6C2u,3u,0x00u,0xB6C5u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6C5u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7D 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6C5u,3u,0x0Au,0xB6C8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A7Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6C8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6C8u,3u,0x00u,0xB6CBu);
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6CBu:
    if(m==0u&&x==0u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6CBu,2u,0x14u,0xB6CDu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB6E1u;}
      if(c->pc!=0xB6CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6CDu:
    if(m==0u&&x==0u&&e==0u){ /* CE 61 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6CDu,3u,0x0Au,0xB6D0u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0A61u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6D0u:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6D0u,3u,0x0Au,0xB6D3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6D3u:
    if(m==0u&&x==0u&&e==0u){ /* CD AD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6D3u,3u,0x0Au,0xB6D6u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AADu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6D6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6D6u,2u,0x09u,0xB6D8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB6E1u;}
      if(c->pc!=0xB6D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6D8u:
    if(m==0u&&x==0u&&e==0u){ /* 9C CB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6D8u,3u,0x0Au,0xB6DBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ACBu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6DBu:
    if(m==0u&&x==0u&&e==0u){ /* A9 06 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6DBu,3u,0x80u,0xB6DEu);
      sc_v11_op_lda(r,0x8006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6DEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6DEu,3u,0x0Au,0xB6E1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A9Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6E1u:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6E1u,3u,0x0Au,0xB6E4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 61 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6E1u,3u,0x0Au,0xB6E4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6E4u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6E4u,1u,0x38u,0xB6E5u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6E4u,1u,0x38u,0xB6E5u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6E5u:
    if(m==0u&&x==0u&&e==0u){ /* ED AD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6E5u,3u,0x0Au,0xB6E8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AADu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* ED AD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6E5u,3u,0x0Au,0xB6E8u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AADu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6E8u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6E8u,1u,0xAAu,0xB6E9u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6E8u,1u,0xAAu,0xB6E9u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6E9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6E9u,3u,0x00u,0xB6ECu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6E9u,3u,0x00u,0xB6ECu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6ECu:
    if(m==0u&&x==0u&&e==0u){ /* E0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6ECu,3u,0x00u,0xB6EFu);
      sc_v11_op_compare(r,c->x,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6ECu,2u,0x01u,0xB6EEu);
      sc_v11_op_compare(r,c->x,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6EFu:
    if(m==0u&&x==0u&&e==0u){ /* 90 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6EFu,2u,0x07u,0xB6F1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB6F8u;}
      if(c->pc!=0xB6F1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6F1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6F1u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6F1u,1u,0x1Au,0xB6F2u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6F2u:
    if(m==0u&&x==0u&&e==0u){ /* E0 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6F2u,3u,0x00u,0xB6F5u);
      sc_v11_op_compare(r,c->x,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6F5u:
    if(m==0u&&x==0u&&e==0u){ /* 90 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6F5u,2u,0x01u,0xB6F7u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB6F8u;}
      if(c->pc!=0xB6F7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6F7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6F7u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6F7u,1u,0x1Au,0xB6F8u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6F8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 07 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6F8u,3u,0xB6u,0xB6FBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB6FAu))return 0;c->pc=0xB607u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6FBu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6FBu,1u,0x60u,0xB6FCu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6FBu,1u,0x60u,0xB6FCu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6FBu,1u,0x60u,0xB6FCu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6FBu,1u,0x60u,0xB6FCu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6FCu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6FCu,2u,0x20u,0xB6FEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6FCu,2u,0x20u,0xB6FEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6FCu,2u,0x20u,0xB6FEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6FCu,2u,0x20u,0xB6FEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B6FEu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6FEu,2u,0x10u,0xB700u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B6FEu,2u,0x10u,0xB700u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B700u:
    if(m==1u&&x==0u&&e==0u){ /* AD 5F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B700u,3u,0x0Au,0xB703u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A5Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B703u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 02 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B703u,3u,0x42u,0xB706u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B706u:
    if(m==1u&&x==0u&&e==0u){ /* A9 78 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B706u,2u,0x78u,0xB708u);
      sc_v11_op_lda(r,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B708u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 03 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B708u,3u,0x42u,0xB70Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B70Bu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B70Bu,1u,0x48u,0xB70Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B70Cu:
    if(m==1u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B70Cu,1u,0x68u,0xB70Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B70Du:
    if(m==1u&&x==0u&&e==0u){ /* EA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B70Du,1u,0xEAu,0xB70Eu);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B70Eu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B70Eu,2u,0x20u,0xB710u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B710u:
    if(m==0u&&x==0u&&e==0u){ /* AD 16 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B710u,3u,0x42u,0xB713u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x4216u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B713u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B713u,1u,0x18u,0xB714u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B714u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 61 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B714u,3u,0x0Au,0xB717u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B717u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B717u,1u,0x0Au,0xB718u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B718u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B718u,1u,0xAAu,0xB719u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B719u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B719u,4u,0x7Fu,0xB71Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B71Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 97 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B71Du,3u,0x02u,0xB720u);
      sc_v11_op_compare(r,c->a,0x0297u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B720u:
    if(m==0u&&x==0u&&e==0u){ /* D0 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B720u,2u,0x20u,0xB722u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB742u;}
      if(c->pc!=0xB722u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB722u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B722u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B722u,3u,0x0Au,0xB725u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A9Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B725u:
    if(m==0u&&x==0u&&e==0u){ /* F0 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B725u,2u,0x1Bu,0xB727u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB742u;}
      if(c->pc!=0xB727u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB727u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B727u:
    if(m==0u&&x==0u&&e==0u){ /* C9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B727u,3u,0x00u,0xB72Au);
      sc_v11_op_compare(r,c->a,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B72Au:
    if(m==0u&&x==0u&&e==0u){ /* B0 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B72Au,2u,0x16u,0xB72Cu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB742u;}
      if(c->pc!=0xB72Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB72Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B72Cu:
    if(m==0u&&x==0u&&e==0u){ /* EE CB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B72Cu,3u,0x0Au,0xB72Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0ACBu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B72Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B72Fu,3u,0x00u,0xB732u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B732u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 9F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B732u,3u,0x0Au,0xB735u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A9Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B735u:
    if(m==0u&&x==0u&&e==0u){ /* AD 61 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B735u,3u,0x0Au,0xB738u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A61u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B738u:
    if(m==0u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B738u,1u,0x1Au,0xB739u);
      sc_v11_op_incdec_accumulator(r,16u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B739u:
    if(m==0u&&x==0u&&e==0u){ /* 8D AD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B739u,3u,0x0Au,0xB73Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AADu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B73Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 5F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B73Cu,3u,0x0Au,0xB73Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A5Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B73Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D AB 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B73Fu,3u,0x0Au,0xB742u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AABu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B742u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B742u,1u,0x60u,0xB743u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B743u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B743u,2u,0x20u,0xB745u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B743u,2u,0x20u,0xB745u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B743u,2u,0x20u,0xB745u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B745u:
    if(m==0u&&x==1u&&e==0u){ /* A5 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B745u,2u,0x40u,0xB747u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x40u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B747u:
    if(m==0u&&x==1u&&e==0u){ /* C9 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B747u,3u,0x00u,0xB74Au);
      sc_v11_op_compare(r,c->a,0x0006u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B74Au:
    if(m==0u&&x==1u&&e==0u){ /* F0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B74Au,2u,0x0Cu,0xB74Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB758u;}
      if(c->pc!=0xB74Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB74Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B74Cu:
    if(m==0u&&x==1u&&e==0u){ /* A5 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B74Cu,2u,0x40u,0xB74Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x40u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B74Eu:
    if(m==0u&&x==1u&&e==0u){ /* C9 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B74Eu,3u,0x00u,0xB751u);
      sc_v11_op_compare(r,c->a,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B751u:
    if(m==0u&&x==1u&&e==0u){ /* F0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B751u,2u,0x05u,0xB753u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB758u;}
      if(c->pc!=0xB753u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB753u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B753u:
    if(m==0u&&x==1u&&e==0u){ /* AD 95 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B753u,3u,0x0Au,0xB756u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A95u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B756u:
    if(m==0u&&x==1u&&e==0u){ /* D0 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B756u,2u,0x01u,0xB758u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB759u;}
      if(c->pc!=0xB758u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB758u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B758u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B758u,1u,0x60u,0xB759u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B758u,1u,0x60u,0xB759u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B758u,1u,0x60u,0xB759u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B759u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B759u,2u,0x20u,0xB75Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B759u,2u,0x20u,0xB75Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B75Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B75Bu,2u,0xE1u,0xB75Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A5 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B75Bu,2u,0xE1u,0xB75Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xE1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B75Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B75Du,3u,0x00u,0xB760u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B75Du,3u,0x00u,0xB760u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B760u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B760u,3u,0x00u,0xB763u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B760u,3u,0x00u,0xB763u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B763u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B763u,2u,0xF3u,0xB765u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB758u;}
      if(c->pc!=0xB765u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB765u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 F3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B763u,2u,0xF3u,0xB765u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB758u;}
      if(c->pc!=0xB765u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB765u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B765u:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B765u,3u,0x01u,0xB768u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0193u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 93 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B765u,3u,0x01u,0xB768u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0193u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B768u:
    if(m==0u&&x==0u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B768u,3u,0x00u,0xB76Bu);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B768u,3u,0x00u,0xB76Bu);
      sc_v11_op_compare(r,c->a,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B76Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B76Bu,2u,0x03u,0xB76Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB770u;}
      if(c->pc!=0xB76Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB76Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B76Bu,2u,0x03u,0xB76Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB770u;}
      if(c->pc!=0xB76Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB76Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B76Du:
    if(m==0u&&x==0u&&e==0u){ /* 4C 17 BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B76Du,3u,0xBAu,0xB770u);
      c->pc=0xBA17u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C 17 BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B76Du,3u,0xBAu,0xB770u);
      c->pc=0xBA17u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B770u:
    if(m==0u&&x==0u&&e==0u){ /* CE 0F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B770u,3u,0x0Bu,0xB773u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B0Fu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CE 0F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B770u,3u,0x0Bu,0xB773u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0B0Fu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B773u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B773u,2u,0x0Eu,0xB775u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB783u;}
      if(c->pc!=0xB775u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB775u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B773u,2u,0x0Eu,0xB775u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB783u;}
      if(c->pc!=0xB775u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB775u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B775u:
    if(m==0u&&x==0u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B775u,1u,0x08u,0xB776u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B775u,1u,0x08u,0xB776u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B776u:
    if(m==0u&&x==0u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B776u,4u,0x00u,0xB77Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB779u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 A0 98 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B776u,4u,0x00u,0xB77Au);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xB779u))return 0;
      c->pbr=0x00u;c->pc=0x98A0u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B77Au:
    if(m==0u&&x==0u&&e==0u){ /* 03 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Au,2u,0x05u,0xB77Cu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x05u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 03 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Au,2u,0x05u,0xB77Cu);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0x05u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 03 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Au,2u,0x05u,0xB77Cu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x05u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Au,2u,0x05u,0xB77Cu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x05u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B77Cu:
    if(m==0u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Cu,1u,0x28u,0xB77Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Cu,1u,0x28u,0xB77Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Cu,1u,0x28u,0xB77Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 28 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Cu,1u,0x28u,0xB77Du);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B77Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 58 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Du,3u,0x02u,0xB780u);
      sc_v11_op_lda(r,0x0258u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 58 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Du,3u,0x02u,0xB780u);
      sc_v11_op_lda(r,0x0258u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 58 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Du,2u,0x58u,0xB77Fu);
      sc_v11_op_lda(r,0x0058u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 58 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Du,2u,0x58u,0xB77Fu);
      sc_v11_op_lda(r,0x0058u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B77Fu:
    if(m==1u&&x==0u&&e==0u){ /* 02 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Fu,2u,0x8Du,0xB781u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xB781u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 02 8D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B77Fu,2u,0x8Du,0xB781u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xB781u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B780u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 0F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B780u,3u,0x0Bu,0xB783u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B0Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 0F 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B780u,3u,0x0Bu,0xB783u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B0Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B781u:
    if(m==1u&&x==0u&&e==0u){ /* 0F 0B E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B781u,4u,0x30u,0xB785u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x30E20Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0F 0B E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B781u,4u,0x30u,0xB785u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x30E20Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B783u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B783u,2u,0x30u,0xB785u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B783u,2u,0x30u,0xB785u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B785u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B785u,2u,0x01u,0xB787u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B785u,2u,0x01u,0xB787u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B787u:
    if(m==1u&&x==0u&&e==0u){ /* 8D B7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B787u,3u,0x0Au,0xB78Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AB7u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D B7 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B787u,3u,0x0Au,0xB78Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0AB7u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B78Au:
    if(m==1u&&x==0u&&e==0u){ /* A5 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B78Au,2u,0xE3u,0xB78Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B78Au,2u,0xE3u,0xB78Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xE3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B78Cu:
    if(m==1u&&x==0u&&e==0u){ /* D0 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B78Cu,2u,0xCAu,0xB78Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB758u;}
      if(c->pc!=0xB78Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB78Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B78Cu,2u,0xCAu,0xB78Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB758u;}
      if(c->pc!=0xB78Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB78Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B78Eu:
    if(m==1u&&x==0u&&e==0u){ /* AD 96 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B78Eu,3u,0x0Au,0xB791u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A96u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 96 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B78Eu,3u,0x0Au,0xB791u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A96u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B791u:
    if(m==1u&&x==0u&&e==0u){ /* 10 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B791u,2u,0x03u,0xB793u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB796u;}
      if(c->pc!=0xB793u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB793u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 10 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B791u,2u,0x03u,0xB793u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xB796u;}
      if(c->pc!=0xB793u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB793u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B793u:
    if(m==1u&&x==0u&&e==0u){ /* 4C 1D B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B793u,3u,0xB8u,0xB796u);
      c->pc=0xB81Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4C 1D B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B793u,3u,0xB8u,0xB796u);
      c->pc=0xB81Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B796u:
    if(m==1u&&x==0u&&e==0u){ /* AD 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B796u,3u,0x0Bu,0xB799u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B07u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B796u,3u,0x0Bu,0xB799u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B07u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B799u:
    if(m==1u&&x==0u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B799u,2u,0x0Au,0xB79Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB7A5u;}
      if(c->pc!=0xB79Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB79Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B799u,2u,0x0Au,0xB79Bu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB7A5u;}
      if(c->pc!=0xB79Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB79Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B79Bu:
    if(m==1u&&x==0u&&e==0u){ /* 20 4B B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B79Bu,3u,0xB8u,0xB79Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB79Du))return 0;c->pc=0xB84Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 4B B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B79Bu,3u,0xB8u,0xB79Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB79Du))return 0;c->pc=0xB84Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B79Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B79Eu,3u,0x0Bu,0xB7A1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B07u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B79Eu,3u,0x0Bu,0xB7A1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B07u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B79Eu,3u,0x0Bu,0xB7A1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B07u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B79Eu,3u,0x0Bu,0xB7A1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B07u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7A1u:
    if(m==0u&&x==0u&&e==0u){ /* D0 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A1u,2u,0x71u,0xB7A3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB814u;}
      if(c->pc!=0xB7A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A1u,2u,0x71u,0xB7A3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB814u;}
      if(c->pc!=0xB7A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A1u,2u,0x71u,0xB7A3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB814u;}
      if(c->pc!=0xB7A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 71 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A1u,2u,0x71u,0xB7A3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB814u;}
      if(c->pc!=0xB7A3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7A3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7A3u:
    if(m==0u&&x==0u&&e==0u){ /* F0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A3u,2u,0x19u,0xB7A5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB7BEu;}
      if(c->pc!=0xB7A5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7A5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* F0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A3u,2u,0x19u,0xB7A5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB7BEu;}
      if(c->pc!=0xB7A5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7A5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* F0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A3u,2u,0x19u,0xB7A5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB7BEu;}
      if(c->pc!=0xB7A5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7A5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* F0 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A3u,2u,0x19u,0xB7A5u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB7BEu;}
      if(c->pc!=0xB7A5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7A5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7A5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 81 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A5u,3u,0x0Au,0xB7A8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A81u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 81 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A5u,3u,0x0Au,0xB7A8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A81u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 81 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A5u,3u,0x0Au,0xB7A8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A81u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 81 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A5u,3u,0x0Au,0xB7A8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A81u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7A8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A8u,2u,0x14u,0xB7AAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB7BEu;}
      if(c->pc!=0xB7AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7AAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A8u,2u,0x14u,0xB7AAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB7BEu;}
      if(c->pc!=0xB7AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7AAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A8u,2u,0x14u,0xB7AAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB7BEu;}
      if(c->pc!=0xB7AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7AAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7A8u,2u,0x14u,0xB7AAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB7BEu;}
      if(c->pc!=0xB7AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7AAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7AAu:
    if(m==0u&&x==0u&&e==0u){ /* AD 7F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7AAu,3u,0x0Au,0xB7ADu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A7Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 7F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7AAu,3u,0x0Au,0xB7ADu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A7Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 7F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7AAu,3u,0x0Au,0xB7ADu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A7Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 7F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7AAu,3u,0x0Au,0xB7ADu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A7Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7ADu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7ADu,2u,0x0Fu,0xB7AFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB7BEu;}
      if(c->pc!=0xB7AFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7AFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7ADu,2u,0x0Fu,0xB7AFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB7BEu;}
      if(c->pc!=0xB7AFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7AFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7ADu,2u,0x0Fu,0xB7AFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB7BEu;}
      if(c->pc!=0xB7AFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7AFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7ADu,2u,0x0Fu,0xB7AFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB7BEu;}
      if(c->pc!=0xB7AFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7AFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7AFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 6D B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7AFu,3u,0xB8u,0xB7B2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB7B1u))return 0;c->pc=0xB86Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 6D B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7AFu,3u,0xB8u,0xB7B2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB7B1u))return 0;c->pc=0xB86Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 6D B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7AFu,3u,0xB8u,0xB7B2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB7B1u))return 0;c->pc=0xB86Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 6D B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7AFu,3u,0xB8u,0xB7B2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB7B1u))return 0;c->pc=0xB86Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7B2u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7B2u,2u,0x20u,0xB7B4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7B2u,2u,0x20u,0xB7B4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7B2u,2u,0x20u,0xB7B4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7B2u,2u,0x20u,0xB7B4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7B4u:
    if(m==1u&&x==0u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7B4u,2u,0x08u,0xB7B6u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7B4u,2u,0x08u,0xB7B6u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7B6u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 0D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7B6u,3u,0x0Bu,0xB7B9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B0Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 0D 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7B6u,3u,0x0Bu,0xB7B9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B0Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7B9u:
    if(m==1u&&x==0u&&e==0u){ /* AD 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7B9u,3u,0x0Bu,0xB7BCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B07u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 07 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7B9u,3u,0x0Bu,0xB7BCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B07u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7BCu:
    if(m==1u&&x==0u&&e==0u){ /* D0 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7BCu,2u,0x56u,0xB7BEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB814u;}
      if(c->pc!=0xB7BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 56 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7BCu,2u,0x56u,0xB7BEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB814u;}
      if(c->pc!=0xB7BEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7BEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7BEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7BEu,2u,0x10u,0xB7C0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7BEu,2u,0x10u,0xB7C0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7BEu,2u,0x10u,0xB7C0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7BEu,2u,0x10u,0xB7C0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7C0u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7C0u,2u,0x20u,0xB7C2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7C0u,2u,0x20u,0xB7C2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7C2u:
    if(m==0u&&x==1u&&e==0u){ /* AD 0B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7C2u,3u,0x0Bu,0xB7C5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B0Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7C5u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7C5u,1u,0x0Au,0xB7C6u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7C6u:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7C6u,1u,0x0Au,0xB7C7u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7C7u:
    if(m==0u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7C7u,1u,0xAAu,0xB7C8u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7C8u:
    if(m==0u&&x==1u&&e==0u){ /* BD BA BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7C8u,3u,0xBAu,0xB7CBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBABAu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7CBu:
    if(m==0u&&x==1u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7CBu,2u,0x07u,0xB7CDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB7D4u;}
      if(c->pc!=0xB7CDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7CDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7CDu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7CDu,1u,0x18u,0xB7CEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7CEu:
    if(m==0u&&x==1u&&e==0u){ /* 6D 13 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7CEu,3u,0x0Bu,0xB7D1u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7D1u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 13 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7D1u,3u,0x0Bu,0xB7D4u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B13u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7D4u:
    if(m==0u&&x==1u&&e==0u){ /* BD BC BA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7D4u,3u,0xBAu,0xB7D7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xBABCu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7D7u:
    if(m==0u&&x==1u&&e==0u){ /* F0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7D7u,2u,0x07u,0xB7D9u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB7E0u;}
      if(c->pc!=0xB7D9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7D9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7D9u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7D9u,1u,0x18u,0xB7DAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7DAu:
    if(m==0u&&x==1u&&e==0u){ /* 6D 11 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7DAu,3u,0x0Bu,0xB7DDu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B11u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7DDu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 11 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7DDu,3u,0x0Bu,0xB7E0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B11u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7E0u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7E0u,2u,0x20u,0xB7E2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7E2u:
    if(m==0u&&x==1u&&e==0u){ /* AD 11 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7E2u,3u,0x0Bu,0xB7E5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B11u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7E5u:
    if(m==0u&&x==1u&&e==0u){ /* 30 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7E5u,2u,0x30u,0xB7E7u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB817u;}
      if(c->pc!=0xB7E7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7E7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7E7u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7E7u,1u,0x4Au,0xB7E8u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7E8u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7E8u,1u,0x4Au,0xB7E9u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7E9u:
    if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7E9u,1u,0x4Au,0xB7EAu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7EAu:
    if(m==0u&&x==1u&&e==0u){ /* 8D 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7EAu,3u,0x0Au,0xB7EDu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A63u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7EDu:
    if(m==0u&&x==1u&&e==0u){ /* C9 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7EDu,3u,0x00u,0xB7F0u);
      sc_v11_op_compare(r,c->a,0x0064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7F0u:
    if(m==0u&&x==1u&&e==0u){ /* B0 25 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7F0u,2u,0x25u,0xB7F2u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB817u;}
      if(c->pc!=0xB7F2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB7F2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7F2u:
    if(m==0u&&x==1u&&e==0u){ /* AD 11 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7F2u,3u,0x0Bu,0xB7F5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B11u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7F5u:
    if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7F5u,3u,0x00u,0xB7F8u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7F8u:
    if(m==0u&&x==1u&&e==0u){ /* 8D 7F 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7F8u,3u,0x0Au,0xB7FBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A7Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7FBu:
    if(m==0u&&x==1u&&e==0u){ /* AD 13 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7FBu,3u,0x0Bu,0xB7FEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00B7FEu:
    if(m==0u&&x==1u&&e==0u){ /* 30 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x00B7FEu,2u,0x17u,0xB800u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB817u;}
      if(c->pc!=0xB800u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB800u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
