/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_00020(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x00804Du:
    if(m==1u&&x==0u&&e==0u){ /* A5 12 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00804Du,2u,0x12u,0x804Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x12u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00804Fu:
    if(m==1u&&x==0u&&e==0u){ /* D0 0B Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00804Fu,2u,0x0Bu,0x8051u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x805Cu;}
      if(c->pc!=0x8051u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8051u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00805Cu:
    if(m==1u&&x==0u&&e==0u){ /* 20 61 80 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00805Cu,3u,0x80u,0x805Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x805Eu))return 0;c->pc=0x8061u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008061u:
    if(m==1u&&x==0u&&e==0u){ /* 20 88 82 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008061u,3u,0x82u,0x8064u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8063u))return 0;c->pc=0x8288u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008064u:
    if(m==1u&&x==1u&&e==0u){ /* 20 90 86 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008064u,3u,0x86u,0x8067u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8066u))return 0;c->pc=0x8690u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008067u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008067u,2u,0x20u,0x8069u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008069u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008069u,3u,0x00u,0x806Cu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00806Cu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
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
    if(m==0u&&x==0u&&e==0u){ /* 20 5F 82 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00806Eu,3u,0x82u,0x8071u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8070u))return 0;c->pc=0x825Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008071u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008071u,2u,0x20u,0x8073u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008073u:
    if(m==1u&&x==0u&&e==0u){ /* 20 BE 96 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008073u,3u,0x96u,0x8076u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8075u))return 0;c->pc=0x96BEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080B2u:

    if(m==0u&&x==1u&&e==0u){ /* 78 Mesen corrected gameplay frame 1594; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080B2u,1u,0x78u,0x80B3u);
      c->p|=SC_FLAG_I;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }


    break;
  case 0x0080B3u:

    if(m==0u&&x==1u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 1594; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080B3u,2u,0x20u,0x80B5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }


    break;
  case 0x0080C0u:

    if(m==1u&&x==1u&&e==0u){ /* 68 Mesen corrected gameplay frame 1594; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080C0u,1u,0x68u,0x80C1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080C1u:

    if(m==1u&&x==1u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 1594; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080C1u,2u,0x30u,0x80C3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080DAu:
    if(m==1u&&x==0u&&e==0u){ /* 20 DA BA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080DAu,3u,0xBAu,0x80DDu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80DCu))return 0;c->pc=0xBADAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080DDu:
    if(m==0u&&x==0u&&e==0u){ /* 20 28 8C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080DDu,3u,0x8Cu,0x80E0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80DFu))return 0;c->pc=0x8C28u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080E0u:
    if(m==1u&&x==0u&&e==0u){ /* 20 DD 8C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E0u,3u,0x8Cu,0x80E3u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E2u))return 0;c->pc=0x8CDDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080E3u:
    if(m==1u&&x==0u&&e==0u){ /* 20 07 87 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E3u,3u,0x87u,0x80E6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E5u))return 0;c->pc=0x8707u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080E6u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3A 83 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E6u,3u,0x83u,0x80E9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E8u))return 0;c->pc=0x833Au;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 3A 83 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E6u,3u,0x83u,0x80E9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80E8u))return 0;c->pc=0x833Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080E9u:
    if(m==1u&&x==0u&&e==0u){ /* 20 18 93 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080E9u,3u,0x93u,0x80ECu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80EBu))return 0;c->pc=0x9318u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080ECu:
    if(m==1u&&x==1u&&e==0u){ /* 20 14 8A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080ECu,3u,0x8Au,0x80EFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80EEu))return 0;c->pc=0x8A14u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080EFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 42 8C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080EFu,3u,0x8Cu,0x80F2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F1u))return 0;c->pc=0x8C42u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080F2u:
    if(m==1u&&x==0u&&e==0u){ /* 20 97 83 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080F2u,3u,0x83u,0x80F5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F4u))return 0;c->pc=0x8397u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080F5u:
    if(m==1u&&x==0u&&e==0u){ /* 20 51 88 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080F5u,3u,0x88u,0x80F8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80F7u))return 0;c->pc=0x8851u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080F8u:
    if(m==0u&&x==0u&&e==0u){ /* 20 3F BC Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080F8u,3u,0xBCu,0x80FBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x80FAu))return 0;c->pc=0xBC3Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080FBu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080FBu,2u,0x20u,0x80FDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0080FDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 79 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0080FDu,3u,0x03u,0x8100u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0379u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008100u:
    if(m==0u&&x==0u&&e==0u){ /* D0 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008100u,2u,0x20u,0x8102u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8122u;}
      if(c->pc!=0x8102u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8102u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008102u:
    if(m==0u&&x==0u&&e==0u){ /* 20 24 89 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008102u,3u,0x89u,0x8105u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8104u))return 0;c->pc=0x8924u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008105u:
    if(m==0u&&x==0u&&e==0u){ /* 20 82 89 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008105u,3u,0x89u,0x8108u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8107u))return 0;c->pc=0x8982u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008108u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008108u,2u,0x20u,0x810Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00810Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 03 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00810Au,3u,0x01u,0x810Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0103u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00810Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00810Du,2u,0x03u,0x810Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8112u;}
      if(c->pc!=0x810Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x810Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008112u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0F 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008112u,3u,0x01u,0x8115u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x010Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008115u:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008115u,2u,0x03u,0x8117u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x811Au;}
      if(c->pc!=0x8117u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8117u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00811Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 8B 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00811Au,3u,0x03u,0x811Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x038Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00811Du:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00811Du,2u,0x03u,0x811Fu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8122u;}
      if(c->pc!=0x811Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x811Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00811Fu:
    if(m==0u&&x==0u&&e==0u){ /* CE 8B 03 Mesen corrected gameplay frame 4257; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00811Fu,3u,0x03u,0x8122u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x038Bu),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008122u:
    if(m==0u&&x==0u&&e==0u){ /* A5 56 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008122u,2u,0x56u,0x8124u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x56u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008124u:
    if(m==0u&&x==0u&&e==0u){ /* F0 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008124u,2u,0x02u,0x8126u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8128u;}
      if(c->pc!=0x8126u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8126u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008128u:
    if(m==0u&&x==0u&&e==0u){ /* AD 8D 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008128u,3u,0x03u,0x812Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x038Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00812Bu:
    if(m==0u&&x==0u&&e==0u){ /* F0 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00812Bu,2u,0x03u,0x812Du);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x8130u;}
      if(c->pc!=0x812Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x812Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008130u:
    if(m==0u&&x==0u&&e==0u){ /* 20 FA C1 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008130u,3u,0xC1u,0x8133u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8132u))return 0;c->pc=0xC1FAu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008133u:
    if(m==0u&&x==0u&&e==0u){ /* 90 1C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008133u,2u,0x1Cu,0x8135u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0x8151u;}
      if(c->pc!=0x8135u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8135u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008135u:
    if(m==0u&&x==0u&&e==0u){ /* AD F1 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008135u,3u,0x0Au,0x8138u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0AF1u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008138u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008138u,2u,0x05u,0x813Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x813Fu;}
      if(c->pc!=0x813Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x813Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00813Fu:
    if(m==0u&&x==0u&&e==0u){ /* 20 02 B5 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00813Fu,3u,0xB5u,0x8142u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8141u))return 0;c->pc=0xB502u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008142u:
    if(m==0u&&x==0u&&e==0u){ /* 20 43 B7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008142u,3u,0xB7u,0x8145u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8144u))return 0;c->pc=0xB743u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008145u:
    if(m==0u&&x==0u&&e==0u){ /* 20 AB B1 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008145u,3u,0xB1u,0x8148u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8147u))return 0;c->pc=0xB1ABu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008148u:
    if(m==0u&&x==0u&&e==0u){ /* 20 83 AE Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008148u,3u,0xAEu,0x814Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x814Au))return 0;c->pc=0xAE83u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00814Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 92 AB Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00814Bu,3u,0xABu,0x814Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x814Du))return 0;c->pc=0xAB92u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00814Eu:
    if(m==0u&&x==1u&&e==0u){ /* 20 C1 B0 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00814Eu,3u,0xB0u,0x8151u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8150u))return 0;c->pc=0xB0C1u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008151u:
    if(m==0u&&x==1u&&e==0u){ /* 20 7C 92 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008151u,3u,0x92u,0x8154u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8153u))return 0;c->pc=0x927Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008154u:
    if(m==0u&&x==0u&&e==0u){ /* 20 F6 86 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008154u,3u,0x86u,0x8157u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8156u))return 0;c->pc=0x86F6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008157u:
    if(m==1u&&x==0u&&e==0u){ /* 20 CC 92 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008157u,3u,0x92u,0x815Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x8159u))return 0;c->pc=0x92CCu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00815Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 C3 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00815Au,2u,0xC3u,0x815Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xC3u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00815Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 46 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00815Cu,2u,0x46u,0x815Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x81A4u;}
      if(c->pc!=0x815Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x815Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00815Eu:
    if(m==0u&&x==0u&&e==0u){ /* AD FF 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00815Eu,3u,0x01u,0x8161u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01FFu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008161u:
    if(m==0u&&x==0u&&e==0u){ /* D0 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008161u,2u,0x30u,0x8163u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8193u;}
      if(c->pc!=0x8163u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8163u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008163u:
    if(m==0u&&x==0u&&e==0u){ /* A6 AD Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008163u,2u,0xADu,0x8165u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xADu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008165u:
    if(m==0u&&x==0u&&e==0u){ /* D0 15 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008165u,2u,0x15u,0x8167u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x817Cu;}
      if(c->pc!=0x8167u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8167u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008167u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008167u,3u,0x01u,0x816Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00816Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 F0 FF Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00816Au,3u,0xFFu,0x816Du);
      sc_v11_op_and(r,0xFFF0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00816Du:
    if(m==0u&&x==0u&&e==0u){ /* D0 24 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00816Du,2u,0x24u,0x816Fu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8193u;}
      if(c->pc!=0x816Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x816Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00816Fu:
    if(m==0u&&x==0u&&e==0u){ /* 3B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00816Fu,1u,0x3Bu,0x8170u);
      c->a=c->sp;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008170u:
    if(m==0u&&x==0u&&e==0u){ /* 85 A9 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008170u,2u,0xA9u,0x8172u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xA9u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008172u:
    if(m==0u&&x==0u&&e==0u){ /* A5 AB Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008172u,2u,0xABu,0x8174u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xABu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008174u:
    if(m==0u&&x==0u&&e==0u){ /* 1B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008174u,1u,0x1Bu,0x8175u);
      c->sp=c->emulation?(uint16_t)(0x0100u|(c->a&0xffu)):c->a;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008175u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008175u,3u,0x00u,0x8178u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008178u:
    if(m==0u&&x==0u&&e==0u){ /* 85 AD Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008178u,2u,0xADu,0x817Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xADu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00817Au:
    if(m==0u&&x==0u&&e==0u){ /* 80 17 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00817Au,2u,0x17u,0x817Cu);
      if(1){c->pc=0x8193u;}
      if(c->pc!=0x817Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x817Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00817Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 01 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00817Cu,3u,0x01u,0x817Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x011Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00817Fu:
    if(m==0u&&x==0u&&e==0u){ /* 29 F0 FF Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00817Fu,3u,0xFFu,0x8182u);
      sc_v11_op_and(r,0xFFF0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008182u:
    if(m==0u&&x==0u&&e==0u){ /* D0 07 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008182u,2u,0x07u,0x8184u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x818Bu;}
      if(c->pc!=0x8184u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x8184u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008184u:
    if(m==0u&&x==0u&&e==0u){ /* A5 D1 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008184u,2u,0xD1u,0x8186u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD1u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008186u:
    if(m==0u&&x==0u&&e==0u){ /* 29 03 00 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008186u,3u,0x00u,0x8189u);
      sc_v11_op_and(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008189u:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008189u,2u,0x08u,0x818Bu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x8193u;}
      if(c->pc!=0x818Bu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x818Bu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00818Bu:
    if(m==0u&&x==0u&&e==0u){ /* 64 AD Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00818Bu,2u,0xADu,0x818Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xADu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00818Du:
    if(m==0u&&x==0u&&e==0u){ /* 3B Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00818Du,1u,0x3Bu,0x818Eu);
      c->a=c->sp;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00818Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 AB Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00818Eu,2u,0xABu,0x8190u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xABu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008190u:
    if(m==0u&&x==0u&&e==0u){ /* A5 A9 Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008190u,2u,0xA9u,0x8192u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xA9u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008192u:
    if(m==0u&&x==0u&&e==0u){ /* 1B Mesen corrected gameplay frame 2552; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008192u,1u,0x1Bu,0x8193u);
      c->sp=c->emulation?(uint16_t)(0x0100u|(c->a&0xffu)):c->a;sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081A4u:
    if(m==0u&&x==0u&&e==0u){ /* 20 70 98 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A4u,3u,0x98u,0x81A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x81A6u))return 0;c->pc=0x9870u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081A7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A7u,2u,0x20u,0x81A9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081A9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0081A9u,2u,0x01u,0x81ABu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081ABu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B9 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0081ABu,2u,0xB9u,0x81ADu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB9u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081ADu:
    if(m==1u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0081ADu,2u,0x30u,0x81AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081AFu:
    if(m==0u&&x==0u&&e==0u){ /* 7A Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0081AFu,1u,0x7Au,0x81B0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->y=sc_v11_pop16(r);sc_v11_set_nz16(c,c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081B0u:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0081B0u,1u,0xFAu,0x81B1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081B1u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0081B1u,1u,0x68u,0x81B2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081B2u:
    if(m==0u&&x==0u&&e==0u){ /* AB Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0081B2u,1u,0xABu,0x81B3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081B3u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0081B3u,1u,0x2Bu,0x81B4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0081B4u:
    if(m==0u&&x==0u&&e==0u){ /* 40 Mesen corrected gameplay frame 4301; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0081B4u,1u,0x40u,0x81B5u);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));c->pc=sc_v11_pop16(r);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008206u:
    if(m==0u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 2525; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008206u,1u,0x08u,0x8207u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 08 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008206u,1u,0x08u,0x8207u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 08 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008206u,1u,0x08u,0x8207u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->p))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008207u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2525; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008207u,2u,0x20u,0x8209u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008207u,2u,0x20u,0x8209u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008207u,2u,0x20u,0x8209u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008209u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008209u,3u,0x00u,0x820Cu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008209u,3u,0x00u,0x820Cu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00820Cu:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1622; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00820Cu,2u,0x00u,0x820Eu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x820Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 02 00 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00820Cu,2u,0x00u,0x820Eu);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x820Eu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00820Eu:
    if(m==0u&&x==0u&&e==0u){ /* 28 Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00820Eu,1u,0x28u,0x820Fu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 28 Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00820Eu,1u,0x28u,0x820Fu);
      sc_v11_scheduler_internal_cycle(r,2u);sc_v11_unpack_p(c,sc_v11_pop8(r));
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00820Fu:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 2526; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00820Fu,1u,0x6Bu,0x8210u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 1623; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00820Fu,1u,0x6Bu,0x8210u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 6B Mesen corrected gameplay frame 1624; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00820Fu,1u,0x6Bu,0x8210u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00824Bu:
    if(m==0u&&x==0u&&e==0u){ /* 20 4F 82 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Bu,3u,0x82u,0x824Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0x824Du))return 0;c->pc=0x824Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00824Eu:
    if(m==0u&&x==0u&&e==0u){ /* 6B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Eu,1u,0x6Bu,0x824Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00824Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00824Fu,2u,0x20u,0x8251u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008251u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008251u,1u,0x18u,0x8252u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008252u:
    if(m==0u&&x==0u&&e==0u){ /* A5 59 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008252u,2u,0x59u,0x8254u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x59u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008254u:
    if(m==0u&&x==0u&&e==0u){ /* 85 5D Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008254u,2u,0x5Du,0x8256u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Du),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008256u:
    if(m==0u&&x==0u&&e==0u){ /* 65 5B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008256u,2u,0x5Bu,0x8258u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x5Bu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008258u:
    if(m==0u&&x==0u&&e==0u){ /* 85 59 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008258u,2u,0x59u,0x825Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x59u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00825Au:
    if(m==0u&&x==0u&&e==0u){ /* 65 5D Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00825Au,2u,0x5Du,0x825Cu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x5Du)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00825Cu:
    if(m==0u&&x==0u&&e==0u){ /* 85 5B Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00825Cu,2u,0x5Bu,0x825Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x5Bu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00825Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 1099; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00825Eu,1u,0x60u,0x825Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00825Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00825Fu,2u,0x20u,0x8261u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008261u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008261u,2u,0x10u,0x8263u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008263u:
    if(m==1u&&x==0u&&e==0u){ /* A9 03 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008263u,2u,0x03u,0x8265u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008265u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 7F 1F Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008265u,3u,0x1Fu,0x8268u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x1F7Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008268u:
    if(m==1u&&x==0u&&e==0u){ /* A9 80 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008268u,2u,0x80u,0x826Au);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00826Au:
    if(m==1u&&x==0u&&e==0u){ /* 8D 7E 1F Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00826Au,3u,0x1Fu,0x826Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x1F7Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00826Du:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00826Du,2u,0x00u,0x826Fu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00826Fu:
    if(m==1u&&x==0u&&e==0u){ /* 8D 7D 1F Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00826Fu,3u,0x1Fu,0x8272u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x1F7Du),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008272u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008272u,2u,0x00u,0x8274u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008274u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 7C 1F Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008274u,3u,0x1Fu,0x8277u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x1F7Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008277u:
    if(m==1u&&x==0u&&e==0u){ /* A2 FF 1E Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008277u,3u,0x1Eu,0x827Au);
      sc_v11_op_ldx(r,0x1EFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00827Au:
    if(m==1u&&x==0u&&e==0u){ /* 8E 7A 1F Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00827Au,3u,0x1Fu,0x827Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x1F7Au),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00827Du:
    if(m==1u&&x==0u&&e==0u){ /* A2 72 1F Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00827Du,3u,0x1Fu,0x8280u);
      sc_v11_op_ldx(r,0x1F72u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008280u:
    if(m==1u&&x==0u&&e==0u){ /* 86 AB Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008280u,2u,0xABu,0x8282u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xABu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008282u:
    if(m==1u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008282u,3u,0x00u,0x8285u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008285u:
    if(m==1u&&x==0u&&e==0u){ /* 86 AD Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008285u,2u,0xADu,0x8287u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0xADu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008287u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2486; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008287u,1u,0x60u,0x8288u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008288u:
    if(m==1u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008288u,2u,0x20u,0x828Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00828Au:
    if(m==1u&&x==0u&&e==0u){ /* E2 10 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00828Au,2u,0x10u,0x828Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x10u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00828Cu:
    if(m==1u&&x==1u&&e==0u){ /* A9 8F Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00828Cu,2u,0x8Fu,0x828Eu);
      sc_v11_op_lda(r,0x008Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00828Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 00 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00828Eu,3u,0x21u,0x8291u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2100u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008291u:
    if(m==1u&&x==1u&&e==0u){ /* A9 03 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008291u,2u,0x03u,0x8293u);
      sc_v11_op_lda(r,0x0003u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008293u:
    if(m==1u&&x==1u&&e==0u){ /* 85 60 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008293u,2u,0x60u,0x8295u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x60u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008295u:
    if(m==1u&&x==1u&&e==0u){ /* A9 09 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008295u,2u,0x09u,0x8297u);
      sc_v11_op_lda(r,0x0009u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008297u:
    if(m==1u&&x==1u&&e==0u){ /* 85 61 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008297u,2u,0x61u,0x8299u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x61u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008299u:
    if(m==1u&&x==1u&&e==0u){ /* A9 58 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008299u,2u,0x58u,0x829Bu);
      sc_v11_op_lda(r,0x0058u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00829Bu:
    if(m==1u&&x==1u&&e==0u){ /* 85 62 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00829Bu,2u,0x62u,0x829Du);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x62u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00829Du:
    if(m==1u&&x==1u&&e==0u){ /* A9 5C Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00829Du,2u,0x5Cu,0x829Fu);
      sc_v11_op_lda(r,0x005Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00829Fu:
    if(m==1u&&x==1u&&e==0u){ /* 85 63 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00829Fu,2u,0x63u,0x82A1u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x63u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082A1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 54 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082A1u,2u,0x54u,0x82A3u);
      sc_v11_op_lda(r,0x0054u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082A3u:
    if(m==1u&&x==1u&&e==0u){ /* 85 64 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082A3u,2u,0x64u,0x82A5u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x64u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082A5u:
    if(m==1u&&x==1u&&e==0u){ /* 64 65 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082A5u,2u,0x65u,0x82A7u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x65u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082A7u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082A7u,2u,0x00u,0x82A9u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082A9u:
    if(m==1u&&x==1u&&e==0u){ /* 85 66 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082A9u,2u,0x66u,0x82ABu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x66u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082ABu:
    if(m==1u&&x==1u&&e==0u){ /* A9 04 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082ABu,2u,0x04u,0x82ADu);
      sc_v11_op_lda(r,0x0004u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082ADu:
    if(m==1u&&x==1u&&e==0u){ /* 85 67 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082ADu,2u,0x67u,0x82AFu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x67u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082AFu:
    if(m==1u&&x==1u&&e==0u){ /* A9 80 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082AFu,2u,0x80u,0x82B1u);
      sc_v11_op_lda(r,0x0080u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082B1u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 15 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082B1u,3u,0x21u,0x82B4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2115u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082B4u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082B4u,2u,0x00u,0x82B6u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082B6u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 1A 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082B6u,3u,0x21u,0x82B9u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Au),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082B9u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 1B 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082B9u,3u,0x21u,0x82BCu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082BCu:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082BCu,2u,0x01u,0x82BEu);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082BEu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 1B 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082BEu,3u,0x21u,0x82C1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082C1u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 1C 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082C1u,3u,0x21u,0x82C4u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Cu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082C4u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 1C 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082C4u,3u,0x21u,0x82C7u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Cu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082C7u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 1D 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082C7u,3u,0x21u,0x82CAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082CAu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 1D 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082CAu,3u,0x21u,0x82CDu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082CDu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 1E 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082CDu,3u,0x21u,0x82D0u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Eu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082D0u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 1E 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082D0u,3u,0x21u,0x82D3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Eu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082D3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082D3u,2u,0x00u,0x82D5u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082D5u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 1F 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082D5u,3u,0x21u,0x82D8u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082D8u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 1F 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082D8u,3u,0x21u,0x82DBu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x211Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082DBu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 20 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082DBu,3u,0x21u,0x82DEu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2120u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082DEu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 20 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082DEu,3u,0x21u,0x82E1u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2120u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082E1u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082E1u,2u,0x00u,0x82E3u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082E3u:
    if(m==1u&&x==1u&&e==0u){ /* 85 71 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082E3u,2u,0x71u,0x82E5u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082E5u:
    if(m==1u&&x==1u&&e==0u){ /* 85 72 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082E5u,2u,0x72u,0x82E7u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x72u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082E7u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 26 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082E7u,3u,0x21u,0x82EAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2126u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082EAu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 27 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082EAu,3u,0x21u,0x82EDu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2127u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082EDu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 29 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082EDu,3u,0x21u,0x82F0u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2129u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082F0u:
    if(m==1u&&x==1u&&e==0u){ /* A9 17 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082F0u,2u,0x17u,0x82F2u);
      sc_v11_op_lda(r,0x0017u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082F2u:
    if(m==1u&&x==1u&&e==0u){ /* 85 68 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082F2u,2u,0x68u,0x82F4u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082F4u:
    if(m==1u&&x==1u&&e==0u){ /* 64 69 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082F4u,2u,0x69u,0x82F6u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x69u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082F6u:
    if(m==1u&&x==1u&&e==0u){ /* 64 6A Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082F6u,2u,0x6Au,0x82F8u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082F8u:
    if(m==1u&&x==1u&&e==0u){ /* 64 6B Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082F8u,2u,0x6Bu,0x82FAu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Bu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082FAu:
    if(m==1u&&x==1u&&e==0u){ /* 9C 33 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082FAu,3u,0x21u,0x82FDu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x2133u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082FDu:
    if(m==1u&&x==1u&&e==0u){ /* 64 6C Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082FDu,2u,0x6Cu,0x82FFu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Cu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0082FFu:
    if(m==1u&&x==1u&&e==0u){ /* 64 6D Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0082FFu,2u,0x6Du,0x8301u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Du),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008301u:
    if(m==1u&&x==1u&&e==0u){ /* 64 6E Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008301u,2u,0x6Eu,0x8303u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Eu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008303u:
    if(m==1u&&x==1u&&e==0u){ /* 64 6F Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008303u,2u,0x6Fu,0x8305u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Fu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008305u:
    if(m==1u&&x==1u&&e==0u){ /* 64 70 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008305u,2u,0x70u,0x8307u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x70u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008307u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 2B 21 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008307u,3u,0x21u,0x830Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x212Bu),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00830Au:
    if(m==1u&&x==1u&&e==0u){ /* 64 B1 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00830Au,2u,0xB1u,0x830Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00830Cu:
    if(m==1u&&x==1u&&e==0u){ /* 64 B3 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00830Cu,2u,0xB3u,0x830Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB3u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00830Eu:
    if(m==1u&&x==1u&&e==0u){ /* A9 FF Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00830Eu,2u,0xFFu,0x8310u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008310u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 01 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008310u,3u,0x42u,0x8313u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4201u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008313u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008313u,2u,0x00u,0x8315u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008315u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 02 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008315u,3u,0x42u,0x8318u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008318u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 03 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008318u,3u,0x42u,0x831Bu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00831Bu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 04 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00831Bu,3u,0x42u,0x831Eu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4204u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00831Eu:
    if(m==1u&&x==1u&&e==0u){ /* 8D 05 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00831Eu,3u,0x42u,0x8321u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4205u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008321u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 06 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008321u,3u,0x42u,0x8324u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4206u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008324u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 07 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008324u,3u,0x42u,0x8327u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4207u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008327u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 08 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008327u,3u,0x42u,0x832Au);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4208u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00832Au:
    if(m==1u&&x==1u&&e==0u){ /* 8D 09 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00832Au,3u,0x42u,0x832Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x4209u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00832Du:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0A 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00832Du,3u,0x42u,0x8330u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Au),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008330u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0B 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008330u,3u,0x42u,0x8333u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008333u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 0C 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008333u,3u,0x42u,0x8336u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Cu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008336u:
    if(m==1u&&x==1u&&e==0u){ /* 9C 0D 42 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008336u,3u,0x42u,0x8339u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Du),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008339u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 2480; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008339u,1u,0x60u,0x833Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00833Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2550; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00833Au,2u,0x20u,0x833Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }

    break;
  case 0x008397u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008397u,2u,0x20u,0x8399u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x008399u:
    if(m==0u&&x==0u&&e==0u){ /* AD 9B 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x008399u,3u,0x01u,0x839Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x019Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00839Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 1A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00839Cu,2u,0x1Au,0x839Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x83B8u;}
      if(c->pc!=0x839Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x839Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x00839Eu:
    if(m==0u&&x==0u&&e==0u){ /* A5 D7 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x00839Eu,2u,0xD7u,0x83A0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0xD7u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083A0u:
    if(m==0u&&x==0u&&e==0u){ /* 30 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0083A0u,2u,0x0Au,0x83A2u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0x83ACu;}
      if(c->pc!=0x83A2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83A2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083A2u:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0083A2u,3u,0x00u,0x83A5u);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083A5u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0083A5u,2u,0x05u,0x83A7u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x83ACu;}
      if(c->pc!=0x83A7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83A7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083A7u:
    if(m==0u&&x==0u&&e==0u){ /* AD 79 03 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0083A7u,3u,0x03u,0x83AAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0379u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083AAu:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0083AAu,2u,0x01u,0x83ACu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x83ADu;}
      if(c->pc!=0x83ACu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x83ACu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083ADu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0083ADu,2u,0x20u,0x83AFu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083AFu:
    if(m==1u&&x==0u&&e==0u){ /* A9 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0083AFu,2u,0x0Cu,0x83B1u);
      sc_v11_op_lda(r,0x000Cu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083B1u:
    if(m==1u&&x==0u&&e==0u){ /* 85 71 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0083B1u,2u,0x71u,0x83B3u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x71u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083B3u:
    if(m==1u&&x==0u&&e==0u){ /* A9 01 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0083B3u,2u,0x01u,0x83B5u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083B5u:
    if(m==1u&&x==0u&&e==0u){ /* 85 6A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0083B5u,2u,0x6Au,0x83B7u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x0083B7u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x0083B7u,1u,0x60u,0x83B8u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
