#include "sc_v11_runtime.h"
#include "sc_core_internal.h"
#include "sc_stock_map_trace.h"
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

void sc_v11_op_lda(SCV11Runtime *r, uint16_t v, unsigned w) {
    const uint32_t pc = r->current_instruction_address;
    /* Native ship entry scans the south and east edges from these starts. */
    if ((pc == 0x03accfu || pc == 0x03acfeu) && sc_v11_stock_world_traffic_active(r))
        v = pc == 0x03accfu ? SC_STOCK_WORLD_HEIGHT - 1u : SC_STOCK_WORLD_WIDTH - 1u;
    if ((pc == 0x02b4bbu || pc == 0x02b4edu) && sc_v11_stock_world_traffic_active(r)) {
        const uint16_t sp = r->machine.cpu.sp;
        const uint8_t *wram = r->machine.wram;
        const unsigned caller = wram[(uint16_t)(sp + 1)] | ((unsigned)wram[(uint16_t)(sp + 2)] << 8u);
        /* Only the four map-area percentages in City Overview. Keep the
           16-bit division remainder safe: n*25/12000 equals n*100/48000. */
        if (caller == 0xb1b7u || caller == 0xb1e5u || caller == 0xb213u || caller == 0xb241u)
            v = (uint16_t)(v / ((SC_STOCK_WORLD_WIDTH / SC_STOCK_TILE_WIDTH) *
                                (SC_STOCK_WORLD_HEIGHT / SC_STOCK_TILE_HEIGHT)));
    }
    if ((pc == 0x01a08eu || pc == 0x01a0a9u || pc == 0x01a09au || pc == 0x01a0b5u ||
         pc == 0x01b3aeu || pc == 0x01b3dau || pc == 0x01a69du || pc == 0x01a6b6u) &&
        sc_v11_stock_world_camera_active(r)) {
        if (pc == 0x01a08eu || pc == 0x01a0a9u || pc == 0x01b3aeu || pc == 0x01a69du)
            v = (uint16_t)(v + SC_STOCK_WORLD_WIDTH - SC_STOCK_TILE_WIDTH);
        else
            v = (uint16_t)(v + SC_STOCK_WORLD_HEIGHT - SC_STOCK_TILE_HEIGHT);
    }
    sc_set_a(&r->machine.cpu, v, w);
    sc_nz(&r->machine.cpu, v, w);
    if ((pc == 0x01c776u || pc == 0x01c77fu) && sc_v11_stock_world_camera_active(r)) {
        /* The next instruction is BMI. Its intended sign is that of the
           coordinate word, not the low byte (positive tiles 128..239). */
        const unsigned high = r->machine.wram[pc == 0x01c776u ? 0x1d4u : 0x1d6u];
        r->machine.cpu.p = high ? (uint8_t)(r->machine.cpu.p | SC_FLAG_N) :
                                 (uint8_t)(r->machine.cpu.p & ~SC_FLAG_N);
    }
}
void sc_v11_op_ldx(SCV11Runtime *r, uint16_t v, unsigned w) { r->machine.cpu.x = v & sc_mask(w); sc_nz(&r->machine.cpu, v, w); }
void sc_v11_op_ldy(SCV11Runtime *r, uint16_t v, unsigned w) { r->machine.cpu.y = v & sc_mask(w); sc_nz(&r->machine.cpu, v, w); }
void sc_v11_op_and(SCV11Runtime *r, uint16_t v, unsigned w) {
    if (r->current_instruction_address == 0x03b16du && sc_v11_stock_world_power_active(r))
        v = 0x000fu; /* materialize 16 power bits per bitmap word */
    uint16_t z=(r->machine.cpu.a & sc_mask(w)) & v;
    sc_set_a(&r->machine.cpu,z,w); sc_nz(&r->machine.cpu,z,w);
}
void sc_v11_op_ora(SCV11Runtime *r, uint16_t v, unsigned w) { uint16_t z=(r->machine.cpu.a & sc_mask(w)) | v; sc_set_a(&r->machine.cpu,z,w); sc_nz(&r->machine.cpu,z,w); }
void sc_v11_op_eor(SCV11Runtime *r, uint16_t v, unsigned w) { uint16_t z=(r->machine.cpu.a & sc_mask(w)) ^ v; sc_set_a(&r->machine.cpu,z,w); sc_nz(&r->machine.cpu,z,w); }

