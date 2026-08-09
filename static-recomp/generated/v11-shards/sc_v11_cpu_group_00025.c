/* AUTO-GENERATED exact-PC/E/M/X primary S-CPU shard. */
#include "sc_v11_runtime.h"

int sc_v11_cpu_group_00025(SCV11Runtime *r,uint32_t address,uint8_t m,uint8_t x){
  SCCpuState *c=&r->machine.cpu;
  switch(address){
  case 0x0096BEu:
    if(m==1u&&x==0u&&c->emulation==0u){ /* E2 20 SEP #$20; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096BEu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96C0u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096C0u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* C2 10 REP #$10; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096C0u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96C2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096C2u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A2 84 E5 LDX #$E584; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096C2u,3u);r->open_bus=0xE5u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96C5u;
      sc_v11_op_ldx(r,0xE584u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096C5u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 86 09 STX $09; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096C5u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96C7u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096C7u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A9 07 LDA #$07; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096C7u,2u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96C9u;
      sc_v11_op_lda(r,0x0007u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096C9u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 85 0B STA $0B; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096C9u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96CBu;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096CBu:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A2 00 00 LDX #$0000; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096CBu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96CEu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096CEu:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 86 0E STX $0E; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096CEu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96D0u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096D0u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* C2 20 REP #$20; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096D0u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96D2u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096D2u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* A9 08 00 LDA #$0008; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096D2u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96D5u;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096D5u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 02 00 COP #$00; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096D5u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96D7u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x96D7u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096D7u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 22 06 82 00 JSL $008206; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096D7u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96DBu;
      if(!sc_v11_push8(r,c->pbr)) return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x96DAu)) return 0;
      c->pbr=0x00u;
      c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096DBu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* C2 20 REP #$20; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096DBu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96DDu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096DDu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* A9 00 00 LDA #$0000; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096DDu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96E0u;
      sc_v11_op_lda(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096E0u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 8D 16 21 STA $2116; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096E0u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96E3u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096E3u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* E2 30 SEP #$30; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096E3u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96E5u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096E5u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 01 LDA #$01; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096E5u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96E7u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096E7u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096E7u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96E8u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096E8u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096E8u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96E9u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096E9u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096E9u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96EAu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096EAu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096EAu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96EBu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096EBu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* AA TAX; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096EBu,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96ECu;
      c->x=(uint16_t)(c->a&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096ECu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 01 LDA #$01; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096ECu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96EEu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096EEu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 00 43 STA $4300,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096EEu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96F1u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096F1u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 18 LDA #$18; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096F1u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96F3u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096F3u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 01 43 STA $4301,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096F3u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96F6u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096F6u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096F6u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96F8u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096F8u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 02 43 STA $4302,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096F8u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96FBu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096FBu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 80 LDA #$80; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096FBu,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x96FDu;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0096FDu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 03 43 STA $4303,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0096FDu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9700u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009700u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 7E LDA #$7E; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009700u,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9702u;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009702u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 04 43 STA $4304,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009702u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9705u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009705u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009705u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9707u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009707u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 05 43 STA $4305,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009707u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x970Au;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00970Au:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 80 LDA #$80; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00970Au,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x970Cu;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00970Cu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 06 43 STA $4306,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00970Cu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x970Fu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00970Fu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 01 LDA #$01; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00970Fu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9711u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009711u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A2 01 LDX #$01; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009711u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9713u;
      sc_v11_op_ldx(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009713u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* F0 04 BEQ $9719; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009713u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9715u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x9719u;}
      if(c->pc!=0x9715u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9715u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009715u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009715u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9716u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009716u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* CA DEX; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009716u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9717u;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009717u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* D0 FC BNE $9715; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009717u,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9719u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x9715u;}
      if(c->pc!=0x9719u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x9719u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009719u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 0B 42 STA $420B; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009719u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x971Cu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00971Cu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 22 06 82 00 JSL $008206; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00971Cu,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9720u;
      if(!sc_v11_push8(r,c->pbr)) return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x971Fu)) return 0;
      c->pbr=0x00u;
      c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009720u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* C2 20 REP #$20; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009720u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9722u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009722u:
    if(m==0u&&x==1u&&c->emulation==0u){ /* A9 00 60 LDA #$6000; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009722u,3u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9725u;
      sc_v11_op_lda(r,0x6000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009725u:
    if(m==0u&&x==1u&&c->emulation==0u){ /* 8D 16 21 STA $2116; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009725u,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9728u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009728u:
    if(m==0u&&x==1u&&c->emulation==0u){ /* E2 30 SEP #$30; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009728u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x972Au;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00972Au:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 01 LDA #$01; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00972Au,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x972Cu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00972Cu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00972Cu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x972Du;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00972Du:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00972Du,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x972Eu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00972Eu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00972Eu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x972Fu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00972Fu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00972Fu,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9730u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009730u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* AA TAX; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009730u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9731u;
      c->x=(uint16_t)(c->a&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009731u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 01 LDA #$01; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009731u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9733u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009733u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 00 43 STA $4300,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009733u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9736u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009736u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 18 LDA #$18; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009736u,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9738u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009738u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 01 43 STA $4301,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009738u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x973Bu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00973Bu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00973Bu,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x973Du;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00973Du:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 02 43 STA $4302,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00973Du,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9740u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009740u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 C0 LDA #$C0; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009740u,2u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9742u;
      sc_v11_op_lda(r,0x00C0u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009742u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 03 43 STA $4303,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009742u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9745u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009745u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 06 LDA #$06; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009745u,2u);r->open_bus=0x06u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9747u;
      sc_v11_op_lda(r,0x0006u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009747u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 04 43 STA $4304,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009747u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x974Au;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00974Au:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00974Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x974Cu;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00974Cu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 05 43 STA $4305,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00974Cu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x974Fu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00974Fu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 40 LDA #$40; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00974Fu,2u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9751u;
      sc_v11_op_lda(r,0x0040u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009751u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 06 43 STA $4306,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009751u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9754u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009754u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 01 LDA #$01; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009754u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9756u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009756u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A2 01 LDX #$01; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009756u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9758u;
      sc_v11_op_ldx(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009758u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* F0 04 BEQ $975E; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009758u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x975Au;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x975Eu;}
      if(c->pc!=0x975Au){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x975Au^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00975Au:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00975Au,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x975Bu;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00975Bu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* CA DEX; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00975Bu,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x975Cu;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00975Cu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* D0 FC BNE $975A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00975Cu,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x975Eu;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x975Au;}
      if(c->pc!=0x975Eu){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x975Eu^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00975Eu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 0B 42 STA $420B; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00975Eu,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9761u;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009761u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* C2 20 REP #$20; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009761u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9763u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009763u:
    if(m==0u&&x==1u&&c->emulation==0u){ /* E2 20 SEP #$20; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009763u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9765u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009765u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* C2 10 REP #$10; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009765u,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9767u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009767u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A2 FB C0 LDX #$C0FB; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009767u,3u);r->open_bus=0xC0u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x976Au;
      sc_v11_op_ldx(r,0xC0FBu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00976Au:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 86 09 STX $09; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00976Au,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x976Cu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00976Cu:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A9 09 LDA #$09; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00976Cu,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x976Eu;
      sc_v11_op_lda(r,0x0009u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00976Eu:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 85 0B STA $0B; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00976Eu,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9770u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009770u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A2 00 00 LDX #$0000; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009770u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9773u;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009773u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 86 0E STX $0E; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009773u,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9775u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009775u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* C2 20 REP #$20; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009775u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9777u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009777u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* A9 08 00 LDA #$0008; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009777u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x977Au;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00977Au:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 02 00 COP #$00; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00977Au,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x977Cu;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x977Cu))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00977Cu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* E2 20 SEP #$20; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00977Cu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x977Eu;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x20u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00977Eu:
    if(m==1u&&x==0u&&c->emulation==0u){ /* C2 10 REP #$10; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00977Eu,2u);r->open_bus=0x10u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9780u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x10u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009780u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A2 BD C7 LDX #$C7BD; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009780u,3u);r->open_bus=0xC7u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9783u;
      sc_v11_op_ldx(r,0xC7BDu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009783u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 86 09 STX $09; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009783u,2u);r->open_bus=0x09u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9785u;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x09u),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009785u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A9 0B LDA #$0B; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009785u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9787u;
      sc_v11_op_lda(r,0x000Bu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009787u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 85 0B STA $0B; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009787u,2u);r->open_bus=0x0Bu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9789u;
      sc_v11_bus_write8(r,sc_v11_ea_dp(r,0x0Bu),(uint8_t)c->a);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009789u:
    if(m==1u&&x==0u&&c->emulation==0u){ /* A2 00 28 LDX #$2800; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009789u,3u);r->open_bus=0x28u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x978Cu;
      sc_v11_op_ldx(r,0x2800u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00978Cu:
    if(m==1u&&x==0u&&c->emulation==0u){ /* 86 0E STX $0E; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00978Cu,2u);r->open_bus=0x0Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x978Eu;
      sc_v11_bus_write16(r,sc_v11_ea_dp(r,0x0Eu),c->x);if((c->d&0xffu)!=0u)sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00978Eu:
    if(m==1u&&x==0u&&c->emulation==0u){ /* C2 20 REP #$20; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00978Eu,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9790u;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009790u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* A9 08 00 LDA #$0008; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009790u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9793u;
      sc_v11_op_lda(r,0x0008u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009793u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 02 00 COP #$00; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009793u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9795u;
      if(c->emulation)return sc_v11_fail(r,r->current_instruction_address,"emulation-mode COP is outside the certified route");
      if(!sc_v11_push8(r,c->pbr))return 0;
      if(!sc_v11_push16(r,0x9795u))return 0;
      if(!sc_v11_push8(r,c->p))return 0;
      c->p|=SC_FLAG_I;c->p&=(uint8_t)~SC_FLAG_D;c->pbr=0u;c->pc=sc_v11_bus_read16(r,0x00FFE4u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009795u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 22 06 82 00 JSL $008206; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009795u,4u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x9799u;
      if(!sc_v11_push8(r,c->pbr)) return 0;
      sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_push16(r,0x9798u)) return 0;
      c->pbr=0x00u;
      c->pc=0x8206u;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x009799u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* C2 20 REP #$20; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x009799u,2u);r->open_bus=0x20u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x979Bu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x20u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00979Bu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* A9 00 40 LDA #$4000; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00979Bu,3u);r->open_bus=0x40u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x979Eu;
      sc_v11_op_lda(r,0x4000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x00979Eu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 8D 16 21 STA $2116; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x00979Eu,3u);r->open_bus=0x21u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A1u;
      sc_v11_bus_write16(r,sc_v11_ea_abs(r,0x2116u),c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A1u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* E2 30 SEP #$30; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097A1u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A3u;
      sc_v11_unpack_p(c,(uint8_t)(c->p|0x30u));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A3u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 01 LDA #$01; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097A3u,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A5u;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A5u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097A5u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A6u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A6u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097A6u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A7u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A7u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097A7u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A8u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A8u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097A8u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97A9u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097A9u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* AA TAX; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097A9u,1u);r->open_bus=0xAAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97AAu;
      c->x=(uint16_t)(c->a&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097AAu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 01 LDA #$01; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097AAu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97ACu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097ACu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 00 43 STA $4300,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097ACu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97AFu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4300u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097AFu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 18 LDA #$18; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097AFu,2u);r->open_bus=0x18u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97B1u;
      sc_v11_op_lda(r,0x0018u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097B1u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 01 43 STA $4301,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097B1u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97B4u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4301u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097B4u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097B4u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97B6u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097B6u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 02 43 STA $4302,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097B6u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97B9u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4302u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097B9u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 80 LDA #$80; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097B9u,2u);r->open_bus=0x80u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97BBu;
      sc_v11_op_lda(r,0x0080u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097BBu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 03 43 STA $4303,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097BBu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97BEu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4303u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097BEu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 7E LDA #$7E; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097BEu,2u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97C0u;
      sc_v11_op_lda(r,0x007Eu,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097C0u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 04 43 STA $4304,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097C0u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97C3u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4304u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097C3u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 00 LDA #$00; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097C3u,2u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97C5u;
      sc_v11_op_lda(r,0x0000u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097C5u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 05 43 STA $4305,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097C5u,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97C8u;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4305u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097C8u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 30 LDA #$30; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097C8u,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97CAu;
      sc_v11_op_lda(r,0x0030u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097CAu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 9D 06 43 STA $4306,X; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097CAu,3u);r->open_bus=0x43u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97CDu;
      sc_v11_bus_write8(r,sc_v11_ea_absx(r,0x4306u),(uint8_t)c->a);sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097CDu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A9 01 LDA #$01; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097CDu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97CFu;
      sc_v11_op_lda(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097CFu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* A2 01 LDX #$01; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097CFu,2u);r->open_bus=0x01u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97D1u;
      sc_v11_op_ldx(r,0x0001u,8u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097D1u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* F0 04 BEQ $97D7; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097D1u,2u);r->open_bus=0x04u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97D3u;
      if((c->p&SC_FLAG_Z)!=0u){c->pc=0x97D7u;}
      if(c->pc!=0x97D3u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97D3u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097D3u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 0A ASL A; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097D3u,1u);r->open_bus=0x0Au;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97D4u;
      sc_v11_op_shift_accumulator(r,8u,0u);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097D4u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* CA DEX; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097D4u,1u);r->open_bus=0xCAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97D5u;
      c->x=(uint16_t)((c->x-1u)&0x00FFu);sc_v11_set_nz8(c,(uint8_t)c->x);sc_v11_scheduler_idle_or_read(r);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097D5u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* D0 FC BNE $97D3; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097D5u,2u);r->open_bus=0xFCu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97D7u;
      if((c->p&SC_FLAG_Z)==0u){c->pc=0x97D3u;}
      if(c->pc!=0x97D7u){sc_v11_scheduler_internal_cycle(r,1u);if(c->emulation&&((0x97D7u^c->pc)&0xff00u)!=0u)sc_v11_scheduler_internal_cycle(r,1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097D7u:
    if(m==1u&&x==1u&&c->emulation==0u){ /* 8D 0B 42 STA $420B; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097D7u,3u);r->open_bus=0x42u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97DAu;
      sc_v11_bus_write8(r,sc_v11_ea_abs(r,0x420Bu),(uint8_t)c->a);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097DAu:
    if(m==1u&&x==1u&&c->emulation==0u){ /* C2 30 REP #$30; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097DAu,2u);r->open_bus=0x30u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97DCu;
      sc_v11_unpack_p(c,(uint8_t)(c->p&((uint8_t)~0x30u)));sc_v11_scheduler_internal_cycle(r,1u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097DCu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* A2 00 A8 LDX #$A800; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097DCu,3u);r->open_bus=0xA8u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97DFu;
      sc_v11_op_ldx(r,0xA800u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097DFu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* A0 40 38 LDY #$3840; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097DFu,3u);r->open_bus=0x38u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97E2u;
      sc_v11_op_ldy(r,0x3840u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097E2u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* A9 FF 07 LDA #$07FF; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097E2u,3u);r->open_bus=0x07u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97E5u;
      sc_v11_op_lda(r,0x07FFu,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097E5u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 54 7E 7E MVN #$7E7E; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097E5u,3u);r->open_bus=0x7Eu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97E8u;
      sc_v11_bus_write8(r,((uint32_t)0x7Eu<<16)|c->y,sc_v11_bus_read8(r,((uint32_t)0x7Eu<<16)|c->x));c->x=(uint16_t)(c->x+1u);c->y=(uint16_t)(c->y+1u);c->a=(uint16_t)(c->a-1u);c->dbr=0x7Eu;if(c->a!=0xFFFFu)c->pc=0x97E5u;sc_v11_scheduler_internal_cycle(r,2u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097E8u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* A2 00 00 LDX #$0000; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097E8u,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97EBu;
      sc_v11_op_ldx(r,0x0000u,16u);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097EBu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* DA PHX; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097EBu,1u);r->open_bus=0xDAu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97ECu;
      sc_v11_scheduler_internal_cycle(r,1u);if(!sc_v11_push16(r,c->x))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097ECu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* AB PLB; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097ECu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97EDu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097EDu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* AB PLB; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097EDu,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97EEu;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097EEu:
    if(m==0u&&x==0u&&c->emulation==0u){ /* F4 00 00 PEA $0000; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097EEu,3u);r->open_bus=0x00u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97F1u;
      if(!sc_v11_push16(r,0x0000u))return 0;
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097F1u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* AB PLB; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097F1u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97F2u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097F2u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* AB PLB; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097F2u,1u);r->open_bus=0xABu;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97F3u;
      sc_v11_scheduler_internal_cycle(r,2u);c->dbr=sc_v11_pop8(r);sc_v11_set_nz8(c,c->dbr);
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  case 0x0097F3u:
    if(m==0u&&x==0u&&c->emulation==0u){ /* 60 RTS; Version 16 graphics decompression static batch: graphics-decompression-dma */
      sc_v11_scheduler_code_access(r,0x0097F3u,1u);r->open_bus=0x60u;
      r->scheduler.cpu_instructions++;r->generated_callbacks++;r->machine.static_executed_instructions=(uint32_t)r->scheduler.cpu_instructions;c->pc=0x97F4u;
      {uint16_t q;sc_v11_scheduler_internal_cycle(r,2u);q=sc_v11_pop16(r);sc_v11_scheduler_internal_cycle(r,1u);c->pc=(uint16_t)(q+1u);}
      if(!sc_v11_finish_instruction(r))return 0;
      return r->route_failed?0:1;
    }
    break;
  default: break;
  }
  return -1;
}
