/* Generated used-opcode S-SMP dispatcher. No generic switch. */
switch(opcode_number) {
case 0x03: {
  dp = op_readpc();
  sp = op_readdp(dp);
  rd = op_readpc();
  op_io();
  if((sp & 0x01) != 0x01){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0x04: {
  dp = op_readpc();
  rd = op_readdp(dp);
  regs.B.a = op_or(regs.B.a, rd);
  break;
}
case 0x08: {
  rd = op_readpc();
  regs.B.a = op_or(regs.B.a, rd);
  break;
}
case 0x09: {
  sp = op_readpc();
  rd = op_readdp(sp);
  dp = op_readpc();
  wr = op_readdp(dp);
  wr = op_or(wr, rd);
  (1) ? op_writedp(dp, wr) : op_io();
  break;
}
case 0x0b: {
  dp = op_readpc();
  rd = op_readdp(dp);
  rd = op_asl(rd);
  op_writedp(dp, rd);
  break;
}
case 0x0e: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  rd = op_readaddr(dp);
  regs.p.n = !!((regs.B.a - rd) & 0x80);
  regs.p.z = ((regs.B.a - rd) == 0);
  op_readaddr(dp);
  op_writeaddr(dp, rd | regs.B.a);
  break;
}
case 0x10: {
  rd = op_readpc();
  if(regs.p.n){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0x13: {
  dp = op_readpc();
  sp = op_readdp(dp);
  rd = op_readpc();
  op_io();
  if((sp & 0x01) == 0x01){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0x1c: {
  op_io();
  regs.B.a = op_asl(regs.B.a);
  break;
}
case 0x1d: {
  op_io();
  regs.x = op_dec(regs.x);
  break;
}
case 0x1f: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  op_io();
  dp += regs.x;
  rd  = op_readaddr(dp);
  rd |= op_readaddr(dp + 1) << 8;
  regs.pc = rd;
  break;
}
case 0x20: {
  op_io();
  regs.p.p = 0;
  break;
}
case 0x23: {
  dp = op_readpc();
  sp = op_readdp(dp);
  rd = op_readpc();
  op_io();
  if((sp & 0x02) != 0x02){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0x24: {
  dp = op_readpc();
  rd = op_readdp(dp);
  regs.B.a = op_and(regs.B.a, rd);
  break;
}
case 0x25: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  rd = op_readaddr(dp);
  regs.B.a = op_and(regs.B.a, rd);
  break;
}
case 0x26: {
  op_io();
  rd = op_readdp(regs.x);
  regs.B.a = op_and(regs.B.a, rd);
  break;
}
case 0x28: {
  rd = op_readpc();
  regs.B.a = op_and(regs.B.a, rd);
  break;
}
case 0x2b: {
  dp = op_readpc();
  rd = op_readdp(dp);
  rd = op_rol(rd);
  op_writedp(dp, rd);
  break;
}
case 0x2d: {
  op_io(2);
  op_writestack(regs.B.a);
  break;
}
case 0x2e: {
  dp = op_readpc();
  sp = op_readdp(dp);
  rd = op_readpc();
  op_io();
  if(regs.B.a == sp){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0x2f: {
  rd = op_readpc();
  if(0){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0x30: {
  rd = op_readpc();
  if(!regs.p.n){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0x33: {
  dp = op_readpc();
  sp = op_readdp(dp);
  rd = op_readpc();
  op_io();
  if((sp & 0x02) == 0x02){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0x38: {
  rd = op_readpc();
  dp = op_readpc();
  wr = op_readdp(dp);
  wr = op_and(wr, rd);
  (1) ? op_writedp(dp, wr) : op_io();
  break;
}
case 0x3a: {
  dp = op_readpc();
  rd = op_readdp(dp);
  rd++;
  op_writedp(dp++, rd);
  rd += op_readdp(dp) << 8;
  op_writedp(dp, rd >> 8);
  regs.p.n = !!(rd & 0x8000);
  regs.p.z = (rd == 0);
  break;
}
case 0x3d: {
  op_io();
  regs.x = op_inc(regs.x);
  break;
}
case 0x3f: {
  rd  = op_readpc();
  rd |= op_readpc() << 8;
  op_io(3);
  op_writestack(regs.pc >> 8);
  op_writestack(regs.pc);
  regs.pc = rd;
  break;
}
case 0x40: {
  op_io();
  regs.p.p = 1;
  break;
}
case 0x44: {
  dp = op_readpc();
  rd = op_readdp(dp);
  regs.B.a = op_eor(regs.B.a, rd);
  break;
}
case 0x48: {
  rd = op_readpc();
  regs.B.a = op_eor(regs.B.a, rd);
  break;
}
case 0x4b: {
  dp = op_readpc();
  rd = op_readdp(dp);
  rd = op_lsr(rd);
  op_writedp(dp, rd);
  break;
}
case 0x4c: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  rd = op_readaddr(dp);
  rd = op_lsr(rd);
  op_writeaddr(dp, rd);
  break;
}
case 0x4d: {
  op_io(2);
  op_writestack(regs.x);
  break;
}
case 0x4e: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  rd = op_readaddr(dp);
  regs.p.n = !!((regs.B.a - rd) & 0x80);
  regs.p.z = ((regs.B.a - rd) == 0);
  op_readaddr(dp);
  op_writeaddr(dp, rd &~ regs.B.a);
  break;
}
case 0x5c: {
  op_io();
  regs.B.a = op_lsr(regs.B.a);
  break;
}
case 0x5d: {
  op_io();
  regs.x = regs.B.a;
  regs.p.n = !!(regs.x & 0x80);
  regs.p.z = (regs.x == 0);
  break;
}
case 0x5f: {
  rd  = op_readpc();
  rd |= op_readpc() << 8;
  regs.pc = rd;
  break;
}
case 0x60: {
  op_io();
  regs.p.c = 0;
  break;
}
case 0x64: {
  dp = op_readpc();
  rd = op_readdp(dp);
  regs.B.a = op_cmp(regs.B.a, rd);
  break;
}
case 0x68: {
  rd = op_readpc();
  regs.B.a = op_cmp(regs.B.a, rd);
  break;
}
case 0x69: {
  sp = op_readpc();
  rd = op_readdp(sp);
  dp = op_readpc();
  wr = op_readdp(dp);
  wr = op_cmp(wr, rd);
  (0) ? op_writedp(dp, wr) : op_io();
  break;
}
case 0x6b: {
  dp = op_readpc();
  rd = op_readdp(dp);
  rd = op_ror(rd);
  op_writedp(dp, rd);
  break;
}
case 0x6d: {
  op_io(2);
  op_writestack(regs.B.y);
  break;
}
case 0x6e: {
  dp = op_readpc();
  wr = op_readdp(dp);
  op_writedp(dp, --wr);
  rd = op_readpc();
  if(wr == 0x00){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0x6f: {
  rd  = op_readstack();
  rd |= op_readstack() << 8;
  op_io(2);
  regs.pc = rd;
  break;
}
case 0x75: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  op_io();
  rd = op_readaddr(dp + regs.x);
  regs.B.a = op_cmp(regs.B.a, rd);
  break;
}
case 0x78: {
  rd = op_readpc();
  dp = op_readpc();
  wr = op_readdp(dp);
  wr = op_cmp(wr, rd);
  (0) ? op_writedp(dp, wr) : op_io();
  break;
}
case 0x7a: {
  dp  = op_readpc();
  rd  = op_readdp(dp);
  op_io();
  rd |= op_readdp(dp + 1) << 8;
  regs.ya = op_addw(regs.ya, rd);
  break;
}
case 0x7c: {
  op_io();
  regs.B.a = op_ror(regs.B.a);
    break;
}
case 0x7d: {
  op_io();
  regs.B.a = regs.x;
  regs.p.n = !!(regs.B.a & 0x80);
  regs.p.z = (regs.B.a == 0);
  break;
}
case 0x7e: {
  switch(++opcode_cycle) {
  case 1:
    dp = op_readpc();
    break;
  case 2:
    rd = op_readdp(dp);
    regs.B.y = op_cmp(regs.B.y, rd);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0x80: {
  op_io();
  regs.p.c = 1;
  break;
}
case 0x84: {
  dp = op_readpc();
  rd = op_readdp(dp);
  regs.B.a = op_adc(regs.B.a, rd);
  break;
}
case 0x85: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  rd = op_readaddr(dp);
  regs.B.a = op_adc(regs.B.a, rd);
  break;
}
case 0x88: {
  rd = op_readpc();
  regs.B.a = op_adc(regs.B.a, rd);
  break;
}
case 0x8b: {
  dp = op_readpc();
  rd = op_readdp(dp);
  rd = op_dec(rd);
  op_writedp(dp, rd);
  break;
}
case 0x8c: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  rd = op_readaddr(dp);
  rd = op_dec(rd);
  op_writeaddr(dp, rd);
  break;
}
case 0x8d: {
  regs.B.y = op_readpc();
  regs.p.n = !!(regs.B.y & 0x80);
  regs.p.z = (regs.B.y == 0);
  break;
}
case 0x8f: {
  switch(++opcode_cycle) {
  case 1:
    rd = op_readpc();
    dp = op_readpc();
    break;
  case 2:
    op_readdp(dp);
    break;
  case 3:
    op_writedp(dp, rd);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0x90: {
  rd = op_readpc();
  if(regs.p.c){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0x95: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  op_io();
  rd = op_readaddr(dp + regs.x);
  regs.B.a = op_adc(regs.B.a, rd);
  break;
}
case 0x96: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  op_io();
  rd = op_readaddr(dp + regs.B.y);
  regs.B.a = op_adc(regs.B.a, rd);
  break;
}
case 0x97: {
  dp  = op_readpc();
  op_io();
  sp  = op_readdp(dp);
  sp |= op_readdp(dp + 1) << 8;
  rd = op_readaddr(sp + regs.B.y);
  regs.B.a = op_adc(regs.B.a, rd);
  break;
}
case 0x98: {
  rd = op_readpc();
  dp = op_readpc();
  wr = op_readdp(dp);
  wr = op_adc(wr, rd);
  (1) ? op_writedp(dp, wr) : op_io();
  break;
}
case 0x9a: {
  dp  = op_readpc();
  rd  = op_readdp(dp);
  op_io();
  rd |= op_readdp(dp + 1) << 8;
  regs.ya = op_subw(regs.ya, rd);
  break;
}
case 0x9b: {
  dp = op_readpc();
  op_io();
  rd = op_readdp(dp + regs.x);
  rd = op_dec(rd);
  op_writedp(dp + regs.x, rd);
  break;
}
case 0x9c: {
  op_io();
  regs.B.a = op_dec(regs.B.a);
  break;
}
case 0x9e: {
  op_io(11);
  ya = regs.ya;
  //overflow set if quotient >= 256
  regs.p.v = !!(regs.B.y >= regs.x);
  regs.p.h = !!((regs.B.y & 15) >= (regs.x & 15));
  if(regs.B.y < (regs.x << 1)) {
    //if quotient is <= 511 (will fit into 9-bit result)
    regs.B.a = ya / regs.x;
    regs.B.y = ya % regs.x;
  } else {
    //otherwise, the quotient won't fit into regs.p.v + regs.B.a
    //this emulates the odd behavior of the S-SMP in this case
    regs.B.a = 255    - (ya - (regs.x << 9)) / (256 - regs.x);
    regs.B.y = regs.x + (ya - (regs.x << 9)) % (256 - regs.x);
  }
  //result is set based on a (quotient) only
  regs.p.n = !!(regs.B.a & 0x80);
  regs.p.z = (regs.B.a == 0);
  break;
}
case 0x9f: {
  op_io(4);
  regs.B.a = (regs.B.a >> 4) | (regs.B.a << 4);
  regs.p.n = !!(regs.B.a & 0x80);
  regs.p.z = (regs.B.a == 0);
  break;
}
case 0xa2: {
  dp = op_readpc();
  rd = op_readdp(dp);
  rd |=  0x20;
  op_writedp(dp, rd);
  break;
}
case 0xa4: {
  dp = op_readpc();
  rd = op_readdp(dp);
  regs.B.a = op_sbc(regs.B.a, rd);
  break;
}
case 0xa5: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  rd = op_readaddr(dp);
  regs.B.a = op_sbc(regs.B.a, rd);
  break;
}
case 0xa8: {
  rd = op_readpc();
  regs.B.a = op_sbc(regs.B.a, rd);
  break;
}
case 0xab: {
  dp = op_readpc();
  rd = op_readdp(dp);
  rd = op_inc(rd);
  op_writedp(dp, rd);
  break;
}
case 0xac: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  rd = op_readaddr(dp);
  rd = op_inc(rd);
  op_writeaddr(dp, rd);
  break;
}
case 0xad: {
  rd = op_readpc();
  regs.B.y = op_cmp(regs.B.y, rd);
  break;
}
case 0xae: {
  op_io(2);
  regs.B.a = op_readstack();
  break;
}
case 0xaf: {
  switch(++opcode_cycle) {
  case 1:
    op_io(2);
    break;
  case 2:
    op_writedp(regs.x++, regs.B.a);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xb0: {
  rd = op_readpc();
  if(!regs.p.c){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0xb2: {
  dp = op_readpc();
  rd = op_readdp(dp);
  rd &= ~0x20;
  op_writedp(dp, rd);
  break;
}
case 0xb5: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  op_io();
  rd = op_readaddr(dp + regs.x);
  regs.B.a = op_sbc(regs.B.a, rd);
  break;
}
case 0xb6: {
  dp  = op_readpc();
  dp |= op_readpc() << 8;
  op_io();
  rd = op_readaddr(dp + regs.B.y);
  regs.B.a = op_sbc(regs.B.a, rd);
  break;
}
case 0xba: {
  switch(++opcode_cycle) {
  case 1:
    sp = op_readpc();
    break;
  case 2:
    regs.B.a = op_readdp(sp);
    op_io();
    break;
  case 3:
    regs.B.y = op_readdp(sp + 1);
    regs.p.n = !!(regs.ya & 0x8000);
    regs.p.z = (regs.ya == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xbb: {
  dp = op_readpc();
  op_io();
  rd = op_readdp(dp + regs.x);
  rd = op_inc(rd);
  op_writedp(dp + regs.x, rd);
  break;
}
case 0xbc: {
  op_io();
  regs.B.a = op_inc(regs.B.a);
  break;
}
case 0xbd: {
  op_io();
  regs.sp = regs.x;
  break;
}
case 0xc4: {
  switch(++opcode_cycle) {
  case 1:
    dp = op_readpc();
    break;
  case 2:
    op_readdp(dp);
    break;
  case 3:
    op_writedp(dp, regs.B.a);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xc5: {
  switch(++opcode_cycle) {
  case 1:
    dp  = op_readpc();
    break;
  case 2:
    dp |= op_readpc() << 8;
    break;
  case 3:
    op_readaddr(dp);
    break;
  case 4:
    op_writeaddr(dp, regs.B.a);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xc6: {
  switch(++opcode_cycle) {
  case 1:
    op_io();
    break;
  case 2:
    op_readdp(regs.x);
    break;
  case 3:
    op_writedp(regs.x, regs.B.a);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xc8: {
  rd = op_readpc();
  regs.x = op_cmp(regs.x, rd);
  break;
}
case 0xc9: {
  switch(++opcode_cycle) {
  case 1:
    dp  = op_readpc();
    break;
  case 2:
    dp |= op_readpc() << 8;
    break;
  case 3:
    op_readaddr(dp);
    break;
  case 4:
    op_writeaddr(dp, regs.x);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xcb: {
  switch(++opcode_cycle) {
  case 1:
    dp = op_readpc();
    break;
  case 2:
    op_readdp(dp);
    break;
  case 3:
    op_writedp(dp, regs.B.y);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xcc: {
  switch(++opcode_cycle) {
  case 1:
    dp  = op_readpc();
    break;
  case 2:
    dp |= op_readpc() << 8;
    break;
  case 3:
    op_readaddr(dp);
    break;
  case 4:
    op_writeaddr(dp, regs.B.y);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xcd: {
  regs.x = op_readpc();
  regs.p.n = !!(regs.x & 0x80);
  regs.p.z = (regs.x == 0);
  break;
}
case 0xce: {
  op_io(2);
  regs.x = op_readstack();
  break;
}
case 0xcf: {
  op_io(8);
  ya = regs.B.y * regs.B.a;
  regs.B.a = ya;
  regs.B.y = ya >> 8;
  //result is set based on y (high-byte) only
  regs.p.n = !!(regs.B.y & 0x80);
  regs.p.z = (regs.B.y == 0);
  break;
}
case 0xd0: {
  rd = op_readpc();
  if(regs.p.z){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0xd4: {
  switch(++opcode_cycle) {
  case 1:
    dp  = op_readpc();
    op_io();
    dp += regs.x;
    break;
  case 2:
    op_readdp(dp);
    break;
  case 3:
    op_writedp(dp, regs.B.a);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xd5: {
  switch(++opcode_cycle) {
  case 1:
    dp  = op_readpc();
    dp |= op_readpc() << 8;
    op_io();
    dp += regs.x;
    break;
  case 2:
    op_readaddr(dp);
    break;
  case 3:
    op_writeaddr(dp, regs.B.a);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xd6: {
  switch(++opcode_cycle) {
  case 1:
    dp  = op_readpc();
    dp |= op_readpc() << 8;
    op_io();
    dp += regs.B.y;
    break;
  case 2:
    op_readaddr(dp);
    break;
  case 3:
    op_writeaddr(dp, regs.B.a);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xd7: {
  switch(++opcode_cycle) {
  case 1:
    sp  = op_readpc();
    break;
  case 2:
    dp  = op_readdp(sp);
    break;
  case 3:
    dp |= op_readdp(sp + 1) << 8;
    op_io();
    dp += regs.B.y;
    break;
  case 4:
    op_readaddr(dp);
    break;
  case 5:
    op_writeaddr(dp, regs.B.a);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xd8: {
  switch(++opcode_cycle) {
  case 1:
    dp = op_readpc();
    break;
  case 2:
    op_readdp(dp);
    break;
  case 3:
    op_writedp(dp, regs.x);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xda: {
  switch(++opcode_cycle) {
  case 1:
    dp = op_readpc();
    break;
  case 2:
    op_readdp(dp);
    break;
  case 3:
    op_writedp(dp,     regs.B.a);
    break;
  case 4:
    op_writedp(dp + 1, regs.B.y);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xdb: {
  switch(++opcode_cycle) {
  case 1:
    dp  = op_readpc();
    op_io();
    dp += regs.x;
    break;
  case 2:
    op_readdp(dp);
    break;
  case 3:
    op_writedp(dp, regs.B.y);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xdc: {
  op_io();
  regs.B.y = op_dec(regs.B.y);
  break;
}
case 0xdd: {
  op_io();
  regs.B.a = regs.B.y;
  regs.p.n = !!(regs.B.a & 0x80);
  regs.p.z = (regs.B.a == 0);
  break;
}
case 0xde: {
  dp = op_readpc();
  op_io();
  sp = op_readdp(dp + regs.x);
  rd = op_readpc();
  op_io();
  if(regs.B.a == sp){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0xe2: {
  dp = op_readpc();
  rd = op_readdp(dp);
  rd |=  0x80;
  op_writedp(dp, rd);
  break;
}
case 0xe3: {
  dp = op_readpc();
  sp = op_readdp(dp);
  rd = op_readpc();
  op_io();
  if((sp & 0x80) != 0x80){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0xe4: {
  switch(++opcode_cycle) {
  case 1:
    sp = op_readpc();
    break;
  case 2:
    regs.B.a = op_readdp(sp);
    regs.p.n = !!(regs.B.a & 0x80);
    regs.p.z = (regs.B.a == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xe5: {
  switch(++opcode_cycle) {
  case 1:
    sp  = op_readpc();
    break;
  case 2:
    sp |= op_readpc() << 8;
    break;
  case 3:
    regs.B.a = op_readaddr(sp);
    regs.p.n = !!(regs.B.a & 0x80);
    regs.p.z = (regs.B.a == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xe6: {
  switch(++opcode_cycle) {
  case 1:
    op_io();
    break;
  case 2:
    regs.B.a = op_readdp(regs.x);
    regs.p.n = !!(regs.B.a & 0x80);
    regs.p.z = (regs.B.a == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xe7: {
  switch(++opcode_cycle) {
  case 1:
    dp = op_readpc() + regs.x;
    op_io();
    break;
  case 2:
    sp  = op_readdp(dp);
    break;
  case 3:
    sp |= op_readdp(dp + 1) << 8;
    break;
  case 4:
    regs.B.a = op_readaddr(sp);
    regs.p.n = !!(regs.B.a & 0x80);
    regs.p.z = (regs.B.a == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xe8: {
  regs.B.a = op_readpc();
  regs.p.n = !!(regs.B.a & 0x80);
  regs.p.z = (regs.B.a == 0);
  break;
}
case 0xe9: {
  switch(++opcode_cycle) {
  case 1:
    sp  = op_readpc();
    sp |= op_readpc() << 8;
    break;
  case 2:
    regs.x = op_readaddr(sp);
    regs.p.n = !!(regs.x & 0x80);
    regs.p.z = (regs.x == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xeb: {
  switch(++opcode_cycle) {
  case 1:
    sp = op_readpc();
    break;
  case 2:
    regs.B.y = op_readdp(sp);
    regs.p.n = !!(regs.B.y & 0x80);
    regs.p.z = (regs.B.y == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xec: {
  switch(++opcode_cycle) {
  case 1:
    sp  = op_readpc();
    sp |= op_readpc() << 8;
    break;
  case 2:
    regs.B.y = op_readaddr(sp);
    regs.p.n = !!(regs.B.y & 0x80);
    regs.p.z = (regs.B.y == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xed: {
  op_io(2);
  regs.p.c = !regs.p.c;
  break;
}
case 0xee: {
  op_io(2);
  regs.B.y = op_readstack();
  break;
}
case 0xf0: {
  rd = op_readpc();
  if(!regs.p.z){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0xf2: {
  dp = op_readpc();
  rd = op_readdp(dp);
  rd &= ~0x80;
  op_writedp(dp, rd);
  break;
}
case 0xf3: {
  dp = op_readpc();
  sp = op_readdp(dp);
  rd = op_readpc();
  op_io();
  if((sp & 0x80) == 0x80){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
case 0xf4: {
  switch(++opcode_cycle) {
  case 1:
    sp = op_readpc();
    op_io();
    break;
  case 2:
    regs.B.a = op_readdp(sp + regs.x);
    regs.p.n = !!(regs.B.a & 0x80);
    regs.p.z = (regs.B.a == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xf5: {
  switch(++opcode_cycle) {
  case 1:
    sp  = op_readpc();
    sp |= op_readpc() << 8;
    op_io();
    break;
  case 2:
    regs.B.a = op_readaddr(sp + regs.x);
    regs.p.n = !!(regs.B.a & 0x80);
    regs.p.z = (regs.B.a == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xf6: {
  switch(++opcode_cycle) {
  case 1:
    sp  = op_readpc();
    sp |= op_readpc() << 8;
    op_io();
    break;
  case 2:
    regs.B.a = op_readaddr(sp + regs.B.y);
    regs.p.n = !!(regs.B.a & 0x80);
    regs.p.z = (regs.B.a == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xf7: {
  switch(++opcode_cycle) {
  case 1:
    dp = op_readpc();
    op_io();
    break;
  case 2:
    sp  = op_readdp(dp);
    break;
  case 3:
    sp |= op_readdp(dp + 1) << 8;
    break;
  case 4:
    regs.B.a = op_readaddr(sp + regs.B.y);
    regs.p.n = !!(regs.B.a & 0x80);
    regs.p.z = (regs.B.a == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xf8: {
  switch(++opcode_cycle) {
  case 1:
    sp = op_readpc();
    break;
  case 2:
    regs.x = op_readdp(sp);
    regs.p.n = !!(regs.x & 0x80);
    regs.p.z = (regs.x == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xfb: {
  switch(++opcode_cycle) {
  case 1:
    sp = op_readpc();
    op_io();
    break;
  case 2:
    regs.B.y = op_readdp(sp + regs.x);
    regs.p.n = !!(regs.B.y & 0x80);
    regs.p.z = (regs.B.y == 0);
    opcode_cycle = 0;
    break;
  }
  break;
}
case 0xfc: {
  op_io();
  regs.B.y = op_inc(regs.B.y);
  break;
}
case 0xfd: {
  op_io();
  regs.B.y = regs.B.a;
  regs.p.n = !!(regs.B.y & 0x80);
  regs.p.z = (regs.B.y == 0);
  break;
}
case 0xfe: {
  rd = op_readpc();
  op_io();
  regs.B.y--;
  op_io();
  if(regs.B.y == 0x00){ break; }
  op_io(2);
  regs.pc += (int8)rd;
  break;
}
default: sc_aot_fail(3u,regs.pc,0xffu,static_cast<uint8>(opcode_number)); break;
}
