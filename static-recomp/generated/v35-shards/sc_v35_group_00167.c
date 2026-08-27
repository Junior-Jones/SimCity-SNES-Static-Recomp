/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_00167(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x059C00u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C00u,4u,0x7Eu,0x9C04u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C04u:
    if(m==0u&&x==0u&&e==0u){ /* A9 32 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C04u,3u,0x08u,0x9C07u);
      sc_v11_op_lda(r,0x0832u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C07u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C07u,4u,0x7Eu,0x9C0Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2880u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C0Bu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C0Bu,1u,0xE8u,0x9C0Cu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C0Cu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C0Cu,1u,0xE8u,0x9C0Du);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C0Du:
    if(m==0u&&x==0u&&e==0u){ /* A9 40 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C0Du,3u,0x08u,0x9C10u);
      sc_v11_op_lda(r,0x0840u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C10u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C10u,4u,0x7Eu,0x9C14u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C14u:
    if(m==0u&&x==0u&&e==0u){ /* A9 41 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C14u,3u,0x08u,0x9C17u);
      sc_v11_op_lda(r,0x0841u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C17u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C17u,4u,0x7Eu,0x9C1Bu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2880u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C1Bu:
    if(m==0u&&x==0u&&e==0u){ /* E0 AE 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C1Bu,3u,0x05u,0x9C1Eu);
      sc_v11_op_compare(r,c->x,0x05AEu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C1Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C1Eu,2u,0xEBu,0x9C20u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9C0Bu;}
      if(c->pc!=0x9C20u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9C20u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C20u:
    if(m==0u&&x==0u&&e==0u){ /* A9 31 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C20u,3u,0x08u,0x9C23u);
      sc_v11_op_lda(r,0x0831u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C23u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C23u,4u,0x7Eu,0x9C27u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C27u:
    if(m==0u&&x==0u&&e==0u){ /* A9 33 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C27u,3u,0x08u,0x9C2Au);
      sc_v11_op_lda(r,0x0833u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C2Au:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C2Au,4u,0x7Eu,0x9C2Eu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2880u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C2Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2B 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C2Eu,3u,0x9Eu,0x9C31u);
      c->pc=0x9E2Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C39u:
    if(m==0u&&x==0u&&e==0u){ /* A2 B2 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C39u,3u,0x03u,0x9C3Cu);
      sc_v11_op_ldx(r,0x03B2u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C3Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C3Cu,3u,0x01u,0x9C3Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 10 4D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C3Fu,2u,0x4Du,0x9C41u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x9C8Eu;}
      if(c->pc!=0x9C41u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9C41u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C41u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3C 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C41u,3u,0x08u,0x9C44u);
      sc_v11_op_lda(r,0x083Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C44u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C44u,4u,0x7Eu,0x9C48u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C48u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3E 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C48u,3u,0x08u,0x9C4Bu);
      sc_v11_op_lda(r,0x083Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C4Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C4Bu,4u,0x7Eu,0x9C4Fu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2880u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C4Fu:
    if(m==0u&&x==0u&&e==0u){ /* A9 46 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C4Fu,3u,0x08u,0x9C52u);
      sc_v11_op_lda(r,0x0846u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C52u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 42 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C52u,4u,0x7Eu,0x9C56u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2842u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C56u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 44 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C56u,4u,0x7Eu,0x9C5Au);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2844u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C5Au:
    if(m==0u&&x==0u&&e==0u){ /* A9 47 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C5Au,3u,0x08u,0x9C5Du);
      sc_v11_op_lda(r,0x0847u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C5Du:
    if(m==0u&&x==0u&&e==0u){ /* 9F 82 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C5Du,4u,0x7Eu,0x9C61u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2882u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C61u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 84 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C61u,4u,0x7Eu,0x9C65u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2884u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C65u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3D 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C65u,3u,0x08u,0x9C68u);
      sc_v11_op_lda(r,0x083Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C68u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 46 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C68u,4u,0x7Eu,0x9C6Cu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2846u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C6Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 3F 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C6Cu,3u,0x08u,0x9C6Fu);
      sc_v11_op_lda(r,0x083Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C6Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 86 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C6Fu,4u,0x7Eu,0x9C73u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2886u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C73u:
    if(m==0u&&x==0u&&e==0u){ /* AF B1 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C73u,4u,0x7Eu,0x9C77u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E21B1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C77u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C77u,1u,0x18u,0x9C78u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C78u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C78u,3u,0x00u,0x9C7Bu);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C7Bu:
    if(m==0u&&x==0u&&e==0u){ /* 8F B1 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C7Bu,4u,0x7Eu,0x9C7Fu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21B1u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C7Fu:
    if(m==0u&&x==0u&&e==0u){ /* AF B5 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C7Fu,4u,0x7Eu,0x9C83u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E21B5u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C83u:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C83u,1u,0x18u,0x9C84u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C84u:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C84u,3u,0x00u,0x9C87u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C87u:
    if(m==0u&&x==0u&&e==0u){ /* 8F B5 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C87u,4u,0x7Eu,0x9C8Bu);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21B5u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C8Bu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2B 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C8Bu,3u,0x9Eu,0x9C8Eu);
      c->pc=0x9E2Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C8Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 38 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C8Eu,3u,0x08u,0x9C91u);
      sc_v11_op_lda(r,0x0838u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C91u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C91u,4u,0x7Eu,0x9C95u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C95u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3A 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C95u,3u,0x08u,0x9C98u);
      sc_v11_op_lda(r,0x083Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C98u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C98u,4u,0x7Eu,0x9C9Cu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2880u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C9Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 44 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C9Cu,3u,0x08u,0x9C9Fu);
      sc_v11_op_lda(r,0x0844u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059C9Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 42 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059C9Fu,4u,0x7Eu,0x9CA3u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2842u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CA3u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 44 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CA3u,4u,0x7Eu,0x9CA7u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2844u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CA7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 45 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CA7u,3u,0x08u,0x9CAAu);
      sc_v11_op_lda(r,0x0845u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CAAu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 82 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CAAu,4u,0x7Eu,0x9CAEu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2882u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CAEu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 84 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CAEu,4u,0x7Eu,0x9CB2u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2884u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CB2u:
    if(m==0u&&x==0u&&e==0u){ /* A9 39 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CB2u,3u,0x08u,0x9CB5u);
      sc_v11_op_lda(r,0x0839u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CB5u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 46 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CB5u,4u,0x7Eu,0x9CB9u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2846u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CB9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3B 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CB9u,3u,0x08u,0x9CBCu);
      sc_v11_op_lda(r,0x083Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CBCu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 86 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CBCu,4u,0x7Eu,0x9CC0u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2886u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CC0u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2B 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CC0u,3u,0x9Eu,0x9CC3u);
      c->pc=0x9E2Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CC8u:
    if(m==0u&&x==0u&&e==0u){ /* A2 34 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CC8u,3u,0x04u,0x9CCBu);
      sc_v11_op_ldx(r,0x0434u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CCBu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CCBu,3u,0x01u,0x9CCEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CCEu:
    if(m==0u&&x==0u&&e==0u){ /* 10 39 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CCEu,2u,0x39u,0x9CD0u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0x9D09u;}
      if(c->pc!=0x9CD0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9CD0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CD0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3C 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CD0u,3u,0x08u,0x9CD3u);
      sc_v11_op_lda(r,0x083Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CD3u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CD3u,4u,0x7Eu,0x9CD7u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CD7u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3E 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CD7u,3u,0x08u,0x9CDAu);
      sc_v11_op_lda(r,0x083Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CDAu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CDAu,4u,0x7Eu,0x9CDEu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2880u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CDEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 46 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CDEu,3u,0x08u,0x9CE1u);
      sc_v11_op_lda(r,0x0846u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CE1u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 42 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CE1u,4u,0x7Eu,0x9CE5u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2842u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CE5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 47 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CE5u,3u,0x08u,0x9CE8u);
      sc_v11_op_lda(r,0x0847u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CE8u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 82 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CE8u,4u,0x7Eu,0x9CECu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2882u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CECu:
    if(m==0u&&x==0u&&e==0u){ /* A9 3D 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CECu,3u,0x08u,0x9CEFu);
      sc_v11_op_lda(r,0x083Du,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CEFu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 44 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CEFu,4u,0x7Eu,0x9CF3u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2844u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CF3u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3F 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CF3u,3u,0x08u,0x9CF6u);
      sc_v11_op_lda(r,0x083Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CF6u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 84 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CF6u,4u,0x7Eu,0x9CFAu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2884u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CFAu:
    if(m==0u&&x==0u&&e==0u){ /* AF B9 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CFAu,4u,0x7Eu,0x9CFEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_long(0x7E21B9u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CFEu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CFEu,1u,0x18u,0x9CFFu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059CFFu:
    if(m==0u&&x==0u&&e==0u){ /* 69 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059CFFu,3u,0x00u,0x9D02u);
      sc_v11_op_adc(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D02u:
    if(m==0u&&x==0u&&e==0u){ /* 8F B9 21 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D02u,4u,0x7Eu,0x9D06u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x7E21B9u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D06u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2B 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D06u,3u,0x9Eu,0x9D09u);
      c->pc=0x9E2Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D09u:
    if(m==0u&&x==0u&&e==0u){ /* A9 38 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D09u,3u,0x08u,0x9D0Cu);
      sc_v11_op_lda(r,0x0838u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D0Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D0Cu,4u,0x7Eu,0x9D10u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D10u:
    if(m==0u&&x==0u&&e==0u){ /* A9 3A 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D10u,3u,0x08u,0x9D13u);
      sc_v11_op_lda(r,0x083Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D13u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 80 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D13u,4u,0x7Eu,0x9D17u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2880u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D17u:
    if(m==0u&&x==0u&&e==0u){ /* A9 44 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D17u,3u,0x08u,0x9D1Au);
      sc_v11_op_lda(r,0x0844u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D1Au:
    if(m==0u&&x==0u&&e==0u){ /* 9F 42 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D1Au,4u,0x7Eu,0x9D1Eu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2842u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D1Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 45 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D1Eu,3u,0x08u,0x9D21u);
      sc_v11_op_lda(r,0x0845u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D21u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 82 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D21u,4u,0x7Eu,0x9D25u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2882u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D25u:
    if(m==0u&&x==0u&&e==0u){ /* A9 39 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D25u,3u,0x08u,0x9D28u);
      sc_v11_op_lda(r,0x0839u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D28u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 44 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D28u,4u,0x7Eu,0x9D2Cu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2844u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D2Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 3B 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D2Cu,3u,0x08u,0x9D2Fu);
      sc_v11_op_lda(r,0x083Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D2Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 84 28 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D2Fu,4u,0x7Eu,0x9D33u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2884u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059D33u:
    if(m==0u&&x==0u&&e==0u){ /* 4C 2B 9E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059D33u,3u,0x9Eu,0x9D36u);
      c->pc=0x9E2Bu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E2Eu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E2Eu,1u,0x6Bu,0x9E2Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E2Eu,1u,0x6Bu,0x9E2Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E2Eu,1u,0x6Bu,0x9E2Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E50u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E50u,2u,0x20u,0x9E52u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E52u:
    if(m==0u&&x==0u&&e==0u){ /* A9 04 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E52u,3u,0x00u,0x9E55u);
      sc_v11_op_lda(r,0x0004u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E55u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E55u,2u,0x00u,0x9E57u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9E57u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E57u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E57u,2u,0x20u,0x9E59u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E59u:
    if(m==1u&&x==0u&&e==0u){ /* 64 B5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E59u,2u,0xB5u,0x9E5Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB5u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E5Bu:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E5Bu,2u,0x20u,0x9E5Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E5Du:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E5Du,2u,0xB3u,0x9E5Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E5Fu:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E5Fu,2u,0x7Fu,0x9E61u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E61u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E61u,2u,0xB1u,0x9E63u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E63u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E63u,2u,0x20u,0x9E65u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E65u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E65u,3u,0x00u,0x9E68u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E68u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E68u,2u,0x00u,0x9E6Au);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9E6Au))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E6Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E6Au,2u,0x20u,0x9E6Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E6Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E6Cu,2u,0x10u,0x9E6Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E6Eu:
    if(m==1u&&x==0u&&e==0u){ /* A2 DB C4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E6Eu,3u,0xC4u,0x9E71u);
      sc_v11_op_ldx(r,0xC4DBu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E71u:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E71u,2u,0x09u,0x9E73u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E73u:
    if(m==1u&&x==0u&&e==0u){ /* A9 08 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E73u,2u,0x08u,0x9E75u);
      sc_v11_op_lda(r,0x0008u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E75u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E75u,2u,0x0Bu,0x9E77u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E77u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E77u,3u,0x00u,0x9E7Au);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E7Au:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E7Au,2u,0x0Eu,0x9E7Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E7Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E7Cu,2u,0x20u,0x9E7Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E7Eu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E7Eu,3u,0x00u,0x9E81u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E81u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E81u,2u,0x00u,0x9E83u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9E83u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E83u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E83u,2u,0x20u,0x9E85u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E85u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E85u,2u,0x10u,0x9E87u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E87u:
    if(m==1u&&x==0u&&e==0u){ /* A2 A1 A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E87u,3u,0xA5u,0x9E8Au);
      sc_v11_op_ldx(r,0xA5A1u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E8Au:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E8Au,2u,0x09u,0x9E8Cu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E8Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E8Cu,2u,0x0Bu,0x9E8Eu);
      sc_v11_op_lda(r,0x000Bu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E8Eu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E8Eu,2u,0x0Bu,0x9E90u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E90u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E90u,3u,0x60u,0x9E93u);
      sc_v11_op_ldx(r,0x6000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E93u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E93u,2u,0x0Eu,0x9E95u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E95u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E95u,2u,0x20u,0x9E97u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E97u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E97u,3u,0x00u,0x9E9Au);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E9Au:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E9Au,2u,0x00u,0x9E9Cu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9E9Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E9Cu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E9Cu,2u,0x20u,0x9E9Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059E9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059E9Eu,3u,0x21u,0x9EA1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EA1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EA1u,2u,0x30u,0x9EA3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EA3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EA3u,2u,0x02u,0x9EA5u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EA5u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EA5u,1u,0x0Au,0x9EA6u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EA6u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EA6u,1u,0x0Au,0x9EA7u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EA7u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EA7u,1u,0x0Au,0x9EA8u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EA8u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EA8u,1u,0x0Au,0x9EA9u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EA9u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EA9u,1u,0xAAu,0x9EAAu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EAAu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EAAu,2u,0x01u,0x9EACu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EACu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EACu,3u,0x43u,0x9EAFu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EAFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EAFu,2u,0x18u,0x9EB1u);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EB1u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EB1u,3u,0x43u,0x9EB4u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EB4u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EB4u,2u,0x00u,0x9EB6u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EB6u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EB6u,3u,0x43u,0x9EB9u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EB9u:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EB9u,2u,0x80u,0x9EBBu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EBBu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EBBu,3u,0x43u,0x9EBEu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EBEu:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EBEu,2u,0x7Eu,0x9EC0u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EC0u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EC0u,3u,0x43u,0x9EC3u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EC3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EC3u,2u,0x00u,0x9EC5u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EC5u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EC5u,3u,0x43u,0x9EC8u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EC8u:
    if(m==1u&&x==1u&&e==0u){ /* A9 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EC8u,2u,0x70u,0x9ECAu);
      sc_v11_op_lda(r,0x0070u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ECAu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059ECAu,3u,0x43u,0x9ECDu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ECDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059ECDu,2u,0x01u,0x9ECFu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ECFu:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059ECFu,2u,0x02u,0x9ED1u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ED1u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059ED1u,2u,0x04u,0x9ED3u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9ED7u;}
      if(c->pc!=0x9ED3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9ED3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ED3u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059ED3u,1u,0x0Au,0x9ED4u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ED4u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059ED4u,1u,0xCAu,0x9ED5u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ED5u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059ED5u,2u,0xFCu,0x9ED7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9ED3u;}
      if(c->pc!=0x9ED7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9ED7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059ED7u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059ED7u,3u,0x42u,0x9EDAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EDAu:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EDAu,2u,0x20u,0x9EDCu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EDCu:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EDCu,2u,0x10u,0x9EDEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EDEu:
    if(m==1u&&x==0u&&e==0u){ /* A2 71 A5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EDEu,3u,0xA5u,0x9EE1u);
      sc_v11_op_ldx(r,0xA571u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EE1u:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EE1u,2u,0x09u,0x9EE3u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EE3u:
    if(m==1u&&x==0u&&e==0u){ /* A9 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EE3u,2u,0x09u,0x9EE5u);
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EE5u:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EE5u,2u,0x0Bu,0x9EE7u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EE7u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EE7u,3u,0x00u,0x9EEAu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EEAu:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EEAu,2u,0x0Eu,0x9EECu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EECu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EECu,2u,0x20u,0x9EEEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EEEu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EEEu,3u,0x00u,0x9EF1u);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EF1u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EF1u,2u,0x00u,0x9EF3u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9EF3u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EF3u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EF3u,2u,0x20u,0x9EF5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EF5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EF5u,3u,0x60u,0x9EF8u);
      sc_v11_op_lda(r,0x6000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EF8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 16 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EF8u,3u,0x21u,0x9EFBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EFBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EFBu,2u,0x30u,0x9EFDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EFDu:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EFDu,2u,0x02u,0x9EFFu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059EFFu:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059EFFu,1u,0x0Au,0x9F00u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F00u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F00u,1u,0x0Au,0x9F01u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F01u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F01u,1u,0x0Au,0x9F02u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F02u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F02u,1u,0x0Au,0x9F03u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F03u:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F03u,1u,0xAAu,0x9F04u);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F04u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F04u,2u,0x01u,0x9F06u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F06u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F06u,3u,0x43u,0x9F09u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F09u:
    if(m==1u&&x==1u&&e==0u){ /* A9 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F09u,2u,0x18u,0x9F0Bu);
      sc_v11_op_lda(r,0x0018u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F0Bu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F0Bu,3u,0x43u,0x9F0Eu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F0Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F0Eu,2u,0x00u,0x9F10u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F10u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F10u,3u,0x43u,0x9F13u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F13u:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F13u,2u,0x80u,0x9F15u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F15u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F15u,3u,0x43u,0x9F18u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F18u:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F18u,2u,0x7Eu,0x9F1Au);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F1Au:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F1Au,3u,0x43u,0x9F1Du);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F1Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F1Du,2u,0x00u,0x9F1Fu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F1Fu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F1Fu,3u,0x43u,0x9F22u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F22u:
    if(m==1u&&x==1u&&e==0u){ /* A9 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F22u,2u,0x40u,0x9F24u);
      sc_v11_op_lda(r,0x0040u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F24u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F24u,3u,0x43u,0x9F27u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F27u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F27u,2u,0x01u,0x9F29u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F29u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F29u,2u,0x02u,0x9F2Bu);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F2Bu:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F2Bu,2u,0x04u,0x9F2Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9F31u;}
      if(c->pc!=0x9F2Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F2Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F2Du:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F2Du,1u,0x0Au,0x9F2Eu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F2Eu:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F2Eu,1u,0xCAu,0x9F2Fu);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F2Fu:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F2Fu,2u,0xFCu,0x9F31u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9F2Du;}
      if(c->pc!=0x9F31u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F31u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F31u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F31u,3u,0x42u,0x9F34u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F34u:
    if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F34u,2u,0x20u,0x9F36u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F36u:
    if(m==1u&&x==1u&&e==0u){ /* C2 10 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F36u,2u,0x10u,0x9F38u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F38u:
    if(m==1u&&x==0u&&e==0u){ /* A2 D8 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F38u,3u,0x8Au,0x9F3Bu);
      sc_v11_op_ldx(r,0x8AD8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F3Bu:
    if(m==1u&&x==0u&&e==0u){ /* 86 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F3Bu,2u,0x09u,0x9F3Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F3Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F3Du,2u,0x0Cu,0x9F3Fu);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F3Fu:
    if(m==1u&&x==0u&&e==0u){ /* 85 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F3Fu,2u,0x0Bu,0x9F41u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F41u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F41u,3u,0x00u,0x9F44u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F44u:
    if(m==1u&&x==0u&&e==0u){ /* 86 0E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F44u,2u,0x0Eu,0x9F46u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F46u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F46u,2u,0x20u,0x9F48u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F48u:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F48u,3u,0x00u,0x9F4Bu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F4Bu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F4Bu,2u,0x00u,0x9F4Du);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9F4Du))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F4Du:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F4Du,2u,0x20u,0x9F4Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F4Fu:
    if(m==1u&&x==0u&&e==0u){ /* 9C 21 21 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F4Fu,3u,0x21u,0x9F52u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2121u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F52u:
    if(m==1u&&x==0u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F52u,2u,0x30u,0x9F54u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F54u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F54u,2u,0x02u,0x9F56u);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F56u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F56u,1u,0x0Au,0x9F57u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F57u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F57u,1u,0x0Au,0x9F58u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F58u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F58u,1u,0x0Au,0x9F59u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F59u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F59u,1u,0x0Au,0x9F5Au);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F5Au:
    if(m==1u&&x==1u&&e==0u){ /* AA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F5Au,1u,0xAAu,0x9F5Bu);
      c->x=(uint16_t)(c->a&0xffu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F5Bu:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F5Bu,2u,0x00u,0x9F5Du);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F5Du:
    if(m==1u&&x==1u&&e==0u){ /* 9D 00 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F5Du,3u,0x43u,0x9F60u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F60u:
    if(m==1u&&x==1u&&e==0u){ /* A9 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F60u,2u,0x22u,0x9F62u);
      sc_v11_op_lda(r,0x0022u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F62u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 01 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F62u,3u,0x43u,0x9F65u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F65u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F65u,2u,0x00u,0x9F67u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F67u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 02 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F67u,3u,0x43u,0x9F6Au);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F6Au:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F6Au,2u,0x80u,0x9F6Cu);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F6Cu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 03 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F6Cu,3u,0x43u,0x9F6Fu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F6Fu:
    if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F6Fu,2u,0x7Eu,0x9F71u);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F71u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 04 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F71u,3u,0x43u,0x9F74u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F74u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F74u,2u,0x00u,0x9F76u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F76u:
    if(m==1u&&x==1u&&e==0u){ /* 9D 05 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F76u,3u,0x43u,0x9F79u);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F79u:
    if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F79u,2u,0x02u,0x9F7Bu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F7Bu:
    if(m==1u&&x==1u&&e==0u){ /* 9D 06 43 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F7Bu,3u,0x43u,0x9F7Eu);
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F7Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F7Eu,2u,0x01u,0x9F80u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F80u:
    if(m==1u&&x==1u&&e==0u){ /* A2 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F80u,2u,0x02u,0x9F82u);
      sc_v11_op_ldx(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F82u:
    if(m==1u&&x==1u&&e==0u){ /* F0 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F82u,2u,0x04u,0x9F84u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9F88u;}
      if(c->pc!=0x9F84u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F84u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F84u:
    if(m==1u&&x==1u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F84u,1u,0x0Au,0x9F85u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F85u:
    if(m==1u&&x==1u&&e==0u){ /* CA ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F85u,1u,0xCAu,0x9F86u);
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F86u:
    if(m==1u&&x==1u&&e==0u){ /* D0 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F86u,2u,0xFCu,0x9F88u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9F84u;}
      if(c->pc!=0x9F88u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9F88u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F88u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F88u,3u,0x42u,0x9F8Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F8Bu:
    if(m==1u&&x==1u&&e==0u){ /* E2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F8Bu,2u,0x30u,0x9F8Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F8Du:
    if(m==1u&&x==1u&&e==0u){ /* A4 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F8Du,2u,0x40u,0x9F8Fu);
      sc_v11_op_ldy(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x40u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F8Fu:
    if(m==1u&&x==1u&&e==0u){ /* B9 A6 DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F8Fu,3u,0xDDu,0x9F92u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xDDA6u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F92u:
    if(m==1u&&x==1u&&e==0u){ /* 85 52 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F92u,2u,0x52u,0x9F94u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x52u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F94u:
    if(m==1u&&x==1u&&e==0u){ /* B9 AE DD ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F94u,3u,0xDDu,0x9F97u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absy(r,0xDDAEu)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F97u:
    if(m==1u&&x==1u&&e==0u){ /* 85 54 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F97u,2u,0x54u,0x9F99u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x54u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F99u:
    if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F99u,2u,0x30u,0x9F9Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F9Bu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F9Bu,3u,0x00u,0x9F9Eu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059F9Eu:
    if(m==0u&&x==0u&&e==0u){ /* A6 52 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059F9Eu,2u,0x52u,0x9FA0u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x52u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FA0u:
    if(m==0u&&x==0u&&e==0u){ /* E0 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FA0u,3u,0x00u,0x9FA3u);
      sc_v11_op_compare(r,c->x,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FA3u:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FA3u,2u,0x03u,0x9FA5u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9FA8u;}
      if(c->pc!=0x9FA5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9FA5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FA5u:
    if(m==0u&&x==0u&&e==0u){ /* A9 50 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FA5u,3u,0x00u,0x9FA8u);
      sc_v11_op_lda(r,0x0050u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FA8u:
    if(m==0u&&x==0u&&e==0u){ /* 85 22 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FA8u,2u,0x22u,0x9FAAu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x22u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FAAu:
    if(m==0u&&x==0u&&e==0u){ /* 85 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FAAu,2u,0x16u,0x9FACu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x16u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FACu:
    if(m==0u&&x==0u&&e==0u){ /* A9 08 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FACu,3u,0x00u,0x9FAFu);
      sc_v11_op_lda(r,0x0008u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FAFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 2C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FAFu,2u,0x2Cu,0x9FB1u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x2Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FB1u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FB1u,3u,0x00u,0x9FB4u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FB4u:
    if(m==0u&&x==0u&&e==0u){ /* 85 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FB4u,2u,0x30u,0x9FB6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x30u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FB6u:
    if(m==0u&&x==0u&&e==0u){ /* 64 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FB6u,2u,0x18u,0x9FB8u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x18u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FB8u:
    if(m==0u&&x==0u&&e==0u){ /* 64 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FB8u,2u,0x1Cu,0x9FBAu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x1Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FBAu:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FBAu,1u,0x6Bu,0x9FBBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FBBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FBBu,2u,0x30u,0x9FBDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FBDu:
    if(m==0u&&x==0u&&e==0u){ /* A6 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FBDu,2u,0x18u,0x9FBFu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x18u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FBFu:
    if(m==0u&&x==0u&&e==0u){ /* F0 06 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FBFu,2u,0x06u,0x9FC1u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9FC7u;}
      if(c->pc!=0x9FC1u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9FC1u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FC1u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FC1u,1u,0xE8u,0x9FC2u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FC2u:
    if(m==0u&&x==0u&&e==0u){ /* 86 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FC2u,2u,0x18u,0x9FC4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x18u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FC4u:
    if(m==0u&&x==0u&&e==0u){ /* 86 1C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FC4u,2u,0x1Cu,0x9FC6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x1Cu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FC6u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FC6u,1u,0x6Bu,0x9FC7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FC7u:
    if(m==0u&&x==0u&&e==0u){ /* A5 C9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FC7u,2u,0xC9u,0x9FC9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FC9u:
    if(m==0u&&x==0u&&e==0u){ /* 29 40 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FC9u,3u,0x80u,0x9FCCu);
      sc_v11_op_and(r,0x8040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FCCu:
    if(m==0u&&x==0u&&e==0u){ /* F0 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FCCu,2u,0x17u,0x9FCEu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9FE5u;}
      if(c->pc!=0x9FCEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9FCEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FCEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FCEu,2u,0x20u,0x9FD0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FD0u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FD0u,2u,0x01u,0x9FD2u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FD2u:
    if(m==1u&&x==0u&&e==0u){ /* 85 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FD2u,2u,0x05u,0x9FD4u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x05u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FD4u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FD4u,2u,0x20u,0x9FD6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FD6u:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FD6u,3u,0x00u,0x9FD9u);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FD9u:
    if(m==0u&&x==0u&&e==0u){ /* A4 3E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FD9u,2u,0x3Eu,0x9FDBu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x3Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FDBu:
    if(m==0u&&x==0u&&e==0u){ /* C0 03 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FDBu,3u,0x00u,0x9FDEu);
      sc_v11_op_compare(r,c->y,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FDEu:
    if(m==0u&&x==0u&&e==0u){ /* D0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FDEu,2u,0x03u,0x9FE0u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9FE3u;}
      if(c->pc!=0x9FE0u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9FE0u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FE0u:
    if(m==0u&&x==0u&&e==0u){ /* A9 0A 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FE0u,3u,0x00u,0x9FE3u);
      sc_v11_op_lda(r,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FE3u:
    if(m==0u&&x==0u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FE3u,2u,0x14u,0x9FE5u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x059FE5u:
    if(m==0u&&x==0u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x059FE5u,1u,0x6Bu,0x9FE6u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
