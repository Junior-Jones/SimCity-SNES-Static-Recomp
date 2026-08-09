#include "sc_v11_runtime.h"
#include "sc_core_internal.h"
#include "simcity_static_recomp.h"
#include "sc_static_apu.h"
#include "audio/epoch-topology/sc_audio_epoch_registry.h"
#include <stdio.h>
#include <string.h>

#define SC_AUDIO_TRACE_FNV_OFFSET UINT64_C(14695981039346656037)
#define SC_AUDIO_TRACE_FNV_PRIME UINT64_C(1099511628211)

static uint64_t trace_hash_byte(uint64_t hash, uint8_t value) {
    if (hash == 0u) hash = SC_AUDIO_TRACE_FNV_OFFSET;
    hash ^= value;
    return hash * SC_AUDIO_TRACE_FNV_PRIME;
}
static uint64_t trace_hash_u16(uint64_t hash, uint16_t value) {
    hash = trace_hash_byte(hash, (uint8_t)value);
    return trace_hash_byte(hash, (uint8_t)(value >> 8));
}

void sc_v11_set_audio_sink(SCV11Runtime *runtime,SCV11AudioSink sink,void *context){
    if(!runtime)return;
    runtime->audio_sink=sink;
    runtime->audio_sink_context=context;
}

static void audio_sink_bridge(void *context,int16_t left,int16_t right){
    SCV11Runtime *runtime=(SCV11Runtime*)context;
    if(runtime&&runtime->audio_sink)runtime->audio_sink(runtime->audio_sink_context,left,right);
}
static int audio_fail(SCV11Runtime *runtime, const char *message) {
    if (!runtime) return 0;
    runtime->route_failed = 1u;
    runtime->machine.fail_closed = 1;
    sc_copy_text(runtime->route_error, sizeof(runtime->route_error),
                 message ? message : "audio engine failure");
    sc_copy_text(runtime->smp_core.error, sizeof(runtime->smp_core.error),
                 runtime->route_error);
    return 0;
}
static void trace_instruction(void *context, uint16_t pc, uint8_t opcode) {
    SCV11Runtime *runtime = (SCV11Runtime *)context;
    SCAudioRuntimeTrace *trace;
    if (!runtime) return;
    trace = &runtime->audio_trace;
    runtime->machine.smp.pc = pc;
    runtime->smp_core.observed_pc[pc >> 3] |= (uint8_t)(1u << (pc & 7u));
    trace->current_instruction_pc = pc;
    trace->instruction_count++;
    trace->instruction_fnv1a = trace_hash_u16(trace->instruction_fnv1a, pc);
    trace->instruction_fnv1a = trace_hash_byte(trace->instruction_fnv1a, opcode);
    if (pc == 0x0800u) {
        trace->program_started = 1u;
        if (runtime->audio_epoch_trace.current_epoch != SC_AUDIO_EPOCH_SIMCITY_INITIAL) {
            runtime->audio_epoch_trace.current_epoch = SC_AUDIO_EPOCH_SIMCITY_INITIAL;
            runtime->audio_epoch_trace.initial_epoch_entered = 1u;
            runtime->audio_epoch_trace.transition_count++;
            runtime->audio_epoch_trace.transition_master_clock = runtime->scheduler.master_clock;
        }
    } else if (!trace->program_started && pc >= 0xffc0u) {
        runtime->audio_epoch_trace.current_epoch = SC_AUDIO_EPOCH_IPL;
    }
    (void)sc_audio_transport_instruction_begin(runtime, pc);
    trace->previous_instruction_pc = pc;
    trace->previous_instruction_valid = 1u;
}
static int trace_static_aram_write(void *context, uint16_t instruction_pc,
                                   uint16_t address, uint8_t value) {
    SCV11Runtime *runtime = (SCV11Runtime *)context;
    if (!runtime) return 0;
    runtime->machine.aram[address] = value;
    runtime->audio_trace.aram_write_count++;
    runtime->audio_trace.aram_write_fnv1a =
        trace_hash_u16(runtime->audio_trace.aram_write_fnv1a, instruction_pc);
    runtime->audio_trace.aram_write_fnv1a =
        trace_hash_u16(runtime->audio_trace.aram_write_fnv1a, address);
    runtime->audio_trace.aram_write_fnv1a =
        trace_hash_byte(runtime->audio_trace.aram_write_fnv1a, value);
    if (runtime->audio_trace.program_started)
        runtime->audio_trace.mutable_write_bitmap[address >> 3] |=
            (uint8_t)(1u << (address & 7u));
    if (instruction_pc == 0xffe2u) {
        sc_audio_transport_smp_aram_write(runtime, address, value);
        if (runtime->audio_transport.failed || runtime->route_failed) return 0;
    }
    return 1;
}
static void trace_dsp_write(void *context, uint16_t instruction_pc,
                            uint8_t address, uint8_t value) {
    SCV11Runtime *runtime = (SCV11Runtime *)context;
    if (!runtime || address >= 128u) return;
    runtime->machine.dsp[address] = value;
    runtime->audio_trace.dsp_write_count++;
    runtime->audio_trace.dsp_write_fnv1a =
        trace_hash_u16(runtime->audio_trace.dsp_write_fnv1a, instruction_pc);
    runtime->audio_trace.dsp_write_fnv1a =
        trace_hash_byte(runtime->audio_trace.dsp_write_fnv1a, address);
    runtime->audio_trace.dsp_write_fnv1a =
        trace_hash_byte(runtime->audio_trace.dsp_write_fnv1a, value);
    runtime->audio_trace.dsp_register_write_bitmap[address >> 3] |=
        (uint8_t)(1u << (address & 7u));
}
static void trace_port(void *context, uint16_t instruction_pc,
                       uint8_t direction, uint8_t port, uint8_t value) {
    SCV11Runtime *runtime = (SCV11Runtime *)context;
    if (!runtime || port >= 4u) return;
    runtime->audio_trace.port_event_count++;
    runtime->audio_trace.port_event_fnv1a =
        trace_hash_u16(runtime->audio_trace.port_event_fnv1a, instruction_pc);
    runtime->audio_trace.port_event_fnv1a =
        trace_hash_byte(runtime->audio_trace.port_event_fnv1a, direction);
    runtime->audio_trace.port_event_fnv1a =
        trace_hash_byte(runtime->audio_trace.port_event_fnv1a, port);
    runtime->audio_trace.port_event_fnv1a =
        trace_hash_byte(runtime->audio_trace.port_event_fnv1a, value);
    if (direction == 0u) {
        runtime->machine.cpu_to_smp_ports[port] = value;
        sc_audio_transport_smp_port_access(runtime, SC_AUDIO_SCPU_ACCESS_READ,
                                           port, value);
    } else {
        runtime->machine.smp_to_cpu_ports[port] = value;
        sc_audio_transport_smp_port_access(runtime, SC_AUDIO_SCPU_ACCESS_WRITE,
                                           port, value);
    }
}
static int set_engine_callbacks(SCV11Runtime *runtime){
    SCStaticTraceCallbacks cb;
    memset(&cb,0,sizeof(cb));
    cb.instruction=trace_instruction;
    cb.aram_write=trace_static_aram_write;
    cb.dsp_write=trace_dsp_write;
    cb.port=trace_port;
    cb.context=runtime;
    sc_static_apu_set_trace_callbacks(&cb);
    sc_static_apu_set_sink(audio_sink_bridge,runtime);
    return 1;
}
void sc_v11_smp_power_on(SCV11Runtime *runtime) {
    if (!runtime) return;
    memset(&runtime->smp_core, 0, sizeof(runtime->smp_core));
    memset(&runtime->audio_trace, 0, sizeof(runtime->audio_trace));
    memset(&runtime->audio_epoch_trace, 0, sizeof(runtime->audio_epoch_trace));
    runtime->audio_epoch_trace.current_epoch = SC_AUDIO_EPOCH_IPL;
    runtime->audio_trace.instruction_fnv1a = SC_AUDIO_TRACE_FNV_OFFSET;
    runtime->audio_trace.aram_write_fnv1a = SC_AUDIO_TRACE_FNV_OFFSET;
    runtime->audio_trace.dsp_write_fnv1a = SC_AUDIO_TRACE_FNV_OFFSET;
    runtime->audio_trace.port_event_fnv1a = SC_AUDIO_TRACE_FNV_OFFSET;
    memset(&runtime->machine.smp,0,sizeof(runtime->machine.smp));memset(runtime->machine.cpu_to_smp_ports,0,4u);memset(runtime->machine.smp_to_cpu_ports,0,4u);
    runtime->machine.smp.pc=0xffc0u;runtime->machine.smp.sp=0xefu;runtime->machine.smp.ipl_rom_active=1u;
    sc_static_apu_reset();
    (void)set_engine_callbacks(runtime);
}
int sc_v11_smp_sync_to_master(SCV11Runtime *runtime,uint64_t master_clock){
    char error[256];
    SCStaticApuStatus s;
    if(!runtime||runtime->route_failed)return 0;
    if(!sc_static_apu_sync_to_master(master_clock,error,sizeof(error)))
        return audio_fail(runtime,error);
    if(sc_static_apu_status(&s)){
        runtime->scheduler.smp_instructions=s.smp_instructions;
        runtime->smp_core.cycle=s.smp_cycles;
        runtime->smp_core.instructions=s.smp_instructions;
        runtime->smp_core.validated_instructions=s.aot_validated_instructions;
        runtime->smp_core.code_write_barriers=s.code_write_barriers;
        runtime->smp_core.current_epoch=s.current_epoch;
        runtime->smp_core.failed=s.aot_failed;
        runtime->machine.smp.pc=s.smp_pc;
        runtime->machine.smp.ipl_rom_active=(uint8_t)(s.current_epoch==0u);
        runtime->audio_epoch_trace.current_epoch=s.current_epoch;
        if(s.current_epoch!=SC_AUDIO_EPOCH_IPL &&
           !sc_audio_epoch_descriptor(s.current_epoch)){
            runtime->audio_epoch_trace.unknown_epoch_barriers++;
            return audio_fail(runtime,"unknown Full Static audio epoch");
        }
    }
    return 1;
}
int sc_v11_smp_cpu_write_port(SCV11Runtime *runtime,unsigned port,uint8_t value){
    char error[256];
    int ok;
    if(!runtime||port>=4u||runtime->route_failed)return 0;
    if(!sc_v11_smp_sync_to_master(runtime,runtime->scheduler.master_clock))return 0;
    runtime->machine.cpu_apu_writes++;
    runtime->machine.cpu_apu_write_per_port[port]++;
    if(!sc_audio_transport_cpu_access(runtime,SC_AUDIO_SCPU_ACCESS_WRITE,port,value))return 0;
    ok=sc_static_apu_cpu_write_port(runtime->scheduler.master_clock,port,value,error,sizeof(error));
    if(!ok)return audio_fail(runtime,error);
    runtime->machine.cpu_to_smp_ports[port]=value;
    return 1;
}
uint8_t sc_v11_smp_cpu_read_port(SCV11Runtime *runtime,unsigned port){
    char error[256];
    uint8_t value;
    int ok=0;
    if(!runtime||port>=4u||runtime->route_failed)return 0u;
    value=sc_static_apu_cpu_read_port(runtime->scheduler.master_clock,port,&ok,error,sizeof(error));
    if(!ok){(void)audio_fail(runtime,error);return 0u;}
    runtime->machine.cpu_apu_reads++;
    runtime->machine.cpu_apu_read_per_port[port]++;
    runtime->machine.smp_to_cpu_ports[port]=value;
    if(!sc_audio_transport_cpu_access(runtime,SC_AUDIO_SCPU_ACCESS_READ,port,value))return 0u;
    return value;
}
int sc_v11_smp_run_microcycle(SCV11Runtime *runtime){return runtime?sc_v11_smp_sync_to_master(runtime,runtime->scheduler.master_clock):0;}
