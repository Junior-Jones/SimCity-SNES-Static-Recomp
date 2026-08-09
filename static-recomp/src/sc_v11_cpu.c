#include "sc_v11_runtime.h"
#include "sc_core_internal.h"
#include <string.h>
#include <stdio.h>

void sc_v11_trace_cpu_instruction(SCV11Runtime *runtime, uint32_t address) {
    (void)runtime;
    (void)address;
}

uint8_t sc_v11_pack_p(const SCCpuState *cpu) { return cpu ? cpu->p : 0u; }

void sc_v11_unpack_p(SCCpuState *cpu, uint8_t p) {
    if (!cpu) return;
    cpu->p = p;
    if ((p & SC_FLAG_X) != 0u) { cpu->x &= 0x00ffu; cpu->y &= 0x00ffu; }
    if (cpu->emulation) {
        cpu->p |= (uint8_t)(SC_FLAG_M | SC_FLAG_X);
        cpu->x &= 0x00ffu; cpu->y &= 0x00ffu;
        cpu->sp = (uint16_t)(0x0100u | (cpu->sp & 0x00ffu));
    }
}

void sc_v11_set_nz8(SCCpuState *cpu, uint8_t value) {
    cpu->p = (uint8_t)(cpu->p & (uint8_t)~(SC_FLAG_N | SC_FLAG_Z));
    if (value == 0u) cpu->p |= SC_FLAG_Z;
    if ((value & 0x80u) != 0u) cpu->p |= SC_FLAG_N;
}

void sc_v11_set_nz16(SCCpuState *cpu, uint16_t value) {
    cpu->p = (uint8_t)(cpu->p & (uint8_t)~(SC_FLAG_N | SC_FLAG_Z));
    if (value == 0u) cpu->p |= SC_FLAG_Z;
    if ((value & 0x8000u) != 0u) cpu->p |= SC_FLAG_N;
}

int sc_v11_push8(SCV11Runtime *runtime, uint8_t value) {
    SCCpuState *cpu;
    if (!runtime) return 0;
    cpu = &runtime->machine.cpu;
    sc_v11_bus_write8(runtime, cpu->sp, value);
    if (runtime->route_failed) return 0;
    cpu->sp = cpu->emulation ? (uint16_t)(0x0100u | ((cpu->sp - 1u) & 0x00ffu)) : (uint16_t)(cpu->sp - 1u);
    return 1;
}

int sc_v11_push16(SCV11Runtime *runtime, uint16_t value) {
    return sc_v11_push8(runtime, (uint8_t)(value >> 8)) && sc_v11_push8(runtime, (uint8_t)value);
}

uint8_t sc_v11_pop8(SCV11Runtime *runtime) {
    SCCpuState *cpu = &runtime->machine.cpu;
    cpu->sp = cpu->emulation ? (uint16_t)(0x0100u | ((cpu->sp + 1u) & 0x00ffu)) : (uint16_t)(cpu->sp + 1u);
    return sc_v11_bus_read8(runtime, cpu->sp);
}

uint16_t sc_v11_pop16(SCV11Runtime *runtime) {
    uint8_t lo = sc_v11_pop8(runtime);
    uint8_t hi = sc_v11_pop8(runtime);
    return (uint16_t)(lo | ((uint16_t)hi << 8));
}

uint32_t sc_v11_ea_dp(SCV11Runtime *r, uint16_t op) { return (uint16_t)(r->machine.cpu.d + op); }
uint32_t sc_v11_ea_dpx(SCV11Runtime *r, uint16_t op) { return (uint16_t)(r->machine.cpu.d + op + r->machine.cpu.x); }
uint32_t sc_v11_ea_dpy(SCV11Runtime *r, uint16_t op) { return (uint16_t)(r->machine.cpu.d + op + r->machine.cpu.y); }
uint32_t sc_v11_ea_abs(SCV11Runtime *r, uint16_t op) { return ((uint32_t)r->machine.cpu.dbr << 16) | op; }
uint32_t sc_v11_ea_absx(SCV11Runtime *r, uint16_t op) { return ((uint32_t)r->machine.cpu.dbr << 16) | (uint16_t)(op + r->machine.cpu.x); }
uint32_t sc_v11_ea_absy(SCV11Runtime *r, uint16_t op) { return ((uint32_t)r->machine.cpu.dbr << 16) | (uint16_t)(op + r->machine.cpu.y); }
uint32_t sc_v11_ea_long(uint32_t op) { return op & 0x00ffffffu; }
uint32_t sc_v11_ea_longx(SCV11Runtime *r, uint32_t op) { return (op + r->machine.cpu.x) & 0x00ffffffu; }
uint32_t sc_v11_ea_stack(SCV11Runtime *r, uint8_t op) { return (uint16_t)(r->machine.cpu.sp + op); }

