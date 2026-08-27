/* AUTO-GENERATED exact-PC/E/M/X Version 34 shard. */
#include "sc_v11_runtime.h"

int sc_v34_group_000E8(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03A001u:
    if(m==0u&&x==0u&&e==0u){ /* 46 04 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A001u,2u,0x04u,0xA003u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x04u),16u,1u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A003u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A003u,2u,0x20u,0xA005u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A005u:
    if(m==1u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A005u,2u,0x04u,0xA007u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x04u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A007u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A007u,1u,0x18u,0xA008u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A008u:
    if(m==1u&&x==0u&&e==0u){ /* 7F 70 CD 7F Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A008u,4u,0x7Fu,0xA00Cu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FCD70u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A00Cu:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A00Cu,2u,0x02u,0xA00Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA010u;}
      if(c->pc!=0xA00Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA00Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A00Eu:
    if(m==1u&&x==0u&&e==0u){ /* E6 05 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A00Eu,2u,0x05u,0xA010u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x05u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A010u:
    if(m==1u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A010u,2u,0x04u,0xA012u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A012u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A012u,2u,0x20u,0xA014u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A014u:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A014u,2u,0x04u,0xA016u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A016u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A016u,1u,0x4Au,0xA017u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A017u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A017u,2u,0x20u,0xA019u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A019u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 74 AB 7F Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A019u,4u,0x7Fu,0xA01Du);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7FAB74u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A01Du:
    if(m==1u&&x==0u&&e==0u){ /* E6 00 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A01Du,2u,0x00u,0xA01Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A01Fu:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A01Fu,2u,0x00u,0xA021u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A021u:
    if(m==1u&&x==0u&&e==0u){ /* C9 1E Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A021u,2u,0x1Eu,0xA023u);
      sc_v11_op_compare(r,c->a,0x001Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A023u:
    if(m==1u&&x==0u&&e==0u){ /* D0 92 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A023u,2u,0x92u,0xA025u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9FB7u;}
      if(c->pc!=0xA025u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA025u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A025u:
    if(m==1u&&x==0u&&e==0u){ /* E6 02 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A025u,2u,0x02u,0xA027u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A027u:
    if(m==1u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A027u,2u,0x02u,0xA029u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A029u:
    if(m==1u&&x==0u&&e==0u){ /* C9 19 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A029u,2u,0x19u,0xA02Bu);
      sc_v11_op_compare(r,c->a,0x0019u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A02Bu:
    if(m==1u&&x==0u&&e==0u){ /* D0 88 Mesen corrected gameplay frame 2804; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A02Bu,2u,0x88u,0xA02Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9FB5u;}
      if(c->pc!=0xA02Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA02Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A02Du:
    if(m==1u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A02Du,1u,0x2Bu,0xA02Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A02Eu:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A02Eu,1u,0x60u,0xA02Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A02Fu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A02Fu,2u,0x20u,0xA031u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2879; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A02Fu,2u,0x20u,0xA031u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A031u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A031u,1u,0x0Bu,0xA032u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A032u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A032u,1u,0x48u,0xA033u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A033u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A033u,1u,0x7Bu,0xA034u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A034u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A034u,1u,0x38u,0xA035u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A035u:
    if(m==0u&&x==0u&&e==0u){ /* E9 06 00 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A035u,3u,0x00u,0xA038u);
      sc_v11_op_sbc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A038u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A038u,1u,0x5Bu,0xA039u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A039u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A039u,1u,0x68u,0xA03Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A03Au:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A03Au,2u,0x30u,0xA03Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A03Cu:
    if(m==0u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A03Cu,2u,0x02u,0xA03Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A03Eu:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A03Eu,2u,0x00u,0xA040u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A040u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A040u,2u,0x20u,0xA042u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A042u:
    if(m==1u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A042u,2u,0x02u,0xA044u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A044u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A044u,1u,0xEBu,0xA045u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A045u:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A045u,2u,0x00u,0xA047u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A047u:
    if(m==1u&&x==0u&&e==0u){ /* 20 9A A2 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A047u,3u,0xA2u,0xA04Au);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA049u))return 0;c->pc=0xA29Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A04Au:
    if(m==1u&&x==0u&&e==0u){ /* 64 05 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A04Au,2u,0x05u,0xA04Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x05u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A04Cu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A04Cu,2u,0x00u,0xA04Eu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A04Eu:
    if(m==1u&&x==0u&&e==0u){ /* A4 00 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A04Eu,2u,0x00u,0xA050u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A050u:
    if(m==1u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A050u,2u,0x05u,0xA052u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA057u;}
      if(c->pc!=0xA052u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA052u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A052u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A052u,1u,0x18u,0xA053u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A053u:
    if(m==1u&&x==0u&&e==0u){ /* 7F FF B5 7F Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A053u,4u,0x7Fu,0xA057u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FB5FFu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A057u:
    if(m==1u&&x==0u&&e==0u){ /* C0 3B 00 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A057u,3u,0x00u,0xA05Au);
      sc_v11_op_compare(r,c->y,0x003Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A05Au:
    if(m==1u&&x==0u&&e==0u){ /* F0 09 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A05Au,2u,0x09u,0xA05Cu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA065u;}
      if(c->pc!=0xA05Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA05Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A05Cu:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A05Cu,1u,0x18u,0xA05Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A05Du:
    if(m==1u&&x==0u&&e==0u){ /* 7F 01 B6 7F Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A05Du,4u,0x7Fu,0xA061u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FB601u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A061u:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A061u,2u,0x02u,0xA063u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA065u;}
      if(c->pc!=0xA063u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA063u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A065u:
    if(m==1u&&x==0u&&e==0u){ /* A4 02 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A065u,2u,0x02u,0xA067u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A067u:
    if(m==1u&&x==0u&&e==0u){ /* F0 09 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A067u,2u,0x09u,0xA069u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA072u;}
      if(c->pc!=0xA069u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA069u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A069u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A069u,1u,0x18u,0xA06Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A06Au:
    if(m==1u&&x==0u&&e==0u){ /* 7F C4 B5 7F Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A06Au,4u,0x7Fu,0xA06Eu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FB5C4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A06Eu:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A06Eu,2u,0x02u,0xA070u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA072u;}
      if(c->pc!=0xA070u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA070u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A070u:
    if(m==1u&&x==0u&&e==0u){ /* E6 05 Mesen corrected gameplay frame 4087; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A070u,2u,0x05u,0xA072u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x05u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A072u:
    if(m==1u&&x==0u&&e==0u){ /* C0 31 00 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A072u,3u,0x00u,0xA075u);
      sc_v11_op_compare(r,c->y,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A075u:
    if(m==1u&&x==0u&&e==0u){ /* F0 09 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A075u,2u,0x09u,0xA077u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA080u;}
      if(c->pc!=0xA077u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA077u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A077u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A077u,1u,0x18u,0xA078u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A078u:
    if(m==1u&&x==0u&&e==0u){ /* 7F 3C B6 7F Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A078u,4u,0x7Fu,0xA07Cu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FB63Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A07Cu:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A07Cu,2u,0x02u,0xA07Eu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA080u;}
      if(c->pc!=0xA07Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA07Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A07Eu:
    if(m==1u&&x==0u&&e==0u){ /* E6 05 Mesen corrected gameplay frame 4087; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A07Eu,2u,0x05u,0xA080u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x05u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A080u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A080u,1u,0x18u,0xA081u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A081u:
    if(m==1u&&x==0u&&e==0u){ /* 7F 00 B6 7F Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A081u,4u,0x7Fu,0xA085u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FB600u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A085u:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A085u,2u,0x02u,0xA087u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA089u;}
      if(c->pc!=0xA087u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA087u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A087u:
    if(m==1u&&x==0u&&e==0u){ /* E6 05 Mesen corrected gameplay frame 4087; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A087u,2u,0x05u,0xA089u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x05u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A089u:
    if(m==1u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A089u,2u,0x04u,0xA08Bu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A08Bu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A08Bu,2u,0x20u,0xA08Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A08Du:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A08Du,2u,0x04u,0xA08Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A08Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A08Fu,1u,0x4Au,0xA090u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A090u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A090u,1u,0x4Au,0xA091u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A091u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FA 00 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A091u,3u,0x00u,0xA094u);
      sc_v11_op_compare(r,c->a,0x00FAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A094u:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A094u,2u,0x03u,0xA096u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA099u;}
      if(c->pc!=0xA096u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA096u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A099u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A099u,2u,0x20u,0xA09Bu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A09Bu:
    if(m==1u&&x==0u&&e==0u){ /* 9F B8 C1 7F Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A09Bu,4u,0x7Fu,0xA09Fu);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7FC1B8u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A09Fu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A09Fu,2u,0x20u,0xA0A1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0A1u:
    if(m==0u&&x==0u&&e==0u){ /* E6 00 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0A1u,2u,0x00u,0xA0A3u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0A3u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0A3u,2u,0x00u,0xA0A5u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0A5u:
    if(m==0u&&x==0u&&e==0u){ /* C9 3C 00 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0A5u,3u,0x00u,0xA0A8u);
      sc_v11_op_compare(r,c->a,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0A8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 96 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0A8u,2u,0x96u,0xA0AAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA040u;}
      if(c->pc!=0xA0AAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA0AAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0AAu:
    if(m==0u&&x==0u&&e==0u){ /* E6 02 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0AAu,2u,0x02u,0xA0ACu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0ACu:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0ACu,2u,0x02u,0xA0AEu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0AEu:
    if(m==0u&&x==0u&&e==0u){ /* C9 32 00 Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0AEu,3u,0x00u,0xA0B1u);
      sc_v11_op_compare(r,c->a,0x0032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0B1u:
    if(m==0u&&x==0u&&e==0u){ /* D0 8B Mesen corrected gameplay frame 2754; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B1u,2u,0x8Bu,0xA0B3u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA03Eu;}
      if(c->pc!=0xA0B3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA0B3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0B3u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B3u,1u,0x2Bu,0xA0B4u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0B4u:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B4u,1u,0x60u,0xA0B5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0B5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B5u,2u,0x20u,0xA0B7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0B7u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B7u,1u,0x0Bu,0xA0B8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0B8u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B8u,1u,0x48u,0xA0B9u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0B9u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0B9u,1u,0x7Bu,0xA0BAu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0BAu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0BAu,1u,0x38u,0xA0BBu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0BBu:
    if(m==0u&&x==0u&&e==0u){ /* E9 06 00 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0BBu,3u,0x00u,0xA0BEu);
      sc_v11_op_sbc(r,0x0006u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0BEu:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0BEu,1u,0x5Bu,0xA0BFu);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0BFu:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0BFu,1u,0x68u,0xA0C0u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0C0u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0C0u,2u,0x30u,0xA0C2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0C2u:
    if(m==0u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0C2u,2u,0x02u,0xA0C4u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0C4u:
    if(m==0u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0C4u,2u,0x00u,0xA0C6u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0C6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0C6u,2u,0x20u,0xA0C8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0C8u:
    if(m==1u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0C8u,2u,0x02u,0xA0CAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0CAu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0CAu,1u,0xEBu,0xA0CBu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0CBu:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0CBu,2u,0x00u,0xA0CDu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0CDu:
    if(m==1u&&x==0u&&e==0u){ /* 20 9A A2 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0CDu,3u,0xA2u,0xA0D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA0CFu))return 0;c->pc=0xA29Au;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0D0u:
    if(m==1u&&x==0u&&e==0u){ /* 64 05 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D0u,2u,0x05u,0xA0D2u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x05u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0D2u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D2u,2u,0x00u,0xA0D4u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0D4u:
    if(m==1u&&x==0u&&e==0u){ /* A4 00 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D4u,2u,0x00u,0xA0D6u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0D6u:
    if(m==1u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D6u,2u,0x05u,0xA0D8u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA0DDu;}
      if(c->pc!=0xA0D8u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA0D8u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0D8u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D8u,1u,0x18u,0xA0D9u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0D9u:
    if(m==1u&&x==0u&&e==0u){ /* 7F B7 C1 7F Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0D9u,4u,0x7Fu,0xA0DDu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FC1B7u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0DDu:
    if(m==1u&&x==0u&&e==0u){ /* C0 3B 00 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0DDu,3u,0x00u,0xA0E0u);
      sc_v11_op_compare(r,c->y,0x003Bu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0E0u:
    if(m==1u&&x==0u&&e==0u){ /* F0 09 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0E0u,2u,0x09u,0xA0E2u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA0EBu;}
      if(c->pc!=0xA0E2u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA0E2u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0E2u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0E2u,1u,0x18u,0xA0E3u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0E3u:
    if(m==1u&&x==0u&&e==0u){ /* 7F B9 C1 7F Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0E3u,4u,0x7Fu,0xA0E7u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FC1B9u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0E7u:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0E7u,2u,0x02u,0xA0E9u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA0EBu;}
      if(c->pc!=0xA0E9u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA0E9u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0EBu:
    if(m==1u&&x==0u&&e==0u){ /* A4 02 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0EBu,2u,0x02u,0xA0EDu);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0EDu:
    if(m==1u&&x==0u&&e==0u){ /* F0 09 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0EDu,2u,0x09u,0xA0EFu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA0F8u;}
      if(c->pc!=0xA0EFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA0EFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0EFu:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0EFu,1u,0x18u,0xA0F0u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0F0u:
    if(m==1u&&x==0u&&e==0u){ /* 7F 7C C1 7F Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0F0u,4u,0x7Fu,0xA0F4u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FC17Cu)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0F4u:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0F4u,2u,0x02u,0xA0F6u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA0F8u;}
      if(c->pc!=0xA0F6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA0F6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0F6u:
    if(m==1u&&x==0u&&e==0u){ /* E6 05 Mesen corrected gameplay frame 4111; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0F6u,2u,0x05u,0xA0F8u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x05u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0F8u:
    if(m==1u&&x==0u&&e==0u){ /* C0 31 00 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0F8u,3u,0x00u,0xA0FBu);
      sc_v11_op_compare(r,c->y,0x0031u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0FBu:
    if(m==1u&&x==0u&&e==0u){ /* F0 09 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0FBu,2u,0x09u,0xA0FDu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA106u;}
      if(c->pc!=0xA0FDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA0FDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0FDu:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0FDu,1u,0x18u,0xA0FEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A0FEu:
    if(m==1u&&x==0u&&e==0u){ /* 7F F4 C1 7F Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A0FEu,4u,0x7Fu,0xA102u);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FC1F4u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A102u:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A102u,2u,0x02u,0xA104u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA106u;}
      if(c->pc!=0xA104u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA104u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A104u:
    if(m==1u&&x==0u&&e==0u){ /* E6 05 Mesen corrected gameplay frame 4111; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A104u,2u,0x05u,0xA106u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x05u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A106u:
    if(m==1u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A106u,1u,0x18u,0xA107u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A107u:
    if(m==1u&&x==0u&&e==0u){ /* 7F B8 C1 7F Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A107u,4u,0x7Fu,0xA10Bu);
      sc_v11_op_adc(r,sc_v11_bus_read8(r,sc_v11_ea_longx(r,0x7FC1B8u)),8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A10Bu:
    if(m==1u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A10Bu,2u,0x02u,0xA10Du);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA10Fu;}
      if(c->pc!=0xA10Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA10Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A10Du:
    if(m==1u&&x==0u&&e==0u){ /* E6 05 Mesen corrected gameplay frame 4111; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A10Du,2u,0x05u,0xA10Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x05u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A10Fu:
    if(m==1u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A10Fu,2u,0x04u,0xA111u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x04u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A111u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A111u,2u,0x20u,0xA113u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A113u:
    if(m==0u&&x==0u&&e==0u){ /* A5 04 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A113u,2u,0x04u,0xA115u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x04u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A115u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A115u,1u,0x4Au,0xA116u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A116u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A116u,1u,0x4Au,0xA117u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A117u:
    if(m==0u&&x==0u&&e==0u){ /* C9 FA 00 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A117u,3u,0x00u,0xA11Au);
      sc_v11_op_compare(r,c->a,0x00FAu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A11Au:
    if(m==0u&&x==0u&&e==0u){ /* 90 03 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A11Au,2u,0x03u,0xA11Cu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA11Fu;}
      if(c->pc!=0xA11Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA11Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A11Fu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A11Fu,2u,0x20u,0xA121u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A121u:
    if(m==1u&&x==0u&&e==0u){ /* 9F 00 B6 7F Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A121u,4u,0x7Fu,0xA125u);
      sc_v11_bus_write8(r,sc_v11_ea_longx(r,0x7FB600u),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A125u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A125u,2u,0x20u,0xA127u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A127u:
    if(m==0u&&x==0u&&e==0u){ /* E6 00 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A127u,2u,0x00u,0xA129u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A129u:
    if(m==0u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A129u,2u,0x00u,0xA12Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A12Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 3C 00 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A12Bu,3u,0x00u,0xA12Eu);
      sc_v11_op_compare(r,c->a,0x003Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A12Eu:
    if(m==0u&&x==0u&&e==0u){ /* D0 96 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A12Eu,2u,0x96u,0xA130u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA0C6u;}
      if(c->pc!=0xA130u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA130u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A130u:
    if(m==0u&&x==0u&&e==0u){ /* E6 02 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A130u,2u,0x02u,0xA132u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A132u:
    if(m==0u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A132u,2u,0x02u,0xA134u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A134u:
    if(m==0u&&x==0u&&e==0u){ /* C9 32 00 Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A134u,3u,0x00u,0xA137u);
      sc_v11_op_compare(r,c->a,0x0032u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A137u:
    if(m==0u&&x==0u&&e==0u){ /* D0 8B Mesen corrected gameplay frame 2774; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A137u,2u,0x8Bu,0xA139u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA0C4u;}
      if(c->pc!=0xA139u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA139u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A139u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A139u,1u,0x2Bu,0xA13Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A13Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2794; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A13Au,1u,0x60u,0xA13Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A13Bu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A13Bu,2u,0x20u,0xA13Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A13Du:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A13Du,3u,0x00u,0xA140u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A140u:
    if(m==0u&&x==0u&&e==0u){ /* 8A Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A140u,1u,0x8Au,0xA141u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A141u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 B6 7F Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A141u,4u,0x7Fu,0xA145u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7FB600u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A145u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A145u,1u,0xE8u,0xA146u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A146u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A146u,1u,0xE8u,0xA147u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A147u:
    if(m==0u&&x==0u&&e==0u){ /* E0 B8 0B Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A147u,3u,0x0Bu,0xA14Au);
      sc_v11_op_compare(r,c->x,0x0BB8u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A14Au:
    if(m==0u&&x==0u&&e==0u){ /* D0 F5 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A14Au,2u,0xF5u,0xA14Cu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA141u;}
      if(c->pc!=0xA14Cu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA14Cu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A14Cu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2826; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A14Cu,1u,0x60u,0xA14Du);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A14Du:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3215; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A14Du,2u,0x20u,0xA14Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A14Du,2u,0x20u,0xA14Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A14Fu:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A14Fu,1u,0x0Bu,0xA150u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A150u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A150u,1u,0x48u,0xA151u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A151u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A151u,1u,0x7Bu,0xA152u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A152u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A152u,1u,0x38u,0xA153u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A153u:
    if(m==0u&&x==0u&&e==0u){ /* E9 04 00 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A153u,3u,0x00u,0xA156u);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A156u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A156u,1u,0x5Bu,0xA157u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A157u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A157u,1u,0x68u,0xA158u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A158u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A158u,2u,0x20u,0xA15Au);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A15Au:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A15Au,2u,0x10u,0xA15Cu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A15Cu:
    if(m==1u&&x==0u&&e==0u){ /* 64 01 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A15Cu,2u,0x01u,0xA15Eu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x01u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A15Eu:
    if(m==1u&&x==0u&&e==0u){ /* 64 03 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A15Eu,2u,0x03u,0xA160u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A160u:
    if(m==1u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A160u,2u,0x02u,0xA162u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A162u:
    if(m==1u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A162u,2u,0x00u,0xA164u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A164u:
    if(m==1u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A164u,2u,0x02u,0xA166u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A166u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A166u,1u,0xEBu,0xA167u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A167u:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A167u,2u,0x00u,0xA169u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A169u:
    if(m==1u&&x==0u&&e==0u){ /* 20 D7 A2 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A169u,3u,0xA2u,0xA16Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA16Bu))return 0;c->pc=0xA2D7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A16Cu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A16Cu,2u,0x20u,0xA16Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A16Eu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A16Eu,1u,0x0Au,0xA16Fu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A16Fu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A16Fu,1u,0xAAu,0xA170u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A170u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A170u,3u,0x00u,0xA173u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A173u:
    if(m==0u&&x==0u&&e==0u){ /* A4 00 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A173u,2u,0x00u,0xA175u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A175u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A175u,2u,0x05u,0xA177u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA17Cu;}
      if(c->pc!=0xA177u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA177u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A177u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A177u,1u,0x18u,0xA178u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A178u:
    if(m==0u&&x==0u&&e==0u){ /* 7F 6C B1 7F Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A178u,4u,0x7Fu,0xA17Cu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB16Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A17Cu:
    if(m==0u&&x==0u&&e==0u){ /* C0 0E 00 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A17Cu,3u,0x00u,0xA17Fu);
      sc_v11_op_compare(r,c->y,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A17Fu:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A17Fu,2u,0x05u,0xA181u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA186u;}
      if(c->pc!=0xA181u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA181u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A181u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A181u,1u,0x18u,0xA182u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A182u:
    if(m==0u&&x==0u&&e==0u){ /* 7F 70 B1 7F Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A182u,4u,0x7Fu,0xA186u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB170u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A186u:
    if(m==0u&&x==0u&&e==0u){ /* A4 02 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A186u,2u,0x02u,0xA188u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A188u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A188u,2u,0x05u,0xA18Au);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA18Fu;}
      if(c->pc!=0xA18Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA18Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A18Au:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A18Au,1u,0x18u,0xA18Bu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A18Bu:
    if(m==0u&&x==0u&&e==0u){ /* 7F 50 B1 7F Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A18Bu,4u,0x7Fu,0xA18Fu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB150u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A18Fu:
    if(m==0u&&x==0u&&e==0u){ /* C0 0C 00 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A18Fu,3u,0x00u,0xA192u);
      sc_v11_op_compare(r,c->y,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A192u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A192u,2u,0x05u,0xA194u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA199u;}
      if(c->pc!=0xA194u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA194u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A194u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A194u,1u,0x18u,0xA195u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A195u:
    if(m==0u&&x==0u&&e==0u){ /* 7F 8C B1 7F Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A195u,4u,0x7Fu,0xA199u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB18Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A199u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A199u,1u,0x4Au,0xA19Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A19Au:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A19Au,1u,0x4Au,0xA19Bu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A19Bu:
    if(m==0u&&x==0u&&e==0u){ /* 7F 6E B1 7F Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A19Bu,4u,0x7Fu,0xA19Fu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB16Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A19Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A19Fu,1u,0x4Au,0xA1A0u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1A0u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 5E D0 7F Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1A0u,4u,0x7Fu,0xA1A4u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7FD05Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1A4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1A4u,2u,0x20u,0xA1A6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1A6u:
    if(m==1u&&x==0u&&e==0u){ /* E6 00 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1A6u,2u,0x00u,0xA1A8u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1A8u:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1A8u,2u,0x00u,0xA1AAu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1AAu:
    if(m==1u&&x==0u&&e==0u){ /* C9 0F Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1AAu,2u,0x0Fu,0xA1ACu);
      sc_v11_op_compare(r,c->a,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1ACu:
    if(m==1u&&x==0u&&e==0u){ /* D0 B6 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1ACu,2u,0xB6u,0xA1AEu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA164u;}
      if(c->pc!=0xA1AEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA1AEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1AEu:
    if(m==1u&&x==0u&&e==0u){ /* E6 02 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1AEu,2u,0x02u,0xA1B0u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1B0u:
    if(m==1u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1B0u,2u,0x02u,0xA1B2u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1B2u:
    if(m==1u&&x==0u&&e==0u){ /* C9 0D Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1B2u,2u,0x0Du,0xA1B4u);
      sc_v11_op_compare(r,c->a,0x000Du,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1B4u:
    if(m==1u&&x==0u&&e==0u){ /* D0 AC Mesen corrected gameplay frame 3214; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1B4u,2u,0xACu,0xA1B6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA162u;}
      if(c->pc!=0xA1B6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA1B6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1B6u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 3215; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1B6u,2u,0x20u,0xA1B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1B8u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 3215; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1B8u,3u,0x00u,0xA1BBu);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1BBu:
    if(m==0u&&x==0u&&e==0u){ /* BF 5E D0 7F Mesen corrected gameplay frame 3215; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1BBu,4u,0x7Fu,0xA1BFu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FD05Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1BFu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 6E B1 7F Mesen corrected gameplay frame 3215; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1BFu,4u,0x7Fu,0xA1C3u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7FB16Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1C3u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3215; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1C3u,1u,0xE8u,0xA1C4u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1C4u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 3215; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1C4u,1u,0xE8u,0xA1C5u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1C5u:
    if(m==0u&&x==0u&&e==0u){ /* E0 86 01 Mesen corrected gameplay frame 3215; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1C5u,3u,0x01u,0xA1C8u);
      sc_v11_op_compare(r,c->x,0x0186u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1C8u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F1 Mesen corrected gameplay frame 3215; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1C8u,2u,0xF1u,0xA1CAu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA1BBu;}
      if(c->pc!=0xA1CAu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA1CAu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1CAu:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 3215; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1CAu,1u,0x2Bu,0xA1CBu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1CBu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 3215; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1CBu,1u,0x60u,0xA1CCu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1CCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1CCu,2u,0x20u,0xA1CEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1CEu:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1CEu,1u,0x0Bu,0xA1CFu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1CFu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1CFu,1u,0x48u,0xA1D0u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D0u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D0u,1u,0x7Bu,0xA1D1u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D1u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D1u,1u,0x38u,0xA1D2u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D2u:
    if(m==0u&&x==0u&&e==0u){ /* E9 04 00 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D2u,3u,0x00u,0xA1D5u);
      sc_v11_op_sbc(r,0x0004u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D5u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D5u,1u,0x5Bu,0xA1D6u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D6u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D6u,1u,0x68u,0xA1D7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D7u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D7u,2u,0x20u,0xA1D9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1D9u:
    if(m==1u&&x==0u&&e==0u){ /* C2 10 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1D9u,2u,0x10u,0xA1DBu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1DBu:
    if(m==1u&&x==0u&&e==0u){ /* 64 01 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1DBu,2u,0x01u,0xA1DDu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x01u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1DDu:
    if(m==1u&&x==0u&&e==0u){ /* 64 03 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1DDu,2u,0x03u,0xA1DFu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x03u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1DFu:
    if(m==1u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1DFu,2u,0x02u,0xA1E1u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1E1u:
    if(m==1u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1E1u,2u,0x00u,0xA1E3u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1E3u:
    if(m==1u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1E3u,2u,0x02u,0xA1E5u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1E5u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1E5u,1u,0xEBu,0xA1E6u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1E6u:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1E6u,2u,0x00u,0xA1E8u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1E8u:
    if(m==1u&&x==0u&&e==0u){ /* 20 D7 A2 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1E8u,3u,0xA2u,0xA1EBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA1EAu))return 0;c->pc=0xA2D7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1EBu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1EBu,2u,0x20u,0xA1EDu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1EDu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1EDu,1u,0x0Au,0xA1EEu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1EEu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1EEu,1u,0xAAu,0xA1EFu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1EFu:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1EFu,3u,0x00u,0xA1F2u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1F2u:
    if(m==0u&&x==0u&&e==0u){ /* A4 00 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1F2u,2u,0x00u,0xA1F4u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1F4u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1F4u,2u,0x05u,0xA1F6u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA1FBu;}
      if(c->pc!=0xA1F6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA1F6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1F6u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1F6u,1u,0x18u,0xA1F7u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1F7u:
    if(m==0u&&x==0u&&e==0u){ /* 7F F2 B2 7F Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1F7u,4u,0x7Fu,0xA1FBu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB2F2u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1FBu:
    if(m==0u&&x==0u&&e==0u){ /* C0 0E 00 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1FBu,3u,0x00u,0xA1FEu);
      sc_v11_op_compare(r,c->y,0x000Eu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A1FEu:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A1FEu,2u,0x05u,0xA200u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA205u;}
      if(c->pc!=0xA200u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA200u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A200u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A200u,1u,0x18u,0xA201u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A201u:
    if(m==0u&&x==0u&&e==0u){ /* 7F F6 B2 7F Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A201u,4u,0x7Fu,0xA205u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB2F6u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A205u:
    if(m==0u&&x==0u&&e==0u){ /* A4 02 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A205u,2u,0x02u,0xA207u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A207u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A207u,2u,0x05u,0xA209u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA20Eu;}
      if(c->pc!=0xA209u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA209u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A209u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A209u,1u,0x18u,0xA20Au);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A20Au:
    if(m==0u&&x==0u&&e==0u){ /* 7F D6 B2 7F Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A20Au,4u,0x7Fu,0xA20Eu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB2D6u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A20Eu:
    if(m==0u&&x==0u&&e==0u){ /* C0 0C 00 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A20Eu,3u,0x00u,0xA211u);
      sc_v11_op_compare(r,c->y,0x000Cu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A211u:
    if(m==0u&&x==0u&&e==0u){ /* F0 05 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A211u,2u,0x05u,0xA213u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xA218u;}
      if(c->pc!=0xA213u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA213u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A213u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A213u,1u,0x18u,0xA214u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A214u:
    if(m==0u&&x==0u&&e==0u){ /* 7F 12 B3 7F Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A214u,4u,0x7Fu,0xA218u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB312u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A218u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A218u,1u,0x4Au,0xA219u);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A219u:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A219u,1u,0x4Au,0xA21Au);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A21Au:
    if(m==0u&&x==0u&&e==0u){ /* 7F F4 B2 7F Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A21Au,4u,0x7Fu,0xA21Eu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FB2F4u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A21Eu:
    if(m==0u&&x==0u&&e==0u){ /* 4A Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A21Eu,1u,0x4Au,0xA21Fu);
      sc_v11_op_shift_accumulator(r,16u,1u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A21Fu:
    if(m==0u&&x==0u&&e==0u){ /* 9F 5E D0 7F Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A21Fu,4u,0x7Fu,0xA223u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7FD05Eu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A223u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A223u,2u,0x20u,0xA225u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A225u:
    if(m==1u&&x==0u&&e==0u){ /* E6 00 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A225u,2u,0x00u,0xA227u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A227u:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A227u,2u,0x00u,0xA229u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A229u:
    if(m==1u&&x==0u&&e==0u){ /* C9 0F Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A229u,2u,0x0Fu,0xA22Bu);
      sc_v11_op_compare(r,c->a,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A22Bu:
    if(m==1u&&x==0u&&e==0u){ /* D0 B6 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A22Bu,2u,0xB6u,0xA22Du);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA1E3u;}
      if(c->pc!=0xA22Du){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA22Du^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A22Du:
    if(m==1u&&x==0u&&e==0u){ /* E6 02 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A22Du,2u,0x02u,0xA22Fu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A22Fu:
    if(m==1u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A22Fu,2u,0x02u,0xA231u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A231u:
    if(m==1u&&x==0u&&e==0u){ /* C9 0D Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A231u,2u,0x0Du,0xA233u);
      sc_v11_op_compare(r,c->a,0x000Du,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A233u:
    if(m==1u&&x==0u&&e==0u){ /* D0 AC Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A233u,2u,0xACu,0xA235u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA1E1u;}
      if(c->pc!=0xA235u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA235u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A235u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2811; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A235u,2u,0x20u,0xA237u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A237u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 Mesen corrected gameplay frame 2811; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A237u,3u,0x00u,0xA23Au);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A23Au:
    if(m==0u&&x==0u&&e==0u){ /* BF 5E D0 7F Mesen corrected gameplay frame 2811; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A23Au,4u,0x7Fu,0xA23Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x7FD05Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A23Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9F F4 B2 7F Mesen corrected gameplay frame 2811; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A23Eu,4u,0x7Fu,0xA242u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7FB2F4u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A242u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2811; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A242u,1u,0xE8u,0xA243u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A243u:
    if(m==0u&&x==0u&&e==0u){ /* E8 Mesen corrected gameplay frame 2811; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A243u,1u,0xE8u,0xA244u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A244u:
    if(m==0u&&x==0u&&e==0u){ /* E0 86 01 Mesen corrected gameplay frame 2811; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A244u,3u,0x01u,0xA247u);
      sc_v11_op_compare(r,c->x,0x0186u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A247u:
    if(m==0u&&x==0u&&e==0u){ /* D0 F1 Mesen corrected gameplay frame 2811; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A247u,2u,0xF1u,0xA249u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA23Au;}
      if(c->pc!=0xA249u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA249u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A249u:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2811; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A249u,1u,0x2Bu,0xA24Au);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A24Au:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2811; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A24Au,1u,0x60u,0xA24Bu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A24Bu:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A24Bu,2u,0x20u,0xA24Du);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A24Du:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A24Du,1u,0x0Bu,0xA24Eu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A24Eu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A24Eu,1u,0x48u,0xA24Fu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A24Fu:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A24Fu,1u,0x7Bu,0xA250u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A250u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A250u,1u,0x38u,0xA251u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A251u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0E 00 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A251u,3u,0x00u,0xA254u);
      sc_v11_op_sbc(r,0x000Eu,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A254u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A254u,1u,0x5Bu,0xA255u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A255u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A255u,1u,0x68u,0xA256u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A256u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A256u,2u,0x20u,0xA258u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A258u:
    if(m==1u&&x==0u&&e==0u){ /* 64 02 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A258u,2u,0x02u,0xA25Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x02u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A25Au:
    if(m==1u&&x==0u&&e==0u){ /* 64 00 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A25Au,2u,0x00u,0xA25Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x00u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A25Cu:
    if(m==1u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A25Cu,2u,0x02u,0xA25Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A25Eu:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A25Eu,1u,0x0Au,0xA25Fu);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A25Fu:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A25Fu,1u,0x0Au,0xA260u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A260u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A260u,1u,0xEBu,0xA261u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A261u:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A261u,2u,0x00u,0xA263u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A263u:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A263u,1u,0x0Au,0xA264u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A264u:
    if(m==1u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A264u,1u,0x0Au,0xA265u);
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A265u:
    if(m==1u&&x==0u&&e==0u){ /* 20 61 9E Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A265u,3u,0x9Eu,0xA268u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA267u))return 0;c->pc=0x9E61u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A268u:
    if(m==1u&&x==0u&&e==0u){ /* 85 06 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A268u,2u,0x06u,0xA26Au);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x06u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A26Au:
    if(m==1u&&x==0u&&e==0u){ /* 64 07 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Au,2u,0x07u,0xA26Cu);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x07u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A26Cu:
    if(m==1u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Cu,2u,0x02u,0xA26Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A26Eu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Eu,1u,0xEBu,0xA26Fu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A26Fu:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A26Fu,2u,0x00u,0xA271u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A271u:
    if(m==1u&&x==0u&&e==0u){ /* 20 D7 A2 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A271u,3u,0xA2u,0xA274u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xA273u))return 0;c->pc=0xA2D7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A274u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A274u,2u,0x20u,0xA276u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A276u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A276u,1u,0x0Au,0xA277u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A277u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A277u,1u,0xAAu,0xA278u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A278u:
    if(m==0u&&x==0u&&e==0u){ /* 06 06 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A278u,2u,0x06u,0xA27Au);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x06u),16u,0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A27Au:
    if(m==0u&&x==0u&&e==0u){ /* 06 06 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A27Au,2u,0x06u,0xA27Cu);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x06u),16u,0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A27Cu:
    if(m==0u&&x==0u&&e==0u){ /* A9 40 00 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A27Cu,3u,0x00u,0xA27Fu);
      sc_v11_op_lda(r,0x0040u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A27Fu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A27Fu,1u,0x38u,0xA280u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A280u:
    if(m==0u&&x==0u&&e==0u){ /* E5 06 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A280u,2u,0x06u,0xA282u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A282u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 7A B4 7F Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A282u,4u,0x7Fu,0xA286u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x7FB47Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A286u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A286u,2u,0x20u,0xA288u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A288u:
    if(m==1u&&x==0u&&e==0u){ /* E6 00 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A288u,2u,0x00u,0xA28Au);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x00u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A28Au:
    if(m==1u&&x==0u&&e==0u){ /* A5 00 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A28Au,2u,0x00u,0xA28Cu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x00u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A28Cu:
    if(m==1u&&x==0u&&e==0u){ /* C9 0F Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A28Cu,2u,0x0Fu,0xA28Eu);
      sc_v11_op_compare(r,c->a,0x000Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A28Eu:
    if(m==1u&&x==0u&&e==0u){ /* D0 CC Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A28Eu,2u,0xCCu,0xA290u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA25Cu;}
      if(c->pc!=0xA290u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA290u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A290u:
    if(m==1u&&x==0u&&e==0u){ /* E6 02 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A290u,2u,0x02u,0xA292u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x02u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A292u:
    if(m==1u&&x==0u&&e==0u){ /* A5 02 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A292u,2u,0x02u,0xA294u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x02u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A294u:
    if(m==1u&&x==0u&&e==0u){ /* C9 0D Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A294u,2u,0x0Du,0xA296u);
      sc_v11_op_compare(r,c->a,0x000Du,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A296u:
    if(m==1u&&x==0u&&e==0u){ /* D0 C2 Mesen corrected gameplay frame 2940; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A296u,2u,0xC2u,0xA298u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA25Au;}
      if(c->pc!=0xA298u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA298u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A298u:
    if(m==1u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A298u,1u,0x2Bu,0xA299u);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A299u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2942; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A299u,1u,0x60u,0xA29Au);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A29Au:
    if(m==1u&&x==0u&&e==0u){ /* 8D 3F 0B Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A29Au,3u,0x0Bu,0xA29Du);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B3Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A29Du:
    if(m==1u&&x==0u&&e==0u){ /* 9C 40 0B Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A29Du,3u,0x0Bu,0xA2A0u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B40u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2A0u:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2A0u,2u,0x00u,0xA2A2u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2A2u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2A2u,1u,0xEBu,0xA2A3u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2A3u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2A3u,2u,0x20u,0xA2A5u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2A5u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 0B Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2A5u,3u,0x0Bu,0xA2A8u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B3Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2A8u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2A8u,1u,0x0Au,0xA2A9u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2A9u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2A9u,1u,0x0Au,0xA2AAu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2AAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2AAu,1u,0x0Au,0xA2ABu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2ABu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2ABu,1u,0x0Au,0xA2ACu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2ACu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2ACu,1u,0x38u,0xA2ADu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2ADu:
    if(m==0u&&x==0u&&e==0u){ /* ED 3D 0B Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2ADu,3u,0x0Bu,0xA2B0u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Du)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B0u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B0u,1u,0x0Au,0xA2B1u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B1u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B1u,1u,0x0Au,0xA2B2u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B2u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 3F 0B Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B2u,3u,0x0Bu,0xA2B5u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B5u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B5u,1u,0xAAu,0xA2B6u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B6u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B6u,2u,0x20u,0xA2B8u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B8u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B8u,1u,0x60u,0xA2B9u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2B9u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 3F 0B Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2B9u,3u,0x0Bu,0xA2BCu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B3Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2BCu:
    if(m==1u&&x==0u&&e==0u){ /* 9C 40 0B Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2BCu,3u,0x0Bu,0xA2BFu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B40u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2BFu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2BFu,2u,0x00u,0xA2C1u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2C1u:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C1u,1u,0xEBu,0xA2C2u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2C2u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C2u,2u,0x20u,0xA2C4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2C4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 0B Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C4u,3u,0x0Bu,0xA2C7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B3Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2C7u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C7u,1u,0x0Au,0xA2C8u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2C8u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C8u,1u,0x0Au,0xA2C9u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2C9u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2C9u,1u,0x0Au,0xA2CAu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2CAu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2CAu,1u,0x0Au,0xA2CBu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2CBu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2CBu,1u,0x38u,0xA2CCu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2CCu:
    if(m==0u&&x==0u&&e==0u){ /* ED 3D 0B Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2CCu,3u,0x0Bu,0xA2CFu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Du)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2CFu:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2CFu,1u,0x0Au,0xA2D0u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2D0u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 3F 0B Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2D0u,3u,0x0Bu,0xA2D3u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2D3u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2D3u,1u,0xAAu,0xA2D4u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2D4u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2D4u,2u,0x20u,0xA2D6u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2D6u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2704; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2D6u,1u,0x60u,0xA2D7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2D7u:
    if(m==1u&&x==0u&&e==0u){ /* 8D 3F 0B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2D7u,3u,0x0Bu,0xA2DAu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B3Fu),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2DAu:
    if(m==1u&&x==0u&&e==0u){ /* 9C 40 0B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2DAu,3u,0x0Bu,0xA2DDu);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B40u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2DDu:
    if(m==1u&&x==0u&&e==0u){ /* A9 00 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2DDu,2u,0x00u,0xA2DFu);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2DFu:
    if(m==1u&&x==0u&&e==0u){ /* EB Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2DFu,1u,0xEBu,0xA2E0u);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E0u:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E0u,2u,0x20u,0xA2E2u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 3D 0B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E2u,3u,0x0Bu,0xA2E5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B3Du),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E5u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E5u,1u,0x0Au,0xA2E6u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E6u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E6u,1u,0x0Au,0xA2E7u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E7u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E7u,1u,0x0Au,0xA2E8u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E8u:
    if(m==0u&&x==0u&&e==0u){ /* 0A Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E8u,1u,0x0Au,0xA2E9u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2E9u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2E9u,1u,0x38u,0xA2EAu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2EAu:
    if(m==0u&&x==0u&&e==0u){ /* ED 3D 0B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2EAu,3u,0x0Bu,0xA2EDu);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Du)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2EDu:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2EDu,1u,0x18u,0xA2EEu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2EEu:
    if(m==0u&&x==0u&&e==0u){ /* 6D 3F 0B Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2EEu,3u,0x0Bu,0xA2F1u);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B3Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2F1u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F1u,1u,0xAAu,0xA2F2u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2F2u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F2u,2u,0x20u,0xA2F4u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2F4u:
    if(m==1u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2810; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F4u,1u,0x60u,0xA2F5u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2F5u:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F5u,2u,0x30u,0xA2F7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2F7u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F7u,1u,0x68u,0xA2F8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2F8u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F8u,1u,0xA8u,0xA2F9u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2F9u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2F9u,1u,0x18u,0xA2FAu);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2FAu:
    if(m==0u&&x==0u&&e==0u){ /* 69 03 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2FAu,3u,0x00u,0xA2FDu);
      sc_v11_op_adc(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2FDu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2FDu,1u,0x48u,0xA2FEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A2FEu:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A2FEu,2u,0x20u,0xA300u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A300u:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A300u,1u,0x0Bu,0xA301u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A301u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A301u,1u,0x48u,0xA302u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A302u:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A302u,1u,0x7Bu,0xA303u);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A303u:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A303u,1u,0x38u,0xA304u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A304u:
    if(m==0u&&x==0u&&e==0u){ /* E9 0A 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A304u,3u,0x00u,0xA307u);
      sc_v11_op_sbc(r,0x000Au,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A307u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A307u,1u,0x5Bu,0xA308u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A308u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A308u,1u,0x68u,0xA309u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A309u:
    if(m==0u&&x==0u&&e==0u){ /* B9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A309u,3u,0x00u,0xA30Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0001u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A30Cu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A30Cu,3u,0x00u,0xA30Fu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A30Fu:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A30Fu,1u,0xAAu,0xA310u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A310u:
    if(m==0u&&x==0u&&e==0u){ /* B5 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A310u,2u,0x0Au,0xA312u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x0Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A312u:
    if(m==0u&&x==0u&&e==0u){ /* 85 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A312u,2u,0x02u,0xA314u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A314u:
    if(m==0u&&x==0u&&e==0u){ /* B9 02 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A314u,3u,0x00u,0xA317u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0002u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A317u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A317u,3u,0x00u,0xA31Au);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A31Au:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A31Au,1u,0xAAu,0xA31Bu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A31Bu:
    if(m==0u&&x==0u&&e==0u){ /* B5 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A31Bu,2u,0x0Au,0xA31Du);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x0Au)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A31Du:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A31Du,2u,0x04u,0xA31Fu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A31Fu:
    if(m==0u&&x==0u&&e==0u){ /* B9 03 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A31Fu,3u,0x00u,0xA322u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0003u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A322u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A322u,3u,0x00u,0xA325u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A325u:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A325u,2u,0x00u,0xA327u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A327u:
    if(m==0u&&x==0u&&e==0u){ /* 64 06 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A327u,2u,0x06u,0xA329u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A329u:
    if(m==0u&&x==0u&&e==0u){ /* 64 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A329u,2u,0x08u,0xA32Bu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x08u),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A32Bu:
    if(m==0u&&x==0u&&e==0u){ /* A2 10 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A32Bu,3u,0x00u,0xA32Eu);
      sc_v11_op_ldx(r,0x0010u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A32Eu:
    if(m==0u&&x==0u&&e==0u){ /* 06 06 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A32Eu,2u,0x06u,0xA330u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x06u),16u,0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A330u:
    if(m==0u&&x==0u&&e==0u){ /* 26 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A330u,2u,0x08u,0xA332u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x08u),16u,2u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A332u:
    if(m==0u&&x==0u&&e==0u){ /* 06 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A332u,2u,0x04u,0xA334u);
      sc_v11_op_shift_memory(r,sc_v11_ea_dp(r,0x04u),16u,0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A334u:
    if(m==0u&&x==0u&&e==0u){ /* 90 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A334u,2u,0x0Bu,0xA336u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA341u;}
      if(c->pc!=0xA336u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA336u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A336u:
    if(m==0u&&x==0u&&e==0u){ /* A5 06 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A336u,2u,0x06u,0xA338u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A338u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A338u,1u,0x18u,0xA339u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A339u:
    if(m==0u&&x==0u&&e==0u){ /* 65 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A339u,2u,0x02u,0xA33Bu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x02u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A33Bu:
    if(m==0u&&x==0u&&e==0u){ /* 85 06 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A33Bu,2u,0x06u,0xA33Du);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x06u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A33Du:
    if(m==0u&&x==0u&&e==0u){ /* 90 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A33Du,2u,0x02u,0xA33Fu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xA341u;}
      if(c->pc!=0xA33Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA33Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A341u:
    if(m==0u&&x==0u&&e==0u){ /* CA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A341u,1u,0xCAu,0xA342u);
      c->x=(uint16_t)((c->x-1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A342u:
    if(m==0u&&x==0u&&e==0u){ /* D0 EA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A342u,2u,0xEAu,0xA344u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xA32Eu;}
      if(c->pc!=0xA344u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xA344u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A344u:
    if(m==0u&&x==0u&&e==0u){ /* A6 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A344u,2u,0x00u,0xA346u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x00u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A346u:
    if(m==0u&&x==0u&&e==0u){ /* A5 06 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A346u,2u,0x06u,0xA348u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x06u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A348u:
    if(m==0u&&x==0u&&e==0u){ /* 95 0A Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A348u,2u,0x0Au,0xA34Au);
      sc_v11_bus_write16(r,sc_v11_ea_dpx(r,0x0Au),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A34Au:
    if(m==0u&&x==0u&&e==0u){ /* A5 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A34Au,2u,0x08u,0xA34Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A34Cu:
    if(m==0u&&x==0u&&e==0u){ /* 95 0C Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A34Cu,2u,0x0Cu,0xA34Eu);
      sc_v11_bus_write16(r,sc_v11_ea_dpx(r,0x0Cu),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A34Eu:
    if(m==0u&&x==0u&&e==0u){ /* 2B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A34Eu,1u,0x2Bu,0xA34Fu);
      sc_v11_scheduler_internal_cycle(r,2u);c->d=sc_v11_pop16(r);sc_v11_set_nz16(c,c->d);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A34Fu:
    if(m==0u&&x==0u&&e==0u){ /* 60 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A34Fu,1u,0x60u,0xA350u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3CFu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3CFu,2u,0x30u,0xA3D1u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3D1u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3D1u,1u,0x68u,0xA3D2u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3D2u:
    if(m==0u&&x==0u&&e==0u){ /* A8 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3D2u,1u,0xA8u,0xA3D3u);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3D3u:
    if(m==0u&&x==0u&&e==0u){ /* 18 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3D3u,1u,0x18u,0xA3D4u);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3D4u:
    if(m==0u&&x==0u&&e==0u){ /* 69 03 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3D4u,3u,0x00u,0xA3D7u);
      sc_v11_op_adc(r,0x0003u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3D7u:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3D7u,1u,0x48u,0xA3D8u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3D8u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3D8u,2u,0x20u,0xA3DAu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3DAu:
    if(m==0u&&x==0u&&e==0u){ /* 0B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3DAu,1u,0x0Bu,0xA3DBu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->d))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3DBu:
    if(m==0u&&x==0u&&e==0u){ /* 48 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3DBu,1u,0x48u,0xA3DCu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3DCu:
    if(m==0u&&x==0u&&e==0u){ /* 7B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3DCu,1u,0x7Bu,0xA3DDu);
      c->a=c->d;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3DDu:
    if(m==0u&&x==0u&&e==0u){ /* 38 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3DDu,1u,0x38u,0xA3DEu);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3DEu:
    if(m==0u&&x==0u&&e==0u){ /* E9 08 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3DEu,3u,0x00u,0xA3E1u);
      sc_v11_op_sbc(r,0x0008u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3E1u:
    if(m==0u&&x==0u&&e==0u){ /* 5B Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3E1u,1u,0x5Bu,0xA3E2u);
      c->d=c->a;sc_v11_set_nz16(c,c->d);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3E2u:
    if(m==0u&&x==0u&&e==0u){ /* 68 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3E2u,1u,0x68u,0xA3E3u);
      sc_v11_scheduler_internal_cycle(r,2u);c->a=sc_v11_pop16(r);sc_v11_set_nz16(c,c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3E3u:
    if(m==0u&&x==0u&&e==0u){ /* B9 01 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3E3u,3u,0x00u,0xA3E6u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0001u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3E6u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3E6u,3u,0x00u,0xA3E9u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3E9u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3E9u,1u,0xAAu,0xA3EAu);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3EAu:
    if(m==0u&&x==0u&&e==0u){ /* B5 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3EAu,2u,0x08u,0xA3ECu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3ECu:
    if(m==0u&&x==0u&&e==0u){ /* 85 02 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3ECu,2u,0x02u,0xA3EEu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x02u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3EEu:
    if(m==0u&&x==0u&&e==0u){ /* B9 02 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3EEu,3u,0x00u,0xA3F1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0002u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3F1u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3F1u,3u,0x00u,0xA3F4u);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3F4u:
    if(m==0u&&x==0u&&e==0u){ /* AA Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3F4u,1u,0xAAu,0xA3F5u);
      c->x=c->a;sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3F5u:
    if(m==0u&&x==0u&&e==0u){ /* B5 08 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3F5u,2u,0x08u,0xA3F7u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_dpx(r,0x08u)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3F7u:
    if(m==0u&&x==0u&&e==0u){ /* 85 04 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3F7u,2u,0x04u,0xA3F9u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x04u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3F9u:
    if(m==0u&&x==0u&&e==0u){ /* B9 03 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3F9u,3u,0x00u,0xA3FCu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x0003u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3FCu:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3FCu,3u,0x00u,0xA3FFu);
      sc_v11_op_and(r,0x00FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03A3FFu:
    if(m==0u&&x==0u&&e==0u){ /* 85 00 Mesen corrected gameplay frame 2549; Version 34 gameplay route */
      SC_STATIC_CONTEXT_BEGIN(0x03A3FFu,2u,0x00u,0xA401u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x00u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
