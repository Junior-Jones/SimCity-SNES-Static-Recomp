/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000ED(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03B401u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B401u,3u,0x00u,0xB404u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B401u,2u,0x00u,0xB403u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B401u,3u,0x00u,0xB404u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B401u,2u,0x00u,0xB403u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B404u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B404u,3u,0x03u,0xB407u);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B404u,2u,0xFFu,0xB406u);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B406u:
    if(m==1u&&x==0u&&e==0u){ /* 03 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B406u,2u,0xC9u,0xB408u);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0xC9u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B407u:
    if(m==0u&&x==0u&&e==0u){ /* C9 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B407u,3u,0x00u,0xB40Au);
      sc_v11_op_compare(r,c->a,0x0030u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B408u:
    if(m==1u&&x==0u&&e==0u){ /* 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B408u,2u,0x00u,0xB40Au);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xB40Au;}
      if(c->pc!=0xB40Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB40Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B40Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B40Au,2u,0x12u,0xB40Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB41Eu;}
      if(c->pc!=0xB40Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB40Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 90 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B40Au,2u,0x12u,0xB40Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB41Eu;}
      if(c->pc!=0xB40Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB40Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B40Cu:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B40Cu,3u,0x00u,0xB40Fu);
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B40Cu,2u,0x80u,0xB40Eu);
      sc_v11_op_compare(r,c->a,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B40Fu:
    if(m==0u&&x==0u&&e==0u){ /* B0 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B40Fu,2u,0x0Du,0xB411u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB41Eu;}
      if(c->pc!=0xB411u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB411u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B411u:
    if(m==0u&&x==0u&&e==0u){ /* C9 60 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B411u,3u,0x00u,0xB414u);
      sc_v11_op_compare(r,c->a,0x0060u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B414u:
    if(m==0u&&x==0u&&e==0u){ /* 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B414u,2u,0x05u,0xB416u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB41Bu;}
      if(c->pc!=0xB416u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB416u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B416u:
    if(m==0u&&x==0u&&e==0u){ /* C9 6D 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B416u,3u,0x00u,0xB419u);
      sc_v11_op_compare(r,c->a,0x006Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B419u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B419u,2u,0x03u,0xB41Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB41Eu;}
      if(c->pc!=0xB41Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB41Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B41Bu:
    if(m==0u&&x==0u&&e==0u){ /* A0 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B41Bu,3u,0x00u,0xB41Eu);
      sc_v11_op_ldy(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B41Eu:
    if(m==0u&&x==0u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B41Eu,1u,0x98u,0xB41Fu);
      c->a=c->y;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 98 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B41Eu,1u,0x98u,0xB41Fu);
      c->a=(uint16_t)((c->a&0xff00u)|(c->y&0xffu));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B41Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B41Fu,1u,0x60u,0xB420u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B41Fu,1u,0x60u,0xB420u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B420u:
    if(m==1u&&x==0u&&e==0u){ /* C9 78 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B420u,2u,0x78u,0xB422u);
      sc_v11_op_compare(r,c->a,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 78 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B420u,2u,0x78u,0xB422u);
      sc_v11_op_compare(r,c->a,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B422u:
    if(m==1u&&x==0u&&e==0u){ /* B0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B422u,2u,0x08u,0xB424u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB42Cu;}
      if(c->pc!=0xB424u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB424u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B422u,2u,0x08u,0xB424u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB42Cu;}
      if(c->pc!=0xB424u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB424u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B424u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B424u,1u,0xEBu,0xB425u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B424u,1u,0xEBu,0xB425u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B425u:
    if(m==1u&&x==0u&&e==0u){ /* C9 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B425u,2u,0x64u,0xB427u);
      sc_v11_op_compare(r,c->a,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B425u,2u,0x64u,0xB427u);
      sc_v11_op_compare(r,c->a,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B427u:
    if(m==1u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B427u,2u,0x03u,0xB429u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB42Cu;}
      if(c->pc!=0xB429u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB429u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B427u,2u,0x03u,0xB429u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB42Cu;}
      if(c->pc!=0xB429u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB429u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B429u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B429u,2u,0x01u,0xB42Bu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B429u,2u,0x01u,0xB42Bu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B42Bu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B42Bu,1u,0x60u,0xB42Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B42Bu,1u,0x60u,0xB42Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B42Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B42Cu,2u,0x00u,0xB42Eu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B42Cu,2u,0x00u,0xB42Eu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B42Eu:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B42Eu,1u,0x60u,0xB42Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B42Eu,1u,0x60u,0xB42Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B42Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B42Fu,2u,0x20u,0xB431u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B42Fu,2u,0x20u,0xB431u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B42Fu,2u,0x20u,0xB431u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B431u:

    if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B431u,1u,0x0Bu,0xB432u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B432u:

    if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B432u,1u,0x48u,0xB433u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B433u:

    if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B433u,1u,0x7Bu,0xB434u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B434u:

    if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B434u,1u,0x38u,0xB435u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B435u:

    if(m==0u&&x==1u&&e==0u){ /* E9 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B435u,3u,0x00u,0xB438u);
      sc_v11_op_sbc(r,0x0010u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B438u:

    if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B438u,1u,0x5Bu,0xB439u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B439u:

    if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B439u,1u,0x68u,0xB43Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B43Au:

    if(m==0u&&x==1u&&e==0u){ /* AD FB 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B43Au,3u,0x0Du,0xB43Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0DFBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B43Du:

    if(m==0u&&x==1u&&e==0u){ /* F0 11 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B43Du,2u,0x11u,0xB43Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB450u;}
      if(c->pc!=0xB43Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB43Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B43Fu:

    if(m==0u&&x==1u&&e==0u){ /* 20 AA B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B43Fu,3u,0xB4u,0xB442u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB441u))return 0;c->pc=0xB4AAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B442u:
    if(m==0u&&x==1u&&e==0u){ /* 20 62 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B442u,3u,0xB5u,0xB445u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB444u))return 0;c->pc=0xB562u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 62 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B442u,3u,0xB5u,0xB445u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB444u))return 0;c->pc=0xB562u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 62 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B442u,3u,0xB5u,0xB445u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB444u))return 0;c->pc=0xB562u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B445u:
    if(m==0u&&x==1u&&e==0u){ /* 20 73 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B445u,3u,0xB5u,0xB448u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB447u))return 0;c->pc=0xB573u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 73 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B445u,3u,0xB5u,0xB448u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB447u))return 0;c->pc=0xB573u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 73 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B445u,3u,0xB5u,0xB448u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB447u))return 0;c->pc=0xB573u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B448u:
    if(m==0u&&x==1u&&e==0u){ /* 20 08 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B448u,3u,0xB7u,0xB44Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB44Au))return 0;c->pc=0xB708u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 08 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B448u,3u,0xB7u,0xB44Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB44Au))return 0;c->pc=0xB708u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 08 B7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B448u,3u,0xB7u,0xB44Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB44Au))return 0;c->pc=0xB708u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B44Bu:
    if(m==0u&&x==1u&&e==0u){ /* 20 24 B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B44Bu,3u,0xB8u,0xB44Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB44Du))return 0;c->pc=0xB824u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 24 B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B44Bu,3u,0xB8u,0xB44Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB44Du))return 0;c->pc=0xB824u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 24 B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B44Bu,3u,0xB8u,0xB44Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB44Du))return 0;c->pc=0xB824u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B44Eu:
    if(m==0u&&x==1u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B44Eu,2u,0x06u,0xB450u);
      if(1){c->pc=0xB456u;}
      if(c->pc!=0xB450u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB450u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B44Eu,2u,0x06u,0xB450u);
      if(1){c->pc=0xB456u;}
      if(c->pc!=0xB450u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB450u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 80 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B44Eu,2u,0x06u,0xB450u);
      if(1){c->pc=0xB456u;}
      if(c->pc!=0xB450u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB450u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B450u:
    if(m==0u&&x==0u&&e==0u){ /* 20 77 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B450u,3u,0xB4u,0xB453u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB452u))return 0;c->pc=0xB477u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 77 B4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B450u,3u,0xB4u,0xB453u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB452u))return 0;c->pc=0xB477u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B453u:
    if(m==0u&&x==0u&&e==0u){ /* 9C F7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B453u,3u,0x0Du,0xB456u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DF7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9C F7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B453u,3u,0x0Du,0xB456u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DF7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 9C F7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B453u,3u,0x0Du,0xB456u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0DF7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 9C F7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B453u,3u,0x0Du,0xB456u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0DF7u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B456u:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B456u,2u,0x20u,0xB458u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B456u,2u,0x20u,0xB458u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B456u,2u,0x20u,0xB458u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B458u:
    if(m==1u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B458u,2u,0x00u,0xB45Au);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B477u:

    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B477u,2u,0x30u,0xB479u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4AAu:

    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4AAu,2u,0x30u,0xB4ACu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4CFu:
    if(m==0u&&x==1u&&e==0u){ /* AD 03 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4CFu,3u,0x0Eu,0xB4D2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E03u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 03 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4CFu,3u,0x0Eu,0xB4D2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E03u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 03 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4CFu,3u,0x0Eu,0xB4D2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E03u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4D2u:
    if(m==0u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4D2u,2u,0x00u,0xB4D4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4D2u,2u,0x00u,0xB4D4u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4D2u,2u,0x00u,0xB4D4u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4D4u:
    if(m==0u&&x==1u&&e==0u){ /* A9 90 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4D4u,3u,0x01u,0xB4D7u);
      sc_v11_op_lda(r,0x0190u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4D4u,2u,0x90u,0xB4D6u);
      sc_v11_op_lda(r,0x0090u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4D4u,2u,0x90u,0xB4D6u);
      sc_v11_op_lda(r,0x0090u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4D7u:
    if(m==0u&&x==1u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4D7u,2u,0x04u,0xB4D9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4D9u:
    if(m==0u&&x==1u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4D9u,3u,0xA2u,0xB4DCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4DBu))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4E2u:
    if(m==0u&&x==1u&&e==0u){ /* AD 07 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4E2u,3u,0x0Eu,0xB4E5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E07u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 07 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4E2u,3u,0x0Eu,0xB4E5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E07u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 07 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4E2u,3u,0x0Eu,0xB4E5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E07u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4E5u:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4E5u,1u,0x18u,0xB4E6u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4E5u,1u,0x18u,0xB4E6u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4E5u,1u,0x18u,0xB4E6u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4E6u:
    if(m==0u&&x==1u&&e==0u){ /* 6D 09 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4E6u,3u,0x0Eu,0xB4E9u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E09u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6D 09 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4E6u,3u,0x0Eu,0xB4E9u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E09u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6D 09 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4E6u,3u,0x0Eu,0xB4E9u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E09u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4E9u:
    if(m==0u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4E9u,2u,0x00u,0xB4EBu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4E9u,2u,0x00u,0xB4EBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4E9u,2u,0x00u,0xB4EBu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4EBu:
    if(m==0u&&x==1u&&e==0u){ /* A9 E8 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4EBu,3u,0x03u,0xB4EEu);
      sc_v11_op_lda(r,0x03E8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4EBu,2u,0xE8u,0xB4EDu);
      sc_v11_op_lda(r,0x00E8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4EBu,2u,0xE8u,0xB4EDu);
      sc_v11_op_lda(r,0x00E8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4EDu:
    if(m==1u&&x==0u&&e==0u){ /* 03 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4EDu,2u,0x85u,0xB4EFu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x85u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 03 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4EDu,2u,0x85u,0xB4EFu);
      sc_v11_op_ora(r,sc_v11_bus_read8(r,sc_v11_ea_stack(r,0x85u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4EEu:
    if(m==0u&&x==1u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4EEu,2u,0x04u,0xB4F0u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4F0u:
    if(m==0u&&x==1u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4F0u,3u,0xA2u,0xB4F3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB4F2u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4F9u:
    if(m==0u&&x==1u&&e==0u){ /* AD 0B 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4F9u,3u,0x0Eu,0xB4FCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 0B 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4F9u,3u,0x0Eu,0xB4FCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E0Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 0B 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4F9u,3u,0x0Eu,0xB4FCu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E0Bu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4FCu:
    if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4FCu,1u,0x18u,0xB4FDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4FCu,1u,0x18u,0xB4FDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4FCu,1u,0x18u,0xB4FDu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B4FDu:
    if(m==0u&&x==1u&&e==0u){ /* 6D 0D 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4FDu,3u,0x0Eu,0xB500u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6D 0D 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4FDu,3u,0x0Eu,0xB500u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E0Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6D 0D 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B4FDu,3u,0x0Eu,0xB500u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E0Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B500u:
    if(m==0u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B500u,2u,0x00u,0xB502u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B500u,2u,0x00u,0xB502u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B500u,2u,0x00u,0xB502u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B502u:
    if(m==0u&&x==1u&&e==0u){ /* A9 B8 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B502u,3u,0x0Bu,0xB505u);
      sc_v11_op_lda(r,0x0BB8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B502u,2u,0xB8u,0xB504u);
      sc_v11_op_lda(r,0x00B8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 B8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B502u,2u,0xB8u,0xB504u);
      sc_v11_op_lda(r,0x00B8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B504u:
    if(m==1u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B504u,1u,0x0Bu,0xB505u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B504u,1u,0x0Bu,0xB505u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B505u:
    if(m==0u&&x==1u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B505u,2u,0x04u,0xB507u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B505u,2u,0x04u,0xB507u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B505u,2u,0x04u,0xB507u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B507u:
    if(m==0u&&x==1u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B507u,3u,0xA2u,0xB50Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB509u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B507u,3u,0xA2u,0xB50Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB509u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B507u,3u,0xA2u,0xB50Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB509u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B510u:
    if(m==0u&&x==1u&&e==0u){ /* AD 11 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B510u,3u,0x0Eu,0xB513u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E11u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 11 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B510u,3u,0x0Eu,0xB513u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E11u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 11 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B510u,3u,0x0Eu,0xB513u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E11u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B513u:
    if(m==0u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B513u,2u,0x00u,0xB515u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B513u,2u,0x00u,0xB515u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B513u,2u,0x00u,0xB515u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B515u:
    if(m==0u&&x==1u&&e==0u){ /* A9 88 13 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B515u,3u,0x13u,0xB518u);
      sc_v11_op_lda(r,0x1388u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B515u,2u,0x88u,0xB517u);
      sc_v11_op_lda(r,0x0088u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 88 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B515u,2u,0x88u,0xB517u);
      sc_v11_op_lda(r,0x0088u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B518u:
    if(m==0u&&x==1u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B518u,2u,0x04u,0xB51Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B51Au:
    if(m==0u&&x==1u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B51Au,3u,0xA2u,0xB51Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB51Cu))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B523u:
    if(m==0u&&x==1u&&e==0u){ /* AD 0F 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B523u,3u,0x0Eu,0xB526u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 0F 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B523u,3u,0x0Eu,0xB526u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E0Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 0F 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B523u,3u,0x0Eu,0xB526u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E0Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B526u:
    if(m==0u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B526u,2u,0x00u,0xB528u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B526u,2u,0x00u,0xB528u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B526u,2u,0x00u,0xB528u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B528u:
    if(m==0u&&x==1u&&e==0u){ /* A9 70 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B528u,3u,0x17u,0xB52Bu);
      sc_v11_op_lda(r,0x1770u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B528u,2u,0x70u,0xB52Au);
      sc_v11_op_lda(r,0x0070u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B528u,2u,0x70u,0xB52Au);
      sc_v11_op_lda(r,0x0070u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B52Bu:
    if(m==0u&&x==1u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B52Bu,2u,0x04u,0xB52Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B52Du:
    if(m==0u&&x==1u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B52Du,3u,0xA2u,0xB530u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB52Fu))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B536u:
    if(m==0u&&x==1u&&e==0u){ /* AD 13 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B536u,3u,0x0Eu,0xB539u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E13u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 13 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B536u,3u,0x0Eu,0xB539u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E13u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 13 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B536u,3u,0x0Eu,0xB539u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E13u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B539u:
    if(m==0u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B539u,2u,0x00u,0xB53Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B539u,2u,0x00u,0xB53Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B539u,2u,0x00u,0xB53Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B53Bu:
    if(m==0u&&x==1u&&e==0u){ /* A9 10 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B53Bu,3u,0x27u,0xB53Eu);
      sc_v11_op_lda(r,0x2710u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B53Bu,2u,0x10u,0xB53Du);
      sc_v11_op_lda(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B53Bu,2u,0x10u,0xB53Du);
      sc_v11_op_lda(r,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B53Eu:
    if(m==0u&&x==1u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B53Eu,2u,0x04u,0xB540u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B540u:
    if(m==0u&&x==1u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B540u,3u,0xA2u,0xB543u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB542u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B549u:
    if(m==0u&&x==1u&&e==0u){ /* A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B549u,2u,0x0Cu,0xB54Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Cu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B549u,2u,0x0Cu,0xB54Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B549u,2u,0x0Cu,0xB54Bu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B54Bu:
    if(m==0u&&x==1u&&e==0u){ /* 8D E7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B54Bu,3u,0x0Du,0xB54Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE7u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D E7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B54Bu,3u,0x0Du,0xB54Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0DE7u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D E7 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B54Bu,3u,0x0Du,0xB54Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0DE7u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B54Eu:
    if(m==0u&&x==1u&&e==0u){ /* A5 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B54Eu,2u,0x0Eu,0xB550u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x0Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A5 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B54Eu,2u,0x0Eu,0xB550u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A5 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B54Eu,2u,0x0Eu,0xB550u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B550u:
    if(m==0u&&x==1u&&e==0u){ /* 8D E9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B550u,3u,0x0Du,0xB553u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0DE9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D E9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B550u,3u,0x0Du,0xB553u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0DE9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D E9 0D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B550u,3u,0x0Du,0xB553u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0DE9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B553u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B553u,1u,0x60u,0xB554u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B553u,1u,0x60u,0xB554u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B553u,1u,0x60u,0xB554u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B562u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B562u,2u,0x30u,0xB564u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B562u,2u,0x30u,0xB564u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B562u,2u,0x30u,0xB564u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B573u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B573u,2u,0x30u,0xB575u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B573u,2u,0x30u,0xB575u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B573u,2u,0x30u,0xB575u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5B3u:
    if(m==0u&&x==1u&&e==0u){ /* 8D D9 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5B3u,3u,0x0Bu,0xB5B6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BD9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D D9 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5B3u,3u,0x0Bu,0xB5B6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BD9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D D9 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5B3u,3u,0x0Bu,0xB5B6u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BD9u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5B6u:
    if(m==0u&&x==1u&&e==0u){ /* 20 BD B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5B6u,3u,0xB6u,0xB5B9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5B8u))return 0;c->pc=0xB6BDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 BD B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5B6u,3u,0xB6u,0xB5B9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5B8u))return 0;c->pc=0xB6BDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 BD B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5B6u,3u,0xB6u,0xB5B9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5B8u))return 0;c->pc=0xB6BDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5B9u:
    if(m==0u&&x==1u&&e==0u){ /* 8D DB 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5B9u,3u,0x0Bu,0xB5BCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BDBu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D DB 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5B9u,3u,0x0Bu,0xB5BCu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BDBu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D DB 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5B9u,3u,0x0Bu,0xB5BCu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BDBu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5BCu:
    if(m==0u&&x==1u&&e==0u){ /* 20 F7 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5BCu,3u,0xB6u,0xB5BFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5BEu))return 0;c->pc=0xB6F7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 F7 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5BCu,3u,0xB6u,0xB5BFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5BEu))return 0;c->pc=0xB6F7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 F7 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5BCu,3u,0xB6u,0xB5BFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5BEu))return 0;c->pc=0xB6F7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5BFu:
    if(m==0u&&x==1u&&e==0u){ /* 8D DD 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5BFu,3u,0x0Bu,0xB5C2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0BDDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8D DD 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5BFu,3u,0x0Bu,0xB5C2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BDDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D DD 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5BFu,3u,0x0Bu,0xB5C2u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BDDu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5C2u:
    if(m==0u&&x==1u&&e==0u){ /* 20 27 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5C2u,3u,0xB6u,0xB5C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5C4u))return 0;c->pc=0xB627u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 27 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5C2u,3u,0xB6u,0xB5C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5C4u))return 0;c->pc=0xB627u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 27 B6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5C2u,3u,0xB6u,0xB5C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB5C4u))return 0;c->pc=0xB627u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5C5u:
    if(m==0u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5C5u,2u,0x00u,0xB5C7u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5C5u,3u,0x00u,0xB5C8u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5C5u,2u,0x00u,0xB5C7u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5C8u:
    if(m==1u&&x==0u&&e==0u){ /* 9E E1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5C8u,3u,0x0Bu,0xB5CBu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x0BE1u),0u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5CBu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5CBu,1u,0xE8u,0xB5CCu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5CCu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5CCu,1u,0xE8u,0xB5CDu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5CDu:
    if(m==1u&&x==0u&&e==0u){ /* E0 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5CDu,3u,0x00u,0xB5D0u);
      sc_v11_op_compare(r,c->x,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5D0u:
    if(m==1u&&x==0u&&e==0u){ /* D0 F6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5D0u,2u,0xF6u,0xB5D2u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB5C8u;}
      if(c->pc!=0xB5D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB5D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5D2u:
    if(m==1u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5D2u,3u,0x00u,0xB5D5u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5D5u:
    if(m==1u&&x==0u&&e==0u){ /* 64 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5D5u,2u,0x0Cu,0xB5D7u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5D7u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5D7u,3u,0x00u,0xB5DAu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5DAu:
    if(m==1u&&x==0u&&e==0u){ /* BD F1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5DAu,3u,0x0Bu,0xB5DDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0BF1u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5DDu:
    if(m==1u&&x==0u&&e==0u){ /* C5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5DDu,2u,0x0Cu,0xB5DFu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5DFu:
    if(m==1u&&x==0u&&e==0u){ /* 90 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5DFu,2u,0x0Cu,0xB5E1u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB5EDu;}
      if(c->pc!=0xB5E1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB5E1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5E1u:
    if(m==1u&&x==0u&&e==0u){ /* BD E1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5E1u,3u,0x0Bu,0xB5E4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0BE1u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5E4u:
    if(m==1u&&x==0u&&e==0u){ /* D0 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5E4u,2u,0x07u,0xB5E6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB5EDu;}
      if(c->pc!=0xB5E6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB5E6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5E6u:
    if(m==1u&&x==0u&&e==0u){ /* 86 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5E6u,2u,0x08u,0xB5E8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5E8u:
    if(m==1u&&x==0u&&e==0u){ /* BD F1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5E8u,3u,0x0Bu,0xB5EBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0BF1u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5EBu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5EBu,2u,0x0Cu,0xB5EDu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5EDu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5EDu,1u,0xE8u,0xB5EEu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5EEu:
    if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5EEu,1u,0xE8u,0xB5EFu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5EFu:
    if(m==1u&&x==0u&&e==0u){ /* E0 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5EFu,3u,0x00u,0xB5F2u);
      sc_v11_op_compare(r,c->x,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5F2u:
    if(m==1u&&x==0u&&e==0u){ /* D0 E6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5F2u,2u,0xE6u,0xB5F4u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB5DAu;}
      if(c->pc!=0xB5F4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB5F4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5F4u:
    if(m==1u&&x==0u&&e==0u){ /* A5 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5F4u,2u,0x0Cu,0xB5F6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x0Cu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5F6u:
    if(m==1u&&x==0u&&e==0u){ /* F0 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5F6u,2u,0x17u,0xB5F8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xB60Fu;}
      if(c->pc!=0xB5F8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB5F8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5F8u:
    if(m==1u&&x==0u&&e==0u){ /* A6 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5F8u,2u,0x08u,0xB5FAu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B5FAu:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B5FAu,2u,0x01u,0xB5FCu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B60Fu:
    if(m==1u&&x==0u&&e==0u){ /* 9C DF 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B60Fu,3u,0x0Bu,0xB612u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0BDFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B612u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B612u,2u,0x20u,0xB614u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B627u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B627u,2u,0x30u,0xB629u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B627u,2u,0x30u,0xB629u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B627u,2u,0x30u,0xB629u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B63Du:
    if(m==1u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B63Du,2u,0x04u,0xB63Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B63Fu:
    if(m==1u&&x==0u&&e==0u){ /* C9 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B63Fu,2u,0x64u,0xB641u);
      sc_v11_op_compare(r,c->a,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B651u:
    if(m==0u&&x==1u&&e==0u){ /* DD D1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B651u,3u,0x0Bu,0xB654u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x0BD1u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* DD D1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B651u,3u,0x0Bu,0xB654u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0BD1u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* DD D1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B651u,3u,0x0Bu,0xB654u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0x0BD1u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B654u:
    if(m==0u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B654u,2u,0x05u,0xB656u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB65Bu;}
      if(c->pc!=0xB656u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB656u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B654u,2u,0x05u,0xB656u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB65Bu;}
      if(c->pc!=0xB656u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB656u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B654u,2u,0x05u,0xB656u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB65Bu;}
      if(c->pc!=0xB656u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB656u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B656u:
    if(m==0u&&x==1u&&e==0u){ /* FE F1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B656u,3u,0x0Bu,0xB659u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x0BF1u),16u,1);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* FE F1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B656u,3u,0x0Bu,0xB659u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x0BF1u),8u,1);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* FE F1 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B656u,3u,0x0Bu,0xB659u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_absx(r,0x0BF1u),8u,1);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B659u:
    if(m==0u&&x==1u&&e==0u){ /* E6 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B659u,2u,0x04u,0xB65Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x04u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E6 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B659u,2u,0x04u,0xB65Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x04u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B659u,2u,0x04u,0xB65Bu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x04u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B65Bu:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B65Bu,1u,0xE8u,0xB65Cu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B65Bu,1u,0xE8u,0xB65Cu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B65Bu,1u,0xE8u,0xB65Cu);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B65Cu:
    if(m==0u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B65Cu,1u,0xE8u,0xB65Du);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B65Cu,1u,0xE8u,0xB65Du);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B65Cu,1u,0xE8u,0xB65Du);
      c->x=(uint16_t)((c->x+1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B65Du:
    if(m==0u&&x==1u&&e==0u){ /* E0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B65Du,2u,0x10u,0xB65Fu);
      sc_v11_op_compare(r,c->x,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E0 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B65Du,3u,0x00u,0xB660u);
      sc_v11_op_compare(r,c->x,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E0 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B65Du,2u,0x10u,0xB65Fu);
      sc_v11_op_compare(r,c->x,0x0010u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B660u:
    if(m==1u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B660u,2u,0x03u,0xB662u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xB665u;}
      if(c->pc!=0xB662u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB662u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B662u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B662u,3u,0x00u,0xB665u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B665u:
    if(m==1u&&x==0u&&e==0u){ /* E6 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B665u,2u,0x08u,0xB667u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x08u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B667u:
    if(m==1u&&x==0u&&e==0u){ /* 80 D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B667u,2u,0xD4u,0xB669u);
      if(1){c->pc=0xB63Du;}
      if(c->pc!=0xB669u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB669u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B67Cu:
    if(m==1u&&x==0u&&e==0u){ /* BF E0 99 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B67Cu,4u,0x7Fu,0xB680u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7F99E0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B680u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B680u,2u,0x20u,0xB682u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B682u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B682u,3u,0x00u,0xB685u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B685u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B685u,1u,0x18u,0xB686u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B686u:
    if(m==0u&&x==0u&&e==0u){ /* 65 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B686u,2u,0x00u,0xB688u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B688u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B688u,2u,0x00u,0xB68Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B68Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B68Au,2u,0x02u,0xB68Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB68Eu;}
      if(c->pc!=0xB68Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB68Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B68Cu:
    if(m==0u&&x==0u&&e==0u){ /* E6 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B68Cu,2u,0x02u,0xB68Eu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B68Eu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B68Eu,2u,0x20u,0xB690u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B690u:
    if(m==1u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B690u,1u,0xC8u,0xB691u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6A2u:
    if(m==0u&&x==0u&&e==0u){ /* 84 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6A2u,2u,0x04u,0xB6A4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->y);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6A4u:
    if(m==0u&&x==0u&&e==0u){ /* 64 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6A4u,2u,0x06u,0xB6A6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6A6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6A6u,3u,0xA4u,0xB6A9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB6A8u))return 0;c->pc=0xA421u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6ACu:
    if(m==0u&&x==0u&&e==0u){ /* A9 66 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6ACu,3u,0x02u,0xB6AFu);
      sc_v11_op_lda(r,0x0266u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6AFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6AFu,2u,0x04u,0xB6B1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6B1u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6B1u,3u,0xA2u,0xB6B4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB6B3u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6B7u:
    if(m==0u&&x==0u&&e==0u){ /* A5 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6B7u,2u,0x01u,0xB6B9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x01u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6B9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 05 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6B9u,3u,0x0Cu,0xB6BCu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0C05u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6BCu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6BCu,1u,0x60u,0xB6BDu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6BDu:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6BDu,2u,0x30u,0xB6BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6BDu,2u,0x30u,0xB6BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6BDu,2u,0x30u,0xB6BFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6CEu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6CEu,1u,0x0Au,0xB6CFu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6CFu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6CFu,1u,0x0Au,0xB6D0u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6D0u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6D0u,1u,0x0Au,0xB6D1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6D1u:
    if(m==0u&&x==0u&&e==0u){ /* CD 8B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6D1u,3u,0x0Bu,0xB6D4u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6D4u:
    if(m==0u&&x==0u&&e==0u){ /* B0 1D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6D4u,2u,0x1Du,0xB6D6u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xB6F3u;}
      if(c->pc!=0xB6D6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6D6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6D6u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6D6u,2u,0x04u,0xB6D8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6D8u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8B 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6D8u,3u,0x0Bu,0xB6DBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B8Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6DBu:
    if(m==0u&&x==0u&&e==0u){ /* 85 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6DBu,2u,0x01u,0xB6DDu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x01u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6DDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6DDu,3u,0xA4u,0xB6E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB6DFu))return 0;c->pc=0xA421u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6E3u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; scenario four-corner route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6E3u,2u,0x00u,0xB6E5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6E5u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; scenario four-corner route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6E5u,1u,0x38u,0xB6E6u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6E6u:
    if(m==0u&&x==0u&&e==0u){ /* E9 00 01 ; scenario four-corner route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6E6u,3u,0x01u,0xB6E9u);
      sc_v11_op_sbc(r,0x0100u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6E9u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FF 00 ; scenario four-corner route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6E9u,3u,0x00u,0xB6ECu);
      sc_v11_op_compare(r,c->a,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6ECu:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 ; scenario four-corner route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6ECu,2u,0x08u,0xB6EEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB6F6u;}
      if(c->pc!=0xB6EEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6EEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6EEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; scenario four-corner route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6EEu,3u,0x00u,0xB6F1u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6F1u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; scenario four-corner route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6F1u,2u,0x03u,0xB6F3u);
      if(1){c->pc=0xB6F6u;}
      if(c->pc!=0xB6F3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB6F3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6F3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; scenario four-corner route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6F3u,3u,0x00u,0xB6F6u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6F6u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; scenario four-corner route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6F6u,1u,0x60u,0xB6F7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6F7u:
    if(m==0u&&x==1u&&e==0u){ /* AD 01 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6F7u,3u,0x0Eu,0xB6FAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E01u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 01 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6F7u,3u,0x0Eu,0xB6FAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E01u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 01 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6F7u,3u,0x0Eu,0xB6FAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E01u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6FAu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6FAu,1u,0x0Au,0xB6FBu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6FAu,1u,0x0Au,0xB6FBu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6FAu,1u,0x0Au,0xB6FBu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6FBu:
    if(m==0u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6FBu,1u,0x0Au,0xB6FCu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6FBu,1u,0x0Au,0xB6FCu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6FBu,1u,0x0Au,0xB6FCu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6FCu:
    if(m==0u&&x==1u&&e==0u){ /* 6D 01 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6FCu,3u,0x0Eu,0xB6FFu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E01u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6D 01 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6FCu,3u,0x0Eu,0xB6FFu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E01u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6D 01 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6FCu,3u,0x0Eu,0xB6FFu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0E01u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B6FFu:
    if(m==0u&&x==1u&&e==0u){ /* C9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6FFu,3u,0x00u,0xB702u);
      sc_v11_op_compare(r,c->a,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6FFu,2u,0xFFu,0xB701u);
      sc_v11_op_compare(r,c->a,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B6FFu,2u,0xFFu,0xB701u);
      sc_v11_op_compare(r,c->a,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B702u:
    if(m==0u&&x==1u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B702u,2u,0x03u,0xB704u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xB707u;}
      if(c->pc!=0xB704u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xB704u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B704u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B704u,3u,0x00u,0xB707u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B704u,3u,0x00u,0xB707u);
      sc_v11_op_lda(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B707u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B707u,1u,0x60u,0xB708u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B708u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B708u,2u,0x30u,0xB70Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B708u,2u,0x30u,0xB70Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B708u,2u,0x30u,0xB70Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B733u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B733u,3u,0x01u,0xB736u);
      sc_v11_op_lda(r,0x0100u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B745u:
    if(m==0u&&x==0u&&e==0u){ /* A9 E8 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B745u,3u,0x03u,0xB748u);
      sc_v11_op_lda(r,0x03E8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B754u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B754u,3u,0xA2u,0xB757u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB756u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B75Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B75Fu,3u,0xA2u,0xB762u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB761u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B76Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B76Au,3u,0xA2u,0xB76Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB76Cu))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B778u:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B778u,2u,0x04u,0xB77Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B77Au:
    if(m==0u&&x==0u&&e==0u){ /* 6D C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B77Au,3u,0x0Bu,0xB77Du);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B77Du:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B77Du,1u,0x38u,0xB77Eu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B77Eu:
    if(m==0u&&x==0u&&e==0u){ /* E9 20 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B77Eu,3u,0x00u,0xB781u);
      sc_v11_op_sbc(r,0x0020u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B781u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B781u,2u,0x04u,0xB783u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B78Bu:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B78Bu,2u,0x00u,0xB78Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B78Du:
    if(m==0u&&x==0u&&e==0u){ /* 64 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B78Du,2u,0x02u,0xB78Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B78Fu:
    if(m==0u&&x==0u&&e==0u){ /* 85 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B78Fu,2u,0x01u,0xB791u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x01u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B791u:
    if(m==0u&&x==0u&&e==0u){ /* A9 10 27 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B791u,3u,0x27u,0xB794u);
      sc_v11_op_lda(r,0x2710u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B794u:
    if(m==0u&&x==0u&&e==0u){ /* 85 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B794u,2u,0x08u,0xB796u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B796u:
    if(m==0u&&x==0u&&e==0u){ /* 64 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B796u,2u,0x0Au,0xB798u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B798u:
    if(m==0u&&x==0u&&e==0u){ /* 20 21 A4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B798u,3u,0xA4u,0xB79Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB79Au))return 0;c->pc=0xA421u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B7E3u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B7E3u,3u,0xA2u,0xB7E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB7E5u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03B7F2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F5 A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03B7F2u,3u,0xA2u,0xB7F5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xB7F4u))return 0;c->pc=0xA2F5u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
