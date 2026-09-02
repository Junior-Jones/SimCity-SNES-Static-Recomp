#include "sc_static_apu.h"
#include "sc_audio_clock_profile.h"
#include "static_snes.hpp"
#include <cstdio>
#include <cstring>
namespace SC_STATIC_SNES { CPU cpu; }
namespace {
constexpr uint64_t kFnvOffset=UINT64_C(1469598103934665603);
constexpr uint64_t kFnvPrime=UINT64_C(1099511628211);
SCStaticAudioSink g_sink=nullptr;
void *g_sink_context=nullptr;
SCStaticTraceCallbacks g_trace={nullptr,nullptr,nullptr,nullptr,nullptr};
uint64_t g_master=0,g_cycles=0,g_pcm_frames=0;
uint64_t g_sync_calls=0,g_rendezvous_hash=kFnvOffset;
uint64_t g_cpu_port_event_count=0,g_cpu_port_event_hash=kFnvOffset;
uint32_t g_phase_remainder=0,g_max_sync_master_delta=0,g_first_sync_master_delta=0,g_max_followup_sync_master_delta=0;
uint16_t g_current_instruction_pc=0xffc0u;
uint32_t g_code_write_barriers=0;
uint64_t g_sdsp_primitive_steps=0,g_sdsp_primitive_hash=kFnvOffset;
uint64_t g_sdsp_brr_steps=0,g_sdsp_brr_hash=kFnvOffset;
uint8_t g_sdsp_static_failed=0,g_sdsp_fail_reason=0,g_sdsp_fail_phase=0;
bool g_program_started=false;
int g_acquired=0;
struct ApuSnapshotHeader {
  char magic[8]; uint32_t version,smp_size,aram_size,dsp_capacity;
  uint8_t cpu_registers[4]; uint32_t dsp_frequency; int32_t dsp_clock;
  uint64_t master,cycles,pcm_frames,sync_calls,rendezvous_hash;
  uint64_t cpu_port_event_count,cpu_port_event_hash;
  uint32_t phase_remainder,max_sync_master_delta,first_sync_master_delta;
  uint32_t max_followup_sync_master_delta,current_instruction_pc,code_write_barriers;
  uint64_t sdsp_primitive_steps,sdsp_primitive_hash,sdsp_brr_steps,sdsp_brr_hash;
  uint8_t sdsp_static_failed,sdsp_fail_reason,sdsp_fail_phase,program_started;
};
#include "smp/sc_smp_aot_code_bitmap.inc"
void copy_error(char *out,size_t cap,const char *text){if(out&&cap)std::snprintf(out,cap,"%s",text?text:"");}
uint64_t mix8(uint64_t h,uint8_t v){h^=v;return h*kFnvPrime;}
uint64_t mix32(uint64_t h,uint32_t v){for(unsigned i=0;i<4u;++i)h=mix8(h,(uint8_t)(v>>(i*8u)));return h;}
uint64_t mix64(uint64_t h,uint64_t v){for(unsigned i=0;i<8u;++i)h=mix8(h,(uint8_t)(v>>(i*8u)));return h;}
bool is_code_byte(uint16_t address){return(sc_smp_aot_code_bitmap[address>>3]&(uint8)(1u<<(address&7u)))!=0u;}
uint8_t timer_enable_mask(){return (SC_STATIC_SNES::smp.timer0.enable?1u:0u)|(SC_STATIC_SNES::smp.timer1.enable?2u:0u)|(SC_STATIC_SNES::smp.timer2.enable?4u:0u);}
template <typename TimerT> void mix_timer(uint64_t &h,const TimerT &timer){h=mix8(h,timer.target);h=mix8(h,timer.stage1_ticks);h=mix8(h,timer.stage2_ticks);h=mix8(h,timer.stage3_ticks);}
template <typename TimerT> void store_timer(uint8_t *target,uint8_t *stage1,uint8_t *stage2,uint8_t *stage3,unsigned index,const TimerT &timer){target[index]=timer.target;stage1[index]=timer.stage1_ticks;stage2[index]=timer.stage2_ticks;stage3[index]=timer.stage3_ticks;}
void drain_samples(){
  int16_t samples[512u*2u];
  uint8_t known[512u];
  size_t count;
  do {
    count=simcity_dsp_pcm_read_with_knownness(&SC_STATIC_SNES::dsp.core,samples,known,512u);
    for(size_t i=0;i<count;++i){
      if(g_sink) g_sink(g_sink_context,samples[i*2u],samples[i*2u+1u]);
      ++g_pcm_frames;
    }
  } while(count==512u);
  if(SC_STATIC_SNES::dsp.core.last_stop!=SIMCITY_DSP_STOP_NONE){
    sc_static_sdsp_report_failure((uint32_t)SC_STATIC_SNES::dsp.core.last_stop,
                                  SC_STATIC_SNES::dsp.core.phase);
  }
}
void record_rendezvous(uint64_t master,uint64_t target_cycles,uint64_t master_delta){
  const uint32_t bounded_delta=(uint32_t)(master_delta>UINT32_MAX?UINT32_MAX:master_delta);
  if(g_sync_calls==0u)g_first_sync_master_delta=bounded_delta;
  else if(master_delta>g_max_followup_sync_master_delta)g_max_followup_sync_master_delta=bounded_delta;
  ++g_sync_calls;
  if(master_delta>g_max_sync_master_delta)g_max_sync_master_delta=bounded_delta;
  uint64_t h=g_rendezvous_hash;
  h=mix64(h,master);h=mix64(h,target_cycles);h=mix32(h,g_phase_remainder);
  h=mix32(h,(uint32_t)SC_STATIC_SNES::smp.clock);
  h=mix8(h,(uint8_t)SC_STATIC_SNES::dsp.core.phase);
  h=mix8(h,timer_enable_mask());
  mix_timer(h,SC_STATIC_SNES::smp.timer0);
  mix_timer(h,SC_STATIC_SNES::smp.timer1);
  mix_timer(h,SC_STATIC_SNES::smp.timer2);
  g_rendezvous_hash=h;
}
void record_cpu_port(uint8_t direction,uint64_t master,unsigned port,uint8_t value){
  ++g_cpu_port_event_count;
  uint64_t h=g_cpu_port_event_hash;
  h=mix8(h,direction);h=mix8(h,(uint8_t)port);h=mix8(h,value);
  h=mix64(h,master);h=mix64(h,g_cycles);h=mix32(h,g_phase_remainder);
  h=mix32(h,(uint32_t)SC_STATIC_SNES::smp.clock);
  g_cpu_port_event_hash=h;
}
int fail_message(char *error,size_t cap){
  const auto &s=SC_STATIC_SNES::smp;
  char text[224];
  const char *reason=s.sc_aot_fail_reason_value==1u?"unknown exact S-SMP PC":
    s.sc_aot_fail_reason_value==2u?"S-SMP opcode mismatch":
    s.sc_aot_fail_reason_value==3u?"unemitted S-SMP opcode":
    s.sc_aot_fail_reason_value==4u?"write to statically compiled S-SMP code":
    s.sc_aot_fail_reason_value==5u?"unknown ARAM read":"static S-SMP AOT failure";
  if(s.sc_aot_fail_reason_value==5u)
    std::snprintf(text,sizeof(text),"%s: PC=%04X address=%02X%02X",reason,
      (unsigned)s.sc_aot_fail_pc_value,(unsigned)s.sc_aot_expected_opcode,(unsigned)s.sc_aot_actual_opcode);
  else
    std::snprintf(text,sizeof(text),"%s: PC=%04X expected=%02X actual=%02X",reason,
      (unsigned)s.sc_aot_fail_pc_value,(unsigned)s.sc_aot_expected_opcode,(unsigned)s.sc_aot_actual_opcode);
  copy_error(error,cap,text);return 0;
}
/* SimCity's music, effects, BRR samples, sequences and driver bytes remain
   game-owned ROM/ARAM data.  The S-CPU uploader and exact-PC S-SMP dispatcher
   provide the per-game authority; this project-owned fixed 32-phase S-DSP
   supplies hardware waveform, envelope, interpolation, noise and echo
   semantics plus native PCM transport.  No emulator DSP runtime or fallback
   engine is linked.  Any future S-SMP authority extension must update the
   SimCity code bitmap, lookup and dispatcher together so exact PC/opcode and
   code-write validation remain fail-closed. */
int sync_impl(uint64_t master,char *error,size_t cap){
  if(!g_acquired){copy_error(error,cap,"Static S-SMP AOT is not acquired.");return 0;}
  if(master<g_master){copy_error(error,cap,"Static S-SMP AOT master clock moved backwards.");return 0;}
  if(SC_STATIC_SNES::smp.sc_aot_failed_value)return fail_message(error,cap);
  if(g_sdsp_static_failed){copy_error(error,cap,"Static S-DSP program failure.");return 0;}
  const uint64_t master_delta=master-g_master;
  uint64_t delta=sc_audio_clock_advance(master_delta,&g_phase_remainder);
  const uint64_t target=g_cycles+delta;
  const uint64_t closed_form=sc_audio_clock_closed_form(master,0u);
  const uint32_t closed_remainder=sc_audio_clock_remainder(master);
  if(target!=closed_form||g_phase_remainder!=closed_remainder){copy_error(error,cap,"Static S-SMP AOT clock accumulator invariant failed.");return 0;}
  while(delta){
    unsigned chunk=(delta>131072u)?131072u:(unsigned)delta;
    SC_STATIC_SNES::smp.clock-=(int32)chunk;
    SC_STATIC_SNES::smp.enter();
    if(SC_STATIC_SNES::smp.sc_aot_failed_value)return fail_message(error,cap);
    SC_STATIC_SNES::dsp.synchronize();drain_samples();g_cycles+=chunk;delta-=chunk;
  }
  g_master=master;record_rendezvous(master,target,master_delta);copy_error(error,cap,"");return 1;
}
}
extern "C" int sc_static_apu_acquire(char *error,size_t cap){
  if(g_acquired){copy_error(error,cap,"Only one Full Static S-SMP AOT instance is supported.");return 0;}
  g_acquired=1;sc_static_apu_reset();copy_error(error,cap,"");return 1;
}
extern "C" void sc_static_apu_release(void){g_acquired=0;g_sink=nullptr;g_sink_context=nullptr;std::memset(&g_trace,0,sizeof(g_trace));}
extern "C" void sc_static_apu_reset(void){
  SC_STATIC_SNES::cpu.reset();SC_STATIC_SNES::smp.power();SC_STATIC_SNES::dsp.power();
  g_master=g_cycles=g_pcm_frames=0;g_phase_remainder=0;
  g_max_sync_master_delta=0;g_first_sync_master_delta=0;
  g_max_followup_sync_master_delta=0;
  g_sync_calls=g_cpu_port_event_count=0;g_rendezvous_hash=g_cpu_port_event_hash=kFnvOffset;
  g_current_instruction_pc=0xffc0u;g_code_write_barriers=0;g_program_started=false;
  g_sdsp_primitive_steps=g_sdsp_brr_steps=0;g_sdsp_primitive_hash=g_sdsp_brr_hash=kFnvOffset;
  g_sdsp_static_failed=g_sdsp_fail_reason=g_sdsp_fail_phase=0;
}
extern "C" void sc_static_apu_set_sink(SCStaticAudioSink sink,void *context){g_sink=sink;g_sink_context=context;}
extern "C" void sc_static_apu_set_trace_callbacks(const SCStaticTraceCallbacks *callbacks){if(callbacks)g_trace=*callbacks;else std::memset(&g_trace,0,sizeof(g_trace));}
extern "C" void sc_static_apu_trace_instruction_event(uint16_t pc,uint8_t opcode){
  g_current_instruction_pc=pc;if(pc==0x0800u)g_program_started=true;
  if(g_trace.instruction)g_trace.instruction(g_trace.context,pc,opcode);
}
extern "C" int sc_static_apu_trace_aram_write_event(uint16_t address,uint8_t value){
  if(g_program_started&&is_code_byte(address)){++g_code_write_barriers;return 0;}
  if(g_trace.aram_write&&!g_trace.aram_write(g_trace.context,g_current_instruction_pc,address,value))return 0;
  return 1;
}
extern "C" void sc_static_apu_trace_dsp_write_event(uint8_t address,uint8_t value){if(g_trace.dsp_write)g_trace.dsp_write(g_trace.context,g_current_instruction_pc,address,value);}
extern "C" void sc_static_apu_trace_port_event(uint8_t direction,uint8_t port,uint8_t value){if(g_trace.port)g_trace.port(g_trace.context,g_current_instruction_pc,direction,port,value);}
extern "C" void sc_static_sdsp_primitive_step(uint8_t phase){
  if(phase>=32u){g_sdsp_static_failed=1u;g_sdsp_fail_reason=1u;g_sdsp_fail_phase=phase;return;}
  ++g_sdsp_primitive_steps;g_sdsp_primitive_hash^=phase;g_sdsp_primitive_hash*=kFnvPrime;
}
extern "C" int sc_static_sdsp_brr_step(uint16_t address,const uint8_t *aram){
  if(!aram){g_sdsp_static_failed=1u;g_sdsp_fail_reason=2u;return 0;}
  ++g_sdsp_brr_steps;g_sdsp_brr_hash^=address;g_sdsp_brr_hash*=kFnvPrime;
  for(unsigned i=0;i<9u;++i){g_sdsp_brr_hash^=aram[(uint16_t)(address+i)];g_sdsp_brr_hash*=kFnvPrime;}
  return 1;
}
extern "C" void sc_static_sdsp_report_failure(uint32_t reason,uint8_t phase){
  if(!g_sdsp_static_failed){g_sdsp_static_failed=1u;g_sdsp_fail_reason=(uint8_t)(reason&0xffu);g_sdsp_fail_phase=phase;}
}
extern "C" int sc_static_apu_sync_to_master(uint64_t m,char *e,size_t c){return sync_impl(m,e,c);}
extern "C" int sc_static_apu_cpu_write_port(uint64_t m,unsigned p,uint8_t v,char *e,size_t c){
  if(p>=4u){copy_error(e,c,"Invalid static APUIO port.");return 0;}if(!sync_impl(m,e,c))return 0;
  SC_STATIC_SNES::cpu.port_write((uint8)p,v);record_cpu_port(1u,m,p,v);return 1;
}
extern "C" uint8_t sc_static_apu_cpu_read_port(uint64_t m,unsigned p,int *ok,char *e,size_t c){
  if(ok) *ok=0;
  if(p>=4u){copy_error(e,c,"Invalid static APUIO port.");return 0;}
  if(!sync_impl(m,e,c)) return 0;
  const uint8_t value=(uint8_t)SC_STATIC_SNES::smp.port_read(p);
  record_cpu_port(0u,m,p,value);
  if(ok) *ok=1;
  return value;
}
extern "C" int sc_static_apu_status(SCStaticApuStatus *s){
  if(!s||!g_acquired) return 0;
  std::memset(s,0,sizeof(*s));
  s->synchronized_master_clock=g_master;s->smp_cycles=g_cycles;
  s->smp_cycle_overshoot=SC_STATIC_SNES::smp.clock;s->smp_executed_cycles=g_cycles+(uint64_t)(SC_STATIC_SNES::smp.clock<0?0:SC_STATIC_SNES::smp.clock);
  s->smp_instructions=SC_STATIC_SNES::smp.instruction_count;s->aot_validated_instructions=SC_STATIC_SNES::smp.sc_aot_instructions;
  s->pcm_frames=SC_STATIC_SNES::dsp.core.pcm_frames_produced;
  s->pcm_known_frames=SC_STATIC_SNES::dsp.core.pcm_known_frames_produced;
  s->pcm_unknown_frames=SC_STATIC_SNES::dsp.core.pcm_unknown_frames_produced;
  s->pcm_hash=SC_STATIC_SNES::dsp.core.pcm_fnv1a64;
  s->pcm_overflows=SC_STATIC_SNES::dsp.core.pcm_overflows;
  s->pcm_available=SC_STATIC_SNES::dsp.core.pcm_count;
  s->smp_pc=SC_STATIC_SNES::smp.regs.pc;
  s->smp_a=SC_STATIC_SNES::smp.regs.B.a;s->smp_x=SC_STATIC_SNES::smp.regs.x;s->smp_y=SC_STATIC_SNES::smp.regs.B.y;s->smp_sp=SC_STATIC_SNES::smp.regs.sp;s->smp_psw=(uint8_t)(unsigned)SC_STATIC_SNES::smp.regs.p;
  s->aot_fail_pc=SC_STATIC_SNES::smp.sc_aot_fail_pc_value;
  s->expected_opcode=SC_STATIC_SNES::smp.sc_aot_expected_opcode;s->actual_opcode=SC_STATIC_SNES::smp.sc_aot_actual_opcode;
  s->aot_failed=(uint8_t)(SC_STATIC_SNES::smp.sc_aot_failed_value!=0u);s->aot_fail_reason=(uint8_t)SC_STATIC_SNES::smp.sc_aot_fail_reason_value;
  s->current_epoch=(uint8_t)(SC_STATIC_SNES::smp.status.iplrom_enable?0u:1u);s->code_write_barriers=g_code_write_barriers;
  s->sdsp_primitive_steps=g_sdsp_primitive_steps;s->sdsp_primitive_hash=g_sdsp_primitive_hash;s->sdsp_brr_steps=g_sdsp_brr_steps;s->sdsp_brr_hash=g_sdsp_brr_hash;
  s->sdsp_static_failed=g_sdsp_static_failed;s->sdsp_fail_reason=g_sdsp_fail_reason;s->sdsp_fail_phase=g_sdsp_fail_phase;
  s->dsp_phase=(uint8_t)SC_STATIC_SNES::dsp.core.phase;s->timer_enable_mask=timer_enable_mask();
  store_timer(s->timer_target,s->timer_stage1,s->timer_stage2,s->timer_stage3,0u,SC_STATIC_SNES::smp.timer0);
  store_timer(s->timer_target,s->timer_stage1,s->timer_stage2,s->timer_stage3,1u,SC_STATIC_SNES::smp.timer1);
  store_timer(s->timer_target,s->timer_stage1,s->timer_stage2,s->timer_stage3,2u,SC_STATIC_SNES::smp.timer2);
  s->clock_ratio_numerator=SC_AUDIO_CLOCK_RATIO_NUMERATOR;s->clock_ratio_denominator=SC_AUDIO_CLOCK_RATIO_DENOMINATOR;s->clock_remainder=g_phase_remainder;
  s->maximum_sync_master_delta=g_max_sync_master_delta;s->first_sync_master_delta=g_first_sync_master_delta;s->maximum_followup_sync_master_delta=g_max_followup_sync_master_delta;s->sync_calls=g_sync_calls;s->rendezvous_hash=g_rendezvous_hash;
  s->cpu_port_event_count=g_cpu_port_event_count;s->cpu_port_event_hash=g_cpu_port_event_hash;s->initialized=1u;return 1;
}