uint32_t sc_v11_ea_dp_indirect(SCV11Runtime *r, uint8_t op) {
    uint16_t p = (uint16_t)(r->machine.cpu.d + op);
    return ((uint32_t)r->machine.cpu.dbr << 16) | sc_v11_bus_read16(r, p);
}
uint32_t sc_v11_ea_dpx_indirect(SCV11Runtime *r, uint8_t op) {
    uint16_t p = (uint16_t)(r->machine.cpu.d + op + r->machine.cpu.x);
    return ((uint32_t)r->machine.cpu.dbr << 16) | sc_v11_bus_read16(r, p);
}
uint32_t sc_v11_ea_dp_indirect_y(SCV11Runtime *r, uint8_t op) {
    uint16_t p = (uint16_t)(r->machine.cpu.d + op);
    return ((uint32_t)r->machine.cpu.dbr << 16) | (uint16_t)(sc_v11_bus_read16(r, p) + r->machine.cpu.y);
}
uint32_t sc_v11_ea_dp_long(SCV11Runtime *r, uint8_t op) {
    uint16_t p = (uint16_t)(r->machine.cpu.d + op);
    uint32_t a = sc_v11_bus_read8(r, p);
    a |= (uint32_t)sc_v11_bus_read8(r, (uint16_t)(p + 1u)) << 8;
    a |= (uint32_t)sc_v11_bus_read8(r, (uint16_t)(p + 2u)) << 16;
    return a;
}
uint32_t sc_v11_ea_dp_long_y(SCV11Runtime *r, uint8_t op) { return (sc_v11_ea_dp_long(r, op) + r->machine.cpu.y) & 0x00ffffffu; }
uint32_t sc_v11_ea_stack_indirect_y(SCV11Runtime *r, uint8_t op) {
    uint16_t p = (uint16_t)(r->machine.cpu.sp + op);
    return ((uint32_t)r->machine.cpu.dbr << 16) | (uint16_t)(sc_v11_bus_read16(r, p) + r->machine.cpu.y);
}

static uint16_t sc_mask(unsigned width) { return width == 8u ? 0x00ffu : 0xffffu; }
static void sc_set_a(SCCpuState *cpu, uint16_t value, unsigned width) { cpu->a = width == 8u ? (uint16_t)((cpu->a & 0xff00u) | (value & 0x00ffu)) : value; }
static void sc_nz(SCCpuState *cpu, uint16_t value, unsigned width) { if (width == 8u) sc_v11_set_nz8(cpu, (uint8_t)value); else sc_v11_set_nz16(cpu, value); }

void sc_v11_op_lda(SCV11Runtime *r, uint16_t v, unsigned w) { sc_set_a(&r->machine.cpu, v, w); sc_nz(&r->machine.cpu, v, w); }
void sc_v11_op_ldx(SCV11Runtime *r, uint16_t v, unsigned w) { r->machine.cpu.x = v & sc_mask(w); sc_nz(&r->machine.cpu, v, w); }
void sc_v11_op_ldy(SCV11Runtime *r, uint16_t v, unsigned w) { r->machine.cpu.y = v & sc_mask(w); sc_nz(&r->machine.cpu, v, w); }
void sc_v11_op_and(SCV11Runtime *r, uint16_t v, unsigned w) { uint16_t z=(r->machine.cpu.a & sc_mask(w)) & v; sc_set_a(&r->machine.cpu,z,w); sc_nz(&r->machine.cpu,z,w); }
void sc_v11_op_ora(SCV11Runtime *r, uint16_t v, unsigned w) { uint16_t z=(r->machine.cpu.a & sc_mask(w)) | v; sc_set_a(&r->machine.cpu,z,w); sc_nz(&r->machine.cpu,z,w); }
void sc_v11_op_eor(SCV11Runtime *r, uint16_t v, unsigned w) { uint16_t z=(r->machine.cpu.a & sc_mask(w)) ^ v; sc_set_a(&r->machine.cpu,z,w); sc_nz(&r->machine.cpu,z,w); }

