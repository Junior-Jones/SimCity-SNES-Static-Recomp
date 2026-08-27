/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_0006F(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x01BC00u:
    if(m==1u&&x==0u&&e==0u){ /* 29 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC00u,2u,0x02u,0xBC02u);
      sc_v11_op_and(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC02u:
    if(m==1u&&x==0u&&e==0u){ /* D0 2F Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC02u,2u,0x2Fu,0xBC04u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC33u;}
      if(c->pc!=0xBC04u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC04u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC04u:
    if(m==1u&&x==0u&&e==0u){ /* AD 9F 0B Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC04u,3u,0x0Bu,0xBC07u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x0B9Fu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC07u:
    if(m==1u&&x==0u&&e==0u){ /* D0 2A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC07u,2u,0x2Au,0xBC09u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC33u;}
      if(c->pc!=0xBC09u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC09u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC09u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC09u,2u,0x20u,0xBC0Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC0Bu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC0Bu,3u,0x02u,0xBC0Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC0Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 08 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC0Eu,2u,0x08u,0xBC10u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC18u;}
      if(c->pc!=0xBC10u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC10u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC18u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC18u,1u,0x0Au,0xBC19u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC19u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC19u,1u,0xAAu,0xBC1Au);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC1Au:
    if(m==0u&&x==0u&&e==0u){ /* BF 6E 88 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC1Au,4u,0x01u,0xBC1Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x01886Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC1Eu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC1Eu,1u,0x18u,0xBC1Fu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC1Fu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 27 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC1Fu,3u,0x02u,0xBC22u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0227u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC22u:
    if(m==0u&&x==0u&&e==0u){ /* AE 21 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC22u,3u,0x02u,0xBC25u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0221u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC25u:
    if(m==0u&&x==0u&&e==0u){ /* F0 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC25u,2u,0x01u,0xBC27u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC28u;}
      if(c->pc!=0xBC27u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC27u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC28u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC28u,2u,0x79u,0xBC2Au);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC2Au:
    if(m==0u&&x==0u&&e==0u){ /* AD 9D 0B Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC2Au,3u,0x0Bu,0xBC2Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B9Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC2Du:
    if(m==0u&&x==0u&&e==0u){ /* C5 79 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC2Du,2u,0x79u,0xBC2Fu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC2Fu:
    if(m==0u&&x==0u&&e==0u){ /* B0 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC2Fu,2u,0x02u,0xBC31u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBC33u;}
      if(c->pc!=0xBC31u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC31u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC33u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC33u,1u,0x18u,0xBC34u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC34u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC34u,1u,0x60u,0xBC35u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC35u:
    if(m==0u&&x==0u&&e==0u){ /* E2 30 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC35u,2u,0x30u,0xBC37u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC37u:
    if(m==1u&&x==1u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC37u,3u,0x02u,0xBC3Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_abs(r,0x020Du)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC3Au:
    if(m==1u&&x==1u&&e==0u){ /* C9 0F Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC3Au,2u,0x0Fu,0xBC3Cu);
      sc_v11_op_compare(r,c->a,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC3Cu:
    if(m==1u&&x==1u&&e==0u){ /* D0 08 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC3Cu,2u,0x08u,0xBC3Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC46u;}
      if(c->pc!=0xBC3Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC3Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC46u:
    if(m==1u&&x==1u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC46u,1u,0x18u,0xBC47u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC47u:
    if(m==1u&&x==1u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC47u,1u,0x60u,0xBC48u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC4Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC4Au,2u,0x30u,0xBC4Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC4Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 49 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC4Cu,3u,0x02u,0xBC4Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0249u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC4Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC4Fu,2u,0x05u,0xBC51u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xBC56u;}
      if(c->pc!=0xBC51u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC51u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC51u:
    if(m==0u&&x==0u&&e==0u){ /* A9 49 02 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC51u,3u,0x02u,0xBC54u);
      sc_v11_op_lda(r,0x0249u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC54u:
    if(m==0u&&x==0u&&e==0u){ /* 80 39 Mesen corrected gameplay frame 4300; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC54u,2u,0x39u,0xBC56u);
      if(1){c->pc=0xBC8Fu;}
      if(c->pc!=0xBC56u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC56u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC56u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC56u,3u,0x02u,0xBC59u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC59u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC59u,3u,0x00u,0xBC5Cu);
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC5Cu:
    if(m==0u&&x==0u&&e==0u){ /* D0 0D Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC5Cu,2u,0x0Du,0xBC5Eu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC6Bu;}
      if(c->pc!=0xBC5Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC5Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC6Bu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC6Bu,1u,0x0Au,0xBC6Cu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC6Cu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC6Cu,1u,0xAAu,0xBC6Du);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC6Du:
    if(m==0u&&x==0u&&e==0u){ /* BD BB 98 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC6Du,3u,0x98u,0xBC70u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x98BBu)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC70u:
    if(m==0u&&x==0u&&e==0u){ /* AE 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC70u,3u,0x02u,0xBC73u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC73u:
    if(m==0u&&x==0u&&e==0u){ /* E0 0A 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC73u,3u,0x00u,0xBC76u);
      sc_v11_op_compare(r,c->x,0x000Au,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC76u:
    if(m==0u&&x==0u&&e==0u){ /* D0 17 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC76u,2u,0x17u,0xBC78u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xBC8Fu;}
      if(c->pc!=0xBC78u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBC78u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC8Fu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC8Fu,1u,0x48u,0xBC90u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC90u:
    if(m==0u&&x==0u&&e==0u){ /* AD EB 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC90u,3u,0x01u,0xBC93u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EBu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC93u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC93u,1u,0x4Au,0xBC94u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC94u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC94u,1u,0x4Au,0xBC95u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC95u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC95u,1u,0x4Au,0xBC96u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC96u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 11 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC96u,3u,0x02u,0xBC99u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0211u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC99u:
    if(m==0u&&x==0u&&e==0u){ /* AD ED 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC99u,3u,0x01u,0xBC9Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01EDu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC9Cu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC9Cu,1u,0x4Au,0xBC9Du);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC9Du:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC9Du,1u,0x4Au,0xBC9Eu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC9Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC9Eu,1u,0x4Au,0xBC9Fu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BC9Fu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 13 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BC9Fu,3u,0x02u,0xBCA2u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0213u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCA2u:
    if(m==0u&&x==0u&&e==0u){ /* AE 0D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCA2u,3u,0x02u,0xBCA5u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCA5u:
    if(m==0u&&x==0u&&e==0u){ /* BF 62 80 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCA5u,4u,0x01u,0xBCA9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018062u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCA9u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCA9u,3u,0x00u,0xBCACu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCACu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 17 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCACu,3u,0x02u,0xBCAFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0217u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCAFu:
    if(m==0u&&x==0u&&e==0u){ /* AD 17 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCAFu,3u,0x02u,0xBCB2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0217u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCB2u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCB2u,1u,0x0Au,0xBCB3u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCB3u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCB3u,1u,0xA8u,0xBCB4u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCB4u:
    if(m==0u&&x==0u&&e==0u){ /* B3 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCB4u,2u,0x01u,0xBCB6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_stack_indirect_y(r,0x01u)),16u);sc_v11_scheduler_internal_cycle(r,2u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCB6u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 15 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCB6u,3u,0x02u,0xBCB9u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0215u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCB9u:
    if(m==0u&&x==0u&&e==0u){ /* 20 6F BD Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCB9u,3u,0xBDu,0xBCBCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCBBu))return 0;c->pc=0xBD6Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCBCu:
    if(m==0u&&x==0u&&e==0u){ /* 20 CE BD Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCBCu,3u,0xBDu,0xBCBFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCBEu))return 0;c->pc=0xBDCEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCBFu:
    if(m==0u&&x==0u&&e==0u){ /* 20 95 BE Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCBFu,3u,0xBEu,0xBCC2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCC1u))return 0;c->pc=0xBE95u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCC2u:
    if(m==0u&&x==0u&&e==0u){ /* CE 17 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCC2u,3u,0x02u,0xBCC5u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0217u),16u,-1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCC5u:
    if(m==0u&&x==0u&&e==0u){ /* 10 E8 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCC5u,2u,0xE8u,0xBCC7u);
      if((c->p&SC_FLAG_N)==0u){c->pc=0xBCAFu;}
      if(c->pc!=0xBCC7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCC7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCC7u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCC7u,1u,0x68u,0xBCC8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCC8u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCC8u,1u,0x60u,0xBCC9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCC9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 49 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCC9u,3u,0x02u,0xBCCCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0249u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCCCu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 15 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCCCu,3u,0x02u,0xBCCFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0215u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCCFu:
    if(m==0u&&x==0u&&e==0u){ /* AD 09 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCCFu,3u,0x02u,0xBCD2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0209u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCD2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 19 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCD2u,3u,0x02u,0xBCD5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0219u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCD5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 0B 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCD5u,3u,0x02u,0xBCD8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCD8u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 1B 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCD8u,3u,0x02u,0xBCDBu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x021Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCDBu:
    if(m==0u&&x==0u&&e==0u){ /* 20 07 BE Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCDBu,3u,0xBEu,0xBCDEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBCDDu))return 0;c->pc=0xBE07u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCDEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 09 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCDEu,3u,0x02u,0xBCE1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0209u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCE1u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCE1u,1u,0x38u,0xBCE2u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCE2u:
    if(m==0u&&x==0u&&e==0u){ /* ED BD 01 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCE2u,3u,0x01u,0xBCE5u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BDu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCE5u:
    if(m==0u&&x==0u&&e==0u){ /* 30 1C Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCE5u,2u,0x1Cu,0xBCE7u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xBD03u;}
      if(c->pc!=0xBCE7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCE7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCE7u:
    if(m==0u&&x==0u&&e==0u){ /* C9 20 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCE7u,3u,0x00u,0xBCEAu);
      sc_v11_op_compare(r,c->a,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCEAu:
    if(m==0u&&x==0u&&e==0u){ /* B0 17 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCEAu,2u,0x17u,0xBCECu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBD03u;}
      if(c->pc!=0xBCECu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCECu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCECu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 1D 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCECu,3u,0x02u,0xBCEFu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x021Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCEFu:
    if(m==0u&&x==0u&&e==0u){ /* AD 0B 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCEFu,3u,0x02u,0xBCF2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x020Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCF2u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCF2u,1u,0x38u,0xBCF3u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCF3u:
    if(m==0u&&x==0u&&e==0u){ /* ED BF 01 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCF3u,3u,0x01u,0xBCF6u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x01BFu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCF6u:
    if(m==0u&&x==0u&&e==0u){ /* 30 0B Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCF6u,2u,0x0Bu,0xBCF8u);
      if((c->p&SC_FLAG_N)!=0u){c->pc=0xBD03u;}
      if(c->pc!=0xBCF8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCF8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCF8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 1C 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCF8u,3u,0x00u,0xBCFBu);
      sc_v11_op_compare(r,c->a,0x001Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCFBu:
    if(m==0u&&x==0u&&e==0u){ /* B0 06 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCFBu,2u,0x06u,0xBCFDu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xBD03u;}
      if(c->pc!=0xBCFDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBCFDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BCFDu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 1F 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BCFDu,3u,0x02u,0xBD00u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x021Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD00u:
    if(m==0u&&x==0u&&e==0u){ /* 20 95 BE Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD00u,3u,0xBEu,0xBD03u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBD02u))return 0;c->pc=0xBE95u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD03u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD03u,1u,0x60u,0xBD04u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD6Fu:
    if(m==0u&&x==0u&&e==0u){ /* AE 17 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD6Fu,3u,0x02u,0xBD72u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0217u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD72u:
    if(m==0u&&x==0u&&e==0u){ /* BF 72 80 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD72u,4u,0x01u,0xBD76u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018072u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD76u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD76u,3u,0x00u,0xBD79u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD79u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD79u,1u,0x48u,0xBD7Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD7Au:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD7Au,1u,0x18u,0xBD7Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD7Bu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 05 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD7Bu,3u,0x02u,0xBD7Eu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0205u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD7Eu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 19 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD7Eu,3u,0x02u,0xBD81u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0219u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD81u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD81u,1u,0x68u,0xBD82u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD82u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD82u,1u,0x18u,0xBD83u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD83u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 11 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD83u,3u,0x02u,0xBD86u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0211u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD86u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 1D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD86u,3u,0x02u,0xBD89u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x021Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD89u:
    if(m==0u&&x==0u&&e==0u){ /* BF 96 80 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD89u,4u,0x01u,0xBD8Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x018096u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD8Du:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD8Du,3u,0x00u,0xBD90u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD90u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD90u,1u,0x48u,0xBD91u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD91u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD91u,1u,0x18u,0xBD92u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD92u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 07 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD92u,3u,0x02u,0xBD95u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0207u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD95u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 1B 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD95u,3u,0x02u,0xBD98u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x021Bu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD98u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD98u,1u,0x68u,0xBD99u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD99u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD99u,1u,0x18u,0xBD9Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD9Au:
    if(m==0u&&x==0u&&e==0u){ /* 6D 13 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD9Au,3u,0x02u,0xBD9Du);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0213u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BD9Du:
    if(m==0u&&x==0u&&e==0u){ /* 8D 1F 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BD9Du,3u,0x02u,0xBDA0u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x021Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDA0u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDA0u,1u,0x60u,0xBDA1u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDCEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDCEu,3u,0x02u,0xBDD1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x021Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDD1u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDD1u,2u,0x20u,0xBDD3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDD3u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDD3u,1u,0x48u,0xBDD4u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDD4u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDD4u,2u,0xB3u,0xBDD6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDD6u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDD6u,2u,0x7Fu,0xBDD8u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDD8u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDD8u,2u,0xB1u,0xBDDAu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDDAu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDDAu,1u,0x68u,0xBDDBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDDBu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDDBu,4u,0x00u,0xBDDFu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDDFu:
    if(m==1u&&x==0u&&e==0u){ /* A9 78 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDDFu,2u,0x78u,0xBDE1u);
      sc_v11_op_lda(r,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDE1u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDE1u,4u,0x00u,0xBDE5u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDE5u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDE5u,1u,0x48u,0xBDE6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDE6u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDE6u,1u,0x68u,0xBDE7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDE7u:
    if(m==1u&&x==0u&&e==0u){ /* EA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDE7u,1u,0xEAu,0xBDE8u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDE8u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDE8u,4u,0x00u,0xBDECu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDECu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDECu,1u,0xEBu,0xBDEDu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDEDu:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDEDu,4u,0x00u,0xBDF1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDF1u:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDF1u,1u,0x48u,0xBDF2u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDF2u:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDF2u,2u,0xB3u,0xBDF4u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDF4u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDF4u,2u,0xB1u,0xBDF6u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDF6u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDF6u,1u,0x68u,0xBDF7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDF7u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDF7u,2u,0x20u,0xBDF9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDF9u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDF9u,1u,0x18u,0xBDFAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDFAu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 19 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDFAu,3u,0x02u,0xBDFDu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0219u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDFDu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDFDu,1u,0x0Au,0xBDFEu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDFEu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDFEu,1u,0xAAu,0xBDFFu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BDFFu:
    if(m==0u&&x==0u&&e==0u){ /* AD 15 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BDFFu,3u,0x02u,0xBE02u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0215u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE02u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE02u,4u,0x7Fu,0xBE06u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE06u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE06u,1u,0x60u,0xBE07u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE07u:
    if(m==0u&&x==0u&&e==0u){ /* AD 1B 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE07u,3u,0x02u,0xBE0Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x021Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE0Au:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE0Au,2u,0x20u,0xBE0Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE0Cu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE0Cu,1u,0x48u,0xBE0Du);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE0Du:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE0Du,2u,0xB3u,0xBE0Fu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE0Fu:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE0Fu,2u,0x7Fu,0xBE11u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE11u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE11u,2u,0xB1u,0xBE13u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE13u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE13u,1u,0x68u,0xBE14u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE14u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE14u,4u,0x00u,0xBE18u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE18u:
    if(m==1u&&x==0u&&e==0u){ /* A9 78 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE18u,2u,0x78u,0xBE1Au);
      sc_v11_op_lda(r,0x0078u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE1Au:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE1Au,4u,0x00u,0xBE1Eu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE1Eu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE1Eu,1u,0x48u,0xBE1Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE1Fu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE1Fu,1u,0x68u,0xBE20u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE20u:
    if(m==1u&&x==0u&&e==0u){ /* EA Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE20u,1u,0xEAu,0xBE21u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE21u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE21u,4u,0x00u,0xBE25u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE25u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE25u,1u,0xEBu,0xBE26u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE26u:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE26u,4u,0x00u,0xBE2Au);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE2Au:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE2Au,1u,0x48u,0xBE2Bu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE2Bu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE2Bu,2u,0xB3u,0xBE2Du);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE2Du:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE2Du,2u,0xB1u,0xBE2Fu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE2Fu:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE2Fu,1u,0x68u,0xBE30u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE30u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE30u,2u,0x20u,0xBE32u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE32u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE32u,1u,0x18u,0xBE33u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE33u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 19 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE33u,3u,0x02u,0xBE36u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0219u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE36u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE36u,1u,0x0Au,0xBE37u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE37u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE37u,1u,0xAAu,0xBE38u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE38u:
    if(m==0u&&x==0u&&e==0u){ /* AD 15 02 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE38u,3u,0x02u,0xBE3Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0215u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE3Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 02 7F Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE3Bu,4u,0x7Fu,0xBE3Fu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7F0200u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE3Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 4305; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE3Fu,1u,0x60u,0xBE40u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE95u:
    if(m==0u&&x==0u&&e==0u){ /* AD 39 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE95u,3u,0x01u,0xBE98u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0139u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE98u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE98u,1u,0x4Au,0xBE99u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE99u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE99u,1u,0x4Au,0xBE9Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE9Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE9Au,1u,0x4Au,0xBE9Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE9Bu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE9Bu,1u,0x18u,0xBE9Cu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE9Cu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 1D 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE9Cu,3u,0x02u,0xBE9Fu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x021Du)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BE9Fu:
    if(m==0u&&x==0u&&e==0u){ /* C9 20 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BE9Fu,3u,0x00u,0xBEA2u);
      sc_v11_op_compare(r,c->a,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEA2u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEA2u,2u,0x03u,0xBEA4u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBEA7u;}
      if(c->pc!=0xBEA4u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEA4u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEA7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 79 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEA7u,2u,0x79u,0xBEA9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x79u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEA9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 37 01 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEA9u,3u,0x01u,0xBEACu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0137u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEACu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEACu,1u,0x4Au,0xBEADu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEADu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEADu,1u,0x4Au,0xBEAEu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEAEu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEAEu,1u,0x4Au,0xBEAFu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEAFu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEAFu,1u,0x18u,0xBEB0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEB0u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 1F 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEB0u,3u,0x02u,0xBEB3u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x021Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEB3u:
    if(m==0u&&x==0u&&e==0u){ /* C9 20 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEB3u,3u,0x00u,0xBEB6u);
      sc_v11_op_compare(r,c->a,0x0020u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEB6u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEB6u,2u,0x03u,0xBEB8u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xBEBBu;}
      if(c->pc!=0xBEB8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xBEB8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEBBu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEBBu,2u,0x20u,0xBEBDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEBDu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEBDu,1u,0x48u,0xBEBEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEBEu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEBEu,2u,0xB3u,0xBEC0u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEC0u:
    if(m==1u&&x==0u&&e==0u){ /* 29 7F Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEC0u,2u,0x7Fu,0xBEC2u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEC2u:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEC2u,2u,0xB1u,0xBEC4u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEC4u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEC4u,1u,0x68u,0xBEC5u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEC5u:
    if(m==1u&&x==0u&&e==0u){ /* 8F 02 42 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEC5u,4u,0x00u,0xBEC9u);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004202u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEC9u:
    if(m==1u&&x==0u&&e==0u){ /* A9 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEC9u,2u,0x20u,0xBECBu);
      sc_v11_op_lda(r,0x0020u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BECBu:
    if(m==1u&&x==0u&&e==0u){ /* 8F 03 42 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BECBu,4u,0x00u,0xBECFu);
      sc_v11_bus_write8(r,sc_v11_ea_long(0x004203u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BECFu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BECFu,1u,0x48u,0xBED0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BED0u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BED0u,1u,0x68u,0xBED1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BED1u:
    if(m==1u&&x==0u&&e==0u){ /* EA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BED1u,1u,0xEAu,0xBED2u);
      sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BED2u:
    if(m==1u&&x==0u&&e==0u){ /* AF 17 42 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BED2u,4u,0x00u,0xBED6u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004217u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BED6u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BED6u,1u,0xEBu,0xBED7u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BED7u:
    if(m==1u&&x==0u&&e==0u){ /* AF 16 42 00 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BED7u,4u,0x00u,0xBEDBu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_long(0x004216u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEDBu:
    if(m==1u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEDBu,1u,0x48u,0xBEDCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEDCu:
    if(m==1u&&x==0u&&e==0u){ /* A5 B3 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEDCu,2u,0xB3u,0xBEDEu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEDEu:
    if(m==1u&&x==0u&&e==0u){ /* 85 B1 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEDEu,2u,0xB1u,0xBEE0u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEE0u:
    if(m==1u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEE0u,1u,0x68u,0xBEE1u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=(uint16_t)((c->a&0xff00u)|sc_v11_pop8(r));sc_v11_set_nz8(c,(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEE1u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEE1u,2u,0x20u,0xBEE3u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEE3u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEE3u,1u,0x18u,0xBEE4u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEE4u:
    if(m==0u&&x==0u&&e==0u){ /* 65 79 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEE4u,2u,0x79u,0xBEE6u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x79u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEE6u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEE6u,1u,0x0Au,0xBEE7u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEE7u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEE7u,1u,0x48u,0xBEE8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEE8u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEE8u,1u,0xAAu,0xBEE9u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEE9u:
    if(m==0u&&x==0u&&e==0u){ /* AD 15 02 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEE9u,3u,0x02u,0xBEECu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0215u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEECu:
    if(m==0u&&x==0u&&e==0u){ /* 20 ED C7 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEECu,3u,0xC7u,0xBEEFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xBEEEu))return 0;c->pc=0xC7EDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEEFu:
    if(m==0u&&x==0u&&e==0u){ /* FA Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEEFu,1u,0xFAu,0xBEF0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->x=sc_v11_pop16(r);sc_v11_set_nz16(c,c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEF0u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 40 28 7E Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEF0u,4u,0x7Eu,0xBEF4u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7E2840u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x01BEF4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3500; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x01BEF4u,1u,0x60u,0xBEF5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
