#ifndef SC_STATIC_SNES_HPP
#define SC_STATIC_SNES_HPP
#include "static_types.hpp"
namespace SC_STATIC_SNES {
struct Processor { unsigned frequency = 0; int32 clock = 0; };
#include "smp/smp.hpp"
#include "dsp/sdsp.hpp"
class CPU {
public:
    uint8 registers[4] = {0,0,0,0};
    inline void reset() { registers[0]=registers[1]=registers[2]=registers[3]=0; }
    alwaysinline void port_write(uint8 port,uint8 data){ registers[port&3]=data; }
    alwaysinline uint8 port_read(uint8 port){ return registers[port&3]; }
};
extern CPU cpu;
extern SMP smp;
extern DSP dsp;
}
#endif