void sc_v11_op_adc(SCV11Runtime *r, uint16_t v, unsigned w) {
    SCCpuState *c=&r->machine.cpu; uint32_t mask=sc_mask(w), a=c->a&mask, z=a+(v&mask)+((c->p&SC_FLAG_C)!=0u); uint16_t out=(uint16_t)(z&mask);
    c->p=(uint8_t)(c->p&~(SC_FLAG_C|SC_FLAG_V)); if(z>mask)c->p|=SC_FLAG_C; if((~(a^v)&(a^out)&(1u<<(w-1u)))!=0u)c->p|=SC_FLAG_V;
    sc_set_a(c,out,w);sc_nz(c,out,w);
}
void sc_v11_op_sbc(SCV11Runtime *r, uint16_t v, unsigned w) {
    SCCpuState *c=&r->machine.cpu; int32_t mask=(int32_t)sc_mask(w), a=(int32_t)(c->a&mask), b=(int32_t)(v&mask), z=a-b-((c->p&SC_FLAG_C)?0:1); uint16_t out=(uint16_t)(z&mask);
    c->p=(uint8_t)(c->p&~(SC_FLAG_C|SC_FLAG_V)); if(z>=0)c->p|=SC_FLAG_C; if(((a^b)&(a^out)&(1u<<(w-1u)))!=0u)c->p|=SC_FLAG_V;
    sc_set_a(c,out,w);sc_nz(c,out,w);
}
void sc_v11_op_compare(SCV11Runtime *r, uint16_t reg, uint16_t v, unsigned w) {
    SCCpuState *c=&r->machine.cpu; uint16_t mask=sc_mask(w), a=reg&mask, b=v&mask, z=(uint16_t)((a-b)&mask); if(a>=b)c->p|=SC_FLAG_C;else c->p&=(uint8_t)~SC_FLAG_C;sc_nz(c,z,w);
}

void sc_v11_op_shift_memory(SCV11Runtime *r,uint32_t a,unsigned w,unsigned kind) {
    SCCpuState *c=&r->machine.cpu;uint16_t mask=sc_mask(w),v=w==8u?sc_v11_bus_read8(r,a):sc_v11_bus_read16(r,a),oldc=(c->p&SC_FLAG_C)?1u:0u,z=0u;
    if(r->route_failed)return;
    if(w==8u&&c->emulation)sc_v11_bus_write8(r,a,(uint8_t)v);else sc_v11_scheduler_internal_cycle(r,1u);
    if(r->route_failed)return;
    c->p&=(uint8_t)~SC_FLAG_C;
    if(kind==0u){if(v&(1u<<(w-1u)))c->p|=SC_FLAG_C;z=(uint16_t)((v<<1)&mask);}else if(kind==1u){if(v&1u)c->p|=SC_FLAG_C;z=(uint16_t)(v>>1);}else if(kind==2u){if(v&(1u<<(w-1u)))c->p|=SC_FLAG_C;z=(uint16_t)(((v<<1)|oldc)&mask);}else{if(v&1u)c->p|=SC_FLAG_C;z=(uint16_t)((v>>1)|(oldc<<(w-1u)));}
    if(w==8u)sc_v11_bus_write8(r,a,(uint8_t)z);else{sc_v11_bus_write8(r,(a+1u)&0x00ffffffu,(uint8_t)(z>>8));sc_v11_bus_write8(r,a,(uint8_t)z);}sc_nz(c,z,w);
}
void sc_v11_op_shift_accumulator(SCV11Runtime *r,unsigned w,unsigned kind) {
    SCCpuState *c=&r->machine.cpu;uint16_t mask=sc_mask(w),v=c->a&mask,oldc=(c->p&SC_FLAG_C)?1u:0u,z=0u;c->p&=(uint8_t)~SC_FLAG_C;
    if(kind==0u){if(v&(1u<<(w-1u)))c->p|=SC_FLAG_C;z=(uint16_t)((v<<1)&mask);}else if(kind==1u){if(v&1u)c->p|=SC_FLAG_C;z=(uint16_t)(v>>1);}else if(kind==2u){if(v&(1u<<(w-1u)))c->p|=SC_FLAG_C;z=(uint16_t)(((v<<1)|oldc)&mask);}else{if(v&1u)c->p|=SC_FLAG_C;z=(uint16_t)((v>>1)|(oldc<<(w-1u)));}
    sc_set_a(c,z,w);sc_nz(c,z,w);
}
void sc_v11_op_incdec_memory(SCV11Runtime *r,uint32_t a,unsigned w,int d){SCCpuState*c=&r->machine.cpu;uint16_t mask=sc_mask(w),v=w==8u?sc_v11_bus_read8(r,a):sc_v11_bus_read16(r,a),z;if(r->route_failed)return;if(w==8u&&c->emulation)sc_v11_bus_write8(r,a,(uint8_t)v);else sc_v11_scheduler_internal_cycle(r,1u);if(r->route_failed)return;z=(uint16_t)((v+d)&mask);if(w==8u)sc_v11_bus_write8(r,a,(uint8_t)z);else{sc_v11_bus_write8(r,(a+1u)&0x00ffffffu,(uint8_t)(z>>8));sc_v11_bus_write8(r,a,(uint8_t)z);}sc_nz(c,z,w);}
void sc_v11_op_incdec_accumulator(SCV11Runtime *r,unsigned w,int d){uint16_t mask=sc_mask(w),z=(uint16_t)(((r->machine.cpu.a&mask)+d)&mask);sc_set_a(&r->machine.cpu,z,w);sc_nz(&r->machine.cpu,z,w);}