extern "C" int sc_static_apu_read_aram(uint32_t offset,void *output,size_t bytes){
  if(!g_acquired||!output||offset>65536u||bytes>65536u-offset)return 0;
  std::memcpy(output,SC_STATIC_SNES::smp.apuram+offset,bytes);
  return 1;
}

extern "C" int sc_static_apu_read_dsp_register(uint8_t address,uint8_t *value){
  if(!g_acquired||!value||address>=128u)return 0;
  /* Read the live S-DSP register file.  The former dual-backend runtime kept a
     second SimCityRecomp::smp_dsp_registers mirror, but Full Static execution
     never updates that abandoned scaffold and it must not be exposed as the
     current device state.  Every public frame boundary/APUIO rendezvous has
     already synchronized S-DSP, so this diagnostic read is side-effect free. */
  SC_STATIC_SNES::dsp.synchronize();
  *value=SC_STATIC_SNES::dsp.core.regs[address&0x7fu];
  return 1;
}

extern "C" size_t sc_static_apu_pcm_available(void){return g_acquired?simcity_dsp_pcm_available(&SC_STATIC_SNES::dsp.core):0u;}
extern "C" size_t sc_static_apu_pcm_read(int16_t *out,uint8_t *known,size_t capacity){
  if(!g_acquired||!out)return 0u;
  return simcity_dsp_pcm_read_with_knownness(&SC_STATIC_SNES::dsp.core,out,known,capacity);
}
extern "C" uint64_t sc_static_apu_pcm_overflow_count(void){return g_acquired?SC_STATIC_SNES::dsp.core.pcm_overflows:0u;}

