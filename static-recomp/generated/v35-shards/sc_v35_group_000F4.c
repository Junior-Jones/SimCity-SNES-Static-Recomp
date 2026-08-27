/* AUTO-GENERATED exact-PC/E/M/X town-route shard. */
#include "sc_v11_runtime.h"

int sc_v35_group_000F4(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x,uint8_t e){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x03D001u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D001u,1u,0xE8u,0xD002u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D002u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D002u,1u,0xE8u,0xD003u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D003u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D003u,1u,0xC8u,0xD004u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D004u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D004u,1u,0xC8u,0xD005u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D005u:
    if(m==0u&&x==0u&&e==0u){ /* C0 C0 5D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D005u,3u,0x5Du,0xD008u);
      sc_v11_op_compare(r,c->y,0x5DC0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D008u:
    if(m==0u&&x==0u&&e==0u){ /* D0 99 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D008u,2u,0x99u,0xD00Au);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xCFA3u;}
      if(c->pc!=0xD00Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD00Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D00Au:
    if(m==0u&&x==0u&&e==0u){ /* 8E 47 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D00Au,3u,0x0Bu,0xD00Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B47u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D00Du:
    if(m==0u&&x==0u&&e==0u){ /* A0 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D00Du,3u,0x00u,0xD010u);
      sc_v11_op_ldy(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D010u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D010u,3u,0x00u,0xD013u);
      sc_v11_op_ldx(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D013u:
    if(m==0u&&x==0u&&e==0u){ /* BD 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D013u,3u,0x80u,0xD016u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x8000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D016u:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 3C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D016u,3u,0x3Cu,0xD019u);
      sc_v11_op_and(r,0x3C00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D019u:
    if(m==0u&&x==0u&&e==0u){ /* C9 00 3C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D019u,3u,0x3Cu,0xD01Cu);
      sc_v11_op_compare(r,c->a,0x3C00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D01Cu:
    if(m==0u&&x==0u&&e==0u){ /* F0 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D01Cu,2u,0x17u,0xD01Eu);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD035u;}
      if(c->pc!=0xD01Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD01Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D01Eu:
    if(m==0u&&x==0u&&e==0u){ /* BD 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D01Eu,3u,0x80u,0xD021u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x8000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D021u:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D021u,3u,0x83u,0xD024u);
      sc_v11_op_and(r,0x83FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D024u:
    if(m==0u&&x==0u&&e==0u){ /* D9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D024u,3u,0x80u,0xD027u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D027u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D027u,2u,0x0Cu,0xD029u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD035u;}
      if(c->pc!=0xD029u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD029u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D029u:
    if(m==0u&&x==0u&&e==0u){ /* BD 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D029u,3u,0x80u,0xD02Cu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x8000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D02Cu:
    if(m==0u&&x==0u&&e==0u){ /* 18 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D02Cu,1u,0x18u,0xD02Du);
      c->p=(uint8_t)(c->p&~SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D02Du:
    if(m==0u&&x==0u&&e==0u){ /* 69 00 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D02Du,3u,0x04u,0xD030u);
      sc_v11_op_adc(r,0x0400u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D030u:
    if(m==0u&&x==0u&&e==0u){ /* 9D 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D030u,3u,0x80u,0xD033u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x8000u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D033u:
    if(m==0u&&x==0u&&e==0u){ /* 80 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D033u,2u,0x0Bu,0xD035u);
      if(1){c->pc=0xD040u;}
      if(c->pc!=0xD035u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD035u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D035u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D035u,1u,0xE8u,0xD036u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D036u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D036u,1u,0xE8u,0xD037u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D037u:
    if(m==0u&&x==0u&&e==0u){ /* B9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D037u,3u,0x80u,0xD03Au);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D03Au:
    if(m==0u&&x==0u&&e==0u){ /* 29 FF 83 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D03Au,3u,0x83u,0xD03Du);
      sc_v11_op_and(r,0x83FFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D03Du:
    if(m==0u&&x==0u&&e==0u){ /* 9D 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D03Du,3u,0x80u,0xD040u);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x8000u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D040u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D040u,1u,0xC8u,0xD041u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D041u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D041u,1u,0xC8u,0xD042u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D042u:
    if(m==0u&&x==0u&&e==0u){ /* CC 47 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D042u,3u,0x0Bu,0xD045u);
      sc_v11_op_compare(r,c->y,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B47u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D045u:
    if(m==0u&&x==0u&&e==0u){ /* D0 CC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D045u,2u,0xCCu,0xD047u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD013u;}
      if(c->pc!=0xD047u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD047u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D047u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D047u,3u,0xFFu,0xD04Au);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D04Au:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D04Au,1u,0xE8u,0xD04Bu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D04Bu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D04Bu,1u,0xE8u,0xD04Cu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D04Cu:
    if(m==0u&&x==0u&&e==0u){ /* 9D 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D04Cu,3u,0x80u,0xD04Fu);
      sc_v11_bus_write16(r,sc_v11_ea_absx(r,0x8000u),c->a);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D04Fu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D04Fu,1u,0xE8u,0xD050u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D050u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D050u,1u,0xE8u,0xD051u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D051u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 47 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D051u,3u,0x0Bu,0xD054u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B47u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D054u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D054u,1u,0xABu,0xD055u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D055u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D055u,1u,0x60u,0xD056u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D056u:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D056u,2u,0x20u,0xD058u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D056u,2u,0x20u,0xD058u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D058u:
    if(m==1u&&x==0u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D058u,1u,0x8Bu,0xD059u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D058u,1u,0x8Bu,0xD059u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->dbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D059u:
    if(m==1u&&x==0u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D059u,2u,0x7Eu,0xD05Bu);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 7E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D059u,2u,0x7Eu,0xD05Bu);
      sc_v11_op_lda(r,0x007Eu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D05Bu:
    if(m==1u&&x==0u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D05Bu,1u,0x48u,0xD05Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D05Bu,1u,0x48u,0xD05Cu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D05Cu:
    if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D05Cu,1u,0xABu,0xD05Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D05Cu,1u,0xABu,0xD05Du);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D05Du:
    if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D05Du,2u,0x20u,0xD05Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D05Du,2u,0x20u,0xD05Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D05Fu:
    if(m==0u&&x==0u&&e==0u){ /* A2 FC 3F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D05Fu,3u,0x3Fu,0xD062u);
      sc_v11_op_ldx(r,0x3FFCu,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 FC ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D05Fu,2u,0xFCu,0xD061u);
      sc_v11_op_ldx(r,0x00FCu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D061u:
    if(m==0u&&x==1u&&e==0u){ /* 3F 8E 8B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D061u,4u,0x00u,0xD065u);
      sc_v11_op_and(r,sc_v11_bus_read16(r,sc_v11_ea_longx(r,0x008B8Eu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D062u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 8B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D062u,3u,0x00u,0xD065u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x008Bu),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D065u:
    if(m==0u&&x==0u&&e==0u){ /* A2 00 0C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D065u,3u,0x0Cu,0xD068u);
      sc_v11_op_ldx(r,0x0C00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A2 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D065u,2u,0x00u,0xD067u);
      sc_v11_op_ldx(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D068u:
    if(m==0u&&x==0u&&e==0u){ /* AD 23 04 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D068u,3u,0x04u,0xD06Bu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0423u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D06Bu:
    if(m==0u&&x==0u&&e==0u){ /* C9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D06Bu,3u,0x00u,0xD06Eu);
      sc_v11_op_compare(r,c->a,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D06Eu:
    if(m==0u&&x==0u&&e==0u){ /* F0 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D06Eu,2u,0x09u,0xD070u);
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0xD079u;}
      if(c->pc!=0xD070u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD070u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D070u:
    if(m==0u&&x==0u&&e==0u){ /* A2 EC 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D070u,3u,0x7Fu,0xD073u);
      sc_v11_op_ldx(r,0x7FECu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D073u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 8B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D073u,3u,0x00u,0xD076u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x008Bu),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D076u:
    if(m==0u&&x==0u&&e==0u){ /* A2 F0 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D076u,3u,0x4Bu,0xD079u);
      sc_v11_op_ldx(r,0x4BF0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D079u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D079u,3u,0x00u,0xD07Cu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0079u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D07Cu:
    if(m==0u&&x==0u&&e==0u){ /* 8E 8E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D07Cu,3u,0x00u,0xD07Fu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x008Eu),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D07Fu:
    if(m==0u&&x==0u&&e==0u){ /* A0 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D07Fu,3u,0x00u,0xD082u);
      sc_v11_op_ldy(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D082u:
    if(m==0u&&x==0u&&e==0u){ /* 8C 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D082u,3u,0x00u,0xD085u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x007Cu),c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D085u:
    if(m==0u&&x==0u&&e==0u){ /* AD 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D085u,3u,0x80u,0xD088u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x8000u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D088u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D088u,4u,0x70u,0xD08Cu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D08Cu:
    if(m==0u&&x==0u&&e==0u){ /* AD 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D08Cu,3u,0x00u,0xD08Fu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x007Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D08Fu:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D08Fu,1u,0x38u,0xD090u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D090u:
    if(m==0u&&x==0u&&e==0u){ /* E9 00 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D090u,3u,0x01u,0xD093u);
      sc_v11_op_sbc(r,0x0100u,16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D093u:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D093u,2u,0x03u,0xD095u);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xD098u;}
      if(c->pc!=0xD095u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD095u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D095u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D095u,3u,0x00u,0xD098u);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D098u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D098u,3u,0x00u,0xD09Bu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x007Fu),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D09Bu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D09Bu,3u,0x00u,0xD09Eu);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0085u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D09Eu:
    if(m==0u&&x==0u&&e==0u){ /* 9C 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D09Eu,3u,0x00u,0xD0A1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0082u),0u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0A1u:
    if(m==0u&&x==0u&&e==0u){ /* AC 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0A1u,3u,0x00u,0xD0A4u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x007Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0A4u:
    if(m==0u&&x==0u&&e==0u){ /* AE 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0A4u,3u,0x00u,0xD0A7u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x007Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0A7u:
    if(m==0u&&x==0u&&e==0u){ /* B9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0A7u,3u,0x80u,0xD0AAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0AAu:
    if(m==0u&&x==0u&&e==0u){ /* 29 00 3C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0AAu,3u,0x3Cu,0xD0ADu);
      sc_v11_op_and(r,0x3C00u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0ADu:
    if(m==0u&&x==0u&&e==0u){ /* D0 17 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0ADu,2u,0x17u,0xD0AFu);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD0C6u;}
      if(c->pc!=0xD0AFu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD0AFu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0AFu:
    if(m==0u&&x==0u&&e==0u){ /* B9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0AFu,3u,0x80u,0xD0B2u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0B2u:
    if(m==0u&&x==0u&&e==0u){ /* DD 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0B2u,3u,0x80u,0xD0B5u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0x8000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0B5u:
    if(m==0u&&x==0u&&e==0u){ /* D0 0F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0B5u,2u,0x0Fu,0xD0B7u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD0C6u;}
      if(c->pc!=0xD0B7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD0B7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0B7u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0B7u,1u,0xC8u,0xD0B8u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0B8u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0B8u,1u,0xC8u,0xD0B9u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0B9u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0B9u,1u,0xE8u,0xD0BAu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0BAu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0BAu,1u,0xE8u,0xD0BBu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0BBu:
    if(m==0u&&x==0u&&e==0u){ /* EE 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0BBu,3u,0x00u,0xD0BEu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x0082u),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0BEu:
    if(m==0u&&x==0u&&e==0u){ /* AD 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0BEu,3u,0x00u,0xD0C1u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0082u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0C1u:
    if(m==0u&&x==0u&&e==0u){ /* C9 0F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0C1u,3u,0x00u,0xD0C4u);
      sc_v11_op_compare(r,c->a,0x000Fu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0C4u:
    if(m==0u&&x==0u&&e==0u){ /* D0 E1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0C4u,2u,0xE1u,0xD0C6u);
      if((c->p&SC_FLAG_Z)==0u){c->pc=0xD0A7u;}
      if(c->pc!=0xD0C6u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD0C6u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0C6u:
    if(m==0u&&x==0u&&e==0u){ /* AD 82 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0C6u,3u,0x00u,0xD0C9u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0082u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0C9u:
    if(m==0u&&x==0u&&e==0u){ /* CD 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0C9u,3u,0x00u,0xD0CCu);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0085u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0CCu:
    if(m==0u&&x==0u&&e==0u){ /* 90 09 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0CCu,2u,0x09u,0xD0CEu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD0D7u;}
      if(c->pc!=0xD0CEu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD0CEu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0CEu:
    if(m==0u&&x==0u&&e==0u){ /* 8D 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0CEu,3u,0x00u,0xD0D1u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0085u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0D1u:
    if(m==0u&&x==0u&&e==0u){ /* AD 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0D1u,3u,0x00u,0xD0D4u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x007Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0D4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 88 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0D4u,3u,0x00u,0xD0D7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0088u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0D7u:
    if(m==0u&&x==0u&&e==0u){ /* EE 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0D7u,3u,0x00u,0xD0DAu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x007Fu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0DAu:
    if(m==0u&&x==0u&&e==0u){ /* EE 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0DAu,3u,0x00u,0xD0DDu);
      sc_v11_op_incdec_memory(r,sc_v11_ea_abs(r,0x007Fu),16u,1);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0DDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 7F 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0DDu,3u,0x00u,0xD0E0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x007Fu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0E0u:
    if(m==0u&&x==0u&&e==0u){ /* CD 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0E0u,3u,0x00u,0xD0E3u);
      sc_v11_op_compare(r,c->a,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x007Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0E3u:
    if(m==0u&&x==0u&&e==0u){ /* 90 B9 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0E3u,2u,0xB9u,0xD0E5u);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD09Eu;}
      if(c->pc!=0xD0E5u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD0E5u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0E5u:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0E5u,3u,0x00u,0xD0E8u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0085u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0E8u:
    if(m==0u&&x==0u&&e==0u){ /* C9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0E8u,3u,0x00u,0xD0EBu);
      sc_v11_op_compare(r,c->a,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0EBu:
    if(m==0u&&x==0u&&e==0u){ /* 90 31 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0EBu,2u,0x31u,0xD0EDu);
      if((c->p&SC_FLAG_C)==0u){c->pc=0xD11Eu;}
      if(c->pc!=0xD0EDu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD0EDu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0EDu:
    if(m==0u&&x==0u&&e==0u){ /* AD 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0EDu,3u,0x00u,0xD0F0u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x007Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0F0u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0F0u,1u,0x38u,0xD0F1u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0F1u:
    if(m==0u&&x==0u&&e==0u){ /* ED 88 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0F1u,3u,0x00u,0xD0F4u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0088u)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0F4u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 88 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0F4u,3u,0x00u,0xD0F7u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0088u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0F7u:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0F7u,3u,0x00u,0xD0FAu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0085u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0FAu:
    if(m==0u&&x==0u&&e==0u){ /* EB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0FAu,1u,0xEBu,0xD0FBu);
      c->a=(uint16_t)((c->a<<8)|(c->a>>8));sc_v11_set_nz8(c,(uint8_t)c->a);sc_v11_scheduler_idle_or_read(r);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0FBu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0FBu,1u,0x0Au,0xD0FCu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0FCu:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0FCu,1u,0x0Au,0xD0FDu);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D0FDu:
    if(m==0u&&x==0u&&e==0u){ /* 0D 88 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D0FDu,3u,0x00u,0xD100u);
      sc_v11_op_ora(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0088u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D100u:
    if(m==0u&&x==0u&&e==0u){ /* AE 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D100u,3u,0x00u,0xD103u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0079u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D103u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D103u,1u,0xE8u,0xD104u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D104u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D104u,1u,0xE8u,0xD105u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D105u:
    if(m==0u&&x==0u&&e==0u){ /* EC 8B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D105u,3u,0x00u,0xD108u);
      sc_v11_op_compare(r,c->x,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x008Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D108u:
    if(m==0u&&x==0u&&e==0u){ /* B0 4D ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D108u,2u,0x4Du,0xD10Au);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xD157u;}
      if(c->pc!=0xD10Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD10Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D10Au:
    if(m==0u&&x==0u&&e==0u){ /* 8E 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D10Au,3u,0x00u,0xD10Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0079u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D10Du:
    if(m==0u&&x==0u&&e==0u){ /* 09 00 40 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D10Du,3u,0x40u,0xD110u);
      sc_v11_op_ora(r,0x4000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D110u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D110u,4u,0x70u,0xD114u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D114u:
    if(m==0u&&x==0u&&e==0u){ /* AD 85 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D114u,3u,0x00u,0xD117u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0085u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D117u:
    if(m==0u&&x==0u&&e==0u){ /* 0A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D117u,1u,0x0Au,0xD118u);
      sc_v11_op_shift_accumulator(r,16u,0u);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D118u:
    if(m==0u&&x==0u&&e==0u){ /* 6D 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D118u,3u,0x00u,0xD11Bu);
      sc_v11_op_adc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x007Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D11Bu:
    if(m==0u&&x==0u&&e==0u){ /* A8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D11Bu,1u,0xA8u,0xD11Cu);
      c->y=c->a;sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D11Cu:
    if(m==0u&&x==0u&&e==0u){ /* 80 19 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D11Cu,2u,0x19u,0xD11Eu);
      if(1){c->pc=0xD137u;}
      if(c->pc!=0xD11Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD11Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D11Eu:
    if(m==0u&&x==0u&&e==0u){ /* AE 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D11Eu,3u,0x00u,0xD121u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0079u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D121u:
    if(m==0u&&x==0u&&e==0u){ /* AC 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D121u,3u,0x00u,0xD124u);
      sc_v11_op_ldy(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x007Cu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D124u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D124u,1u,0xE8u,0xD125u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D125u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D125u,1u,0xE8u,0xD126u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D126u:
    if(m==0u&&x==0u&&e==0u){ /* 8E 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D126u,3u,0x00u,0xD129u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0079u),c->x);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D129u:
    if(m==0u&&x==0u&&e==0u){ /* EC 8B 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D129u,3u,0x00u,0xD12Cu);
      sc_v11_op_compare(r,c->x,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x008Bu)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D12Cu:
    if(m==0u&&x==0u&&e==0u){ /* B0 29 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D12Cu,2u,0x29u,0xD12Eu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xD157u;}
      if(c->pc!=0xD12Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD12Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D12Eu:
    if(m==0u&&x==0u&&e==0u){ /* B9 00 80 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D12Eu,3u,0x80u,0xD131u);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absy(r,0x8000u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D131u:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D131u,4u,0x70u,0xD135u);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D135u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D135u,1u,0xC8u,0xD136u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D136u:
    if(m==0u&&x==0u&&e==0u){ /* C8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D136u,1u,0xC8u,0xD137u);
      c->y=(uint16_t)((c->y+1u)&0xFFFFu);sc_v11_set_nz16(c,c->y);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D137u:
    if(m==0u&&x==0u&&e==0u){ /* 8C 7C 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D137u,3u,0x00u,0xD13Au);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x007Cu),c->y);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D13Au:
    if(m==0u&&x==0u&&e==0u){ /* CC 47 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D13Au,3u,0x0Bu,0xD13Du);
      sc_v11_op_compare(r,c->y,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0B47u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D13Du:
    if(m==0u&&x==0u&&e==0u){ /* B0 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D13Du,2u,0x03u,0xD13Fu);
      if((c->p&SC_FLAG_C)!=0u){c->pc=0xD142u;}
      if(c->pc!=0xD13Fu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD13Fu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D13Fu:
    if(m==0u&&x==0u&&e==0u){ /* 4C 8C D0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D13Fu,3u,0xD0u,0xD142u);
      c->pc=0xD08Cu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D142u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D142u,3u,0xFFu,0xD145u);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D145u:
    if(m==0u&&x==0u&&e==0u){ /* AE 79 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D145u,3u,0x00u,0xD148u);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x0079u)),16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D148u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D148u,1u,0xE8u,0xD149u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D149u:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D149u,1u,0xE8u,0xD14Au);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D14Au:
    if(m==0u&&x==0u&&e==0u){ /* 9F 00 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D14Au,4u,0x70u,0xD14Eu);
      sc_v11_bus_write16(r,sc_v11_ea_longx(r,0x700000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D14Eu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D14Eu,1u,0xE8u,0xD14Fu);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D14Fu:
    if(m==0u&&x==0u&&e==0u){ /* E8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D14Fu,1u,0xE8u,0xD150u);
      c->x=(uint16_t)((c->x+1u)&0xFFFFu);sc_v11_set_nz16(c,c->x);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D150u:
    if(m==0u&&x==0u&&e==0u){ /* 8A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D150u,1u,0x8Au,0xD151u);
      c->a=c->x;sc_v11_set_nz16(c,c->a);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D151u:
    if(m==0u&&x==0u&&e==0u){ /* 38 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D151u,1u,0x38u,0xD152u);
      c->p=(uint8_t)(c->p|SC_FLAG_C);sc_v11_scheduler_idle_or_read(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D152u:
    if(m==0u&&x==0u&&e==0u){ /* ED 8E 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D152u,3u,0x00u,0xD155u);
      sc_v11_op_sbc(r,sc_v11_bus_read16(r,sc_v11_ea_abs(r,0x008Eu)),16u);if((c->p&SC_FLAG_D)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D155u:
    if(m==0u&&x==0u&&e==0u){ /* 80 03 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D155u,2u,0x03u,0xD157u);
      if(1){c->pc=0xD15Au;}
      if(c->pc!=0xD157u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0xD157u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D157u:
    if(m==0u&&x==0u&&e==0u){ /* A9 FF FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D157u,3u,0xFFu,0xD15Au);
      sc_v11_op_lda(r,0xFFFFu,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D15Au:
    if(m==0u&&x==0u&&e==0u){ /* 8D 47 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D15Au,3u,0x0Bu,0xD15Du);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B47u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D15Du:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D15Du,1u,0xABu,0xD15Eu);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D15Eu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D15Eu,1u,0x60u,0xD15Fu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D283u:
    if(m==0u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D283u,1u,0x4Bu,0xD284u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D283u,1u,0x4Bu,0xD284u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D283u,1u,0x4Bu,0xD284u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 4B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D283u,1u,0x4Bu,0xD284u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,c->pbr))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D284u:
    if(m==0u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D284u,1u,0xABu,0xD285u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D284u,1u,0xABu,0xD285u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D284u,1u,0xABu,0xD285u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D284u,1u,0xABu,0xD285u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D285u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D285u,2u,0x20u,0xD287u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D285u,2u,0x20u,0xD287u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D285u,2u,0x20u,0xD287u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D285u,2u,0x20u,0xD287u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D292u:
    if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D292u,2u,0x20u,0xD294u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D292u,2u,0x20u,0xD294u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D29Du:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D29Du,2u,0x20u,0xD29Fu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D29Fu:
    if(m==1u&&x==1u&&e==0u){ /* A5 B3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D29Fu,2u,0xB3u,0xD2A1u);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0xB3u)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2A1u:
    if(m==1u&&x==1u&&e==0u){ /* 29 7F ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2A1u,2u,0x7Fu,0xD2A3u);
      sc_v11_op_and(r,0x007Fu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2A3u:
    if(m==1u&&x==1u&&e==0u){ /* 85 B1 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2A3u,2u,0xB1u,0xD2A5u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0xB1u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2A5u:
    if(m==1u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2A5u,2u,0x20u,0xD2A7u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2A7u:
    if(m==0u&&x==1u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2A7u,3u,0x00u,0xD2AAu);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2AAu:
    if(m==0u&&x==1u&&e==0u){ /* 85 12 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2AAu,2u,0x12u,0xD2ACu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x12u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2ACu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2ACu,2u,0x20u,0xD2AEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2AEu:
    if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2AEu,2u,0xFFu,0xD2B0u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2B0u:
    if(m==1u&&x==1u&&e==0u){ /* 8D 2A 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2B0u,3u,0x0Bu,0xD2B3u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Au),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2B3u:
    if(m==1u&&x==1u&&e==0u){ /* A9 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2B3u,2u,0x00u,0xD2B5u);
      sc_v11_op_lda(r,0x0000u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2B5u:
    if(m==1u&&x==1u&&e==0u){ /* 48 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2B5u,1u,0x48u,0xD2B6u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push8(r,(uint8_t)c->a))return 0;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2B6u:
    if(m==1u&&x==1u&&e==0u){ /* AB ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2B6u,1u,0xABu,0xD2B7u);
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2B7u:
    if(m==1u&&x==1u&&e==0u){ /* 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2B7u,1u,0x6Bu,0xD2B8u);
      sc_v11_scheduler_internal_cycle(r,2u);c->pc=(uint16_t)(sc_v11_pop16(r)+1u);c->pbr=sc_v11_pop8(r);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2B8u:
    if(m==0u&&x==0u&&e==0u){ /* 22 80 90 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2B8u,4u,0x05u,0xD2BCu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD2BBu))return 0;
      c->pbr=0x05u;c->pc=0x9080u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2BCu:
    if(m==0u&&x==0u&&e==0u){ /* A9 A0 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2BCu,3u,0x85u,0xD2BFu);
      sc_v11_op_lda(r,0x85A0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 A0 85 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2BCu,3u,0x85u,0xD2BFu);
      sc_v11_op_lda(r,0x85A0u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 A0 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2BCu,2u,0xA0u,0xD2BEu);
      sc_v11_op_lda(r,0x00A0u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2BEu:
    if(m==1u&&x==1u&&e==0u){ /* 85 3C ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2BEu,2u,0x3Cu,0xD2C0u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x3Cu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2BFu:
    if(m==0u&&x==0u&&e==0u){ /* 3C A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2BFu,3u,0xFFu,0xD2C2u);
      {uint16_t q=sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xFFA9u));uint16_t z=(uint16_t)((c->a&0xFFFFu)&q);c->p=(uint8_t)(c->p&~(SC_FLAG_N|SC_FLAG_V|SC_FLAG_Z));if(!z)c->p|=SC_FLAG_Z;if(q&0x8000u)c->p|=SC_FLAG_N;if(q&0x4000u)c->p|=SC_FLAG_V;}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 3C A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2BFu,3u,0xFFu,0xD2C2u);
      {uint16_t q=sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xFFA9u));uint16_t z=(uint16_t)((c->a&0xFFFFu)&q);c->p=(uint8_t)(c->p&~(SC_FLAG_N|SC_FLAG_V|SC_FLAG_Z));if(!z)c->p|=SC_FLAG_Z;if(q&0x8000u)c->p|=SC_FLAG_N;if(q&0x4000u)c->p|=SC_FLAG_V;}sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2C0u:
    if(m==1u&&x==1u&&e==0u){ /* A9 FF ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2C0u,2u,0xFFu,0xD2C2u);
      sc_v11_op_lda(r,0x00FFu,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2C2u:
    if(m==0u&&x==0u&&e==0u){ /* 8D 2A 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2C2u,3u,0x0Bu,0xD2C5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B2Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 8D 2A 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2C2u,3u,0x0Bu,0xD2C5u);
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x0B2Au),c->a);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 8D 2A 0B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2C2u,3u,0x0Bu,0xD2C5u);
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x0B2Au),(uint8_t)c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2C5u:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2C5u,1u,0x60u,0xD2C6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2C5u,1u,0x60u,0xD2C6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2C5u,1u,0x60u,0xD2C6u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2DCu:
    if(m==0u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2DCu,2u,0x30u,0xD2DEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2DCu,2u,0x30u,0xD2DEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2DCu,2u,0x30u,0xD2DEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2DCu,2u,0x30u,0xD2DEu);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2E9u:
    if(m==0u&&x==0u&&e==0u){ /* A9 00 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2E9u,3u,0x00u,0xD2ECu);
      sc_v11_op_lda(r,0x0000u,16u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2ECu:
    if(m==0u&&x==0u&&e==0u){ /* 8F 00 00 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2ECu,4u,0x70u,0xD2F0u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x700000u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2F0u:
    if(m==0u&&x==0u&&e==0u){ /* 8F F0 7F 70 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2F0u,4u,0x70u,0xD2F4u);
      sc_v11_bus_write16(r,sc_v11_ea_long(0x707FF0u),c->a);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D2FEu:
    if(m==0u&&x==1u&&e==0u){ /* 20 49 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2FEu,3u,0xE3u,0xD301u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD300u))return 0;c->pc=0xE349u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 49 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2FEu,3u,0xE3u,0xD301u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD300u))return 0;c->pc=0xE349u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 49 E3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D2FEu,3u,0xE3u,0xD301u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD300u))return 0;c->pc=0xE349u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D301u:
    if(m==0u&&x==1u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D301u,2u,0x14u,0xD303u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),16u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D301u,2u,0x14u,0xD303u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D301u,2u,0x14u,0xD303u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D303u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D303u,1u,0x60u,0xD304u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D303u,1u,0x60u,0xD304u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D303u,1u,0x60u,0xD304u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D324u:
    if(m==0u&&x==0u&&e==0u){ /* 22 8F BC 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D324u,4u,0x02u,0xD328u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD327u))return 0;
      c->pbr=0x02u;c->pc=0xBC8Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 8F BC 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D324u,4u,0x02u,0xD328u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD327u))return 0;
      c->pbr=0x02u;c->pc=0xBC8Fu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 8F BC 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D324u,4u,0x02u,0xD328u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD327u))return 0;
      c->pbr=0x02u;c->pc=0xBC8Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D328u:
    if(m==0u&&x==1u&&e==0u){ /* 22 48 BC 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D328u,4u,0x02u,0xD32Cu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD32Bu))return 0;
      c->pbr=0x02u;c->pc=0xBC48u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 48 BC 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D328u,4u,0x02u,0xD32Cu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD32Bu))return 0;
      c->pbr=0x02u;c->pc=0xBC48u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 48 BC 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D328u,4u,0x02u,0xD32Cu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD32Bu))return 0;
      c->pbr=0x02u;c->pc=0xBC48u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 22 48 BC 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D328u,4u,0x02u,0xD32Cu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD32Bu))return 0;
      c->pbr=0x02u;c->pc=0xBC48u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D32Cu:
    if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D32Cu,2u,0x20u,0xD32Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D32Cu,2u,0x20u,0xD32Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D32Cu,2u,0x20u,0xD32Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D32Cu,2u,0x20u,0xD32Eu);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D32Eu:
    if(m==1u&&x==1u&&e==0u){ /* 64 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D32Eu,2u,0x6Au,0xD330u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 64 6A ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D32Eu,2u,0x6Au,0xD330u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Au),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D330u:
    if(m==1u&&x==1u&&e==0u){ /* 64 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D330u,2u,0x6Bu,0xD332u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Bu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 64 6B ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D330u,2u,0x6Bu,0xD332u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x6Bu),0u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D332u:
    if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D332u,1u,0x60u,0xD333u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D332u,1u,0x60u,0xD333u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D369u:
    if(m==0u&&x==0u&&e==0u){ /* A6 3E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D369u,2u,0x3Eu,0xD36Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x3Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A6 3E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D369u,2u,0x3Eu,0xD36Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read8(r,sc_v11_ea_dp(r,0x3Eu)),8u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A6 3E ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D369u,2u,0x3Eu,0xD36Bu);
      sc_v11_op_ldx(r,sc_v11_bus_read16(r,sc_v11_ea_dp(r,0x3Eu)),16u);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D36Bu:
    if(m==0u&&x==0u&&e==0u){ /* BD 84 D3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D36Bu,3u,0xD3u,0xD36Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xD384u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* BD 84 D3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D36Bu,3u,0xD3u,0xD36Eu);
      sc_v11_op_lda(r,sc_v11_bus_read16(r,sc_v11_ea_absx(r,0xD384u)),16u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* BD 84 D3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D36Bu,3u,0xD3u,0xD36Eu);
      sc_v11_op_lda(r,sc_v11_bus_read8(r,sc_v11_ea_absx(r,0xD384u)),8u);sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D36Eu:
    if(m==0u&&x==0u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D36Eu,2u,0x14u,0xD370u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D36Eu,2u,0x14u,0xD370u);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D36Eu,2u,0x14u,0xD370u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x14u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D370u:
    if(m==0u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D370u,2u,0x20u,0xD372u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D370u,2u,0x20u,0xD372u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D370u,2u,0x20u,0xD372u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D372u:
    if(m==0u&&x==0u&&e==0u){ /* A9 01 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D372u,3u,0x00u,0xD375u);
      sc_v11_op_lda(r,0x0001u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==1u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D372u,2u,0x01u,0xD374u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D375u:
    if(m==0u&&x==0u&&e==0u){ /* 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D375u,2u,0x00u,0xD377u);
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0xD377u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D377u:
    if(m==0u&&x==0u&&e==0u){ /* 22 8F BC 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D377u,4u,0x02u,0xD37Bu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD37Au))return 0;
      c->pbr=0x02u;c->pc=0xBC8Fu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D37Bu:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D37Bu,1u,0x60u,0xD37Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D37Bu,1u,0x60u,0xD37Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D37Bu,1u,0x60u,0xD37Cu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3A4u:
    if(m==0u&&x==1u&&e==0u){ /* 20 B7 D3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3A4u,3u,0xD3u,0xD3A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3A6u))return 0;c->pc=0xD3B7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 B7 D3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3A4u,3u,0xD3u,0xD3A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3A6u))return 0;c->pc=0xD3B7u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 B7 D3 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3A4u,3u,0xD3u,0xD3A7u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3A6u))return 0;c->pc=0xD3B7u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3A7u:
    if(m==0u&&x==1u&&e==0u){ /* 22 FE 99 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3A7u,4u,0x05u,0xD3ABu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD3AAu))return 0;
      c->pbr=0x05u;c->pc=0x99FEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 FE 99 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3A7u,4u,0x05u,0xD3ABu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD3AAu))return 0;
      c->pbr=0x05u;c->pc=0x99FEu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 22 FE 99 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3A7u,4u,0x05u,0xD3ABu);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD3AAu))return 0;
      c->pbr=0x05u;c->pc=0x99FEu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3ABu:
    if(m==0u&&x==1u&&e==0u){ /* 20 0D D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3ABu,3u,0xD8u,0xD3AEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3ADu))return 0;c->pc=0xD80Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 0D D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3ABu,3u,0xD8u,0xD3AEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3ADu))return 0;c->pc=0xD80Du;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 20 0D D8 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3ABu,3u,0xD8u,0xD3AEu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3ADu))return 0;c->pc=0xD80Du;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3AEu:
    if(m==0u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3AEu,2u,0x20u,0xD3B0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3AEu,2u,0x20u,0xD3B0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* E2 20 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3AEu,2u,0x20u,0xD3B0u);
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3B0u:
    if(m==1u&&x==0u&&e==0u){ /* A9 16 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B0u,2u,0x16u,0xD3B2u);
      sc_v11_op_lda(r,0x0016u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3B2u:
    if(m==1u&&x==0u&&e==0u){ /* 85 68 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B2u,2u,0x68u,0xD3B4u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x68u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3B4u:
    if(m==1u&&x==0u&&e==0u){ /* E6 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B4u,2u,0x14u,0xD3B6u);
      sc_v11_op_incdec_memory(r,sc_v11_ea_dp(r,0x14u),8u,1);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3B6u:
    if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B6u,1u,0x60u,0xD3B7u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3B7u:
    if(m==0u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B7u,2u,0x30u,0xD3B9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B7u,2u,0x30u,0xD3B9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* C2 30 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3B7u,2u,0x30u,0xD3B9u);
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3C2u:
    if(m==0u&&x==0u&&e==0u){ /* 20 DD D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3C2u,3u,0xD7u,0xD3C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3C4u))return 0;c->pc=0xD7DDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 20 DD D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3C2u,3u,0xD7u,0xD3C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3C4u))return 0;c->pc=0xD7DDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 20 DD D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3C2u,3u,0xD7u,0xD3C5u);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3C4u))return 0;c->pc=0xD7DDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3C5u:
    if(m==0u&&x==0u&&e==0u){ /* 22 51 9A 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3C5u,4u,0x05u,0xD3C9u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD3C8u))return 0;
      c->pbr=0x05u;c->pc=0x9A51u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 22 51 9A 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3C5u,4u,0x05u,0xD3C9u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD3C8u))return 0;
      c->pbr=0x05u;c->pc=0x9A51u;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 22 51 9A 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3C5u,4u,0x05u,0xD3C9u);
      if(!sc_v11_push8(r,c->pbr))return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0xD3C8u))return 0;
      c->pbr=0x05u;c->pc=0x9A51u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3C9u:
    if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3C9u,1u,0x60u,0xD3CAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3C9u,1u,0x60u,0xD3CAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3C9u,1u,0x60u,0xD3CAu);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3D4u:
    if(m==0u&&x==0u&&e==0u){ /* 4C DD D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3D4u,3u,0xD7u,0xD3D7u);
      c->pc=0xD7DDu;
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 4C DD D7 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3D4u,3u,0xD7u,0xD3D7u);
      c->pc=0xD7DDu;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3D7u:
    if(m==0u&&x==0u&&e==0u){ /* 20 74 E5 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3D7u,3u,0xE5u,0xD3DAu);
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,0xD3D9u))return 0;c->pc=0xE574u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3DAu:
    if(m==0u&&x==0u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3DAu,3u,0x00u,0xD3DDu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* A9 02 00 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3DAu,3u,0x00u,0xD3DDu);
      sc_v11_op_lda(r,0x0002u,16u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==0u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3DAu,2u,0x02u,0xD3DCu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==1u&&x==1u&&e==0u){ /* A9 02 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3DAu,2u,0x02u,0xD3DCu);
      sc_v11_op_lda(r,0x0002u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3DDu:
    if(m==0u&&x==0u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3DDu,2u,0x14u,0xD3DFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 85 14 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3DDu,2u,0x14u,0xD3DFu);
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x14u),c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3DFu:
    if(m==0u&&x==0u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3DFu,1u,0x60u,0xD3E0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    else if(m==0u&&x==1u&&e==0u){ /* 60 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3DFu,1u,0x60u,0xD3E0u);
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3EAu:
    if(m==1u&&x==1u&&e==0u){ /* 4C 25 D6 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3EAu,3u,0xD6u,0xD3EDu);
      c->pc=0xD625u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3F5u:
    if(m==1u&&x==1u&&e==0u){ /* A9 01 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3F5u,2u,0x01u,0xD3F7u);
      sc_v11_op_lda(r,0x0001u,8u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3F7u:
    if(m==1u&&x==1u&&e==0u){ /* 85 05 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3F7u,2u,0x05u,0xD3F9u);
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x05u),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      SC_STATIC_CONTEXT_END();
    }
    break;
  case 0x03D3F9u:
    if(m==1u&&x==1u&&e==0u){ /* 4C D6 D4 ; generated town route */
      SC_STATIC_CONTEXT_BEGIN(0x03D3F9u,3u,0xD4u,0xD3FCu);
      c->pc=0xD4D6u;
      SC_STATIC_CONTEXT_END();
    }
    break;
  default: break;
  }
  return -1;
}
