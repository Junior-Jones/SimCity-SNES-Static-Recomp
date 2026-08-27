/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000E9(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03A421u:

    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A421u,2u,0x30u,0xA423u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A421u,2u,0x30u,0xA423u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A493u:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A493u,2u,0x30u,0xA495u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A493u,2u,0x30u,0xA495u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A495u:
    if(m==0u&&x==0u&&e==0u){ /* EE 15 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A495u,3u,0x0Eu,0xA498u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0E15u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A498u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A498u,3u,0x0Bu,0xA49Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A49Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A49Bu,3u,0x00u,0xA49Eu);
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A49Eu:
    if(m==0u&&x==0u&&e==0u){ /* B0 4C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A49Eu,2u,0x4Cu,0xA4A0u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA4ECu;}
      if(c->pc!=0xA4A0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4A0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4A0u:
    if(m==0u&&x==0u&&e==0u){ /* AD C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4A0u,3u,0x0Bu,0xA4A3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4A3u:
    if(m==0u&&x==0u&&e==0u){ /* C9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4A3u,3u,0x00u,0xA4A6u);
      sc_v11_op_compare(r,c->a,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4A6u:
    if(m==0u&&x==0u&&e==0u){ /* B0 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4A6u,2u,0x39u,0xA4A8u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA4E1u;}
      if(c->pc!=0xA4A8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4A8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4A8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4A8u,3u,0x90u,0xA4ABu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4AAu))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4ABu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4ABu,3u,0x01u,0xA4AEu);
      sc_v11_op_and(r,0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4ABu,3u,0x01u,0xA4AEu);
      sc_v11_op_and(r,0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4ABu,2u,0xFFu,0xA4ADu);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4ABu,2u,0xFFu,0xA4ADu);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4AEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4AEu,2u,0x31u,0xA4B0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA4E1u;}
      if(c->pc!=0xA4B0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4B0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4AEu,2u,0x31u,0xA4B0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA4E1u;}
      if(c->pc!=0xA4B0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4B0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4B0u:
    if(m==0u&&x==0u&&e==0u){ /* AC 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4B0u,3u,0x0Bu,0xA4B3u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AC 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4B0u,3u,0x0Bu,0xA4B3u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B89u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4B3u:
    if(m==0u&&x==0u&&e==0u){ /* B9 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4B3u,3u,0x84u,0xA4B6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4B3u,3u,0x84u,0xA4B6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4B6u:
    if(m==0u&&x==0u&&e==0u){ /* 29 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4B6u,3u,0x00u,0xA4B9u);
      sc_v11_op_and(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4B6u,3u,0x00u,0xA4B9u);
      sc_v11_op_and(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4B9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4B9u,2u,0x26u,0xA4BBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA4E1u;}
      if(c->pc!=0xA4BBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4BBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 26 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4B9u,2u,0x26u,0xA4BBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA4E1u;}
      if(c->pc!=0xA4BBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4BBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4BBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4BBu,3u,0x90u,0xA4BEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4BDu))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4BBu,3u,0x90u,0xA4BEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4BDu))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4BEu:
    if(m==0u&&x==0u&&e==0u){ /* 29 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4BEu,3u,0x00u,0xA4C1u);
      sc_v11_op_and(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4BEu,3u,0x00u,0xA4C1u);
      sc_v11_op_and(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4BEu,2u,0x1Fu,0xA4C0u);
      sc_v11_op_and(r,0x001Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4BEu,2u,0x1Fu,0xA4C0u);
      sc_v11_op_and(r,0x001Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4C1u:
    if(m==0u&&x==0u&&e==0u){ /* CD C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4C1u,3u,0x0Bu,0xA4C4u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CD C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4C1u,3u,0x0Bu,0xA4C4u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4C4u:
    if(m==0u&&x==0u&&e==0u){ /* 90 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4C4u,2u,0x1Bu,0xA4C6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA4E1u;}
      if(c->pc!=0xA4C6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4C6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 1B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4C4u,2u,0x1Bu,0xA4C6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA4E1u;}
      if(c->pc!=0xA4C6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4C6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4C6u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4C6u,3u,0x0Bu,0xA4C9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4C6u,3u,0x0Bu,0xA4C9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4C9u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4C9u,3u,0x00u,0xA4CCu);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4C9u,3u,0x00u,0xA4CCu);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4CCu:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4CCu,3u,0x00u,0xA4CFu);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4CCu,3u,0x00u,0xA4CFu);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4CFu:
    if(m==0u&&x==0u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4CFu,2u,0x05u,0xA4D1u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA4D6u;}
      if(c->pc!=0xA4D1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4D1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4CFu,2u,0x05u,0xA4D1u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA4D6u;}
      if(c->pc!=0xA4D1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4D1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4D1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4D1u,3u,0x00u,0xA4D4u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4D1u,3u,0x00u,0xA4D4u);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4D4u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4D4u,2u,0x03u,0xA4D6u);
      if(1){c->pc=0xA4D9u;}
      if(c->pc!=0xA4D6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4D6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4D4u,2u,0x03u,0xA4D6u);
      if(1){c->pc=0xA4D9u;}
      if(c->pc!=0xA4D6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4D6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4D6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 28 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4D6u,3u,0x00u,0xA4D9u);
      sc_v11_op_lda(r,0x0028u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 28 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4D6u,3u,0x00u,0xA4D9u);
      sc_v11_op_lda(r,0x0028u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4D9u:
    if(m==0u&&x==0u&&e==0u){ /* AE 49 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4D9u,3u,0x0Bu,0xA4DCu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AE 49 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4D9u,3u,0x0Bu,0xA4DCu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4DCu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4DCu,4u,0x7Fu,0xA4E0u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4DCu,4u,0x7Fu,0xA4E0u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4E0u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4E0u,1u,0x60u,0xA4E1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4E0u,1u,0x60u,0xA4E1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4E1u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4E1u,3u,0x0Bu,0xA4E4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4E1u,3u,0x0Bu,0xA4E4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4E4u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4E4u,3u,0x00u,0xA4E7u);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4E4u,3u,0x00u,0xA4E7u);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4E7u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4E7u,3u,0x00u,0xA4EAu);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4E7u,3u,0x00u,0xA4EAu);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4EAu:
    if(m==0u&&x==0u&&e==0u){ /* B0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4EAu,2u,0x0Fu,0xA4ECu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA4FBu;}
      if(c->pc!=0xA4ECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4ECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4EAu,2u,0x0Fu,0xA4ECu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA4FBu;}
      if(c->pc!=0xA4ECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4ECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4ECu:
    if(m==0u&&x==0u&&e==0u){ /* AD 15 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4ECu,3u,0x0Eu,0xA4EFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E15u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 15 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4ECu,3u,0x0Eu,0xA4EFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0E15u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4EFu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4EFu,1u,0x18u,0xA4F0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4EFu,1u,0x18u,0xA4F0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4F0u:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4F0u,3u,0x00u,0xA4F3u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4F0u,3u,0x00u,0xA4F3u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4F3u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 15 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4F3u,3u,0x0Eu,0xA4F6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E15u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 15 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4F3u,3u,0x0Eu,0xA4F6u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0E15u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4F6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3B A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4F6u,3u,0xA5u,0xA4F9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4F8u))return 0;c->pc=0xA53Bu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 3B A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4F6u,3u,0xA5u,0xA4F9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA4F8u))return 0;c->pc=0xA53Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4F9u:
    if(m==0u&&x==0u&&e==0u){ /* D0 3F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4F9u,2u,0x3Fu,0xA4FBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA53Au;}
      if(c->pc!=0xA4FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 3F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4F9u,2u,0x3Fu,0xA4FBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA53Au;}
      if(c->pc!=0xA4FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* D0 3F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4F9u,2u,0x3Fu,0xA4FBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA53Au;}
      if(c->pc!=0xA4FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* D0 3F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4F9u,2u,0x3Fu,0xA4FBu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA53Au;}
      if(c->pc!=0xA4FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA4FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4FBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4FBu,3u,0x0Bu,0xA4FEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4FBu,3u,0x0Bu,0xA4FEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4FBu,3u,0x0Bu,0xA4FEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B89u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4FBu,3u,0x0Bu,0xA4FEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B89u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A4FEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4FEu,3u,0x00u,0xA501u);
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4FEu,3u,0x00u,0xA501u);
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4FEu,2u,0x80u,0xA500u);
      sc_v11_op_compare(r,c->a,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A4FEu,2u,0x80u,0xA500u);
      sc_v11_op_compare(r,c->a,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A501u:
    if(m==0u&&x==0u&&e==0u){ /* B0 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A501u,2u,0x37u,0xA503u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA53Au;}
      if(c->pc!=0xA503u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA503u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 37 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A501u,2u,0x37u,0xA503u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA53Au;}
      if(c->pc!=0xA503u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA503u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A503u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A503u,2u,0x20u,0xA505u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A503u,2u,0x20u,0xA505u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A505u:
    if(m==1u&&x==0u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A505u,3u,0x0Bu,0xA508u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A505u,3u,0x0Bu,0xA508u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A508u:
    if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A508u,1u,0x4Au,0xA509u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A508u,1u,0x4Au,0xA509u);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A509u:
    if(m==1u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A509u,1u,0xEBu,0xA50Au);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A509u,1u,0xEBu,0xA50Au);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A50Au:
    if(m==1u&&x==0u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A50Au,3u,0x0Bu,0xA50Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A50Au,3u,0x0Bu,0xA50Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A50Du:
    if(m==1u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A50Du,1u,0x4Au,0xA50Eu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A50Du,1u,0x4Au,0xA50Eu);
      sc_v11_op_shift_accumulator(r,8u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A50Eu:
    if(m==1u&&x==0u&&e==0u){ /* 20 9A A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A50Eu,3u,0xA2u,0xA511u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA510u))return 0;c->pc=0xA29Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 9A A2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A50Eu,3u,0xA2u,0xA511u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA510u))return 0;c->pc=0xA29Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A511u:
    if(m==0u&&x==0u&&e==0u){ /* A0 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A511u,3u,0x00u,0xA514u);
      sc_v11_op_ldy(r,0x0030u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A511u,2u,0x30u,0xA513u);
      sc_v11_op_ldy(r,0x0030u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 30 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A511u,3u,0x00u,0xA514u);
      sc_v11_op_ldy(r,0x0030u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A0 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A511u,2u,0x30u,0xA513u);
      sc_v11_op_ldy(r,0x0030u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A514u:
    if(m==0u&&x==0u&&e==0u){ /* BF E0 99 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A514u,4u,0x7Fu,0xA518u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F99E0u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BF E0 99 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A514u,4u,0x7Fu,0xA518u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7F99E0u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A518u:
    if(m==0u&&x==0u&&e==0u){ /* C9 64 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A518u,3u,0x90u,0xA51Bu);
      sc_v11_op_compare(r,c->a,0x9064u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 64 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A518u,2u,0x64u,0xA51Au);
      sc_v11_op_compare(r,c->a,0x0064u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A51Au:
    if(m==1u&&x==0u&&e==0u){ /* 90 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A51Au,2u,0x0Au,0xA51Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA526u;}
      if(c->pc!=0xA51Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA51Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A51Bu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A51Bu,1u,0x0Au,0xA51Cu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A51Cu:
    if(m==0u&&x==0u&&e==0u){ /* A0 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A51Cu,3u,0x00u,0xA51Fu);
      sc_v11_op_ldy(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A0 40 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A51Cu,3u,0x00u,0xA51Fu);
      sc_v11_op_ldy(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A51Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 C8 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A51Fu,3u,0x90u,0xA522u);
      sc_v11_op_compare(r,c->a,0x90C8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A51Fu,2u,0xC8u,0xA521u);
      sc_v11_op_compare(r,c->a,0x00C8u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A521u:
    if(m==1u&&x==0u&&e==0u){ /* 90 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A521u,2u,0x03u,0xA523u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA526u;}
      if(c->pc!=0xA523u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA523u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A522u:
    if(m==0u&&x==0u&&e==0u){ /* 03 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A522u,2u,0xA0u,0xA524u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_stack(r,0xA0u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A523u:
    if(m==1u&&x==0u&&e==0u){ /* A0 50 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A523u,3u,0x00u,0xA526u);
      sc_v11_op_ldy(r,0x0050u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A524u:
    if(m==0u&&x==0u&&e==0u){ /* 50 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A524u,2u,0x00u,0xA526u);
      if((c->p&SC_FLAG_V)==0u){c->pc=0xA526u;}
      if(c->pc!=0xA526u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA526u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A526u:
    if(m==0u&&x==0u&&e==0u){ /* 8C 41 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A526u,3u,0x0Bu,0xA529u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B41u),c->y);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 8C 41 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A526u,3u,0x0Bu,0xA529u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B41u),c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A529u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A529u,2u,0x20u,0xA52Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A529u,2u,0x20u,0xA52Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A52Bu:
    if(m==0u&&x==0u&&e==0u){ /* A6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A52Bu,2u,0x00u,0xA52Du);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A52Du:
    if(m==0u&&x==0u&&e==0u){ /* AD 87 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A52Du,3u,0x0Bu,0xA530u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B87u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A530u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A530u,3u,0xFFu,0xA533u);
      sc_v11_op_and(r,0xFF0Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A533u:
    if(m==0u&&x==0u&&e==0u){ /* 0D 41 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A533u,3u,0x0Bu,0xA536u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B41u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A536u:
    if(m==0u&&x==0u&&e==0u){ /* 9F FE 01 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A536u,4u,0x7Fu,0xA53Au);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F01FEu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A53Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A53Au,1u,0x60u,0xA53Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A53Au,1u,0x60u,0xA53Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A53Au,1u,0x60u,0xA53Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A53Au,1u,0x60u,0xA53Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A53Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A53Bu,3u,0x0Bu,0xA53Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A53Bu,3u,0x0Bu,0xA53Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A53Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 55 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A53Eu,3u,0x03u,0xA541u);
      sc_v11_op_compare(r,c->a,0x0355u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 55 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A53Eu,3u,0x03u,0xA541u);
      sc_v11_op_compare(r,c->a,0x0355u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A541u:
    if(m==0u&&x==0u&&e==0u){ /* D0 46 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A541u,2u,0x46u,0xA543u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA589u;}
      if(c->pc!=0xA543u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA543u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 46 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A541u,2u,0x46u,0xA543u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA589u;}
      if(c->pc!=0xA543u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA543u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A543u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A543u,3u,0x90u,0xA546u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA545u))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A543u,3u,0x90u,0xA546u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA545u))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A546u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A546u,3u,0x00u,0xA549u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A546u,3u,0x00u,0xA549u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A546u,2u,0x03u,0xA548u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A546u,2u,0x03u,0xA548u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A549u:
    if(m==0u&&x==0u&&e==0u){ /* D0 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A549u,2u,0x3Au,0xA54Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA585u;}
      if(c->pc!=0xA54Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA54Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 3A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A549u,2u,0x3Au,0xA54Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA585u;}
      if(c->pc!=0xA54Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA54Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A54Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 0C A7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A54Bu,3u,0xA7u,0xA54Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA54Du))return 0;c->pc=0xA70Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 0C A7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A54Bu,3u,0xA7u,0xA54Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA54Du))return 0;c->pc=0xA70Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A54Eu:
    if(m==0u&&x==0u&&e==0u){ /* C9 15 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A54Eu,3u,0x00u,0xA551u);
      sc_v11_op_compare(r,c->a,0x0015u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 15 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A54Eu,3u,0x00u,0xA551u);
      sc_v11_op_compare(r,c->a,0x0015u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A54Eu,2u,0x15u,0xA550u);
      sc_v11_op_compare(r,c->a,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A54Eu,2u,0x15u,0xA550u);
      sc_v11_op_compare(r,c->a,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A551u:
    if(m==0u&&x==0u&&e==0u){ /* 90 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A551u,2u,0x32u,0xA553u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA585u;}
      if(c->pc!=0xA553u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA553u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 32 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A551u,2u,0x32u,0xA553u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA585u;}
      if(c->pc!=0xA553u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA553u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A553u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A553u,3u,0x00u,0xA556u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A553u,2u,0x00u,0xA555u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A556u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A556u,2u,0x00u,0xA558u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A558u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A558u,1u,0x18u,0xA559u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A559u:
    if(m==0u&&x==0u&&e==0u){ /* 79 E2 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A559u,3u,0xA6u,0xA55Cu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6E2u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A55Cu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A55Cu,1u,0xAAu,0xA55Du);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A55Du:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A55Du,4u,0x7Fu,0xA561u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A561u:
    if(m==0u&&x==0u&&e==0u){ /* D9 F0 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A561u,3u,0xA6u,0xA564u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6F0u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A564u:
    if(m==0u&&x==0u&&e==0u){ /* D0 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A564u,2u,0x1Fu,0xA566u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA585u;}
      if(c->pc!=0xA566u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA566u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A566u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A566u,1u,0xC8u,0xA567u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A567u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A567u,1u,0xC8u,0xA568u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A568u:
    if(m==0u&&x==0u&&e==0u){ /* C0 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A568u,3u,0x00u,0xA56Bu);
      sc_v11_op_compare(r,c->y,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A56Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A56Bu,2u,0xE9u,0xA56Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA556u;}
      if(c->pc!=0xA56Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA56Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A56Du:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A56Du,3u,0x00u,0xA570u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A570u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A570u,2u,0x00u,0xA572u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A572u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A572u,1u,0x18u,0xA573u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A573u:
    if(m==0u&&x==0u&&e==0u){ /* 79 E2 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A573u,3u,0xA6u,0xA576u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6E2u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A576u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A576u,1u,0xAAu,0xA577u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A577u:
    if(m==0u&&x==0u&&e==0u){ /* B9 FE A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A577u,3u,0xA6u,0xA57Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6FEu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A57Au:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A57Au,4u,0x7Fu,0xA57Eu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A57Eu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A57Eu,1u,0xC8u,0xA57Fu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A57Fu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A57Fu,1u,0xC8u,0xA580u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A580u:
    if(m==0u&&x==0u&&e==0u){ /* C0 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A580u,3u,0x00u,0xA583u);
      sc_v11_op_compare(r,c->y,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A583u:
    if(m==0u&&x==0u&&e==0u){ /* D0 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A583u,2u,0xEBu,0xA585u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA570u;}
      if(c->pc!=0xA585u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA585u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A585u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A585u,3u,0x00u,0xA588u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A585u,3u,0x00u,0xA588u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A588u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A588u,1u,0x60u,0xA589u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A588u,1u,0x60u,0xA589u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A589u:
    if(m==0u&&x==0u&&e==0u){ /* C9 54 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A589u,3u,0x03u,0xA58Cu);
      sc_v11_op_compare(r,c->a,0x0354u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 54 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A589u,3u,0x03u,0xA58Cu);
      sc_v11_op_compare(r,c->a,0x0354u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A58Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A58Cu,2u,0x48u,0xA58Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA5D6u;}
      if(c->pc!=0xA58Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA58Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A58Cu,2u,0x48u,0xA58Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA5D6u;}
      if(c->pc!=0xA58Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA58Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A58Eu:
    if(m==0u&&x==0u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A58Eu,3u,0x90u,0xA591u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA590u))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A58Eu,3u,0x90u,0xA591u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA590u))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A591u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A591u,3u,0x00u,0xA594u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A591u,3u,0x00u,0xA594u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A591u,2u,0x03u,0xA593u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A591u,2u,0x03u,0xA593u);
      sc_v11_op_and(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A594u:
    if(m==0u&&x==0u&&e==0u){ /* D0 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A594u,2u,0xEFu,0xA596u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA585u;}
      if(c->pc!=0xA596u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA596u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 EF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A594u,2u,0xEFu,0xA596u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA585u;}
      if(c->pc!=0xA596u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA596u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A596u:
    if(m==0u&&x==0u&&e==0u){ /* 20 0C A7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A596u,3u,0xA7u,0xA599u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA598u))return 0;c->pc=0xA70Cu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 0C A7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A596u,3u,0xA7u,0xA599u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA598u))return 0;c->pc=0xA70Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A599u:
    if(m==0u&&x==0u&&e==0u){ /* C9 15 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A599u,3u,0x00u,0xA59Cu);
      sc_v11_op_compare(r,c->a,0x0015u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 15 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A599u,3u,0x00u,0xA59Cu);
      sc_v11_op_compare(r,c->a,0x0015u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A599u,2u,0x15u,0xA59Bu);
      sc_v11_op_compare(r,c->a,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 15 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A599u,2u,0x15u,0xA59Bu);
      sc_v11_op_compare(r,c->a,0x0015u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A59Cu:
    if(m==0u&&x==0u&&e==0u){ /* 90 E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A59Cu,2u,0xE7u,0xA59Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA585u;}
      if(c->pc!=0xA59Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA59Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 E7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A59Cu,2u,0xE7u,0xA59Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA585u;}
      if(c->pc!=0xA59Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA59Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A59Eu:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A59Eu,3u,0x00u,0xA5A1u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A59Eu,2u,0x00u,0xA5A0u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5A1u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5A1u,2u,0x00u,0xA5A3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5A3u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5A3u,1u,0x18u,0xA5A4u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5A4u:
    if(m==0u&&x==0u&&e==0u){ /* 79 B8 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5A4u,3u,0xA6u,0xA5A7u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6B8u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5A7u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5A7u,1u,0xAAu,0xA5A8u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5A8u:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5A8u,4u,0x7Fu,0xA5ACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5ACu:
    if(m==0u&&x==0u&&e==0u){ /* D9 C6 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5ACu,3u,0xA6u,0xA5AFu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6C6u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5AFu:
    if(m==0u&&x==0u&&e==0u){ /* D0 D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5AFu,2u,0xD4u,0xA5B1u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA585u;}
      if(c->pc!=0xA5B1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5B1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5B1u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5B1u,1u,0xC8u,0xA5B2u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5B2u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5B2u,1u,0xC8u,0xA5B3u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5B3u:
    if(m==0u&&x==0u&&e==0u){ /* C0 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5B3u,3u,0x00u,0xA5B6u);
      sc_v11_op_compare(r,c->y,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5B6u:
    if(m==0u&&x==0u&&e==0u){ /* D0 E9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5B6u,2u,0xE9u,0xA5B8u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA5A1u;}
      if(c->pc!=0xA5B8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5B8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5B8u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5B8u,3u,0x00u,0xA5BBu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5BBu:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5BBu,2u,0x00u,0xA5BDu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5BDu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5BDu,1u,0x18u,0xA5BEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5BEu:
    if(m==0u&&x==0u&&e==0u){ /* 79 B8 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5BEu,3u,0xA6u,0xA5C1u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6B8u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5C1u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5C1u,1u,0xAAu,0xA5C2u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5C2u:
    if(m==0u&&x==0u&&e==0u){ /* B9 D4 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5C2u,3u,0xA6u,0xA5C5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6D4u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5C5u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5C5u,4u,0x7Fu,0xA5C9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5C9u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5C9u,1u,0xC8u,0xA5CAu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5CAu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5CAu,1u,0xC8u,0xA5CBu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5CBu:
    if(m==0u&&x==0u&&e==0u){ /* C0 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5CBu,3u,0x00u,0xA5CEu);
      sc_v11_op_compare(r,c->y,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5CEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5CEu,2u,0xEBu,0xA5D0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA5BBu;}
      if(c->pc!=0xA5D0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5D0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5D0u:
    if(m==0u&&x==0u&&e==0u){ /* 80 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5D0u,2u,0xB3u,0xA5D2u);
      if(1){c->pc=0xA585u;}
      if(c->pc!=0xA5D2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5D2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5D2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5D2u,3u,0x00u,0xA5D5u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5D2u,3u,0x00u,0xA5D5u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5D5u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5D5u,1u,0x60u,0xA5D6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5D5u,1u,0x60u,0xA5D6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5D6u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5D6u,2u,0x30u,0xA5D8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5D6u,2u,0x30u,0xA5D8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5D8u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5D8u,3u,0x0Bu,0xA5DBu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5DBu:
    if(m==0u&&x==0u&&e==0u){ /* C9 80 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5DBu,3u,0x00u,0xA5DEu);
      sc_v11_op_compare(r,c->a,0x0080u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5DEu:
    if(m==0u&&x==0u&&e==0u){ /* B0 F2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5DEu,2u,0xF2u,0xA5E0u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA5E0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5E0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5E0u:
    if(m==0u&&x==0u&&e==0u){ /* 20 0C A7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5E0u,3u,0xA7u,0xA5E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5E2u))return 0;c->pc=0xA70Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5E3u:
    if(m==0u&&x==0u&&e==0u){ /* C9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5E3u,3u,0x00u,0xA5E6u);
      sc_v11_op_compare(r,c->a,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 12 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5E3u,3u,0x00u,0xA5E6u);
      sc_v11_op_compare(r,c->a,0x0012u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5E3u,2u,0x12u,0xA5E5u);
      sc_v11_op_compare(r,c->a,0x0012u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5E3u,2u,0x12u,0xA5E5u);
      sc_v11_op_compare(r,c->a,0x0012u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5E6u:
    if(m==0u&&x==0u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5E6u,2u,0x08u,0xA5E8u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA5F0u;}
      if(c->pc!=0xA5E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5E6u,2u,0x08u,0xA5E8u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA5F0u;}
      if(c->pc!=0xA5E8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5E8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5E8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5E8u,3u,0x90u,0xA5EBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5EAu))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5E8u,3u,0x90u,0xA5EBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA5EAu))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5EBu:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5EBu,3u,0x00u,0xA5EEu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5EBu,3u,0x00u,0xA5EEu);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5EBu,2u,0x07u,0xA5EDu);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5EBu,2u,0x07u,0xA5EDu);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5EEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 E2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5EEu,2u,0xE2u,0xA5F0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA5F0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5F0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 E2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5EEu,2u,0xE2u,0xA5F0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA5F0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5F0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5F0u:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5F0u,3u,0x0Bu,0xA5F3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5F0u,3u,0x0Bu,0xA5F3u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5F3u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5F3u,3u,0x00u,0xA5F6u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5F3u,3u,0x00u,0xA5F6u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5F6u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5F6u,3u,0x00u,0xA5F9u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5F6u,3u,0x00u,0xA5F9u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5F9u:
    if(m==0u&&x==0u&&e==0u){ /* 90 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5F9u,2u,0xD7u,0xA5FBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA5FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5F9u,2u,0xD7u,0xA5FBu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA5FBu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA5FBu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5FBu:
    if(m==0u&&x==0u&&e==0u){ /* C9 76 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5FBu,3u,0x00u,0xA5FEu);
      sc_v11_op_compare(r,c->a,0x0076u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 76 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5FBu,3u,0x00u,0xA5FEu);
      sc_v11_op_compare(r,c->a,0x0076u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A5FEu:
    if(m==0u&&x==0u&&e==0u){ /* B0 D2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5FEu,2u,0xD2u,0xA600u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA600u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA600u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 D2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A5FEu,2u,0xD2u,0xA600u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA600u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA600u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A600u:
    if(m==0u&&x==0u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A600u,3u,0x0Bu,0xA603u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B86u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A600u,3u,0x0Bu,0xA603u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B86u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A603u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A603u,3u,0x00u,0xA606u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A603u,3u,0x00u,0xA606u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A606u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A606u,3u,0x00u,0xA609u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A606u,3u,0x00u,0xA609u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A609u:
    if(m==0u&&x==0u&&e==0u){ /* 90 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A609u,2u,0xC7u,0xA60Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA60Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA60Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 C7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A609u,2u,0xC7u,0xA60Bu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA60Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA60Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A60Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 62 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A60Bu,3u,0x00u,0xA60Eu);
      sc_v11_op_compare(r,c->a,0x0062u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 62 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A60Bu,3u,0x00u,0xA60Eu);
      sc_v11_op_compare(r,c->a,0x0062u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A60Eu:
    if(m==0u&&x==0u&&e==0u){ /* B0 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A60Eu,2u,0xC2u,0xA610u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA610u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA610u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 C2 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A60Eu,2u,0xC2u,0xA610u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA610u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA610u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A610u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A610u,3u,0x0Bu,0xA613u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A610u,3u,0x0Bu,0xA613u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A613u:
    if(m==0u&&x==0u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A613u,1u,0x4Au,0xA614u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A613u,1u,0x4Au,0xA614u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A614u:
    if(m==0u&&x==0u&&e==0u){ /* 90 4E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A614u,2u,0x4Eu,0xA616u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA664u;}
      if(c->pc!=0xA616u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA616u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 4E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A614u,2u,0x4Eu,0xA616u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA664u;}
      if(c->pc!=0xA616u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA616u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A616u:
    if(m==0u&&x==0u&&e==0u){ /* A6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A616u,2u,0x00u,0xA618u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A616u,2u,0x00u,0xA618u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A618u:
    if(m==0u&&x==0u&&e==0u){ /* BF FC 01 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A618u,4u,0x7Fu,0xA61Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F01FCu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF FC 01 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A618u,4u,0x7Fu,0xA61Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F01FCu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A61Cu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A61Cu,3u,0x03u,0xA61Fu);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A61Cu,3u,0x03u,0xA61Fu);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A61Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A61Fu,3u,0x00u,0xA622u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A61Fu,3u,0x00u,0xA622u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A622u:
    if(m==0u&&x==0u&&e==0u){ /* D0 AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A622u,2u,0xAEu,0xA624u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA624u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA624u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 AE ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A622u,2u,0xAEu,0xA624u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA624u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA624u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A624u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A624u,3u,0x00u,0xA627u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A624u,2u,0x00u,0xA626u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A627u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A627u,2u,0x00u,0xA629u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A629u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A629u,1u,0x18u,0xA62Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A62Au:
    if(m==0u&&x==0u&&e==0u){ /* 79 E2 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A62Au,3u,0xA6u,0xA62Du);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6E2u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A62Du:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A62Du,1u,0xAAu,0xA62Eu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A62Eu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A62Eu,4u,0x7Fu,0xA632u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A632u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A632u,3u,0x00u,0xA635u);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A635u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 41 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A635u,3u,0x0Bu,0xA638u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B41u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A638u:
    if(m==0u&&x==0u&&e==0u){ /* B9 FE A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A638u,3u,0xA6u,0xA63Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6FEu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A63Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A63Bu,3u,0x00u,0xA63Eu);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A63Eu:
    if(m==0u&&x==0u&&e==0u){ /* CD 41 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A63Eu,3u,0x0Bu,0xA641u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B41u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A641u:
    if(m==0u&&x==0u&&e==0u){ /* D0 8F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A641u,2u,0x8Fu,0xA643u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA5D2u;}
      if(c->pc!=0xA643u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA643u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A643u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A643u,1u,0xC8u,0xA644u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A644u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A644u,1u,0xC8u,0xA645u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A645u:
    if(m==0u&&x==0u&&e==0u){ /* C0 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A645u,3u,0x00u,0xA648u);
      sc_v11_op_compare(r,c->y,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A648u:
    if(m==0u&&x==0u&&e==0u){ /* D0 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A648u,2u,0xDDu,0xA64Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA627u;}
      if(c->pc!=0xA64Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA64Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A64Au:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A64Au,3u,0x00u,0xA64Du);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A64Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A64Du,2u,0x00u,0xA64Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A64Fu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A64Fu,1u,0x18u,0xA650u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A650u:
    if(m==0u&&x==0u&&e==0u){ /* 79 E2 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A650u,3u,0xA6u,0xA653u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6E2u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A653u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A653u,1u,0xAAu,0xA654u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A654u:
    if(m==0u&&x==0u&&e==0u){ /* B9 F0 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A654u,3u,0xA6u,0xA657u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6F0u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A657u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A657u,4u,0x7Fu,0xA65Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A65Bu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A65Bu,1u,0xC8u,0xA65Cu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A65Cu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A65Cu,1u,0xC8u,0xA65Du);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A65Du:
    if(m==0u&&x==0u&&e==0u){ /* C0 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A65Du,3u,0x00u,0xA660u);
      sc_v11_op_compare(r,c->y,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A660u:
    if(m==0u&&x==0u&&e==0u){ /* D0 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A660u,2u,0xEBu,0xA662u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA64Du;}
      if(c->pc!=0xA662u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA662u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A662u:
    if(m==0u&&x==0u&&e==0u){ /* 80 4C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A662u,2u,0x4Cu,0xA664u);
      if(1){c->pc=0xA6B0u;}
      if(c->pc!=0xA664u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA664u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A664u:
    if(m==0u&&x==0u&&e==0u){ /* A6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A664u,2u,0x00u,0xA666u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A6 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A664u,2u,0x00u,0xA666u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A666u:
    if(m==0u&&x==0u&&e==0u){ /* BF 0E 01 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A666u,4u,0x7Fu,0xA66Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F010Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BF 0E 01 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A666u,4u,0x7Fu,0xA66Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F010Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A66Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A66Au,3u,0x03u,0xA66Du);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A66Au,3u,0x03u,0xA66Du);
      sc_v11_op_and(r,0x03FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A66Du:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A66Du,3u,0x00u,0xA670u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A66Du,3u,0x00u,0xA670u);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A670u:
    if(m==0u&&x==0u&&e==0u){ /* D0 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A670u,2u,0x42u,0xA672u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA6B4u;}
      if(c->pc!=0xA672u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA672u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A670u,2u,0x42u,0xA672u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA6B4u;}
      if(c->pc!=0xA672u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA672u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A672u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A672u,3u,0x00u,0xA675u);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A0 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A672u,2u,0x00u,0xA674u);
      sc_v11_op_ldy(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A675u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A675u,2u,0x00u,0xA677u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A677u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A677u,1u,0x18u,0xA678u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A678u:
    if(m==0u&&x==0u&&e==0u){ /* 79 B8 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A678u,3u,0xA6u,0xA67Bu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6B8u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A67Bu:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A67Bu,1u,0xAAu,0xA67Cu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A67Cu:
    if(m==0u&&x==0u&&e==0u){ /* BF 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A67Cu,4u,0x7Fu,0xA680u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7F0200u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A680u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A680u,3u,0x00u,0xA683u);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A683u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 41 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A683u,3u,0x0Bu,0xA686u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B41u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A686u:
    if(m==0u&&x==0u&&e==0u){ /* B9 D4 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A686u,3u,0xA6u,0xA689u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6D4u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A689u:
    if(m==0u&&x==0u&&e==0u){ /* 29 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A689u,3u,0x00u,0xA68Cu);
      sc_v11_op_and(r,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A68Cu:
    if(m==0u&&x==0u&&e==0u){ /* CD 41 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A68Cu,3u,0x0Bu,0xA68Fu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B41u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A68Fu:
    if(m==0u&&x==0u&&e==0u){ /* D0 23 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A68Fu,2u,0x23u,0xA691u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA6B4u;}
      if(c->pc!=0xA691u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA691u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A691u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A691u,1u,0xC8u,0xA692u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A692u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A692u,1u,0xC8u,0xA693u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A693u:
    if(m==0u&&x==0u&&e==0u){ /* C0 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A693u,3u,0x00u,0xA696u);
      sc_v11_op_compare(r,c->y,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A696u:
    if(m==0u&&x==0u&&e==0u){ /* D0 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A696u,2u,0xDDu,0xA698u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA675u;}
      if(c->pc!=0xA698u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA698u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A698u:
    if(m==0u&&x==0u&&e==0u){ /* A0 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A698u,3u,0x00u,0xA69Bu);
      sc_v11_op_ldy(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A69Bu:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A69Bu,2u,0x00u,0xA69Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A69Du:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A69Du,1u,0x18u,0xA69Eu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A69Eu:
    if(m==0u&&x==0u&&e==0u){ /* 79 B8 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A69Eu,3u,0xA6u,0xA6A1u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6B8u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A6A1u:
    if(m==0u&&x==0u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6A1u,1u,0xAAu,0xA6A2u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A6A2u:
    if(m==0u&&x==0u&&e==0u){ /* B9 C6 A6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6A2u,3u,0xA6u,0xA6A5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0xA6C6u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A6A5u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6A5u,4u,0x7Fu,0xA6A9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A6A9u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6A9u,1u,0xC8u,0xA6AAu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A6AAu:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6AAu,1u,0xC8u,0xA6ABu);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A6ABu:
    if(m==0u&&x==0u&&e==0u){ /* C0 0E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6ABu,3u,0x00u,0xA6AEu);
      sc_v11_op_compare(r,c->y,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A6AEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6AEu,2u,0xEBu,0xA6B0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA69Bu;}
      if(c->pc!=0xA6B0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA6B0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A6B0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6B0u,3u,0x00u,0xA6B3u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A6B3u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6B3u,1u,0x60u,0xA6B4u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A6B4u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6B4u,3u,0x00u,0xA6B7u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6B4u,3u,0x00u,0xA6B7u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A6B7u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6B7u,1u,0x60u,0xA6B8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A6B7u,1u,0x60u,0xA6B8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A70Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A70Cu,2u,0x20u,0xA70Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A70Cu,2u,0x20u,0xA70Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A70Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A70Eu,1u,0x0Bu,0xA70Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A70Eu,1u,0x0Bu,0xA70Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A70Fu:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A70Fu,1u,0x48u,0xA710u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A70Fu,1u,0x48u,0xA710u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A710u:
    if(m==0u&&x==0u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A710u,1u,0x7Bu,0xA711u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A710u,1u,0x7Bu,0xA711u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A711u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A711u,1u,0x38u,0xA712u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A711u,1u,0x38u,0xA712u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A712u:
    if(m==0u&&x==0u&&e==0u){ /* E9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A712u,3u,0x00u,0xA715u);
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A712u,3u,0x00u,0xA715u);
      sc_v11_op_sbc(r,0x0002u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A715u:
    if(m==0u&&x==0u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A715u,1u,0x5Bu,0xA716u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A715u,1u,0x5Bu,0xA716u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A716u:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A716u,1u,0x68u,0xA717u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A716u,1u,0x68u,0xA717u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A717u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A717u,2u,0x20u,0xA719u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A717u,2u,0x20u,0xA719u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A719u:
    if(m==1u&&x==0u&&e==0u){ /* AD 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A719u,3u,0x0Au,0xA71Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A65u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 65 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A719u,3u,0x0Au,0xA71Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A65u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A71Cu:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A71Cu,1u,0x38u,0xA71Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A71Cu,1u,0x38u,0xA71Du);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A71Du:
    if(m==1u&&x==0u&&e==0u){ /* ED 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A71Du,3u,0x0Bu,0xA720u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* ED 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A71Du,3u,0x0Bu,0xA720u);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B85u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A720u:
    if(m==1u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A720u,2u,0x03u,0xA722u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA725u;}
      if(c->pc!=0xA722u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA722u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A720u,2u,0x03u,0xA722u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA725u;}
      if(c->pc!=0xA722u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA722u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A722u:
    if(m==1u&&x==0u&&e==0u){ /* 49 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A722u,2u,0xFFu,0xA724u);
      sc_v11_op_eor(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 49 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A722u,2u,0xFFu,0xA724u);
      sc_v11_op_eor(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A724u:
    if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A724u,1u,0x1Au,0xA725u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A724u,1u,0x1Au,0xA725u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A725u:
    if(m==1u&&x==0u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A725u,2u,0x00u,0xA727u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A725u,2u,0x00u,0xA727u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A727u:
    if(m==1u&&x==0u&&e==0u){ /* AD 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A727u,3u,0x0Au,0xA72Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A63u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 63 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A727u,3u,0x0Au,0xA72Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0A63u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A72Au:
    if(m==1u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A72Au,1u,0x38u,0xA72Bu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A72Au,1u,0x38u,0xA72Bu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A72Bu:
    if(m==1u&&x==0u&&e==0u){ /* ED 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A72Bu,3u,0x0Bu,0xA72Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* ED 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A72Bu,3u,0x0Bu,0xA72Eu);
      sc_v11_op_sbc(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A72Eu:
    if(m==1u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A72Eu,2u,0x03u,0xA730u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA733u;}
      if(c->pc!=0xA730u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA730u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A72Eu,2u,0x03u,0xA730u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA733u;}
      if(c->pc!=0xA730u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA730u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A730u:
    if(m==1u&&x==0u&&e==0u){ /* 49 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A730u,2u,0xFFu,0xA732u);
      sc_v11_op_eor(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 49 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A730u,2u,0xFFu,0xA732u);
      sc_v11_op_eor(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A732u:
    if(m==1u&&x==0u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A732u,1u,0x1Au,0xA733u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 1A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A732u,1u,0x1Au,0xA733u);
      sc_v11_op_incdec_accumulator(r,8u,1);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A733u:
    if(m==1u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A733u,1u,0x18u,0xA734u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A733u,1u,0x18u,0xA734u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A734u:
    if(m==1u&&x==0u&&e==0u){ /* 65 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A734u,2u,0x00u,0xA736u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 65 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A734u,2u,0x00u,0xA736u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A736u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A736u,2u,0x20u,0xA738u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A736u,2u,0x20u,0xA738u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A738u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A738u,3u,0x00u,0xA73Bu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A738u,3u,0x00u,0xA73Bu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A73Bu:
    if(m==0u&&x==0u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A73Bu,1u,0x2Bu,0xA73Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 2B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A73Bu,1u,0x2Bu,0xA73Cu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A73Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A73Cu,1u,0x60u,0xA73Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A73Cu,1u,0x60u,0xA73Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A73Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A73Du,2u,0x30u,0xA73Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A73Du,2u,0x30u,0xA73Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A73Fu:
    if(m==0u&&x==0u&&e==0u){ /* EE 17 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A73Fu,3u,0x0Eu,0xA742u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0E17u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A742u:
    if(m==0u&&x==0u&&e==0u){ /* AD 93 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A742u,3u,0x0Au,0xA745u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0A93u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A745u:
    if(m==0u&&x==0u&&e==0u){ /* 0D 0F 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A745u,3u,0x0Cu,0xA748u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0C0Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A748u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A748u,2u,0x03u,0xA74Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA74Du;}
      if(c->pc!=0xA74Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA74Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A74Au:
    if(m==0u&&x==0u&&e==0u){ /* 20 8B A7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A74Au,3u,0xA7u,0xA74Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA74Cu))return 0;c->pc=0xA78Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A74Du:
    if(m==0u&&x==0u&&e==0u){ /* AD C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A74Du,3u,0x0Bu,0xA750u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A74Du,3u,0x0Bu,0xA750u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AD C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A74Du,3u,0x0Bu,0xA750u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0BC5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A74Du,3u,0x0Bu,0xA750u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0BC5u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A750u:
    if(m==0u&&x==0u&&e==0u){ /* C9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A750u,3u,0x00u,0xA753u);
      sc_v11_op_compare(r,c->a,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 1E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A750u,3u,0x00u,0xA753u);
      sc_v11_op_compare(r,c->a,0x001Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C9 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A750u,2u,0x1Eu,0xA752u);
      sc_v11_op_compare(r,c->a,0x001Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C9 1E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A750u,2u,0x1Eu,0xA752u);
      sc_v11_op_compare(r,c->a,0x001Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A753u:
    if(m==0u&&x==0u&&e==0u){ /* B0 35 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A753u,2u,0x35u,0xA755u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA78Au;}
      if(c->pc!=0xA755u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA755u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 35 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A753u,2u,0x35u,0xA755u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA78Au;}
      if(c->pc!=0xA755u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA755u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A755u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A755u,3u,0x90u,0xA758u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA757u))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A755u,3u,0x90u,0xA758u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA757u))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A758u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A758u,3u,0x01u,0xA75Bu);
      sc_v11_op_and(r,0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 FF 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A758u,3u,0x01u,0xA75Bu);
      sc_v11_op_and(r,0x01FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A758u,2u,0xFFu,0xA75Au);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A758u,2u,0xFFu,0xA75Au);
      sc_v11_op_and(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A75Bu:
    if(m==0u&&x==0u&&e==0u){ /* D0 2D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A75Bu,2u,0x2Du,0xA75Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA78Au;}
      if(c->pc!=0xA75Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA75Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 2D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A75Bu,2u,0x2Du,0xA75Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA78Au;}
      if(c->pc!=0xA75Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA75Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A75Du:
    if(m==0u&&x==0u&&e==0u){ /* AC 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A75Du,3u,0x0Bu,0xA760u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AC 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A75Du,3u,0x0Bu,0xA760u);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B89u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A760u:
    if(m==0u&&x==0u&&e==0u){ /* B9 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A760u,3u,0x84u,0xA763u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B9 EB 84 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A760u,3u,0x84u,0xA763u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x84EBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A763u:
    if(m==0u&&x==0u&&e==0u){ /* 29 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A763u,3u,0x00u,0xA766u);
      sc_v11_op_and(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 10 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A763u,3u,0x00u,0xA766u);
      sc_v11_op_and(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A766u:
    if(m==0u&&x==0u&&e==0u){ /* D0 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A766u,2u,0x22u,0xA768u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA78Au;}
      if(c->pc!=0xA768u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA768u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A766u,2u,0x22u,0xA768u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA78Au;}
      if(c->pc!=0xA768u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA768u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A768u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A768u,3u,0x90u,0xA76Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA76Au))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A768u,3u,0x90u,0xA76Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA76Au))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A76Bu:
    if(m==0u&&x==0u&&e==0u){ /* 29 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A76Bu,3u,0x00u,0xA76Eu);
      sc_v11_op_and(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 1F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A76Bu,3u,0x00u,0xA76Eu);
      sc_v11_op_and(r,0x001Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A76Bu,2u,0x1Fu,0xA76Du);
      sc_v11_op_and(r,0x001Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 1F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A76Bu,2u,0x1Fu,0xA76Du);
      sc_v11_op_and(r,0x001Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A76Eu:
    if(m==0u&&x==0u&&e==0u){ /* CD C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A76Eu,3u,0x0Bu,0xA771u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* CD C5 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A76Eu,3u,0x0Bu,0xA771u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0BC5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A771u:
    if(m==0u&&x==0u&&e==0u){ /* 90 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A771u,2u,0x17u,0xA773u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA78Au;}
      if(c->pc!=0xA773u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA773u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 90 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A771u,2u,0x17u,0xA773u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA78Au;}
      if(c->pc!=0xA773u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA773u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A773u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A773u,3u,0x0Bu,0xA776u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A773u,3u,0x0Bu,0xA776u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A776u:
    if(m==0u&&x==0u&&e==0u){ /* C9 72 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A776u,3u,0x00u,0xA779u);
      sc_v11_op_compare(r,c->a,0x0072u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C9 72 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A776u,3u,0x00u,0xA779u);
      sc_v11_op_compare(r,c->a,0x0072u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A779u:
    if(m==0u&&x==0u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A779u,2u,0x05u,0xA77Bu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA780u;}
      if(c->pc!=0xA77Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA77Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* B0 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A779u,2u,0x05u,0xA77Bu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xA780u;}
      if(c->pc!=0xA77Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA77Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A77Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A77Bu,3u,0x00u,0xA77Eu);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A77Bu,3u,0x00u,0xA77Eu);
      sc_v11_op_lda(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A77Eu:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A77Eu,2u,0x03u,0xA780u);
      if(1){c->pc=0xA783u;}
      if(c->pc!=0xA780u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA780u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A77Eu,2u,0x03u,0xA780u);
      if(1){c->pc=0xA783u;}
      if(c->pc!=0xA780u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA780u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A780u:
    if(m==0u&&x==0u&&e==0u){ /* A9 28 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A780u,3u,0x00u,0xA783u);
      sc_v11_op_lda(r,0x0028u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 28 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A780u,3u,0x00u,0xA783u);
      sc_v11_op_lda(r,0x0028u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A783u:
    if(m==0u&&x==0u&&e==0u){ /* AE 49 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A783u,3u,0x0Bu,0xA786u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B49u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AE 49 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A783u,3u,0x0Bu,0xA786u);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B49u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A786u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A786u,4u,0x7Fu,0xA78Au);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 9F 00 02 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A786u,4u,0x7Fu,0xA78Au);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A78Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A78Au,1u,0x60u,0xA78Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A78Au,1u,0x60u,0xA78Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A78Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C DD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A78Bu,3u,0x0Au,0xA78Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADDu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A78Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9C DF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A78Eu,3u,0x0Au,0xA791u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADFu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A791u:
    if(m==0u&&x==0u&&e==0u){ /* AD 89 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A791u,3u,0x0Bu,0xA794u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B89u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A794u:
    if(m==0u&&x==0u&&e==0u){ /* C9 72 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A794u,3u,0x00u,0xA797u);
      sc_v11_op_compare(r,c->a,0x0072u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A797u:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A797u,2u,0x08u,0xA799u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA7A1u;}
      if(c->pc!=0xA799u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA799u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A799u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A799u,3u,0x00u,0xA79Cu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A79Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8D DD 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A79Cu,3u,0x0Au,0xA79Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADDu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A79Fu:
    if(m==0u&&x==0u&&e==0u){ /* 80 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A79Fu,2u,0x0Bu,0xA7A1u);
      if(1){c->pc=0xA7ACu;}
      if(c->pc!=0xA7A1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7A1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7A1u:
    if(m==0u&&x==0u&&e==0u){ /* C9 73 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7A1u,3u,0x00u,0xA7A4u);
      sc_v11_op_compare(r,c->a,0x0073u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7A4u:
    if(m==0u&&x==0u&&e==0u){ /* D0 33 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7A4u,2u,0x33u,0xA7A6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA7D9u;}
      if(c->pc!=0xA7A6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7A6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7A6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7A6u,3u,0x00u,0xA7A9u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7A9u:
    if(m==0u&&x==0u&&e==0u){ /* 8D DF 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7A9u,3u,0x0Au,0xA7ACu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0ADFu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7ACu:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7ACu,3u,0x0Bu,0xA7AFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B85u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7AFu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7AFu,3u,0x00u,0xA7B2u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7B2u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7B2u,1u,0x0Au,0xA7B3u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7B3u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7B3u,1u,0x0Au,0xA7B4u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7B4u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7B4u,1u,0x0Au,0xA7B5u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7B5u:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7B5u,3u,0x00u,0xA7B8u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7B8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D E1 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7B8u,3u,0x0Au,0xA7BBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AE1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7BBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7BBu,3u,0x0Bu,0xA7BEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B86u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7BEu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7BEu,3u,0x00u,0xA7C1u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7C1u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7C1u,1u,0x0Au,0xA7C2u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7C2u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7C2u,1u,0x0Au,0xA7C3u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7C3u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7C3u,1u,0x0Au,0xA7C4u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7C4u:
    if(m==0u&&x==0u&&e==0u){ /* 69 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7C4u,3u,0x00u,0xA7C7u);
      sc_v11_op_adc(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7C7u:
    if(m==0u&&x==0u&&e==0u){ /* 8D E3 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7C7u,3u,0x0Au,0xA7CAu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0AE3u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7CAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7CAu,3u,0x00u,0xA7CDu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7CDu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 93 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7CDu,3u,0x0Au,0xA7D0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0A93u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7D0u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7D0u,2u,0x20u,0xA7D2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7D2u:
    if(m==1u&&x==0u&&e==0u){ /* A9 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7D2u,2u,0x0Bu,0xA7D4u);
      sc_v11_op_lda(r,0x000Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7D4u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 06 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7D4u,3u,0x00u,0xA7D7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0006u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7D7u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7D7u,2u,0x20u,0xA7D9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7D9u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7D9u,1u,0x60u,0xA7DAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7DAu:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7DAu,2u,0x30u,0xA7DCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7E0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E0u,2u,0x20u,0xA7E2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E0u,2u,0x20u,0xA7E2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7E2u:
    if(m==0u&&x==0u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E2u,1u,0x0Bu,0xA7E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E2u,1u,0x0Bu,0xA7E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7E3u:
    if(m==0u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E3u,1u,0x48u,0xA7E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E3u,1u,0x48u,0xA7E4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7E4u:
    if(m==0u&&x==0u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E4u,1u,0x7Bu,0xA7E5u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 7B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E4u,1u,0x7Bu,0xA7E5u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7E5u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E5u,1u,0x38u,0xA7E6u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E5u,1u,0x38u,0xA7E6u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7E6u:
    if(m==0u&&x==0u&&e==0u){ /* E9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E6u,3u,0x00u,0xA7E9u);
      sc_v11_op_sbc(r,0x0008u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E6u,3u,0x00u,0xA7E9u);
      sc_v11_op_sbc(r,0x0008u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7E9u:
    if(m==0u&&x==0u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E9u,1u,0x5Bu,0xA7EAu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 5B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7E9u,1u,0x5Bu,0xA7EAu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7EAu:
    if(m==0u&&x==0u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7EAu,1u,0x68u,0xA7EBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7EAu,1u,0x68u,0xA7EBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7EBu:
    if(m==0u&&x==0u&&e==0u){ /* EE 01 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7EBu,3u,0x0Eu,0xA7EEu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0E01u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* EE 01 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7EBu,3u,0x0Eu,0xA7EEu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0E01u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7EEu:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7EEu,2u,0x00u,0xA7F0u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 64 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7EEu,2u,0x00u,0xA7F0u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7F0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7F0u,2u,0x20u,0xA7F2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7F0u,2u,0x20u,0xA7F2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7F2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7F2u,3u,0x90u,0xA7F5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA7F4u))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 7E 90 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7F2u,3u,0x90u,0xA7F5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA7F4u))return 0;c->pc=0x907Eu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7F5u:
    if(m==0u&&x==0u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7F5u,3u,0x00u,0xA7F8u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 29 07 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7F5u,3u,0x00u,0xA7F8u);
      sc_v11_op_and(r,0x0007u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7F5u,2u,0x07u,0xA7F7u);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 29 07 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7F5u,2u,0x07u,0xA7F7u);
      sc_v11_op_and(r,0x0007u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7F8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 52 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7F8u,2u,0x52u,0xA7FAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA84Cu;}
      if(c->pc!=0xA7FAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7FAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* D0 52 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7F8u,2u,0x52u,0xA7FAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA84Cu;}
      if(c->pc!=0xA7FAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA7FAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7FAu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7FAu,2u,0x20u,0xA7FCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7FAu,2u,0x20u,0xA7FCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7FCu:
    if(m==1u&&x==0u&&e==0u){ /* A4 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7FCu,2u,0x00u,0xA7FEu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A4 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7FCu,2u,0x00u,0xA7FEu);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A7FEu:
    if(m==1u&&x==0u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7FEu,3u,0x0Bu,0xA801u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AD 86 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03A7FEu,3u,0x0Bu,0xA801u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B86u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