int sc_v11_fail(SCV11Runtime *r,uint32_t address,const char *reason){if(!r)return 0;r->route_failed=1u;r->machine.fail_closed=1;r->machine.stop_address=address;(void)snprintf(r->route_error,sizeof(r->route_error),"%s at %02X:%04X M=%u X=%u E=%u",reason?reason:"static route failure",(unsigned)((address>>16)&0xFFu),(unsigned)(address&0xFFFFu),(unsigned)((r->machine.cpu.p&SC_FLAG_M)!=0u),(unsigned)((r->machine.cpu.p&SC_FLAG_X)!=0u),(unsigned)r->machine.cpu.emulation);sc_copy_text(r->machine.stop_reason,sizeof(r->machine.stop_reason),r->route_error);return 0;}

void sc_v11_runtime_init(SCV11Runtime *r,const uint8_t *rom,size_t size){
    if(!r)return;
    memset(r,0,sizeof(*r));
    sc_machine_power_on(&r->machine);
    sc_v11_smp_power_on(r);
    sc_audio_transport_power_on(r);
    r->rom=rom;
    r->rom_size=size;
    r->scheduler.hclock=0u;
    r->scheduler.refresh_hclock=538u;
    r->scheduler.interrupt_delivery_active=1u;
    r->machine.fail_closed=0;
    r->machine.hardware_fail_closed=0;
    memset(r->sram,0xff,sizeof(r->sram));
    r->rom_identity_valid=(uint8_t)sc_v11_validate_rom_identity(rom,size,NULL);
    r->route_failed=(uint8_t)(r->rom_identity_valid==0u);
    if(r->route_failed)sc_copy_text(r->route_error,sizeof(r->route_error),"exact external SimCity ROM is required");
    else sc_v11_scheduler_advance(r,186u);
}

int sc_v11_inject_native_nmi(SCV11Runtime *r){
    SCCpuState *c;
    uint32_t return_address;
    if(!r)return 0;
    c=&r->machine.cpu;
    return_address=((uint32_t)c->pbr<<16)|c->pc;
    if(c->emulation)return sc_v11_fail(r,return_address,"native NMI required");

    /* W65C816 native interrupt entry: one dummy program cycle, one internal
     * cycle, four stack writes and the two vector reads.  The vector and all
     * stack traffic use the project-owned A-bus and scheduler. */
    sc_v11_scheduler_program_bus_cycle(r,return_address);
    sc_v11_scheduler_internal_cycle(r,1u);
    if(!sc_v11_push8(r,c->pbr)||!sc_v11_push16(r,c->pc)||!sc_v11_push8(r,c->p))return 0;
    c->p|=SC_FLAG_I;
    c->p&=(uint8_t)~SC_FLAG_D;
    c->pbr=0u;
    c->pc=sc_v11_bus_read16(r,0x00FFEAu);
    r->scheduler.nmi_pending=0u;
    r->machine.static_nmi_deliveries++;
    return r->route_failed?0:1;
}

static int sc_v11_inject_native_irq(SCV11Runtime *r){
    SCCpuState *c;
    uint32_t return_address;
    if(!r)return 0;
    c=&r->machine.cpu;
    return_address=((uint32_t)c->pbr<<16)|c->pc;
    if(c->emulation)return sc_v11_fail(r,return_address,"native IRQ required");
    sc_v11_scheduler_program_bus_cycle(r,return_address);
    sc_v11_scheduler_internal_cycle(r,1u);
    if(!sc_v11_push8(r,c->pbr)||!sc_v11_push16(r,c->pc)||!sc_v11_push8(r,c->p))return 0;
    c->p|=SC_FLAG_I;
    c->p&=(uint8_t)~SC_FLAG_D;
    c->pbr=0u;
    c->pc=sc_v11_bus_read16(r,0x00FFEEu);
    r->scheduler.irq_pending=0u;
    return r->route_failed?0:1;
}

int sc_v11_before_instruction(SCV11Runtime *r){
    if(!r||r->route_failed)return 0;
    if(!r->scheduler.interrupt_delivery_active)return 1;
    if(r->scheduler.nmi_pending)return sc_v11_inject_native_nmi(r);
    if(r->scheduler.irq_pending && (r->machine.cpu.p&SC_FLAG_I)==0u)
        return sc_v11_inject_native_irq(r);
    return 1;
}

int sc_v11_finish_instruction(SCV11Runtime *r){
    if(!r||r->route_failed)return 0;
    if(!r->scheduler.interrupt_delivery_active)return 1;
    if(r->scheduler.nmi_pending)return sc_v11_inject_native_nmi(r);
    if(r->scheduler.irq_pending && (r->machine.cpu.p&SC_FLAG_I)==0u)
        return sc_v11_inject_native_irq(r);
    return 1;
}