void sc_v11_op_adc(SCV11Runtime *r, uint16_t v, unsigned w) {
    if (r->current_instruction_address == 0x03b146u && sc_v11_stock_world_power_active(r))
        v = (uint16_t)(v * (SC_STOCK_WORLD_WIDTH / SC_STOCK_TILE_WIDTH));
    SCCpuState *c=&r->machine.cpu; uint32_t mask=sc_mask(w), a=c->a&mask, z=a+(v&mask)+((c->p&SC_FLAG_C)!=0u); uint16_t out=(uint16_t)(z&mask);
    c->p=(uint8_t)(c->p&~(SC_FLAG_C|SC_FLAG_V)); if(z>mask)c->p|=SC_FLAG_C; if((~(a^v)&(a^out)&(1u<<(w-1u)))!=0u)c->p|=SC_FLAG_V;
    sc_set_a(c,out,w);sc_nz(c,out,w);
    /* Stock neighbor lookups add a signed one-cell offset and use BMI
       before CMP. In an expanded map the sign of the byte is not the
       sign of the actual coordinate. Keep the near-side underflow check. */
    if (w == 8u) {
        int coordinate;
        switch (r->current_instruction_address) {
            case 0x01b6d8u: case 0x01b6e6u: case 0x01b711u: case 0x01b71fu:
                coordinate = (int)a + (int)(int8_t)(uint8_t)v;
                break;
            case 0x01b8acu: case 0x01b8bcu:
                coordinate = (int)(int8_t)(uint8_t)a + (int)(uint8_t)v;
                break;
            default: return;
        }
        if (sc_v11_stock_world_camera_active(r)) {
            if (coordinate < 0 || coordinate > 255) c->p |= SC_FLAG_N;
            else c->p &= (uint8_t)~SC_FLAG_N;
        }
    }
}
void sc_v11_op_sbc(SCV11Runtime *r, uint16_t v, unsigned w) {
    const uint32_t pc = r->current_instruction_address;
    if ((pc == 0x00ac8bu || pc == 0x00aca3u) && sc_v11_stock_world_traffic_active(r))
        v = pc == 0x00ac8bu ? SC_STOCK_WORLD_WIDTH : SC_STOCK_WORLD_HEIGHT;
    SCCpuState *c=&r->machine.cpu; int32_t mask=(int32_t)sc_mask(w), a=(int32_t)(c->a&mask), b=(int32_t)(v&mask), z=a-b-((c->p&SC_FLAG_C)?0:1); uint16_t out=(uint16_t)(z&mask);
    c->p=(uint8_t)(c->p&~(SC_FLAG_C|SC_FLAG_V)); if(z>=0)c->p|=SC_FLAG_C; if(((a^b)&(a^out)&(1u<<(w-1u)))!=0u)c->p|=SC_FLAG_V;
    sc_set_a(c,out,w);sc_nz(c,out,w);
}
void sc_v11_op_compare(SCV11Runtime *r, uint16_t reg, uint16_t v, unsigned w) {
    const uint32_t pc = r->current_instruction_address;
    switch (pc) {
        case 0x03ac8du: case 0x03acecu: /* Ship's north/south edge scans. */
            if (sc_v11_stock_world_traffic_active(r)) v = SC_STOCK_WORLD_WIDTH - 2u;
            break;
        case 0x03acbdu: case 0x03ad1fu: /* Ship's west/east edge scans. */
            if (sc_v11_stock_world_traffic_active(r)) v = SC_STOCK_WORLD_HEIGHT - 2u;
            break;
        case 0x00b7edu: case 0x00b806u: /* Ship leaves the city when it crosses an edge. */
            if (sc_v11_stock_world_traffic_active(r))
                v = pc == 0x00b7edu ? SC_STOCK_WORLD_HEIGHT : SC_STOCK_WORLD_WIDTH;
            break;
        case 0x00b8f6u: case 0x00b96bu: case 0x00b9aeu:
            /* The bus resolves the direction's real (x,y) and checks both axes.
               The old wrapped byte index is not a valid bounds check. */
            if (sc_v11_stock_world_traffic_active(r)) v = UINT16_MAX;
            break;
        case 0x038291u: case 0x03a1c5u: case 0x03a244u:
            if (sc_v11_stock_world_traffic_active(r))
                v = SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT / 32u;
            break;
        case 0x039accu: case 0x039f97u:
            if (sc_v11_stock_world_traffic_active(r))
                v = SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT / 64u;
            break;
        case 0x03a17cu: case 0x03a1fbu:
            if (sc_v11_stock_world_traffic_active(r)) v = SC_STOCK_WORLD_WIDTH / 8u - 1u;
            break;
        case 0x03a18fu: case 0x03a20eu:
            if (sc_v11_stock_world_traffic_active(r)) v = SC_STOCK_WORLD_HEIGHT / 8u - 1u;
            break;
        case 0x03a1aau: case 0x03a229u:
            if (sc_v11_stock_world_traffic_active(r)) v = SC_STOCK_WORLD_WIDTH / 8u;
            break;
        case 0x03a1b2u: case 0x03a231u:
            if (sc_v11_stock_world_traffic_active(r)) v = SC_STOCK_WORLD_HEIGHT / 8u;
            break;
        case 0x039f4du:
            if (sc_v11_stock_world_traffic_active(r)) v = SC_STOCK_WORLD_WIDTH / 2u;
            break;
        case 0x039f59u:
            if (sc_v11_stock_world_traffic_active(r)) v = SC_STOCK_WORLD_HEIGHT / 2u;
            break;
        case 0x039b60u:
            if (sc_v11_stock_world_density_active(r)) v = SC_STOCK_WORLD_WIDTH;
            break;
        case 0x039b68u:
            if (sc_v11_stock_world_density_active(r)) v = SC_STOCK_WORLD_HEIGHT;
            break;
        case 0x039b88u: case 0x03a147u:
            if (sc_v11_stock_world_density_active(r))
                v = SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT / 4u;
            break;
        case 0x03a057u: case 0x03a0ddu:
            if (sc_v11_stock_world_density_active(r) || sc_v11_stock_world_environment_active(r))
                v = SC_STOCK_WORLD_WIDTH / 2u - 1u;
            break;
        case 0x03a072u: case 0x03a0f8u:
            if (sc_v11_stock_world_density_active(r) || sc_v11_stock_world_environment_active(r))
                v = SC_STOCK_WORLD_HEIGHT / 2u - 1u;
            break;
        case 0x03a0a5u: case 0x03a12bu:
            if (sc_v11_stock_world_density_active(r) || sc_v11_stock_world_environment_active(r))
                v = SC_STOCK_WORLD_WIDTH / 2u;
            break;
        case 0x03a0aeu: case 0x03a134u:
            if (sc_v11_stock_world_density_active(r) || sc_v11_stock_world_environment_active(r))
                v = SC_STOCK_WORLD_HEIGHT / 2u;
            break;
        case 0x039c44u: case 0x039cb6u:
            if (sc_v11_stock_world_environment_active(r)) v = SC_STOCK_WORLD_WIDTH / 2u;
            break;
        case 0x039c4cu: case 0x039cbfu:
            if (sc_v11_stock_world_environment_active(r)) v = SC_STOCK_WORLD_HEIGHT / 2u;
            break;
        case 0x039fd2u:
            if (sc_v11_stock_world_environment_active(r)) v = SC_STOCK_WORLD_WIDTH / 4u - 1u;
            break;
        case 0x039fedu:
            if (sc_v11_stock_world_environment_active(r)) v = SC_STOCK_WORLD_HEIGHT / 4u - 1u;
            break;
        case 0x03a021u:
            if (sc_v11_stock_world_environment_active(r)) v = SC_STOCK_WORLD_WIDTH / 4u;
            break;
        case 0x03a029u:
            if (sc_v11_stock_world_environment_active(r)) v = SC_STOCK_WORLD_HEIGHT / 4u;
            break;
        case 0x039c28u:
            if (sc_v11_stock_world_environment_active(r))
                v = SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT / 16u;
            break;
        case 0x00aefbu:
            if ((r->machine.cpu.x == 0u || r->machine.cpu.x == 8u) && sc_v11_stock_world_traffic_active(r))
                v = SC_STOCK_WORLD_WIDTH - 1u;
            break;
        case 0x00af6bu:
            if ((r->machine.cpu.x == 0u || r->machine.cpu.x == 8u) && sc_v11_stock_world_traffic_active(r))
                v = SC_STOCK_WORLD_HEIGHT - 1u;
            break;
        case 0x00ac85u: /* Monster's random roaming destination. */
        case 0x03a9c8u:
        case 0x03b420u:
        case 0x03988fu:
            if (sc_v11_stock_world_traffic_active(r)) v = SC_STOCK_WORLD_WIDTH;
            break;
        case 0x00ac9du:
        case 0x03a9cdu:
        case 0x03b425u:
        case 0x039886u:
            if (sc_v11_stock_world_traffic_active(r)) v = SC_STOCK_WORLD_HEIGHT;
            break;
        case 0x03b385u:
            if (sc_v11_stock_world_traffic_active(r)) v = SC_STOCK_WORLD_WIDTH - 1u;
            break;
        case 0x03b38fu:
            if (sc_v11_stock_world_traffic_active(r)) v = SC_STOCK_WORLD_HEIGHT - 1u;
            break;
        case 0x038919u:
            if (sc_v11_stock_world_traffic_active(r))
                v = SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT / 4u;
            break;
        case 0x03900au:
            if (sc_v11_stock_world_power_active(r) ||
                (sc_v11_stock_world_census_active(r) && sc_v11_stock_world_traffic_active(r)))
                v = SC_STOCK_WORLD_WIDTH - 1u;
            break;
        case 0x039014u:
            if (sc_v11_stock_world_power_active(r) ||
                (sc_v11_stock_world_census_active(r) && sc_v11_stock_world_traffic_active(r)))
                v = SC_STOCK_WORLD_HEIGHT - 1u;
            break;
        case 0x03afc7u: case 0x03b10bu:
            if (sc_v11_stock_world_power_active(r))
                v = SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT / 8u;
            break;
        case 0x03b19du:
            if (sc_v11_stock_world_power_active(r)) v = SC_STOCK_WORLD_WIDTH * SC_STOCK_WORLD_HEIGHT;
            break;
        case 0x038349u:
            if (sc_v11_stock_world_census_active(r)) v = SC_STOCK_WORLD_WIDTH;
            break;
        case 0x038356u:
            if (sc_v11_stock_world_census_active(r)) v = SC_STOCK_WORLD_HEIGHT;
            break;
        case 0x01a698u: /* Stock notification camera, east clamp. */
            if (sc_v11_stock_world_camera_active(r)) v += SC_STOCK_WORLD_WIDTH - SC_STOCK_TILE_WIDTH;
            break;
        case 0x01a6b1u: /* Stock notification camera, south clamp. */
            if (sc_v11_stock_world_camera_active(r)) v += SC_STOCK_WORLD_HEIGHT - SC_STOCK_TILE_HEIGHT;
            break;
        case 0x01c28du: case 0x01b3a7u: case 0x01c77bu:
        case 0x01b447u: case 0x01b492u: case 0x01b551u: case 0x01b7cdu:
        case 0x01b6ddu: case 0x01b716u: case 0x01b8b1u:
            if (sc_v11_stock_world_camera_active(r)) v = SC_STOCK_WORLD_WIDTH;
            break;
        case 0x01c200u: case 0x01b3d3u: case 0x01c784u:
        case 0x01b44fu: case 0x01b49au: case 0x01b559u: case 0x01b7e9u:
        case 0x01b6ebu: case 0x01b724u: case 0x01b8c1u:
            if (sc_v11_stock_world_camera_active(r)) v = SC_STOCK_WORLD_HEIGHT;
            break;
        default: break;
    }
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