extern "C" size_t sc_static_apu_snapshot_size(void){return sizeof(ApuSnapshotHeader)+sizeof(SC_STATIC_SNES::SMP)+65536u+8192u+sizeof(simcity_dsp);}
extern "C" int sc_static_apu_snapshot_save(void *data,size_t capacity){
  ApuSnapshotHeader h{};unsigned char *out=(unsigned char*)data;simcity_dsp dsp_state;
  if(!g_acquired||!data||capacity<sc_static_apu_snapshot_size())return 0;
  std::memcpy(h.magic,"SCAPU003",8u);h.version=3u;h.smp_size=(uint32_t)sizeof(SC_STATIC_SNES::SMP);h.aram_size=65536u;h.dsp_capacity=(uint32_t)sizeof(simcity_dsp);
  std::memcpy(h.cpu_registers,SC_STATIC_SNES::cpu.registers,4u);h.dsp_frequency=SC_STATIC_SNES::dsp.frequency;h.dsp_clock=SC_STATIC_SNES::dsp.clock;
  h.master=g_master;h.cycles=g_cycles;h.pcm_frames=g_pcm_frames;h.sync_calls=g_sync_calls;h.rendezvous_hash=g_rendezvous_hash;
  h.cpu_port_event_count=g_cpu_port_event_count;h.cpu_port_event_hash=g_cpu_port_event_hash;h.phase_remainder=g_phase_remainder;
  h.max_sync_master_delta=g_max_sync_master_delta;h.first_sync_master_delta=g_first_sync_master_delta;h.max_followup_sync_master_delta=g_max_followup_sync_master_delta;
  h.current_instruction_pc=g_current_instruction_pc;h.code_write_barriers=g_code_write_barriers;
  h.sdsp_primitive_steps=g_sdsp_primitive_steps;h.sdsp_primitive_hash=g_sdsp_primitive_hash;h.sdsp_brr_steps=g_sdsp_brr_steps;h.sdsp_brr_hash=g_sdsp_brr_hash;
  h.sdsp_static_failed=g_sdsp_static_failed;h.sdsp_fail_reason=g_sdsp_fail_reason;h.sdsp_fail_phase=g_sdsp_fail_phase;h.program_started=g_program_started?1u:0u;
  std::memcpy(out,&h,sizeof(h));out+=sizeof(h);std::memcpy(out,&SC_STATIC_SNES::smp,sizeof(SC_STATIC_SNES::smp));out+=sizeof(SC_STATIC_SNES::smp);
  std::memcpy(out,SC_STATIC_SNES::smp.apuram,65536u);out+=65536u;
  std::memcpy(out,SC_STATIC_SNES::smp.aram_known,8192u);out+=8192u;
  dsp_state=SC_STATIC_SNES::dsp.core;dsp_state.aram=nullptr;dsp_state.aram_known=nullptr;
  std::memcpy(out,&dsp_state,sizeof(dsp_state));return 1;
}
extern "C" int sc_static_apu_snapshot_load(const void *data,size_t size,char *error,size_t error_capacity){
  ApuSnapshotHeader h;const unsigned char *in=(const unsigned char*)data;uint8 *apuram,*aram_known;
  if(!g_acquired||!data||size!=sc_static_apu_snapshot_size()){copy_error(error,error_capacity,"Static audio snapshot size is invalid.");return 0;}
  std::memcpy(&h,in,sizeof(h));in+=sizeof(h);
  if(std::memcmp(h.magic,"SCAPU003",8u)!=0||h.version!=3u||h.smp_size!=sizeof(SC_STATIC_SNES::SMP)||h.aram_size!=65536u||h.dsp_capacity!=sizeof(simcity_dsp)){copy_error(error,error_capacity,"Static audio snapshot is from another build.");return 0;}
  apuram=SC_STATIC_SNES::smp.apuram;aram_known=SC_STATIC_SNES::smp.aram_known;
  std::memcpy(&SC_STATIC_SNES::smp,in,sizeof(SC_STATIC_SNES::smp));SC_STATIC_SNES::smp.apuram=apuram;SC_STATIC_SNES::smp.aram_known=aram_known;in+=sizeof(SC_STATIC_SNES::smp);
  std::memcpy(apuram,in,65536u);in+=65536u;std::memcpy(aram_known,in,8192u);in+=8192u;
  std::memcpy(SC_STATIC_SNES::cpu.registers,h.cpu_registers,4u);SC_STATIC_SNES::dsp.frequency=h.dsp_frequency;SC_STATIC_SNES::dsp.clock=h.dsp_clock;
  std::memcpy(&SC_STATIC_SNES::dsp.core,in,sizeof(SC_STATIC_SNES::dsp.core));SC_STATIC_SNES::dsp.core.aram=apuram;SC_STATIC_SNES::dsp.core.aram_known=aram_known;
  g_master=h.master;g_cycles=h.cycles;g_pcm_frames=h.pcm_frames;g_sync_calls=h.sync_calls;g_rendezvous_hash=h.rendezvous_hash;
  g_cpu_port_event_count=h.cpu_port_event_count;g_cpu_port_event_hash=h.cpu_port_event_hash;g_phase_remainder=h.phase_remainder;
  g_max_sync_master_delta=h.max_sync_master_delta;g_first_sync_master_delta=h.first_sync_master_delta;g_max_followup_sync_master_delta=h.max_followup_sync_master_delta;
  g_current_instruction_pc=(uint16_t)h.current_instruction_pc;g_code_write_barriers=h.code_write_barriers;
  g_sdsp_primitive_steps=h.sdsp_primitive_steps;g_sdsp_primitive_hash=h.sdsp_primitive_hash;g_sdsp_brr_steps=h.sdsp_brr_steps;g_sdsp_brr_hash=h.sdsp_brr_hash;
  g_sdsp_static_failed=h.sdsp_static_failed;g_sdsp_fail_reason=h.sdsp_fail_reason;g_sdsp_fail_phase=h.sdsp_fail_phase;g_program_started=h.program_started!=0u;
  copy_error(error,error_capacity,"");return 1;
}
