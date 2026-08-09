/* AUTO-GENERATED bounded primary S-CPU dispatch index. */
#include "sc_v11_runtime.h"
int sc_v23_static_cpu_step(SCV11Runtime*,uint32_t,uint8_t,uint8_t,uint8_t);
int sc_v11_cpu_group_00020(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_00021(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_00023(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_00024(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_00025(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_00026(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_000AE(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_000AF(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_000ED(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_000F1(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_000F2(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_000F3(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_000F4(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_000F7(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_000F8(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_000F9(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_00164(SCV11Runtime*,uint32_t,uint8_t,uint8_t);
int sc_v11_cpu_group_00165(SCV11Runtime*,uint32_t,uint8_t,uint8_t);

int sc_v11_cpu_step(SCV11Runtime *r){
  SCCpuState *c; uint32_t address; uint8_t m,x; int result;
  if(!r||r->route_failed)return 0;
  if(!sc_v11_before_instruction(r))return 0;
  c=&r->machine.cpu; address=((uint32_t)c->pbr<<16)|c->pc; m=(uint8_t)((c->p&SC_FLAG_M)!=0u); x=(uint8_t)((c->p&SC_FLAG_X)!=0u);
  r->current_instruction_address=address;
  sc_v11_trace_cpu_instruction(r,address);
  switch(address>>10u){
  case 0x20u: result=sc_v11_cpu_group_00020(r,address,m,x); break;
  case 0x21u: result=sc_v11_cpu_group_00021(r,address,m,x); break;
  case 0x23u: result=sc_v11_cpu_group_00023(r,address,m,x); break;
  case 0x24u: result=sc_v11_cpu_group_00024(r,address,m,x); break;
  case 0x25u: result=sc_v11_cpu_group_00025(r,address,m,x); break;
  case 0x26u: result=sc_v11_cpu_group_00026(r,address,m,x); break;
  case 0xAEu: result=sc_v11_cpu_group_000AE(r,address,m,x); break;
  case 0xAFu: result=sc_v11_cpu_group_000AF(r,address,m,x); break;
  case 0xEDu: result=sc_v11_cpu_group_000ED(r,address,m,x); break;
  case 0xF1u: result=sc_v11_cpu_group_000F1(r,address,m,x); break;
  case 0xF2u: result=sc_v11_cpu_group_000F2(r,address,m,x); break;
  case 0xF3u: result=sc_v11_cpu_group_000F3(r,address,m,x); break;
  case 0xF4u: result=sc_v11_cpu_group_000F4(r,address,m,x); break;
  case 0xF7u: result=sc_v11_cpu_group_000F7(r,address,m,x); break;
  case 0xF8u: result=sc_v11_cpu_group_000F8(r,address,m,x); break;
  case 0xF9u: result=sc_v11_cpu_group_000F9(r,address,m,x); break;
  case 0x164u: result=sc_v11_cpu_group_00164(r,address,m,x); break;
  case 0x165u: result=sc_v11_cpu_group_00165(r,address,m,x); break;
  default: result=-1; break;
  }
  if(result>=0)return result;
  return sc_v23_static_cpu_step(r,address,m,x,c->emulation);
}
