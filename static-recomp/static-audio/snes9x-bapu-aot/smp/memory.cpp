#include "../sc_static_apu.h"
unsigned SMP::port_read(unsigned addr) {
  return apuram[0xf4 + (addr & 3)];
}

void SMP::port_write(unsigned addr, unsigned data) {
  const uint16 target=(uint16)(0xf4 + (addr & 3));
  apuram[target] = data;
  mark_aram_known(target);
}

unsigned SMP::mmio_read(unsigned addr) {
  switch(addr) {

  case 0xf2:
    return status.dsp_addr;

  case 0xf3:
    return dsp.read(status.dsp_addr & 0x7f);

  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7: {
    const uint8 value=(uint8)cpu.port_read(addr);
    sc_static_apu_trace_port_event(0u,(uint8)(addr-0xf4u),value);
    return value;
  }

  case 0xf8:
    return status.ram00f8;

  case 0xf9:
    return status.ram00f9;

  case 0xfd: {
    unsigned result = timer0.stage3_ticks & 15;
    timer0.stage3_ticks = 0;
    return result;
  }

  case 0xfe: {
    unsigned result = timer1.stage3_ticks & 15;
    timer1.stage3_ticks = 0;
    return result;
  }

  case 0xff: {
    unsigned result = timer2.stage3_ticks & 15;
    timer2.stage3_ticks = 0;
    return result;
  }

  }

  return 0x00;
}

void SMP::mmio_write(unsigned addr, unsigned data) {
  switch(addr) {

  case 0xf1:
    status.iplrom_enable = data & 0x80;

    if(data & 0x30) {
      if(data & 0x20) {
        cpu.port_write(3, 0x00);
        cpu.port_write(2, 0x00);
      }
      if(data & 0x10) {
        cpu.port_write(1, 0x00);
        cpu.port_write(0, 0x00);
      }
    }

    if(timer2.enable == false && (data & 0x04)) {
      timer2.stage2_ticks = 0;
      timer2.stage3_ticks = 0;
    }
    timer2.enable = data & 0x04;

    if(timer1.enable == false && (data & 0x02)) {
      timer1.stage2_ticks = 0;
      timer1.stage3_ticks = 0;
    }
    timer1.enable = data & 0x02;

    if(timer0.enable == false && (data & 0x01)) {
      timer0.stage2_ticks = 0;
      timer0.stage3_ticks = 0;
    }
    timer0.enable = data & 0x01;

    break;

  case 0xf2:
    status.dsp_addr = data;
    break;

  case 0xf3:
    if(status.dsp_addr & 0x80) break;
    sc_static_apu_trace_dsp_write_event((uint8)status.dsp_addr,(uint8)data);
    dsp.write(status.dsp_addr, data);
    break;

  case 0xf4:
  case 0xf5:
  case 0xf6:
  case 0xf7:
    sc_static_apu_trace_port_event(1u,(uint8)(addr-0xf4u),(uint8)data);
    port_write(addr, data);
    break;

  case 0xf8:
    status.ram00f8 = data;
    break;

  case 0xf9:
    status.ram00f9 = data;
    break;

  case 0xfa:
    timer0.target = data;
    break;

  case 0xfb:
    timer1.target = data;
    break;

  case 0xfc:
    timer2.target = data;
    break;
  }
}
