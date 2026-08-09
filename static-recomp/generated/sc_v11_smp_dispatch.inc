/* Auto-generated exact-PC S-SMP authority. */
/* No runtime opcode fetch or generic opcode decoder. */
static int sc_v11_smp_begin_generated(SCV11Runtime *r){
  SCV11SmpCore *c=&r->smp_core; SCSmpState *s=&r->machine.smp;
  switch(s->pc){
    case 0x0800u:
      c->active=1u;c->active_start_pc=0x0800u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0801u:
      c->active=1u;c->active_start_pc=0x0801u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0803u:
      c->active=1u;c->active_start_pc=0x0803u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0804u:
      c->active=1u;c->active_start_pc=0x0804u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0806u:
      c->active=1u;c->active_start_pc=0x0806u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0807u:
      c->active=1u;c->active_start_pc=0x0807u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0808u:
      c->active=1u;c->active_start_pc=0x0808u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x080Au:
      c->active=1u;c->active_start_pc=0x080Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x080Cu:
      c->active=1u;c->active_start_pc=0x080Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x080Eu:
      c->active=1u;c->active_start_pc=0x080Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0811u:
      c->active=1u;c->active_start_pc=0x0811u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0812u:
      c->active=1u;c->active_start_pc=0x0812u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0814u:
      c->active=1u;c->active_start_pc=0x0814u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0817u:
      c->active=1u;c->active_start_pc=0x0817u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0818u:
      c->active=1u;c->active_start_pc=0x0818u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x081Au:
      c->active=1u;c->active_start_pc=0x081Au;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x081Bu:
      c->active=1u;c->active_start_pc=0x081Bu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x081Eu:
      c->active=1u;c->active_start_pc=0x081Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0820u:
      c->active=1u;c->active_start_pc=0x0820u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0822u:
      c->active=1u;c->active_start_pc=0x0822u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0824u:
      c->active=1u;c->active_start_pc=0x0824u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0827u:
      c->active=1u;c->active_start_pc=0x0827u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0829u:
      c->active=1u;c->active_start_pc=0x0829u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x082Cu:
      c->active=1u;c->active_start_pc=0x082Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x082Eu:
      c->active=1u;c->active_start_pc=0x082Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0830u:
      c->active=1u;c->active_start_pc=0x0830u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0833u:
      c->active=1u;c->active_start_pc=0x0833u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0835u:
      c->active=1u;c->active_start_pc=0x0835u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0838u:
      c->active=1u;c->active_start_pc=0x0838u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x083Au:
      c->active=1u;c->active_start_pc=0x083Au;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x083Du:
      c->active=1u;c->active_start_pc=0x083Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x083Fu:
      c->active=1u;c->active_start_pc=0x083Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0841u:
      c->active=1u;c->active_start_pc=0x0841u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0844u:
      c->active=1u;c->active_start_pc=0x0844u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0846u:
      c->active=1u;c->active_start_pc=0x0846u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0848u:
      c->active=1u;c->active_start_pc=0x0848u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x084Au:
      c->active=1u;c->active_start_pc=0x084Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x084Cu:
      c->active=1u;c->active_start_pc=0x084Cu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x084Fu:
      c->active=1u;c->active_start_pc=0x084Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0851u:
      c->active=1u;c->active_start_pc=0x0851u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=((smp_peek(r,smp_dp(s,0x4Cu)) & 0x80u)!=0u);c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0854u:
      c->active=1u;c->active_start_pc=0x0854u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0857u:
      c->active=1u;c->active_start_pc=0x0857u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x085Au:
      c->active=1u;c->active_start_pc=0x085Au;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x085Du:
      c->active=1u;c->active_start_pc=0x085Du;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x085Eu:
      c->active=1u;c->active_start_pc=0x085Eu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x085Fu:
      c->active=1u;c->active_start_pc=0x085Fu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0862u:
      c->active=1u;c->active_start_pc=0x0862u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((uint8_t)(s->y-1u)!=0u);c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0864u:
      c->active=1u;c->active_start_pc=0x0864u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0866u:
      c->active=1u;c->active_start_pc=0x0866u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0868u:
      c->active=1u;c->active_start_pc=0x0868u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x086Au:
      c->active=1u;c->active_start_pc=0x086Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x086Cu:
      c->active=1u;c->active_start_pc=0x086Cu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x086Du:
      c->active=1u;c->active_start_pc=0x086Du;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x086Eu:
      c->active=1u;c->active_start_pc=0x086Eu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x086Fu:
      c->active=1u;c->active_start_pc=0x086Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0871u:
      c->active=1u;c->active_start_pc=0x0871u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0873u:
      c->active=1u;c->active_start_pc=0x0873u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0876u:
      c->active=1u;c->active_start_pc=0x0876u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0878u:
      c->active=1u;c->active_start_pc=0x0878u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0879u:
      c->active=1u;c->active_start_pc=0x0879u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x087Bu:
      c->active=1u;c->active_start_pc=0x087Bu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x087Cu:
      c->active=1u;c->active_start_pc=0x087Cu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x087Du:
      c->active=1u;c->active_start_pc=0x087Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x087Fu:
      c->active=1u;c->active_start_pc=0x087Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0881u:
      c->active=1u;c->active_start_pc=0x0881u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0883u:
      c->active=1u;c->active_start_pc=0x0883u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0886u:
      c->active=1u;c->active_start_pc=0x0886u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0888u:
      c->active=1u;c->active_start_pc=0x0888u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x088Bu:
      c->active=1u;c->active_start_pc=0x088Bu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x088Eu:
      c->active=1u;c->active_start_pc=0x088Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0891u:
      c->active=1u;c->active_start_pc=0x0891u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0893u:
      c->active=1u;c->active_start_pc=0x0893u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0896u:
      c->active=1u;c->active_start_pc=0x0896u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0899u:
      c->active=1u;c->active_start_pc=0x0899u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x089Bu:
      c->active=1u;c->active_start_pc=0x089Bu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x089Eu:
      c->active=1u;c->active_start_pc=0x089Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08A1u:
      c->active=1u;c->active_start_pc=0x08A1u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08A3u:
      c->active=1u;c->active_start_pc=0x08A3u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08A6u:
      c->active=1u;c->active_start_pc=0x08A6u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08A9u:
      c->active=1u;c->active_start_pc=0x08A9u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08AAu:
      c->active=1u;c->active_start_pc=0x08AAu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08ACu:
      c->active=1u;c->active_start_pc=0x08ACu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08AEu:
      c->active=1u;c->active_start_pc=0x08AEu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08B0u:
      c->active=1u;c->active_start_pc=0x08B0u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08B1u:
      c->active=1u;c->active_start_pc=0x08B1u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08B2u:
      c->active=1u;c->active_start_pc=0x08B2u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08B3u:
      c->active=1u;c->active_start_pc=0x08B3u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08B5u:
      c->active=1u;c->active_start_pc=0x08B5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08B7u:
      c->active=1u;c->active_start_pc=0x08B7u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08B9u:
      c->active=1u;c->active_start_pc=0x08B9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08BCu:
      c->active=1u;c->active_start_pc=0x08BCu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08BFu:
      c->active=1u;c->active_start_pc=0x08BFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08C1u:
      c->active=1u;c->active_start_pc=0x08C1u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08C4u:
      c->active=1u;c->active_start_pc=0x08C4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08C6u:
      c->active=1u;c->active_start_pc=0x08C6u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08C9u:
      c->active=1u;c->active_start_pc=0x08C9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08CCu:
      c->active=1u;c->active_start_pc=0x08CCu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08CEu:
      c->active=1u;c->active_start_pc=0x08CEu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08D0u:
      c->active=1u;c->active_start_pc=0x08D0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08D2u:
      c->active=1u;c->active_start_pc=0x08D2u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08D5u:
      c->active=1u;c->active_start_pc=0x08D5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08D7u:
      c->active=1u;c->active_start_pc=0x08D7u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08D9u:
      c->active=1u;c->active_start_pc=0x08D9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08DCu:
      c->active=1u;c->active_start_pc=0x08DCu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08DDu:
      c->active=1u;c->active_start_pc=0x08DDu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08DEu:
      c->active=1u;c->active_start_pc=0x08DEu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08E0u:
      c->active=1u;c->active_start_pc=0x08E0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08E2u:
      c->active=1u;c->active_start_pc=0x08E2u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08E5u:
      c->active=1u;c->active_start_pc=0x08E5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08E7u:
      c->active=1u;c->active_start_pc=0x08E7u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08EAu:
      c->active=1u;c->active_start_pc=0x08EAu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08EDu:
      c->active=1u;c->active_start_pc=0x08EDu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08F0u:
      c->active=1u;c->active_start_pc=0x08F0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08F2u:
      c->active=1u;c->active_start_pc=0x08F2u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08F3u:
      c->active=1u;c->active_start_pc=0x08F3u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08F5u:
      c->active=1u;c->active_start_pc=0x08F5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08F7u:
      c->active=1u;c->active_start_pc=0x08F7u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08F9u:
      c->active=1u;c->active_start_pc=0x08F9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08FBu:
      c->active=1u;c->active_start_pc=0x08FBu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=(s->a != smp_peek(r,smp_dp(s,(uint8_t)(0x08u+s->x))));c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x08FEu:
      c->active=1u;c->active_start_pc=0x08FEu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0900u:
      c->active=1u;c->active_start_pc=0x0900u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0902u:
      c->active=1u;c->active_start_pc=0x0902u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0903u:
      c->active=1u;c->active_start_pc=0x0903u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0905u:
      c->active=1u;c->active_start_pc=0x0905u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0906u:
      c->active=1u;c->active_start_pc=0x0906u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0908u:
      c->active=1u;c->active_start_pc=0x0908u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x090Fu:
      c->active=1u;c->active_start_pc=0x090Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0911u:
      c->active=1u;c->active_start_pc=0x0911u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0913u:
      c->active=1u;c->active_start_pc=0x0913u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0915u:
      c->active=1u;c->active_start_pc=0x0915u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0917u:
      c->active=1u;c->active_start_pc=0x0917u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0919u:
      c->active=1u;c->active_start_pc=0x0919u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x091Au:
      c->active=1u;c->active_start_pc=0x091Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x091Cu:
      c->active=1u;c->active_start_pc=0x091Cu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x091Du:
      c->active=1u;c->active_start_pc=0x091Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x091Fu:
      c->active=1u;c->active_start_pc=0x091Fu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0920u:
      c->active=1u;c->active_start_pc=0x0920u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0923u:
      c->active=1u;c->active_start_pc=0x0923u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0926u:
      c->active=1u;c->active_start_pc=0x0926u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0929u:
      c->active=1u;c->active_start_pc=0x0929u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x092Cu:
      c->active=1u;c->active_start_pc=0x092Cu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x092Fu:
      c->active=1u;c->active_start_pc=0x092Fu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0930u:
      c->active=1u;c->active_start_pc=0x0930u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0932u:
      c->active=1u;c->active_start_pc=0x0932u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0933u:
      c->active=1u;c->active_start_pc=0x0933u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0936u:
      c->active=1u;c->active_start_pc=0x0936u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0938u:
      c->active=1u;c->active_start_pc=0x0938u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x093Au:
      c->active=1u;c->active_start_pc=0x093Au;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x093Du:
      c->active=1u;c->active_start_pc=0x093Du;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0940u:
      c->active=1u;c->active_start_pc=0x0940u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0942u:
      c->active=1u;c->active_start_pc=0x0942u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0945u:
      c->active=1u;c->active_start_pc=0x0945u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0948u:
      c->active=1u;c->active_start_pc=0x0948u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x094Bu:
      c->active=1u;c->active_start_pc=0x094Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x094Du:
      c->active=1u;c->active_start_pc=0x094Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x096Du:
      c->active=1u;c->active_start_pc=0x096Du;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0970u:
      c->active=1u;c->active_start_pc=0x0970u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0972u:
      c->active=1u;c->active_start_pc=0x0972u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0974u:
      c->active=1u;c->active_start_pc=0x0974u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0975u:
      c->active=1u;c->active_start_pc=0x0975u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0977u:
      c->active=1u;c->active_start_pc=0x0977u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0979u:
      c->active=1u;c->active_start_pc=0x0979u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x097Bu:
      c->active=1u;c->active_start_pc=0x097Bu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x097Cu:
      c->active=1u;c->active_start_pc=0x097Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x097Eu:
      c->active=1u;c->active_start_pc=0x097Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0980u:
      c->active=1u;c->active_start_pc=0x0980u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0981u:
      c->active=1u;c->active_start_pc=0x0981u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0982u:
      c->active=1u;c->active_start_pc=0x0982u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0984u:
      c->active=1u;c->active_start_pc=0x0984u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0986u:
      c->active=1u;c->active_start_pc=0x0986u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0987u:
      c->active=1u;c->active_start_pc=0x0987u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0989u:
      c->active=1u;c->active_start_pc=0x0989u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x098Au:
      c->active=1u;c->active_start_pc=0x098Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x098Cu:
      c->active=1u;c->active_start_pc=0x098Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x098Eu:
      c->active=1u;c->active_start_pc=0x098Eu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(12u+(c->active_branch_taken?2u:0u));return 1;
    case 0x098Fu:
      c->active=1u;c->active_start_pc=0x098Fu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0990u:
      c->active=1u;c->active_start_pc=0x0990u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0993u:
      c->active=1u;c->active_start_pc=0x0993u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0995u:
      c->active=1u;c->active_start_pc=0x0995u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0998u:
      c->active=1u;c->active_start_pc=0x0998u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x099Au:
      c->active=1u;c->active_start_pc=0x099Au;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x099Du:
      c->active=1u;c->active_start_pc=0x099Du;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x099Eu:
      c->active=1u;c->active_start_pc=0x099Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09A1u:
      c->active=1u;c->active_start_pc=0x09A1u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09A2u:
      c->active=1u;c->active_start_pc=0x09A2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09A4u:
      c->active=1u;c->active_start_pc=0x09A4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09A6u:
      c->active=1u;c->active_start_pc=0x09A6u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09A7u:
      c->active=1u;c->active_start_pc=0x09A7u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09A8u:
      c->active=1u;c->active_start_pc=0x09A8u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09AAu:
      c->active=1u;c->active_start_pc=0x09AAu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09ACu:
      c->active=1u;c->active_start_pc=0x09ACu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09AEu:
      c->active=1u;c->active_start_pc=0x09AEu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09AFu:
      c->active=1u;c->active_start_pc=0x09AFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09B1u:
      c->active=1u;c->active_start_pc=0x09B1u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09B3u:
      c->active=1u;c->active_start_pc=0x09B3u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    case 0x09B5u:
      c->active=1u;c->active_start_pc=0x09B5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09B7u:
      c->active=1u;c->active_start_pc=0x09B7u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09B8u:
      c->active=1u;c->active_start_pc=0x09B8u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09B9u:
      c->active=1u;c->active_start_pc=0x09B9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09BBu:
      c->active=1u;c->active_start_pc=0x09BBu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09BDu:
      c->active=1u;c->active_start_pc=0x09BDu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09BFu:
      c->active=1u;c->active_start_pc=0x09BFu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09C0u:
      c->active=1u;c->active_start_pc=0x09C0u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09C3u:
      c->active=1u;c->active_start_pc=0x09C3u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09C5u:
      c->active=1u;c->active_start_pc=0x09C5u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09C6u:
      c->active=1u;c->active_start_pc=0x09C6u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09C8u:
      c->active=1u;c->active_start_pc=0x09C8u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09CBu:
      c->active=1u;c->active_start_pc=0x09CBu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09CDu:
      c->active=1u;c->active_start_pc=0x09CDu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09CEu:
      c->active=1u;c->active_start_pc=0x09CEu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09CFu:
      c->active=1u;c->active_start_pc=0x09CFu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09D2u:
      c->active=1u;c->active_start_pc=0x09D2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09D4u:
      c->active=1u;c->active_start_pc=0x09D4u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09D5u:
      c->active=1u;c->active_start_pc=0x09D5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09D7u:
      c->active=1u;c->active_start_pc=0x09D7u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09D9u:
      c->active=1u;c->active_start_pc=0x09D9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09DCu:
      c->active=1u;c->active_start_pc=0x09DCu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09DEu:
      c->active=1u;c->active_start_pc=0x09DEu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09DFu:
      c->active=1u;c->active_start_pc=0x09DFu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09E0u:
      c->active=1u;c->active_start_pc=0x09E0u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09E1u:
      c->active=1u;c->active_start_pc=0x09E1u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09E3u:
      c->active=1u;c->active_start_pc=0x09E3u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09E5u:
      c->active=1u;c->active_start_pc=0x09E5u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09E6u:
      c->active=1u;c->active_start_pc=0x09E6u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09E7u:
      c->active=1u;c->active_start_pc=0x09E7u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09E8u:
      c->active=1u;c->active_start_pc=0x09E8u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09EAu:
      c->active=1u;c->active_start_pc=0x09EAu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09EBu:
      c->active=1u;c->active_start_pc=0x09EBu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09EDu:
      c->active=1u;c->active_start_pc=0x09EDu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09F0u:
      c->active=1u;c->active_start_pc=0x09F0u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09F1u:
      c->active=1u;c->active_start_pc=0x09F1u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09F3u:
      c->active=1u;c->active_start_pc=0x09F3u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09F4u:
      c->active=1u;c->active_start_pc=0x09F4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09F6u:
      c->active=1u;c->active_start_pc=0x09F6u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09F8u:
      c->active=1u;c->active_start_pc=0x09F8u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09F9u:
      c->active=1u;c->active_start_pc=0x09F9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09FBu:
      c->active=1u;c->active_start_pc=0x09FBu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x09FEu:
      c->active=1u;c->active_start_pc=0x09FEu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0A01u:
      c->active=1u;c->active_start_pc=0x0A01u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AA6u:
      c->active=1u;c->active_start_pc=0x0AA6u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AA8u:
      c->active=1u;c->active_start_pc=0x0AA8u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AAAu:
      c->active=1u;c->active_start_pc=0x0AAAu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AABu:
      c->active=1u;c->active_start_pc=0x0AABu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AADu:
      c->active=1u;c->active_start_pc=0x0AADu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AAFu:
      c->active=1u;c->active_start_pc=0x0AAFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AB1u:
      c->active=1u;c->active_start_pc=0x0AB1u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AB2u:
      c->active=1u;c->active_start_pc=0x0AB2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AB4u:
      c->active=1u;c->active_start_pc=0x0AB4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AB6u:
      c->active=1u;c->active_start_pc=0x0AB6u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AB9u:
      c->active=1u;c->active_start_pc=0x0AB9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0ABCu:
      c->active=1u;c->active_start_pc=0x0ABCu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0ABDu:
      c->active=1u;c->active_start_pc=0x0ABDu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0ABEu:
      c->active=1u;c->active_start_pc=0x0ABEu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0ABFu:
      c->active=1u;c->active_start_pc=0x0ABFu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AC2u:
      c->active=1u;c->active_start_pc=0x0AC2u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AC5u:
      c->active=1u;c->active_start_pc=0x0AC5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AC7u:
      c->active=1u;c->active_start_pc=0x0AC7u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0ACAu:
      c->active=1u;c->active_start_pc=0x0ACAu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0ACFu:
      c->active=1u;c->active_start_pc=0x0ACFu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AD2u:
      c->active=1u;c->active_start_pc=0x0AD2u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AD3u:
      c->active=1u;c->active_start_pc=0x0AD3u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AD4u:
      c->active=1u;c->active_start_pc=0x0AD4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0AD6u:
      c->active=1u;c->active_start_pc=0x0AD6u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1378u:
      c->active=1u;c->active_start_pc=0x1378u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=((smp_peek(r,smp_dp(s,0x01u)) & 0x01u)!=0u);c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x137Bu:
      c->active=1u;c->active_start_pc=0x137Bu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=((smp_peek(r,smp_dp(s,0x01u)) & 0x02u)!=0u);c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x137Eu:
      c->active=1u;c->active_start_pc=0x137Eu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13BBu:
      c->active=1u;c->active_start_pc=0x13BBu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13BDu:
      c->active=1u;c->active_start_pc=0x13BDu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13BFu:
      c->active=1u;c->active_start_pc=0x13BFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13C1u:
      c->active=1u;c->active_start_pc=0x13C1u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13C2u:
      c->active=1u;c->active_start_pc=0x13C2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13C4u:
      c->active=1u;c->active_start_pc=0x13C4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13C6u:
      c->active=1u;c->active_start_pc=0x13C6u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13C7u:
      c->active=1u;c->active_start_pc=0x13C7u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13C8u:
      c->active=1u;c->active_start_pc=0x13C8u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13C9u:
      c->active=1u;c->active_start_pc=0x13C9u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13CAu:
      c->active=1u;c->active_start_pc=0x13CAu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13CCu:
      c->active=1u;c->active_start_pc=0x13CCu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13CFu:
      c->active=1u;c->active_start_pc=0x13CFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13D1u:
      c->active=1u;c->active_start_pc=0x13D1u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13D2u:
      c->active=1u;c->active_start_pc=0x13D2u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13D3u:
      c->active=1u;c->active_start_pc=0x13D3u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13D6u:
      c->active=1u;c->active_start_pc=0x13D6u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13D7u:
      c->active=1u;c->active_start_pc=0x13D7u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13DAu:
      c->active=1u;c->active_start_pc=0x13DAu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13DCu:
      c->active=1u;c->active_start_pc=0x13DCu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13DFu:
      c->active=1u;c->active_start_pc=0x13DFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13E1u:
      c->active=1u;c->active_start_pc=0x13E1u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13E3u:
      c->active=1u;c->active_start_pc=0x13E3u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13E6u:
      c->active=1u;c->active_start_pc=0x13E6u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13E7u:
      c->active=1u;c->active_start_pc=0x13E7u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13E9u:
      c->active=1u;c->active_start_pc=0x13E9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13ECu:
      c->active=1u;c->active_start_pc=0x13ECu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13EEu:
      c->active=1u;c->active_start_pc=0x13EEu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13F1u:
      c->active=1u;c->active_start_pc=0x13F1u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13F3u:
      c->active=1u;c->active_start_pc=0x13F3u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13F6u:
      c->active=1u;c->active_start_pc=0x13F6u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13F9u:
      c->active=1u;c->active_start_pc=0x13F9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13FCu:
      c->active=1u;c->active_start_pc=0x13FCu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13FFu:
      c->active=1u;c->active_start_pc=0x13FFu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1402u:
      c->active=1u;c->active_start_pc=0x1402u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1405u:
      c->active=1u;c->active_start_pc=0x1405u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1407u:
      c->active=1u;c->active_start_pc=0x1407u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1409u:
      c->active=1u;c->active_start_pc=0x1409u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x140Au:
      c->active=1u;c->active_start_pc=0x140Au;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x140Bu:
      c->active=1u;c->active_start_pc=0x140Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x140Du:
      c->active=1u;c->active_start_pc=0x140Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x140Fu:
      c->active=1u;c->active_start_pc=0x140Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1411u:
      c->active=1u;c->active_start_pc=0x1411u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1413u:
      c->active=1u;c->active_start_pc=0x1413u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1415u:
      c->active=1u;c->active_start_pc=0x1415u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1417u:
      c->active=1u;c->active_start_pc=0x1417u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1419u:
      c->active=1u;c->active_start_pc=0x1419u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x141Bu:
      c->active=1u;c->active_start_pc=0x141Bu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x141Eu:
      c->active=1u;c->active_start_pc=0x141Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1421u:
      c->active=1u;c->active_start_pc=0x1421u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1422u:
      c->active=1u;c->active_start_pc=0x1422u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1424u:
      c->active=1u;c->active_start_pc=0x1424u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1426u:
      c->active=1u;c->active_start_pc=0x1426u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1428u:
      c->active=1u;c->active_start_pc=0x1428u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x142Au:
      c->active=1u;c->active_start_pc=0x142Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x142Cu:
      c->active=1u;c->active_start_pc=0x142Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x142Eu:
      c->active=1u;c->active_start_pc=0x142Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1433u:
      c->active=1u;c->active_start_pc=0x1433u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1434u:
      c->active=1u;c->active_start_pc=0x1434u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1436u:
      c->active=1u;c->active_start_pc=0x1436u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1440u:
      c->active=1u;c->active_start_pc=0x1440u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1442u:
      c->active=1u;c->active_start_pc=0x1442u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1444u:
      c->active=1u;c->active_start_pc=0x1444u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1447u:
      c->active=1u;c->active_start_pc=0x1447u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x144Cu:
      c->active=1u;c->active_start_pc=0x144Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x144Eu:
      c->active=1u;c->active_start_pc=0x144Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1450u:
      c->active=1u;c->active_start_pc=0x1450u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=((uint8_t)(smp_peek(r,smp_dp(s,0x0Cu))-1u)!=0u);c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1453u:
      c->active=1u;c->active_start_pc=0x1453u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1456u:
      c->active=1u;c->active_start_pc=0x1456u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x147Du:
      c->active=1u;c->active_start_pc=0x147Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x147Fu:
      c->active=1u;c->active_start_pc=0x147Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1481u:
      c->active=1u;c->active_start_pc=0x1481u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1483u:
      c->active=1u;c->active_start_pc=0x1483u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1486u:
      c->active=1u;c->active_start_pc=0x1486u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1487u:
      c->active=1u;c->active_start_pc=0x1487u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1489u:
      c->active=1u;c->active_start_pc=0x1489u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x148Bu:
      c->active=1u;c->active_start_pc=0x148Bu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x148Eu:
      c->active=1u;c->active_start_pc=0x148Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1490u:
      c->active=1u;c->active_start_pc=0x1490u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1492u:
      c->active=1u;c->active_start_pc=0x1492u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1495u:
      c->active=1u;c->active_start_pc=0x1495u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1497u:
      c->active=1u;c->active_start_pc=0x1497u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1499u:
      c->active=1u;c->active_start_pc=0x1499u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x149Cu:
      c->active=1u;c->active_start_pc=0x149Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x149Eu:
      c->active=1u;c->active_start_pc=0x149Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14A0u:
      c->active=1u;c->active_start_pc=0x14A0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14A2u:
      c->active=1u;c->active_start_pc=0x14A2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14A4u:
      c->active=1u;c->active_start_pc=0x14A4u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14A5u:
      c->active=1u;c->active_start_pc=0x14A5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14A7u:
      c->active=1u;c->active_start_pc=0x14A7u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14A8u:
      c->active=1u;c->active_start_pc=0x14A8u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14A9u:
      c->active=1u;c->active_start_pc=0x14A9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14ABu:
      c->active=1u;c->active_start_pc=0x14ABu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14ADu:
      c->active=1u;c->active_start_pc=0x14ADu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14AFu:
      c->active=1u;c->active_start_pc=0x14AFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14B1u:
      c->active=1u;c->active_start_pc=0x14B1u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14B4u:
      c->active=1u;c->active_start_pc=0x14B4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14B6u:
      c->active=1u;c->active_start_pc=0x14B6u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14B8u:
      c->active=1u;c->active_start_pc=0x14B8u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14BAu:
      c->active=1u;c->active_start_pc=0x14BAu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14BCu:
      c->active=1u;c->active_start_pc=0x14BCu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14BEu:
      c->active=1u;c->active_start_pc=0x14BEu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14C1u:
      c->active=1u;c->active_start_pc=0x14C1u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14C3u:
      c->active=1u;c->active_start_pc=0x14C3u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14C5u:
      c->active=1u;c->active_start_pc=0x14C5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14C7u:
      c->active=1u;c->active_start_pc=0x14C7u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14CAu:
      c->active=1u;c->active_start_pc=0x14CAu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14CCu:
      c->active=1u;c->active_start_pc=0x14CCu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14CEu:
      c->active=1u;c->active_start_pc=0x14CEu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14D1u:
      c->active=1u;c->active_start_pc=0x14D1u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14D3u:
      c->active=1u;c->active_start_pc=0x14D3u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14D6u:
      c->active=1u;c->active_start_pc=0x14D6u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14D8u:
      c->active=1u;c->active_start_pc=0x14D8u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    case 0x14DAu:
      c->active=1u;c->active_start_pc=0x14DAu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14DCu:
      c->active=1u;c->active_start_pc=0x14DCu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14DFu:
      c->active=1u;c->active_start_pc=0x14DFu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14E2u:
      c->active=1u;c->active_start_pc=0x14E2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14E4u:
      c->active=1u;c->active_start_pc=0x14E4u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14E5u:
      c->active=1u;c->active_start_pc=0x14E5u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14E6u:
      c->active=1u;c->active_start_pc=0x14E6u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14E8u:
      c->active=1u;c->active_start_pc=0x14E8u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14E9u:
      c->active=1u;c->active_start_pc=0x14E9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14ECu:
      c->active=1u;c->active_start_pc=0x14ECu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14EFu:
      c->active=1u;c->active_start_pc=0x14EFu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14F0u:
      c->active=1u;c->active_start_pc=0x14F0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14F2u:
      c->active=1u;c->active_start_pc=0x14F2u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14F3u:
      c->active=1u;c->active_start_pc=0x14F3u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14F6u:
      c->active=1u;c->active_start_pc=0x14F6u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14F9u:
      c->active=1u;c->active_start_pc=0x14F9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14FCu:
      c->active=1u;c->active_start_pc=0x14FCu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x14FEu:
      c->active=1u;c->active_start_pc=0x14FEu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1500u:
      c->active=1u;c->active_start_pc=0x1500u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1503u:
      c->active=1u;c->active_start_pc=0x1503u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    case 0x1505u:
      c->active=1u;c->active_start_pc=0x1505u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1508u:
      c->active=1u;c->active_start_pc=0x1508u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x150Au:
      c->active=1u;c->active_start_pc=0x150Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x150Cu:
      c->active=1u;c->active_start_pc=0x150Cu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x150Du:
      c->active=1u;c->active_start_pc=0x150Du;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x150Eu:
      c->active=1u;c->active_start_pc=0x150Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1510u:
      c->active=1u;c->active_start_pc=0x1510u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1512u:
      c->active=1u;c->active_start_pc=0x1512u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1513u:
      c->active=1u;c->active_start_pc=0x1513u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1515u:
      c->active=1u;c->active_start_pc=0x1515u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1518u:
      c->active=1u;c->active_start_pc=0x1518u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x151Bu:
      c->active=1u;c->active_start_pc=0x151Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x151Du:
      c->active=1u;c->active_start_pc=0x151Du;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x151Eu:
      c->active=1u;c->active_start_pc=0x151Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1521u:
      c->active=1u;c->active_start_pc=0x1521u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1522u:
      c->active=1u;c->active_start_pc=0x1522u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1523u:
      c->active=1u;c->active_start_pc=0x1523u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1525u:
      c->active=1u;c->active_start_pc=0x1525u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1526u:
      c->active=1u;c->active_start_pc=0x1526u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1528u:
      c->active=1u;c->active_start_pc=0x1528u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    case 0x152Au:
      c->active=1u;c->active_start_pc=0x152Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x152Cu:
      c->active=1u;c->active_start_pc=0x152Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x152Eu:
      c->active=1u;c->active_start_pc=0x152Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1531u:
      c->active=1u;c->active_start_pc=0x1531u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1534u:
      c->active=1u;c->active_start_pc=0x1534u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1535u:
      c->active=1u;c->active_start_pc=0x1535u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1536u:
      c->active=1u;c->active_start_pc=0x1536u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1538u:
      c->active=1u;c->active_start_pc=0x1538u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x153Au:
      c->active=1u;c->active_start_pc=0x153Au;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x153Du:
      c->active=1u;c->active_start_pc=0x153Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x153Fu:
      c->active=1u;c->active_start_pc=0x153Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x154Cu:
      c->active=1u;c->active_start_pc=0x154Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x154Eu:
      c->active=1u;c->active_start_pc=0x154Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1550u:
      c->active=1u;c->active_start_pc=0x1550u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1552u:
      c->active=1u;c->active_start_pc=0x1552u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1554u:
      c->active=1u;c->active_start_pc=0x1554u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1556u:
      c->active=1u;c->active_start_pc=0x1556u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1558u:
      c->active=1u;c->active_start_pc=0x1558u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x155Au:
      c->active=1u;c->active_start_pc=0x155Au;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=((uint8_t)(smp_peek(r,smp_dp(s,0x68u))-1u)!=0u);c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x155Du:
      c->active=1u;c->active_start_pc=0x155Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x155Fu:
      c->active=1u;c->active_start_pc=0x155Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1561u:
      c->active=1u;c->active_start_pc=0x1561u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1563u:
      c->active=1u;c->active_start_pc=0x1563u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1565u:
      c->active=1u;c->active_start_pc=0x1565u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1567u:
      c->active=1u;c->active_start_pc=0x1567u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1569u:
      c->active=1u;c->active_start_pc=0x1569u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x156Bu:
      c->active=1u;c->active_start_pc=0x156Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x156Du:
      c->active=1u;c->active_start_pc=0x156Du;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=((uint8_t)(smp_peek(r,smp_dp(s,0x5Au))-1u)!=0u);c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1570u:
      c->active=1u;c->active_start_pc=0x1570u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1572u:
      c->active=1u;c->active_start_pc=0x1572u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1574u:
      c->active=1u;c->active_start_pc=0x1574u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1577u:
      c->active=1u;c->active_start_pc=0x1577u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1579u:
      c->active=1u;c->active_start_pc=0x1579u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x157Cu:
      c->active=1u;c->active_start_pc=0x157Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x157Eu:
      c->active=1u;c->active_start_pc=0x157Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1580u:
      c->active=1u;c->active_start_pc=0x1580u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1583u:
      c->active=1u;c->active_start_pc=0x1583u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1584u:
      c->active=1u;c->active_start_pc=0x1584u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1585u:
      c->active=1u;c->active_start_pc=0x1585u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1587u:
      c->active=1u;c->active_start_pc=0x1587u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1589u:
      c->active=1u;c->active_start_pc=0x1589u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x158Au:
      c->active=1u;c->active_start_pc=0x158Au;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x158Bu:
      c->active=1u;c->active_start_pc=0x158Bu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x158Cu:
      c->active=1u;c->active_start_pc=0x158Cu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x158Fu:
      c->active=1u;c->active_start_pc=0x158Fu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1590u:
      c->active=1u;c->active_start_pc=0x1590u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1593u:
      c->active=1u;c->active_start_pc=0x1593u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1594u:
      c->active=1u;c->active_start_pc=0x1594u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1595u:
      c->active=1u;c->active_start_pc=0x1595u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1596u:
      c->active=1u;c->active_start_pc=0x1596u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1597u:
      c->active=1u;c->active_start_pc=0x1597u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x159Au:
      c->active=1u;c->active_start_pc=0x159Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x159Cu:
      c->active=1u;c->active_start_pc=0x159Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x159Eu:
      c->active=1u;c->active_start_pc=0x159Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15A0u:
      c->active=1u;c->active_start_pc=0x15A0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15A2u:
      c->active=1u;c->active_start_pc=0x15A2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=5u;return 1;
    case 0x15A4u:
      c->active=1u;c->active_start_pc=0x15A4u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15A5u:
      c->active=1u;c->active_start_pc=0x15A5u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15A6u:
      c->active=1u;c->active_start_pc=0x15A6u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15A9u:
      c->active=1u;c->active_start_pc=0x15A9u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15AAu:
      c->active=1u;c->active_start_pc=0x15AAu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15B2u:
      c->active=1u;c->active_start_pc=0x15B2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15B4u:
      c->active=1u;c->active_start_pc=0x15B4u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15B5u:
      c->active=1u;c->active_start_pc=0x15B5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15B7u:
      c->active=1u;c->active_start_pc=0x15B7u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15B8u:
      c->active=1u;c->active_start_pc=0x15B8u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15BBu:
      c->active=1u;c->active_start_pc=0x15BBu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15BEu:
      c->active=1u;c->active_start_pc=0x15BEu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15C0u:
      c->active=1u;c->active_start_pc=0x15C0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15C2u:
      c->active=1u;c->active_start_pc=0x15C2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15C4u:
      c->active=1u;c->active_start_pc=0x15C4u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15C5u:
      c->active=1u;c->active_start_pc=0x15C5u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15C6u:
      c->active=1u;c->active_start_pc=0x15C6u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15C7u:
      c->active=1u;c->active_start_pc=0x15C7u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15C8u:
      c->active=1u;c->active_start_pc=0x15C8u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15CAu:
      c->active=1u;c->active_start_pc=0x15CAu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15CBu:
      c->active=1u;c->active_start_pc=0x15CBu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15CDu:
      c->active=1u;c->active_start_pc=0x15CDu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15CFu:
      c->active=1u;c->active_start_pc=0x15CFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15DFu:
      c->active=1u;c->active_start_pc=0x15DFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15E1u:
      c->active=1u;c->active_start_pc=0x15E1u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15E4u:
      c->active=1u;c->active_start_pc=0x15E4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15E6u:
      c->active=1u;c->active_start_pc=0x15E6u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15E9u:
      c->active=1u;c->active_start_pc=0x15E9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15ECu:
      c->active=1u;c->active_start_pc=0x15ECu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15EDu:
      c->active=1u;c->active_start_pc=0x15EDu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15EEu:
      c->active=1u;c->active_start_pc=0x15EEu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15F0u:
      c->active=1u;c->active_start_pc=0x15F0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15F2u:
      c->active=1u;c->active_start_pc=0x15F2u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15F3u:
      c->active=1u;c->active_start_pc=0x15F3u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15F5u:
      c->active=1u;c->active_start_pc=0x15F5u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15F8u:
      c->active=1u;c->active_start_pc=0x15F8u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15F9u:
      c->active=1u;c->active_start_pc=0x15F9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15FBu:
      c->active=1u;c->active_start_pc=0x15FBu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15FEu:
      c->active=1u;c->active_start_pc=0x15FEu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x15FFu:
      c->active=1u;c->active_start_pc=0x15FFu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1602u:
      c->active=1u;c->active_start_pc=0x1602u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1604u:
      c->active=1u;c->active_start_pc=0x1604u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1607u:
      c->active=1u;c->active_start_pc=0x1607u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1609u:
      c->active=1u;c->active_start_pc=0x1609u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x160Cu:
      c->active=1u;c->active_start_pc=0x160Cu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1626u:
      c->active=1u;c->active_start_pc=0x1626u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1629u:
      c->active=1u;c->active_start_pc=0x1629u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x162Cu:
      c->active=1u;c->active_start_pc=0x162Cu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x162Fu:
      c->active=1u;c->active_start_pc=0x162Fu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1632u:
      c->active=1u;c->active_start_pc=0x1632u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1634u:
      c->active=1u;c->active_start_pc=0x1634u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1637u:
      c->active=1u;c->active_start_pc=0x1637u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1639u:
      c->active=1u;c->active_start_pc=0x1639u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x163Cu:
      c->active=1u;c->active_start_pc=0x163Cu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x164Du:
      c->active=1u;c->active_start_pc=0x164Du;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1650u:
      c->active=1u;c->active_start_pc=0x1650u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1652u:
      c->active=1u;c->active_start_pc=0x1652u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1654u:
      c->active=1u;c->active_start_pc=0x1654u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1656u:
      c->active=1u;c->active_start_pc=0x1656u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1657u:
      c->active=1u;c->active_start_pc=0x1657u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1659u:
      c->active=1u;c->active_start_pc=0x1659u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x165Cu:
      c->active=1u;c->active_start_pc=0x165Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x165Eu:
      c->active=1u;c->active_start_pc=0x165Eu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x165Fu:
      c->active=1u;c->active_start_pc=0x165Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1661u:
      c->active=1u;c->active_start_pc=0x1661u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1663u:
      c->active=1u;c->active_start_pc=0x1663u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1666u:
      c->active=1u;c->active_start_pc=0x1666u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1668u:
      c->active=1u;c->active_start_pc=0x1668u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1669u:
      c->active=1u;c->active_start_pc=0x1669u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x166Bu:
      c->active=1u;c->active_start_pc=0x166Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x166Du:
      c->active=1u;c->active_start_pc=0x166Du;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16B4u:
      c->active=1u;c->active_start_pc=0x16B4u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16B7u:
      c->active=1u;c->active_start_pc=0x16B7u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16B9u:
      c->active=1u;c->active_start_pc=0x16B9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16BCu:
      c->active=1u;c->active_start_pc=0x16BCu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16BDu:
      c->active=1u;c->active_start_pc=0x16BDu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=4u;return 1;
    case 0x16BFu:
      c->active=1u;c->active_start_pc=0x16BFu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=4u;return 1;
    case 0x16C0u:
      c->active=1u;c->active_start_pc=0x16C0u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=8u;return 1;
    case 0x16C3u:
      c->active=1u;c->active_start_pc=0x16C3u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=6u;return 1;
    case 0x16C6u:
      c->active=1u;c->active_start_pc=0x16C6u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=2u;return 1;
    case 0x16C7u:
      c->active=1u;c->active_start_pc=0x16C7u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=5u;return 1;
    case 0x16CAu:
      c->active=1u;c->active_start_pc=0x16CAu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=4u;return 1;
    case 0x16CBu:
      c->active=1u;c->active_start_pc=0x16CBu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=8u;return 1;
    case 0x16CEu:
      c->active=1u;c->active_start_pc=0x16CEu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=6u;return 1;
    case 0x16D1u:
      c->active=1u;c->active_start_pc=0x16D1u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=2u;return 1;
    case 0x16D2u:
      c->active=1u;c->active_start_pc=0x16D2u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=6u;return 1;
    case 0x16D5u:
      c->active=1u;c->active_start_pc=0x16D5u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=5u;return 1;
    case 0x16D6u:
      c->active=1u;c->active_start_pc=0x16D6u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=6u;return 1;
    case 0x16D9u:
      c->active=1u;c->active_start_pc=0x16D9u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=5u;return 1;
    case 0x16DAu:
      c->active=1u;c->active_start_pc=0x16DAu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16DDu:
      c->active=1u;c->active_start_pc=0x16DDu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16E0u:
      c->active=1u;c->active_start_pc=0x16E0u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16E3u:
      c->active=1u;c->active_start_pc=0x16E3u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16E6u:
      c->active=1u;c->active_start_pc=0x16E6u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16E8u:
      c->active=1u;c->active_start_pc=0x16E8u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16EAu:
      c->active=1u;c->active_start_pc=0x16EAu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16EDu:
      c->active=1u;c->active_start_pc=0x16EDu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16EFu:
      c->active=1u;c->active_start_pc=0x16EFu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16F2u:
      c->active=1u;c->active_start_pc=0x16F2u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16F5u:
      c->active=1u;c->active_start_pc=0x16F5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16F7u:
      c->active=1u;c->active_start_pc=0x16F7u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16FAu:
      c->active=1u;c->active_start_pc=0x16FAu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16FCu:
      c->active=1u;c->active_start_pc=0x16FCu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x16FDu:
      c->active=1u;c->active_start_pc=0x16FDu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1700u:
      c->active=1u;c->active_start_pc=0x1700u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1702u:
      c->active=1u;c->active_start_pc=0x1702u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1705u:
      c->active=1u;c->active_start_pc=0x1705u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1707u:
      c->active=1u;c->active_start_pc=0x1707u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1709u:
      c->active=1u;c->active_start_pc=0x1709u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x170Cu:
      c->active=1u;c->active_start_pc=0x170Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x170Eu:
      c->active=1u;c->active_start_pc=0x170Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1710u:
      c->active=1u;c->active_start_pc=0x1710u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1712u:
      c->active=1u;c->active_start_pc=0x1712u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1713u:
      c->active=1u;c->active_start_pc=0x1713u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1715u:
      c->active=1u;c->active_start_pc=0x1715u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1718u:
      c->active=1u;c->active_start_pc=0x1718u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x171Au:
      c->active=1u;c->active_start_pc=0x171Au;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x171Bu:
      c->active=1u;c->active_start_pc=0x171Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x171Du:
      c->active=1u;c->active_start_pc=0x171Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x171Fu:
      c->active=1u;c->active_start_pc=0x171Fu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1722u:
      c->active=1u;c->active_start_pc=0x1722u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1724u:
      c->active=1u;c->active_start_pc=0x1724u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1727u:
      c->active=1u;c->active_start_pc=0x1727u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1729u:
      c->active=1u;c->active_start_pc=0x1729u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x172Au:
      c->active=1u;c->active_start_pc=0x172Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x172Cu:
      c->active=1u;c->active_start_pc=0x172Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x172Eu:
      c->active=1u;c->active_start_pc=0x172Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1731u:
      c->active=1u;c->active_start_pc=0x1731u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1733u:
      c->active=1u;c->active_start_pc=0x1733u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x173Bu:
      c->active=1u;c->active_start_pc=0x173Bu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x173Eu:
      c->active=1u;c->active_start_pc=0x173Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1741u:
      c->active=1u;c->active_start_pc=0x1741u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1743u:
      c->active=1u;c->active_start_pc=0x1743u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1746u:
      c->active=1u;c->active_start_pc=0x1746u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1748u:
      c->active=1u;c->active_start_pc=0x1748u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1749u:
      c->active=1u;c->active_start_pc=0x1749u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x174Au:
      c->active=1u;c->active_start_pc=0x174Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x174Cu:
      c->active=1u;c->active_start_pc=0x174Cu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x174Fu:
      c->active=1u;c->active_start_pc=0x174Fu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1752u:
      c->active=1u;c->active_start_pc=0x1752u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1753u:
      c->active=1u;c->active_start_pc=0x1753u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1754u:
      c->active=1u;c->active_start_pc=0x1754u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1755u:
      c->active=1u;c->active_start_pc=0x1755u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1757u:
      c->active=1u;c->active_start_pc=0x1757u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1758u:
      c->active=1u;c->active_start_pc=0x1758u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x175Au:
      c->active=1u;c->active_start_pc=0x175Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x175Cu:
      c->active=1u;c->active_start_pc=0x175Cu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x175Du:
      c->active=1u;c->active_start_pc=0x175Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x175Fu:
      c->active=1u;c->active_start_pc=0x175Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1761u:
      c->active=1u;c->active_start_pc=0x1761u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1764u:
      c->active=1u;c->active_start_pc=0x1764u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1767u:
      c->active=1u;c->active_start_pc=0x1767u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1769u:
      c->active=1u;c->active_start_pc=0x1769u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x176Bu:
      c->active=1u;c->active_start_pc=0x176Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x176Du:
      c->active=1u;c->active_start_pc=0x176Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x176Fu:
      c->active=1u;c->active_start_pc=0x176Fu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=((smp_peek(r,smp_dp(s,0x4Cu)) & 0x80u)==0u);c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1772u:
      c->active=1u;c->active_start_pc=0x1772u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1773u:
      c->active=1u;c->active_start_pc=0x1773u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1775u:
      c->active=1u;c->active_start_pc=0x1775u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1777u:
      c->active=1u;c->active_start_pc=0x1777u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1779u:
      c->active=1u;c->active_start_pc=0x1779u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x177Cu:
      c->active=1u;c->active_start_pc=0x177Cu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x177Fu:
      c->active=1u;c->active_start_pc=0x177Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1781u:
      c->active=1u;c->active_start_pc=0x1781u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1784u:
      c->active=1u;c->active_start_pc=0x1784u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((uint8_t)(s->y-1u)!=0u);c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1786u:
      c->active=1u;c->active_start_pc=0x1786u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1788u:
      c->active=1u;c->active_start_pc=0x1788u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x178Au:
      c->active=1u;c->active_start_pc=0x178Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x178Cu:
      c->active=1u;c->active_start_pc=0x178Cu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x178Fu:
      c->active=1u;c->active_start_pc=0x178Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1791u:
      c->active=1u;c->active_start_pc=0x1791u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1793u:
      c->active=1u;c->active_start_pc=0x1793u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1796u:
      c->active=1u;c->active_start_pc=0x1796u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1797u:
      c->active=1u;c->active_start_pc=0x1797u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1798u:
      c->active=1u;c->active_start_pc=0x1798u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1799u:
      c->active=1u;c->active_start_pc=0x1799u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x179Bu:
      c->active=1u;c->active_start_pc=0x179Bu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x179Cu:
      c->active=1u;c->active_start_pc=0x179Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x179Eu:
      c->active=1u;c->active_start_pc=0x179Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17A0u:
      c->active=1u;c->active_start_pc=0x17A0u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17A3u:
      c->active=1u;c->active_start_pc=0x17A3u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17A5u:
      c->active=1u;c->active_start_pc=0x17A5u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17B5u:
      c->active=1u;c->active_start_pc=0x17B5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17B7u:
      c->active=1u;c->active_start_pc=0x17B7u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17B9u:
      c->active=1u;c->active_start_pc=0x17B9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17BBu:
      c->active=1u;c->active_start_pc=0x17BBu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17BDu:
      c->active=1u;c->active_start_pc=0x17BDu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17ECu:
      c->active=1u;c->active_start_pc=0x17ECu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17EDu:
      c->active=1u;c->active_start_pc=0x17EDu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17F0u:
      c->active=1u;c->active_start_pc=0x17F0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17F2u:
      c->active=1u;c->active_start_pc=0x17F2u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17F5u:
      c->active=1u;c->active_start_pc=0x17F5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17F7u:
      c->active=1u;c->active_start_pc=0x17F7u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17F8u:
      c->active=1u;c->active_start_pc=0x17F8u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17F9u:
      c->active=1u;c->active_start_pc=0x17F9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x17FBu:
      c->active=1u;c->active_start_pc=0x17FBu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1800u:
      c->active=1u;c->active_start_pc=0x1800u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1802u:
      c->active=1u;c->active_start_pc=0x1802u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(12u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1803u:
      c->active=1u;c->active_start_pc=0x1803u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1804u:
      c->active=1u;c->active_start_pc=0x1804u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1806u:
      c->active=1u;c->active_start_pc=0x1806u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(12u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1807u:
      c->active=1u;c->active_start_pc=0x1807u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1808u:
      c->active=1u;c->active_start_pc=0x1808u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x180Au:
      c->active=1u;c->active_start_pc=0x180Au;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=((smp_peek(r,smp_dp(s,0x12u)) & 0x80u)==0u);c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x180Du:
      c->active=1u;c->active_start_pc=0x180Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x180Fu:
      c->active=1u;c->active_start_pc=0x180Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1811u:
      c->active=1u;c->active_start_pc=0x1811u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1813u:
      c->active=1u;c->active_start_pc=0x1813u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1869u:
      c->active=1u;c->active_start_pc=0x1869u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x186Bu:
      c->active=1u;c->active_start_pc=0x186Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x186Du:
      c->active=1u;c->active_start_pc=0x186Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=2u;return 1;
    case 0x186Fu:
      c->active=1u;c->active_start_pc=0x186Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=2u;return 1;
    case 0x1871u:
      c->active=1u;c->active_start_pc=0x1871u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=5u;return 1;
    case 0x1873u:
      c->active=1u;c->active_start_pc=0x1873u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=8u;return 1;
    case 0x1876u:
      c->active=1u;c->active_start_pc=0x1876u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1878u:
      c->active=1u;c->active_start_pc=0x1878u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x189Du:
      c->active=1u;c->active_start_pc=0x189Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x189Fu:
      c->active=1u;c->active_start_pc=0x189Fu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18A2u:
      c->active=1u;c->active_start_pc=0x18A2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18A4u:
      c->active=1u;c->active_start_pc=0x18A4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18AFu:
      c->active=1u;c->active_start_pc=0x18AFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18B1u:
      c->active=1u;c->active_start_pc=0x18B1u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18B3u:
      c->active=1u;c->active_start_pc=0x18B3u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18B5u:
      c->active=1u;c->active_start_pc=0x18B5u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18B8u:
      c->active=1u;c->active_start_pc=0x18B8u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18B9u:
      c->active=1u;c->active_start_pc=0x18B9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18BCu:
      c->active=1u;c->active_start_pc=0x18BCu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18BEu:
      c->active=1u;c->active_start_pc=0x18BEu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18BFu:
      c->active=1u;c->active_start_pc=0x18BFu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18C0u:
      c->active=1u;c->active_start_pc=0x18C0u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18C1u:
      c->active=1u;c->active_start_pc=0x18C1u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18C3u:
      c->active=1u;c->active_start_pc=0x18C3u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18C5u:
      c->active=1u;c->active_start_pc=0x18C5u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18C8u:
      c->active=1u;c->active_start_pc=0x18C8u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18C9u:
      c->active=1u;c->active_start_pc=0x18C9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18CCu:
      c->active=1u;c->active_start_pc=0x18CCu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18CEu:
      c->active=1u;c->active_start_pc=0x18CEu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18CFu:
      c->active=1u;c->active_start_pc=0x18CFu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18D0u:
      c->active=1u;c->active_start_pc=0x18D0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18D2u:
      c->active=1u;c->active_start_pc=0x18D2u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18D3u:
      c->active=1u;c->active_start_pc=0x18D3u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18D6u:
      c->active=1u;c->active_start_pc=0x18D6u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18D7u:
      c->active=1u;c->active_start_pc=0x18D7u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18DAu:
      c->active=1u;c->active_start_pc=0x18DAu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18DBu:
      c->active=1u;c->active_start_pc=0x18DBu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18DEu:
      c->active=1u;c->active_start_pc=0x18DEu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18DFu:
      c->active=1u;c->active_start_pc=0x18DFu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=((smp_peek(r,smp_dp(s,0x12u)) & 0x01u)==0u);c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18E2u:
      c->active=1u;c->active_start_pc=0x18E2u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18E3u:
      c->active=1u;c->active_start_pc=0x18E3u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18E4u:
      c->active=1u;c->active_start_pc=0x18E4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18E9u:
      c->active=1u;c->active_start_pc=0x18E9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18EBu:
      c->active=1u;c->active_start_pc=0x18EBu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18EEu:
      c->active=1u;c->active_start_pc=0x18EEu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18F0u:
      c->active=1u;c->active_start_pc=0x18F0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18F2u:
      c->active=1u;c->active_start_pc=0x18F2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18F4u:
      c->active=1u;c->active_start_pc=0x18F4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18F6u:
      c->active=1u;c->active_start_pc=0x18F6u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18F8u:
      c->active=1u;c->active_start_pc=0x18F8u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=((smp_peek(r,smp_dp(s,0x12u)) & 0x02u)==0u);c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18FBu:
      c->active=1u;c->active_start_pc=0x18FBu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x18FCu:
      c->active=1u;c->active_start_pc=0x18FCu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=6u;return 1;
    case 0x18FFu:
      c->active=1u;c->active_start_pc=0x18FFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=5u;return 1;
    case 0x1901u:
      c->active=1u;c->active_start_pc=0x1901u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=5u;return 1;
    case 0x1903u:
      c->active=1u;c->active_start_pc=0x1903u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=4u;return 1;
    case 0x1904u:
      c->active=1u;c->active_start_pc=0x1904u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=4u;return 1;
    case 0x1905u:
      c->active=1u;c->active_start_pc=0x1905u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=2u;return 1;
    case 0x1906u:
      c->active=1u;c->active_start_pc=0x1906u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1908u:
      c->active=1u;c->active_start_pc=0x1908u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=5u;return 1;
    case 0x190Bu:
      c->active=1u;c->active_start_pc=0x190Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=2u;return 1;
    case 0x190Du:
      c->active=1u;c->active_start_pc=0x190Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=7u;return 1;
    case 0x190Fu:
      c->active=1u;c->active_start_pc=0x190Fu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=2u;return 1;
    case 0x1910u:
      c->active=1u;c->active_start_pc=0x1910u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    case 0x1912u:
      c->active=1u;c->active_start_pc=0x1912u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=5u;return 1;
    case 0x1915u:
      c->active=1u;c->active_start_pc=0x1915u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=8u;return 1;
    case 0x1918u:
      c->active=1u;c->active_start_pc=0x1918u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=2u;return 1;
    case 0x1919u:
      c->active=1u;c->active_start_pc=0x1919u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=6u;return 1;
    case 0x191Bu:
      c->active=1u;c->active_start_pc=0x191Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=6u;return 1;
    case 0x191Du:
      c->active=1u;c->active_start_pc=0x191Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=7u;return 1;
    case 0x191Fu:
      c->active=1u;c->active_start_pc=0x191Fu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=5u;return 1;
    case 0x1920u:
      c->active=1u;c->active_start_pc=0x1920u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1922u:
      c->active=1u;c->active_start_pc=0x1922u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1924u:
      c->active=1u;c->active_start_pc=0x1924u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1926u:
      c->active=1u;c->active_start_pc=0x1926u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1928u:
      c->active=1u;c->active_start_pc=0x1928u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x192Au:
      c->active=1u;c->active_start_pc=0x192Au;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=(s->a != smp_peek(r,smp_dp(s,(uint8_t)(0x70u+s->x))));c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x192Du:
      c->active=1u;c->active_start_pc=0x192Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x192Fu:
      c->active=1u;c->active_start_pc=0x192Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1931u:
      c->active=1u;c->active_start_pc=0x1931u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1933u:
      c->active=1u;c->active_start_pc=0x1933u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1935u:
      c->active=1u;c->active_start_pc=0x1935u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1937u:
      c->active=1u;c->active_start_pc=0x1937u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1939u:
      c->active=1u;c->active_start_pc=0x1939u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x193Bu:
      c->active=1u;c->active_start_pc=0x193Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x193Du:
      c->active=1u;c->active_start_pc=0x193Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x193Fu:
      c->active=1u;c->active_start_pc=0x193Fu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1940u:
      c->active=1u;c->active_start_pc=0x1940u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1942u:
      c->active=1u;c->active_start_pc=0x1942u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1944u:
      c->active=1u;c->active_start_pc=0x1944u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1946u:
      c->active=1u;c->active_start_pc=0x1946u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1948u:
      c->active=1u;c->active_start_pc=0x1948u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x194Au:
      c->active=1u;c->active_start_pc=0x194Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x194Cu:
      c->active=1u;c->active_start_pc=0x194Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x194Eu:
      c->active=1u;c->active_start_pc=0x194Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1950u:
      c->active=1u;c->active_start_pc=0x1950u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=4u;return 1;
    case 0x1951u:
      c->active=1u;c->active_start_pc=0x1951u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=2u;return 1;
    case 0x1952u:
      c->active=1u;c->active_start_pc=0x1952u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=4u;return 1;
    case 0x1953u:
      c->active=1u;c->active_start_pc=0x1953u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=5u;return 1;
    case 0x1956u:
      c->active=1u;c->active_start_pc=0x1956u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=2u;return 1;
    case 0x1957u:
      c->active=1u;c->active_start_pc=0x1957u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    case 0x1959u:
      c->active=1u;c->active_start_pc=0x1959u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x195Bu:
      c->active=1u;c->active_start_pc=0x195Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x195Du:
      c->active=1u;c->active_start_pc=0x195Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x195Fu:
      c->active=1u;c->active_start_pc=0x195Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1961u:
      c->active=1u;c->active_start_pc=0x1961u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1964u:
      c->active=1u;c->active_start_pc=0x1964u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1965u:
      c->active=1u;c->active_start_pc=0x1965u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1968u:
      c->active=1u;c->active_start_pc=0x1968u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1969u:
      c->active=1u;c->active_start_pc=0x1969u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    case 0x196Bu:
      c->active=1u;c->active_start_pc=0x196Bu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x196Eu:
      c->active=1u;c->active_start_pc=0x196Eu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x196Fu:
      c->active=1u;c->active_start_pc=0x196Fu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1972u:
      c->active=1u;c->active_start_pc=0x1972u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1973u:
      c->active=1u;c->active_start_pc=0x1973u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    case 0x1975u:
      c->active=1u;c->active_start_pc=0x1975u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1976u:
      c->active=1u;c->active_start_pc=0x1976u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1978u:
      c->active=1u;c->active_start_pc=0x1978u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1979u:
      c->active=1u;c->active_start_pc=0x1979u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x197Au:
      c->active=1u;c->active_start_pc=0x197Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x197Cu:
      c->active=1u;c->active_start_pc=0x197Cu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x197Du:
      c->active=1u;c->active_start_pc=0x197Du;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x197Eu:
      c->active=1u;c->active_start_pc=0x197Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    case 0x1980u:
      c->active=1u;c->active_start_pc=0x1980u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1982u:
      c->active=1u;c->active_start_pc=0x1982u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1984u:
      c->active=1u;c->active_start_pc=0x1984u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1987u:
      c->active=1u;c->active_start_pc=0x1987u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1989u:
      c->active=1u;c->active_start_pc=0x1989u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x198Bu:
      c->active=1u;c->active_start_pc=0x198Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19A6u:
      c->active=1u;c->active_start_pc=0x19A6u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19A9u:
      c->active=1u;c->active_start_pc=0x19A9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19ABu:
      c->active=1u;c->active_start_pc=0x19ABu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19ADu:
      c->active=1u;c->active_start_pc=0x19ADu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19B0u:
      c->active=1u;c->active_start_pc=0x19B0u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=(s->a != smp_peek(r,smp_dp(s,(uint8_t)(0xB0u+s->x))));c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19B3u:
      c->active=1u;c->active_start_pc=0x19B3u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19B6u:
      c->active=1u;c->active_start_pc=0x19B6u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19B9u:
      c->active=1u;c->active_start_pc=0x19B9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19BBu:
      c->active=1u;c->active_start_pc=0x19BBu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19BEu:
      c->active=1u;c->active_start_pc=0x19BEu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    case 0x19CDu:
      c->active=1u;c->active_start_pc=0x19CDu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19CFu:
      c->active=1u;c->active_start_pc=0x19CFu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19D2u:
      c->active=1u;c->active_start_pc=0x19D2u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19D3u:
      c->active=1u;c->active_start_pc=0x19D3u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19D6u:
      c->active=1u;c->active_start_pc=0x19D6u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19D9u:
      c->active=1u;c->active_start_pc=0x19D9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19DBu:
      c->active=1u;c->active_start_pc=0x19DBu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19DCu:
      c->active=1u;c->active_start_pc=0x19DCu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19DDu:
      c->active=1u;c->active_start_pc=0x19DDu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19DFu:
      c->active=1u;c->active_start_pc=0x19DFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19E1u:
      c->active=1u;c->active_start_pc=0x19E1u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19E2u:
      c->active=1u;c->active_start_pc=0x19E2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19E4u:
      c->active=1u;c->active_start_pc=0x19E4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19E6u:
      c->active=1u;c->active_start_pc=0x19E6u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_C)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19EDu:
      c->active=1u;c->active_start_pc=0x19EDu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19EEu:
      c->active=1u;c->active_start_pc=0x19EEu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19EFu:
      c->active=1u;c->active_start_pc=0x19EFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19F1u:
      c->active=1u;c->active_start_pc=0x19F1u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19F4u:
      c->active=1u;c->active_start_pc=0x19F4u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19F7u:
      c->active=1u;c->active_start_pc=0x19F7u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19F9u:
      c->active=1u;c->active_start_pc=0x19F9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=((smp_peek(r,smp_dp(s,0x13u)) & 0x80u)!=0u);c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19FCu:
      c->active=1u;c->active_start_pc=0x19FCu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19FDu:
      c->active=1u;c->active_start_pc=0x19FDu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x19FFu:
      c->active=1u;c->active_start_pc=0x19FFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A01u:
      c->active=1u;c->active_start_pc=0x1A01u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A0Cu:
      c->active=1u;c->active_start_pc=0x1A0Cu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A0Fu:
      c->active=1u;c->active_start_pc=0x1A0Fu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A10u:
      c->active=1u;c->active_start_pc=0x1A10u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A13u:
      c->active=1u;c->active_start_pc=0x1A13u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A15u:
      c->active=1u;c->active_start_pc=0x1A15u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A17u:
      c->active=1u;c->active_start_pc=0x1A17u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A23u:
      c->active=1u;c->active_start_pc=0x1A23u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=((smp_peek(r,smp_dp(s,0x13u)) & 0x80u)==0u);c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A29u:
      c->active=1u;c->active_start_pc=0x1A29u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A2Bu:
      c->active=1u;c->active_start_pc=0x1A2Bu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A2Eu:
      c->active=1u;c->active_start_pc=0x1A2Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A30u:
      c->active=1u;c->active_start_pc=0x1A30u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A40u:
      c->active=1u;c->active_start_pc=0x1A40u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A42u:
      c->active=1u;c->active_start_pc=0x1A42u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A44u:
      c->active=1u;c->active_start_pc=0x1A44u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A47u:
      c->active=1u;c->active_start_pc=0x1A47u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=(s->a != smp_peek(r,smp_dp(s,(uint8_t)(0xB0u+s->x))));c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A4Au:
      c->active=1u;c->active_start_pc=0x1A4Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A4Cu:
      c->active=1u;c->active_start_pc=0x1A4Cu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A4Fu:
      c->active=1u;c->active_start_pc=0x1A4Fu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A50u:
      c->active=1u;c->active_start_pc=0x1A50u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A51u:
      c->active=1u;c->active_start_pc=0x1A51u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A52u:
      c->active=1u;c->active_start_pc=0x1A52u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A55u:
      c->active=1u;c->active_start_pc=0x1A55u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A6Eu:
      c->active=1u;c->active_start_pc=0x1A6Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A71u:
      c->active=1u;c->active_start_pc=0x1A71u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A73u:
      c->active=1u;c->active_start_pc=0x1A73u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A75u:
      c->active=1u;c->active_start_pc=0x1A75u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A8Eu:
      c->active=1u;c->active_start_pc=0x1A8Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A90u:
      c->active=1u;c->active_start_pc=0x1A90u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A91u:
      c->active=1u;c->active_start_pc=0x1A91u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A94u:
      c->active=1u;c->active_start_pc=0x1A94u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A95u:
      c->active=1u;c->active_start_pc=0x1A95u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A98u:
      c->active=1u;c->active_start_pc=0x1A98u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A99u:
      c->active=1u;c->active_start_pc=0x1A99u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A9Au:
      c->active=1u;c->active_start_pc=0x1A9Au;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(9u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A9Bu:
      c->active=1u;c->active_start_pc=0x1A9Bu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A9Cu:
      c->active=1u;c->active_start_pc=0x1A9Cu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1A9Fu:
      c->active=1u;c->active_start_pc=0x1A9Fu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFC0u:
      c->active=1u;c->active_start_pc=0xFFC0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFC2u:
      c->active=1u;c->active_start_pc=0xFFC2u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFC3u:
      c->active=1u;c->active_start_pc=0xFFC3u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFC5u:
      c->active=1u;c->active_start_pc=0xFFC5u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFC6u:
      c->active=1u;c->active_start_pc=0xFFC6u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFC7u:
      c->active=1u;c->active_start_pc=0xFFC7u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFC9u:
      c->active=1u;c->active_start_pc=0xFFC9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFCCu:
      c->active=1u;c->active_start_pc=0xFFCCu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFCFu:
      c->active=1u;c->active_start_pc=0xFFCFu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFD2u:
      c->active=1u;c->active_start_pc=0xFFD2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFD4u:
      c->active=1u;c->active_start_pc=0xFFD4u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    case 0xFFD6u:
      c->active=1u;c->active_start_pc=0xFFD6u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFD8u:
      c->active=1u;c->active_start_pc=0xFFD8u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFDAu:
      c->active=1u;c->active_start_pc=0xFFDAu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFDCu:
      c->active=1u;c->active_start_pc=0xFFDCu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFDEu:
      c->active=1u;c->active_start_pc=0xFFDEu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFE0u:
      c->active=1u;c->active_start_pc=0xFFE0u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFE2u:
      c->active=1u;c->active_start_pc=0xFFE2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(7u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFE4u:
      c->active=1u;c->active_start_pc=0xFFE4u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFE5u:
      c->active=1u;c->active_start_pc=0xFFE5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFE7u:
      c->active=1u;c->active_start_pc=0xFFE7u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFE9u:
      c->active=1u;c->active_start_pc=0xFFE9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFEBu:
      c->active=1u;c->active_start_pc=0xFFEBu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFEDu:
      c->active=1u;c->active_start_pc=0xFFEDu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFEFu:
      c->active=1u;c->active_start_pc=0xFFEFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFF1u:
      c->active=1u;c->active_start_pc=0xFFF1u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFF3u:
      c->active=1u;c->active_start_pc=0xFFF3u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFF5u:
      c->active=1u;c->active_start_pc=0xFFF5u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFF7u:
      c->active=1u;c->active_start_pc=0xFFF7u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFF8u:
      c->active=1u;c->active_start_pc=0xFFF8u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFF9u:
      c->active=1u;c->active_start_pc=0xFFF9u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0xFFFBu:
      c->active=1u;c->active_start_pc=0xFFFBu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0A02u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A02u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A04u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A04u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A06u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A06u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A09u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A09u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A0Cu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A0Cu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A0Du: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A0Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A0Fu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A0Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=3u;return 1;
    case 0x0A11u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A11u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;c->active_branch_taken=(uint8_t)(((s->psw&SC_SMP_FLAG_Z)!=0u)?1u:0u);if(c->active_branch_taken)c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0A13u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A13u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A14u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A14u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A15u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A15u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A18u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A18u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;c->active_branch_taken=(uint8_t)(((s->psw&SC_SMP_FLAG_Z)==0u)?1u:0u);if(c->active_branch_taken)c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0A1Au: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A1Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;c->active_branch_taken=1u;c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0A1Cu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A1Cu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A1Fu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A1Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;c->active_branch_taken=1u;c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0A21u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A21u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A22u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A22u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A25u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A25u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A27u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A27u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A29u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A29u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A2Cu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A2Cu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A2Du: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A2Du;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A30u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A30u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A31u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A31u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A34u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A34u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;c->active_branch_taken=(uint8_t)(((s->psw&SC_SMP_FLAG_Z)==0u)?1u:0u);if(c->active_branch_taken)c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0A36u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A36u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A38u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A38u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A3Bu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A3Bu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A3Eu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A3Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A41u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A41u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A44u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A44u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A47u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A47u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=3u;return 1;
    case 0x0A49u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A49u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A4Bu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A4Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;c->active_branch_taken=1u;c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0A4Du: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A4Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A4Fu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A4Fu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;c->active_branch_taken=(uint8_t)((s->a!=smp_peek(r,smp_dp(s,0x1Au)))?1u:0u);if(c->active_branch_taken)c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0A52u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A52u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;c->active_branch_taken=1u;c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0A54u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A54u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A55u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A55u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A57u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A57u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A59u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A59u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A5Cu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A5Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A5Eu: /* Alpha 2 corrected SPC700 boundary: AND A,(X) */
      c->active=1u;c->active_start_pc=0x0A5Eu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=3u;return 1;
    case 0x0A5Fu: /* Alpha 2 recovered BEQ instruction */
      c->active=1u;c->active_start_pc=0x0A5Fu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=(uint8_t)(((s->psw&SC_SMP_FLAG_Z)!=0u)?1u:0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x0A61u: /* Alpha 2 recovered DEC Y instruction */
      c->active=1u;c->active_start_pc=0x0A61u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A62u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A62u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A63u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A63u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A66u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A66u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A67u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A67u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;c->active_branch_taken=(uint8_t)(((s->psw&SC_SMP_FLAG_C)==0u)?1u:0u);if(c->active_branch_taken)c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0A69u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A69u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A6Cu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A6Cu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A6Fu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A6Fu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A72u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A72u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A75u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A75u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=3u;return 1;
    case 0x0A77u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A77u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A79u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A79u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A7Cu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A7Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=3u;return 1;
    case 0x0A7Eu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A7Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;c->active_branch_taken=(uint8_t)(((s->psw&SC_SMP_FLAG_Z)!=0u)?1u:0u);if(c->active_branch_taken)c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0A80u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A80u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=3u;return 1;
    case 0x0A82u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A82u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A83u: /* Alpha 2 corrected SPC700 boundary: SBC A,$03C1 */
      c->active=1u;c->active_start_pc=0x0A83u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A86u: /* Alpha 2 recovered MOV $4A,A instruction */
      c->active=1u;c->active_start_pc=0x0A86u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A88u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A88u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A8Au: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A8Au;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=8u;return 1;
    case 0x0A8Du: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A8Du;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A8Eu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A8Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A91u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A91u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0A94u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A94u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A97u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A97u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A9Au: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A9Au;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0A9Du: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A9Du;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0A9Fu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0A9Fu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=8u;return 1;
    case 0x0AA2u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AA2u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=8u;return 1;
    case 0x0AA5u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AA5u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0AD7u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AD7u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=8u;return 1;
    case 0x0ADAu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0ADAu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0ADDu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0ADDu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=3u;return 1;
    case 0x0ADFu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0ADFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0AE1u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AE1u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;c->active_branch_taken=(uint8_t)(((s->psw&SC_SMP_FLAG_Z)==0u)?1u:0u);if(c->active_branch_taken)c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0AE3u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AE3u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0AE6u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AE6u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0AE9u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AE9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0AECu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AECu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0AEDu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AEDu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0AEFu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AEFu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=6u;return 1;
    case 0x0AF2u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AF2u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0AF4u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AF4u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=6u;return 1;
    case 0x0AF7u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AF7u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0AF9u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AF9u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=6u;return 1;
    case 0x0AFCu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AFCu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0AFFu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0AFFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0B01u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0B01u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=8u;return 1;
    case 0x0B04u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0B04u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=3u;return 1;
    case 0x0B06u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0B06u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0B09u: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0B09u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0B0Bu: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0B0Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;c->active_branch_taken=(uint8_t)(((s->psw&SC_SMP_FLAG_Z)==0u)?1u:0u);if(c->active_branch_taken)c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0B0Du: /* Version 13 menu navigation S-SMP/SFX path */
      c->active=1u;c->active_start_pc=0x0B0Du;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0B0Eu: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B0Eu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=8u;return 1;
    case 0x0B11u: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B11u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0B14u: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B14u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=3u;return 1;
    case 0x0B16u: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B16u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=6u;return 1;
    case 0x0B19u: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B19u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0B1Bu: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B1Bu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=6u;return 1;
    case 0x0B1Eu: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B1Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0B20u: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B20u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=6u;return 1;
    case 0x0B23u: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B23u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0B26u: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B26u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;return 1;
    case 0x0B28u: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B28u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=8u;return 1;
    case 0x0B2Bu: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B2Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=3u;return 1;
    case 0x0B2Du: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B2Du;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x0B30u: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B30u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=4u;return 1;
    case 0x0B32u: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B32u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=2u;c->active_branch_taken=(uint8_t)(((s->psw&SC_SMP_FLAG_Z)==0u)?1u:0u);if(c->active_branch_taken)c->active_cycles=(uint8_t)(c->active_cycles+2u);return 1;
    case 0x0B34u: /* Version 14 new-city S-SMP path */
      c->active=1u;c->active_start_pc=0x0B34u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0u;c->active_cycles=5u;return 1;
    case 0x13ADu: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x13ADu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13AFu: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x13AFu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13B1u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x13B1u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(6u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13B4u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x13B4u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13B7u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x13B7u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x13BAu: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x13BAu;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1458u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x1458u;c->active_length=1u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1459u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x1459u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x145Bu: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x145Bu;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x145Eu: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x145Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1460u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x1460u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1462u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x1462u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1464u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x1464u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1466u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x1466u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1468u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x1468u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x146Au: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x146Au;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    case 0x146Cu: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x146Cu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x146Eu: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x146Eu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_N)==0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1470u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x1470u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(4u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1472u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x1472u;c->active_length=3u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(8u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1475u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x1475u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(3u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1477u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x1477u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=((s->psw & SC_SMP_FLAG_Z)!=0u);c->active_cycles=(uint8_t)(2u+(c->active_branch_taken?2u:0u));return 1;
    case 0x1479u: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x1479u;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=0;c->active_cycles=(uint8_t)(5u+(c->active_branch_taken?2u:0u));return 1;
    case 0x147Bu: /* Alpha 1 recorder no-input S-SMP extension */
      c->active=1u;c->active_start_pc=0x147Bu;c->active_length=2u;c->active_progress=0u;c->active_branch_taken=1;c->active_cycles=4u;return 1;
    default:return smp_fail(r,"unknown exact S-SMP PC");
  }
}

static int sc_v11_smp_complete_generated(SCV11Runtime *r){
  SCV11SmpCore *c=&r->smp_core; SCSmpState *s=&r->machine.smp;
  switch(c->active_start_pc){
    case 0x0800u: /* 20  */
      s->psw&=(uint8_t)~SC_SMP_FLAG_P;
      s->pc=0x0801u;
      return c->failed?0:1;
    case 0x0801u: /* CD CF */
      s->x=smp_set_nz8(s,0xCFu);
      s->pc=0x0803u;
      return c->failed?0:1;
    case 0x0803u: /* BD  */
      s->sp=s->x;
      s->pc=0x0804u;
      return c->failed?0:1;
    case 0x0804u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x0806u;
      return c->failed?0:1;
    case 0x0806u: /* 5D  */
      s->x=smp_set_nz8(s,s->a);
      s->pc=0x0807u;
      return c->failed?0:1;
    case 0x0807u: /* AF  */
      smp_wr(r,smp_dp(s,s->x),s->a);s->x=(uint8_t)(s->x+1u);
      s->pc=0x0808u;
      return c->failed?0:1;
    case 0x0808u: /* C8 E0 */
      smp_compare(s,s->x,0xE0u);
      s->pc=0x080Au;
      return c->failed?0:1;
    case 0x080Au: /* D0 FB */
      smp_branch_finish(r,(int8_t)0xFBu);
      return c->failed?0:1;
    case 0x080Cu: /* CD 00 */
      s->x=smp_set_nz8(s,0x00u);
      s->pc=0x080Eu;
      return c->failed?0:1;
    case 0x080Eu: /* D5 0002 */
      smp_wr(r,(uint16_t)(0x0200u+s->x),s->a);
      s->pc=0x0811u;
      return c->failed?0:1;
    case 0x0811u: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x0812u;
      return c->failed?0:1;
    case 0x0812u: /* D0 FA */
      smp_branch_finish(r,(int8_t)0xFAu);
      return c->failed?0:1;
    case 0x0814u: /* D5 0003 */
      smp_wr(r,(uint16_t)(0x0300u+s->x),s->a);
      s->pc=0x0817u;
      return c->failed?0:1;
    case 0x0817u: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x0818u;
      return c->failed?0:1;
    case 0x0818u: /* D0 FA */
      smp_branch_finish(r,(int8_t)0xFAu);
      return c->failed?0:1;
    case 0x081Au: /* BC  */
      s->a=smp_set_nz8(s,(uint8_t)(s->a+1u));
      s->pc=0x081Bu;
      return c->failed?0:1;
    case 0x081Bu: /* 3F 5D17 */
      smp_call(r,0x175Du);
      return c->failed?0:1;
    case 0x081Eu: /* A2 48 */
      smp_bit_set(r,0x48u,5u,1);
      s->pc=0x0820u;
      return c->failed?0:1;
    case 0x0820u: /* E8 60 */
      s->a=smp_set_nz8(s,0x60u);
      s->pc=0x0822u;
      return c->failed?0:1;
    case 0x0822u: /* 8D 0C */
      s->y=smp_set_nz8(s,0x0Cu);
      s->pc=0x0824u;
      return c->failed?0:1;
    case 0x0824u: /* 3F FB09 */
      smp_call(r,0x09FBu);
      return c->failed?0:1;
    case 0x0827u: /* 8D 1C */
      s->y=smp_set_nz8(s,0x1Cu);
      s->pc=0x0829u;
      return c->failed?0:1;
    case 0x0829u: /* 3F FB09 */
      smp_call(r,0x09FBu);
      return c->failed?0:1;
    case 0x082Cu: /* E8 35 */
      s->a=smp_set_nz8(s,0x35u);
      s->pc=0x082Eu;
      return c->failed?0:1;
    case 0x082Eu: /* 8D 5D */
      s->y=smp_set_nz8(s,0x5Du);
      s->pc=0x0830u;
      return c->failed?0:1;
    case 0x0830u: /* 3F FB09 */
      smp_call(r,0x09FBu);
      return c->failed?0:1;
    case 0x0833u: /* E8 F0 */
      s->a=smp_set_nz8(s,0xF0u);
      s->pc=0x0835u;
      return c->failed?0:1;
    case 0x0835u: /* C5 F100 */
      smp_wr(r,0x00F1u,s->a);
      s->pc=0x0838u;
      return c->failed?0:1;
    case 0x0838u: /* E8 10 */
      s->a=smp_set_nz8(s,0x10u);
      s->pc=0x083Au;
      return c->failed?0:1;
    case 0x083Au: /* C5 FA00 */
      smp_wr(r,0x00FAu,s->a);
      s->pc=0x083Du;
      return c->failed?0:1;
    case 0x083Du: /* C4 53 */
      smp_wr(r,smp_dp(s,0x53u),s->a);
      s->pc=0x083Fu;
      return c->failed?0:1;
    case 0x083Fu: /* E8 01 */
      s->a=smp_set_nz8(s,0x01u);
      s->pc=0x0841u;
      return c->failed?0:1;
    case 0x0841u: /* C5 F100 */
      smp_wr(r,0x00F1u,s->a);
      s->pc=0x0844u;
      return c->failed?0:1;
    case 0x0844u: /* 8D 0A */
      s->y=smp_set_nz8(s,0x0Au);
      s->pc=0x0846u;
      return c->failed?0:1;
    case 0x0846u: /* AD 05 */
      smp_compare(s,s->y,0x05u);
      s->pc=0x0848u;
      return c->failed?0:1;
    case 0x0848u: /* F0 07 */
      smp_branch_finish(r,(int8_t)0x07u);
      return c->failed?0:1;
    case 0x084Au: /* B0 08 */
      smp_branch_finish(r,(int8_t)0x08u);
      return c->failed?0:1;
    case 0x084Cu: /* 69 4D4C */
      smp_dp_dp(r,0x4Du,0x4Cu,3u);
      s->pc=0x084Fu;
      return c->failed?0:1;
    case 0x084Fu: /* D0 11 */
      smp_branch_finish(r,(int8_t)0x11u);
      return c->failed?0:1;
    case 0x0851u: /* E3 4C0E */
      smp_bit_branch_finish(r,0x4Cu,(int8_t)0x0Eu);
      return c->failed?0:1;
    case 0x0854u: /* F6 D41A */
      smp_a_operand(r,0x1AD4u,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x0857u;
      return c->failed?0:1;
    case 0x0857u: /* C5 F200 */
      smp_wr(r,0x00F2u,s->a);
      s->pc=0x085Au;
      return c->failed?0:1;
    case 0x085Au: /* F6 DE1A */
      smp_a_operand(r,0x1ADEu,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x085Du;
      return c->failed?0:1;
    case 0x085Du: /* 5D  */
      s->x=smp_set_nz8(s,s->a);
      s->pc=0x085Eu;
      return c->failed?0:1;
    case 0x085Eu: /* E6  */
      smp_a_operand(r,0x00u,SMP_MODE_X,SMP_OP_LOAD,0u);
      s->pc=0x085Fu;
      return c->failed?0:1;
    case 0x085Fu: /* C5 F300 */
      smp_wr(r,0x00F3u,s->a);
      s->pc=0x0862u;
      return c->failed?0:1;
    case 0x0862u: /* FE E2 */
      smp_dbnz_y_finish(r,(int8_t)0xE2u);
      return c->failed?0:1;
    case 0x0864u: /* CB 45 */
      smp_wr(r,smp_dp(s,0x45u),s->y);
      s->pc=0x0866u;
      return c->failed?0:1;
    case 0x0866u: /* CB 46 */
      smp_wr(r,smp_dp(s,0x46u),s->y);
      s->pc=0x0868u;
      return c->failed?0:1;
    case 0x0868u: /* E4 18 */
      smp_a_operand(r,0x18u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x086Au;
      return c->failed?0:1;
    case 0x086Au: /* 44 19 */
      smp_a_operand(r,0x19u,SMP_MODE_DP,SMP_OP_LOGIC,2u);
      s->pc=0x086Cu;
      return c->failed?0:1;
    case 0x086Cu: /* 5C  */
      s->a=smp_modify(s,s->a,2u);
      s->pc=0x086Du;
      return c->failed?0:1;
    case 0x086Du: /* 5C  */
      s->a=smp_modify(s,s->a,2u);
      s->pc=0x086Eu;
      return c->failed?0:1;
    case 0x086Eu: /* ED  */
      s->psw^=SC_SMP_FLAG_C;
      s->pc=0x086Fu;
      return c->failed?0:1;
    case 0x086Fu: /* 6B 18 */
      smp_modify_mem(r,smp_dp(s,0x18u),3u);
      s->pc=0x0871u;
      return c->failed?0:1;
    case 0x0871u: /* 6B 19 */
      smp_modify_mem(r,smp_dp(s,0x19u),3u);
      s->pc=0x0873u;
      return c->failed?0:1;
    case 0x0873u: /* EC FD00 */
      s->y=smp_set_nz8(s,smp_rd(r,0x00FDu));
      s->pc=0x0876u;
      return c->failed?0:1;
    case 0x0876u: /* F0 FB */
      smp_branch_finish(r,(int8_t)0xFBu);
      return c->failed?0:1;
    case 0x0878u: /* 6D  */
      smp_push(r,s->y);
      s->pc=0x0879u;
      return c->failed?0:1;
    case 0x0879u: /* E8 38 */
      s->a=smp_set_nz8(s,0x38u);
      s->pc=0x087Bu;
      return c->failed?0:1;
    case 0x087Bu: /* CF  */
      smp_mul(r);
      s->pc=0x087Cu;
      return c->failed?0:1;
    case 0x087Cu: /* 60  */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;
      s->pc=0x087Du;
      return c->failed?0:1;
    case 0x087Du: /* 84 43 */
      smp_a_operand(r,0x43u,SMP_MODE_DP,SMP_OP_ADC,0u);
      s->pc=0x087Fu;
      return c->failed?0:1;
    case 0x087Fu: /* C4 43 */
      smp_wr(r,smp_dp(s,0x43u),s->a);
      s->pc=0x0881u;
      return c->failed?0:1;
    case 0x0881u: /* 90 2B */
      smp_branch_finish(r,(int8_t)0x2Bu);
      return c->failed?0:1;
    case 0x0883u: /* 3F 7813 */
      smp_call(r,0x1378u);
      return c->failed?0:1;
    case 0x0886u: /* CD 01 */
      s->x=smp_set_nz8(s,0x01u);
      s->pc=0x0888u;
      return c->failed?0:1;
    case 0x0888u: /* 3F E508 */
      smp_call(r,0x08E5u);
      return c->failed?0:1;
    case 0x088Bu: /* 3F B20A */
      smp_call(r,0x0AB2u);
      return c->failed?0:1;
    case 0x088Eu: /* 3F A60A */
      smp_call(r,0x0AA6u);
      return c->failed?0:1;
    case 0x0891u: /* CD 02 */
      s->x=smp_set_nz8(s,0x02u);
      s->pc=0x0893u;
      return c->failed?0:1;
    case 0x0893u: /* 3F E508 */
      smp_call(r,0x08E5u);
      return c->failed?0:1;
    case 0x0896u: /* 3F AB0A */
      smp_call(r,0x0AABu);
      return c->failed?0:1;
    case 0x0899u: /* CD 03 */
      s->x=smp_set_nz8(s,0x03u);
      s->pc=0x089Bu;
      return c->failed?0:1;
    case 0x089Bu: /* 3F E508 */
      smp_call(r,0x08E5u);
      return c->failed?0:1;
    case 0x089Eu: /* 69 4D4C */
      smp_dp_dp(r,0x4Du,0x4Cu,3u);
      s->pc=0x08A1u;
      return c->failed?0:1;
    case 0x08A1u: /* F0 0B */
      smp_branch_finish(r,(int8_t)0x0Bu);
      return c->failed?0:1;
    case 0x08A3u: /* AC C703 */
      smp_modify_mem(r,0x03C7u,5u);
      s->pc=0x08A6u;
      return c->failed?0:1;
    case 0x08A6u: /* E5 C703 */
      smp_a_operand(r,0x03C7u,SMP_MODE_ABS,SMP_OP_LOAD,0u);
      s->pc=0x08A9u;
      return c->failed?0:1;
    case 0x08A9u: /* 5C  */
      s->a=smp_modify(s,s->a,2u);
      s->pc=0x08AAu;
      return c->failed?0:1;
    case 0x08AAu: /* B0 02 */
      smp_branch_finish(r,(int8_t)0x02u);
      return c->failed?0:1;
    case 0x08ACu: /* AB 4C */
      smp_modify_mem(r,smp_dp(s,0x4Cu),5u);
      s->pc=0x08AEu;
      return c->failed?0:1;
    case 0x08AEu: /* E4 53 */
      smp_a_operand(r,0x53u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x08B0u;
      return c->failed?0:1;
    case 0x08B0u: /* EE  */
      smp_pop_register(r,&s->y);
      s->pc=0x08B1u;
      return c->failed?0:1;
    case 0x08B1u: /* CF  */
      smp_mul(r);
      s->pc=0x08B2u;
      return c->failed?0:1;
    case 0x08B2u: /* 60  */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;
      s->pc=0x08B3u;
      return c->failed?0:1;
    case 0x08B3u: /* 84 51 */
      smp_a_operand(r,0x51u,SMP_MODE_DP,SMP_OP_ADC,0u);
      s->pc=0x08B5u;
      return c->failed?0:1;
    case 0x08B5u: /* C4 51 */
      smp_wr(r,smp_dp(s,0x51u),s->a);
      s->pc=0x08B7u;
      return c->failed?0:1;
    case 0x08B7u: /* 90 13 */
      smp_branch_finish(r,(int8_t)0x13u);
      return c->failed?0:1;
    case 0x08B9u: /* 3F 7813 */
      smp_call(r,0x1378u);
      return c->failed?0:1;
    case 0x08BCu: /* 3F 2214 */
      smp_call(r,0x1422u);
      return c->failed?0:1;
    case 0x08BFu: /* CD 00 */
      s->x=smp_set_nz8(s,0x00u);
      s->pc=0x08C1u;
      return c->failed?0:1;
    case 0x08C1u: /* 3F E508 */
      smp_call(r,0x08E5u);
      return c->failed?0:1;
    case 0x08C4u: /* CD 01 */
      s->x=smp_set_nz8(s,0x01u);
      s->pc=0x08C6u;
      return c->failed?0:1;
    case 0x08C6u: /* 3F E508 */
      smp_call(r,0x08E5u);
      return c->failed?0:1;
    case 0x08C9u: /* 5F 4408 */
      s->pc=0x0844u;
      return c->failed?0:1;
    case 0x08CCu: /* E4 0D */
      smp_a_operand(r,0x0Du,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x08CEu;
      return c->failed?0:1;
    case 0x08CEu: /* F0 12 */
      smp_branch_finish(r,(int8_t)0x12u);
      return c->failed?0:1;
    case 0x08D0u: /* CD 00 */
      s->x=smp_set_nz8(s,0x00u);
      s->pc=0x08D2u;
      return c->failed?0:1;
    case 0x08D2u: /* 8F 0147 */
      smp_wr(r,smp_dp(s,0x47u),0x01u);
      s->pc=0x08D5u;
      return c->failed?0:1;
    case 0x08D5u: /* F4 31 */
      smp_a_operand(r,0x31u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x08D7u;
      return c->failed?0:1;
    case 0x08D7u: /* F0 03 */
      smp_branch_finish(r,(int8_t)0x03u);
      return c->failed?0:1;
    case 0x08D9u: /* 3F FD19 */
      smp_call(r,0x19FDu);
      return c->failed?0:1;
    case 0x08DCu: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x08DDu;
      return c->failed?0:1;
    case 0x08DDu: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x08DEu;
      return c->failed?0:1;
    case 0x08DEu: /* 0B 47 */
      smp_modify_mem(r,smp_dp(s,0x47u),0u);
      s->pc=0x08E0u;
      return c->failed?0:1;
    case 0x08E0u: /* D0 F3 */
      smp_branch_finish(r,(int8_t)0xF3u);
      return c->failed?0:1;
    case 0x08E2u: /* 5F 4408 */
      s->pc=0x0844u;
      return c->failed?0:1;
    case 0x08E5u: /* F4 04 */
      smp_a_operand(r,0x04u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x08E7u;
      return c->failed?0:1;
    case 0x08E7u: /* D5 F400 */
      smp_wr(r,(uint16_t)(0x00F4u+s->x),s->a);
      s->pc=0x08EAu;
      return c->failed?0:1;
    case 0x08EAu: /* F5 F400 */
      smp_a_operand(r,0x00F4u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x08EDu;
      return c->failed?0:1;
    case 0x08EDu: /* 75 F400 */
      smp_a_operand(r,0x00F4u,SMP_MODE_ABSX,SMP_OP_CMP,0u);
      s->pc=0x08F0u;
      return c->failed?0:1;
    case 0x08F0u: /* D0 F8 */
      smp_branch_finish(r,(int8_t)0xF8u);
      return c->failed?0:1;
    case 0x08F2u: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x08F3u;
      return c->failed?0:1;
    case 0x08F3u: /* D0 02 */
      smp_branch_finish(r,(int8_t)0x02u);
      return c->failed?0:1;
    case 0x08F5u: /* DB 04 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x04u+s->x)),s->y);
      s->pc=0x08F7u;
      return c->failed?0:1;
    case 0x08F7u: /* F4 08 */
      smp_a_operand(r,0x08u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x08F9u;
      return c->failed?0:1;
    case 0x08F9u: /* DB 08 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x08u+s->x)),s->y);
      s->pc=0x08FBu;
      return c->failed?0:1;
    case 0x08FBu: /* DE 0805 */
      smp_cbne_x_finish(r,0x08u,(int8_t)0x05u);
      return c->failed?0:1;
    case 0x08FEu: /* 8D 00 */
      s->y=smp_set_nz8(s,0x00u);
      s->pc=0x0900u;
      return c->failed?0:1;
    case 0x0900u: /* DB 00 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x00u+s->x)),s->y);
      s->pc=0x0902u;
      return c->failed?0:1;
    case 0x0902u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x0903u: /* DB 00 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x00u+s->x)),s->y);
      s->pc=0x0905u;
      return c->failed?0:1;
    case 0x0905u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x0906u: /* AD CA */
      smp_compare(s,s->y,0xCAu);
      s->pc=0x0908u;
      return c->failed?0:1;
    case 0x0908u: /* 90 05 */
      smp_branch_finish(r,(int8_t)0x05u);
      return c->failed?0:1;
    case 0x090Fu: /* AD C8 */
      smp_compare(s,s->y,0xC8u);
      s->pc=0x0911u;
      return c->failed?0:1;
    case 0x0911u: /* B0 F2 */
      smp_branch_finish(r,(int8_t)0xF2u);
      return c->failed?0:1;
    case 0x0913u: /* E4 1A */
      smp_a_operand(r,0x1Au,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x0915u;
      return c->failed?0:1;
    case 0x0915u: /* 24 47 */
      smp_a_operand(r,0x47u,SMP_MODE_DP,SMP_OP_LOGIC,1u);
      s->pc=0x0917u;
      return c->failed?0:1;
    case 0x0917u: /* D0 EC */
      smp_branch_finish(r,(int8_t)0xECu);
      return c->failed?0:1;
    case 0x0919u: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0x091Au;
      return c->failed?0:1;
    case 0x091Au: /* 28 7F */
      s->a=smp_set_nz8(s,(uint8_t)(s->a&0x7Fu));
      s->pc=0x091Cu;
      return c->failed?0:1;
    case 0x091Cu: /* 60  */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;
      s->pc=0x091Du;
      return c->failed?0:1;
    case 0x091Du: /* 84 50 */
      smp_a_operand(r,0x50u,SMP_MODE_DP,SMP_OP_ADC,0u);
      s->pc=0x091Fu;
      return c->failed?0:1;
    case 0x091Fu: /* 60  */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;
      s->pc=0x0920u;
      return c->failed?0:1;
    case 0x0920u: /* 95 F002 */
      smp_a_operand(r,0x02F0u,SMP_MODE_ABSX,SMP_OP_ADC,0u);
      s->pc=0x0923u;
      return c->failed?0:1;
    case 0x0923u: /* D5 6103 */
      smp_wr(r,(uint16_t)(0x0361u+s->x),s->a);
      s->pc=0x0926u;
      return c->failed?0:1;
    case 0x0926u: /* F5 8103 */
      smp_a_operand(r,0x0381u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x0929u;
      return c->failed?0:1;
    case 0x0929u: /* D5 6003 */
      smp_wr(r,(uint16_t)(0x0360u+s->x),s->a);
      s->pc=0x092Cu;
      return c->failed?0:1;
    case 0x092Cu: /* F5 B102 */
      smp_a_operand(r,0x02B1u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x092Fu;
      return c->failed?0:1;
    case 0x092Fu: /* 5C  */
      s->a=smp_modify(s,s->a,2u);
      s->pc=0x0930u;
      return c->failed?0:1;
    case 0x0930u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x0932u;
      return c->failed?0:1;
    case 0x0932u: /* 7C  */
      s->a=smp_modify(s,s->a,3u);
      s->pc=0x0933u;
      return c->failed?0:1;
    case 0x0933u: /* D5 A002 */
      smp_wr(r,(uint16_t)(0x02A0u+s->x),s->a);
      s->pc=0x0936u;
      return c->failed?0:1;
    case 0x0936u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x0938u;
      return c->failed?0:1;
    case 0x0938u: /* D4 B0 */
      smp_wr(r,smp_dp(s,(uint8_t)(0xB0u+s->x)),s->a);
      s->pc=0x093Au;
      return c->failed?0:1;
    case 0x093Au: /* D5 0001 */
      smp_wr(r,(uint16_t)(0x0100u+s->x),s->a);
      s->pc=0x093Du;
      return c->failed?0:1;
    case 0x093Du: /* D5 D002 */
      smp_wr(r,(uint16_t)(0x02D0u+s->x),s->a);
      s->pc=0x0940u;
      return c->failed?0:1;
    case 0x0940u: /* D4 C0 */
      smp_wr(r,smp_dp(s,(uint8_t)(0xC0u+s->x)),s->a);
      s->pc=0x0942u;
      return c->failed?0:1;
    case 0x0942u: /* 09 475E */
      smp_dp_dp(r,0x47u,0x5Eu,0u);
      s->pc=0x0945u;
      return c->failed?0:1;
    case 0x0945u: /* 09 4745 */
      smp_dp_dp(r,0x47u,0x45u,0u);
      s->pc=0x0948u;
      return c->failed?0:1;
    case 0x0948u: /* F5 8002 */
      smp_a_operand(r,0x0280u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x094Bu;
      return c->failed?0:1;
    case 0x094Bu: /* D4 A0 */
      smp_wr(r,smp_dp(s,(uint8_t)(0xA0u+s->x)),s->a);
      s->pc=0x094Du;
      return c->failed?0:1;
    case 0x094Du: /* F0 1E */
      smp_branch_finish(r,(int8_t)0x1Eu);
      return c->failed?0:1;
    case 0x096Du: /* 3F ED17 */
      smp_call(r,0x17EDu);
      return c->failed?0:1;
    case 0x0970u: /* 8D 00 */
      s->y=smp_set_nz8(s,0x00u);
      s->pc=0x0972u;
      return c->failed?0:1;
    case 0x0972u: /* E4 11 */
      smp_a_operand(r,0x11u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x0974u;
      return c->failed?0:1;
    case 0x0974u: /* 80  */
      s->psw|=SC_SMP_FLAG_C;
      s->pc=0x0975u;
      return c->failed?0:1;
    case 0x0975u: /* A8 34 */
      s->a=smp_sbc8(s,s->a,0x34u);
      s->pc=0x0977u;
      return c->failed?0:1;
    case 0x0977u: /* B0 09 */
      smp_branch_finish(r,(int8_t)0x09u);
      return c->failed?0:1;
    case 0x0979u: /* E4 11 */
      smp_a_operand(r,0x11u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x097Bu;
      return c->failed?0:1;
    case 0x097Bu: /* 80  */
      s->psw|=SC_SMP_FLAG_C;
      s->pc=0x097Cu;
      return c->failed?0:1;
    case 0x097Cu: /* A8 13 */
      s->a=smp_sbc8(s,s->a,0x13u);
      s->pc=0x097Eu;
      return c->failed?0:1;
    case 0x097Eu: /* B0 06 */
      smp_branch_finish(r,(int8_t)0x06u);
      return c->failed?0:1;
    case 0x0980u: /* DC  */
      s->y=smp_set_nz8(s,(uint8_t)(s->y-1u));
      s->pc=0x0981u;
      return c->failed?0:1;
    case 0x0981u: /* 1C  */
      s->a=smp_modify(s,s->a,0u);
      s->pc=0x0982u;
      return c->failed?0:1;
    case 0x0982u: /* 7A 10 */
      smp_addw(r,smp_rd_word_dp(r,s,0x10u));
      s->pc=0x0984u;
      return c->failed?0:1;
    case 0x0984u: /* DA 10 */
      smp_storew(r,0x10u);
      s->pc=0x0986u;
      return c->failed?0:1;
    case 0x0986u: /* 4D  */
      smp_push(r,s->x);
      s->pc=0x0987u;
      return c->failed?0:1;
    case 0x0987u: /* E4 11 */
      smp_a_operand(r,0x11u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x0989u;
      return c->failed?0:1;
    case 0x0989u: /* 1C  */
      s->a=smp_modify(s,s->a,0u);
      s->pc=0x098Au;
      return c->failed?0:1;
    case 0x098Au: /* 8D 00 */
      s->y=smp_set_nz8(s,0x00u);
      s->pc=0x098Cu;
      return c->failed?0:1;
    case 0x098Cu: /* CD 18 */
      s->x=smp_set_nz8(s,0x18u);
      s->pc=0x098Eu;
      return c->failed?0:1;
    case 0x098Eu: /* 9E  */
      smp_div(r);
      s->pc=0x098Fu;
      return c->failed?0:1;
    case 0x098Fu: /* 5D  */
      s->x=smp_set_nz8(s,s->a);
      s->pc=0x0990u;
      return c->failed?0:1;
    case 0x0990u: /* F6 EA1A */
      smp_a_operand(r,0x1AEAu,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x0993u;
      return c->failed?0:1;
    case 0x0993u: /* C4 15 */
      smp_wr(r,smp_dp(s,0x15u),s->a);
      s->pc=0x0995u;
      return c->failed?0:1;
    case 0x0995u: /* F6 E91A */
      smp_a_operand(r,0x1AE9u,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x0998u;
      return c->failed?0:1;
    case 0x0998u: /* C4 14 */
      smp_wr(r,smp_dp(s,0x14u),s->a);
      s->pc=0x099Au;
      return c->failed?0:1;
    case 0x099Au: /* F6 EC1A */
      smp_a_operand(r,0x1AECu,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x099Du;
      return c->failed?0:1;
    case 0x099Du: /* 2D  */
      smp_push(r,s->a);
      s->pc=0x099Eu;
      return c->failed?0:1;
    case 0x099Eu: /* F6 EB1A */
      smp_a_operand(r,0x1AEBu,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x09A1u;
      return c->failed?0:1;
    case 0x09A1u: /* EE  */
      smp_pop_register(r,&s->y);
      s->pc=0x09A2u;
      return c->failed?0:1;
    case 0x09A2u: /* 9A 14 */
      smp_subw(r,smp_rd_word_dp(r,s,0x14u));
      s->pc=0x09A4u;
      return c->failed?0:1;
    case 0x09A4u: /* EB 10 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x10u)));
      s->pc=0x09A6u;
      return c->failed?0:1;
    case 0x09A6u: /* CF  */
      smp_mul(r);
      s->pc=0x09A7u;
      return c->failed?0:1;
    case 0x09A7u: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0x09A8u;
      return c->failed?0:1;
    case 0x09A8u: /* 8D 00 */
      s->y=smp_set_nz8(s,0x00u);
      s->pc=0x09AAu;
      return c->failed?0:1;
    case 0x09AAu: /* 7A 14 */
      smp_addw(r,smp_rd_word_dp(r,s,0x14u));
      s->pc=0x09ACu;
      return c->failed?0:1;
    case 0x09ACu: /* CB 15 */
      smp_wr(r,smp_dp(s,0x15u),s->y);
      s->pc=0x09AEu;
      return c->failed?0:1;
    case 0x09AEu: /* 1C  */
      s->a=smp_modify(s,s->a,0u);
      s->pc=0x09AFu;
      return c->failed?0:1;
    case 0x09AFu: /* 2B 15 */
      smp_modify_mem(r,smp_dp(s,0x15u),1u);
      s->pc=0x09B1u;
      return c->failed?0:1;
    case 0x09B1u: /* C4 14 */
      smp_wr(r,smp_dp(s,0x14u),s->a);
      s->pc=0x09B3u;
      return c->failed?0:1;
    case 0x09B3u: /* 2F 04 */
      smp_branch_finish(r,(int8_t)0x04u);
      return c->failed?0:1;
    case 0x09B5u: /* 4B 15 */
      smp_modify_mem(r,smp_dp(s,0x15u),2u);
      s->pc=0x09B7u;
      return c->failed?0:1;
    case 0x09B7u: /* 7C  */
      s->a=smp_modify(s,s->a,3u);
      s->pc=0x09B8u;
      return c->failed?0:1;
    case 0x09B8u: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x09B9u;
      return c->failed?0:1;
    case 0x09B9u: /* C8 06 */
      smp_compare(s,s->x,0x06u);
      s->pc=0x09BBu;
      return c->failed?0:1;
    case 0x09BBu: /* D0 F8 */
      smp_branch_finish(r,(int8_t)0xF8u);
      return c->failed?0:1;
    case 0x09BDu: /* C4 14 */
      smp_wr(r,smp_dp(s,0x14u),s->a);
      s->pc=0x09BFu;
      return c->failed?0:1;
    case 0x09BFu: /* CE  */
      smp_pop_register(r,&s->x);
      s->pc=0x09C0u;
      return c->failed?0:1;
    case 0x09C0u: /* F5 2002 */
      smp_a_operand(r,0x0220u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x09C3u;
      return c->failed?0:1;
    case 0x09C3u: /* EB 15 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x15u)));
      s->pc=0x09C5u;
      return c->failed?0:1;
    case 0x09C5u: /* CF  */
      smp_mul(r);
      s->pc=0x09C6u;
      return c->failed?0:1;
    case 0x09C6u: /* DA 16 */
      smp_storew(r,0x16u);
      s->pc=0x09C8u;
      return c->failed?0:1;
    case 0x09C8u: /* F5 2002 */
      smp_a_operand(r,0x0220u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x09CBu;
      return c->failed?0:1;
    case 0x09CBu: /* EB 14 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x14u)));
      s->pc=0x09CDu;
      return c->failed?0:1;
    case 0x09CDu: /* CF  */
      smp_mul(r);
      s->pc=0x09CEu;
      return c->failed?0:1;
    case 0x09CEu: /* 6D  */
      smp_push(r,s->y);
      s->pc=0x09CFu;
      return c->failed?0:1;
    case 0x09CFu: /* F5 2102 */
      smp_a_operand(r,0x0221u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x09D2u;
      return c->failed?0:1;
    case 0x09D2u: /* EB 14 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x14u)));
      s->pc=0x09D4u;
      return c->failed?0:1;
    case 0x09D4u: /* CF  */
      smp_mul(r);
      s->pc=0x09D5u;
      return c->failed?0:1;
    case 0x09D5u: /* 7A 16 */
      smp_addw(r,smp_rd_word_dp(r,s,0x16u));
      s->pc=0x09D7u;
      return c->failed?0:1;
    case 0x09D7u: /* DA 16 */
      smp_storew(r,0x16u);
      s->pc=0x09D9u;
      return c->failed?0:1;
    case 0x09D9u: /* F5 2102 */
      smp_a_operand(r,0x0221u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x09DCu;
      return c->failed?0:1;
    case 0x09DCu: /* EB 15 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x15u)));
      s->pc=0x09DEu;
      return c->failed?0:1;
    case 0x09DEu: /* CF  */
      smp_mul(r);
      s->pc=0x09DFu;
      return c->failed?0:1;
    case 0x09DFu: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x09E0u;
      return c->failed?0:1;
    case 0x09E0u: /* AE  */
      smp_pop_register(r,&s->a);
      s->pc=0x09E1u;
      return c->failed?0:1;
    case 0x09E1u: /* 7A 16 */
      smp_addw(r,smp_rd_word_dp(r,s,0x16u));
      s->pc=0x09E3u;
      return c->failed?0:1;
    case 0x09E3u: /* DA 16 */
      smp_storew(r,0x16u);
      s->pc=0x09E5u;
      return c->failed?0:1;
    case 0x09E5u: /* 7D  */
      s->a=smp_set_nz8(s,s->x);
      s->pc=0x09E6u;
      return c->failed?0:1;
    case 0x09E6u: /* 9F  */
      s->a=smp_set_nz8(s,(uint8_t)((s->a>>4)|(s->a<<4)));
      s->pc=0x09E7u;
      return c->failed?0:1;
    case 0x09E7u: /* 5C  */
      s->a=smp_modify(s,s->a,2u);
      s->pc=0x09E8u;
      return c->failed?0:1;
    case 0x09E8u: /* 08 02 */
      s->a=smp_set_nz8(s,(uint8_t)(s->a|0x02u));
      s->pc=0x09EAu;
      return c->failed?0:1;
    case 0x09EAu: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x09EBu;
      return c->failed?0:1;
    case 0x09EBu: /* E4 16 */
      smp_a_operand(r,0x16u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x09EDu;
      return c->failed?0:1;
    case 0x09EDu: /* 3F F309 */
      smp_call(r,0x09F3u);
      return c->failed?0:1;
    case 0x09F0u: /* FC  */
      s->y=smp_set_nz8(s,(uint8_t)(s->y+1u));
      s->pc=0x09F1u;
      return c->failed?0:1;
    case 0x09F1u: /* E4 17 */
      smp_a_operand(r,0x17u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x09F3u;
      return c->failed?0:1;
    case 0x09F3u: /* 2D  */
      smp_push(r,s->a);
      s->pc=0x09F4u;
      return c->failed?0:1;
    case 0x09F4u: /* E4 47 */
      smp_a_operand(r,0x47u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x09F6u;
      return c->failed?0:1;
    case 0x09F6u: /* 24 1A */
      smp_a_operand(r,0x1Au,SMP_MODE_DP,SMP_OP_LOGIC,1u);
      s->pc=0x09F8u;
      return c->failed?0:1;
    case 0x09F8u: /* AE  */
      smp_pop_register(r,&s->a);
      s->pc=0x09F9u;
      return c->failed?0:1;
    case 0x09F9u: /* D0 06 */
      smp_branch_finish(r,(int8_t)0x06u);
      return c->failed?0:1;
    case 0x09FBu: /* CC F200 */
      smp_wr(r,0x00F2u,s->y);
      s->pc=0x09FEu;
      return c->failed?0:1;
    case 0x09FEu: /* C5 F300 */
      smp_wr(r,0x00F3u,s->a);
      s->pc=0x0A01u;
      return c->failed?0:1;
    case 0x0A01u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x0AA6u: /* E4 02 */
      smp_a_operand(r,0x02u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x0AA8u;
      return c->failed?0:1;
    case 0x0AA8u: /* D0 64 */
      smp_branch_finish(r,(int8_t)0x64u);
      return c->failed?0:1;
    case 0x0AAAu: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x0AABu: /* E4 03 */
      smp_a_operand(r,0x03u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x0AADu;
      return c->failed?0:1;
    case 0x0AADu: /* 30 DF */
      smp_branch_finish(r,(int8_t)0xDFu);
      return c->failed?0:1;
    case 0x0AAFu: /* D0 26 */
      smp_branch_finish(r,(int8_t)0x26u);
      return c->failed?0:1;
    case 0x0AB1u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x0AB2u: /* CD 0E */
      s->x=smp_set_nz8(s,0x0Eu);
      s->pc=0x0AB4u;
      return c->failed?0:1;
    case 0x0AB4u: /* E8 80 */
      s->a=smp_set_nz8(s,0x80u);
      s->pc=0x0AB6u;
      return c->failed?0:1;
    case 0x0AB6u: /* C5 C103 */
      smp_wr(r,0x03C1u,s->a);
      s->pc=0x0AB9u;
      return c->failed?0:1;
    case 0x0AB9u: /* C9 C003 */
      smp_wr(r,0x03C0u,s->x);
      s->pc=0x0ABCu;
      return c->failed?0:1;
    case 0x0ABCu: /* 7D  */
      s->a=smp_set_nz8(s,s->x);
      s->pc=0x0ABDu;
      return c->failed?0:1;
    case 0x0ABDu: /* 9F  */
      s->a=smp_set_nz8(s,(uint8_t)((s->a>>4)|(s->a<<4)));
      s->pc=0x0ABEu;
      return c->failed?0:1;
    case 0x0ABEu: /* 5C  */
      s->a=smp_modify(s,s->a,2u);
      s->pc=0x0ABFu;
      return c->failed?0:1;
    case 0x0ABFu: /* C5 C203 */
      smp_wr(r,0x03C2u,s->a);
      s->pc=0x0AC2u;
      return c->failed?0:1;
    case 0x0AC2u: /* F5 A103 */
      smp_a_operand(r,0x03A1u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x0AC5u;
      return c->failed?0:1;
    case 0x0AC5u: /* D0 6E */
      smp_branch_finish(r,(int8_t)0x6Eu);
      return c->failed?0:1;
    case 0x0AC7u: /* F5 A003 */
      smp_a_operand(r,0x03A0u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x0ACAu;
      return c->failed?0:1;
    case 0x0ACAu: /* F0 03 */
      smp_branch_finish(r,(int8_t)0x03u);
      return c->failed?0:1;
    case 0x0ACFu: /* 4C C103 */
      smp_modify_mem(r,0x03C1u,2u);
      s->pc=0x0AD2u;
      return c->failed?0:1;
    case 0x0AD2u: /* 1D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x-1u));
      s->pc=0x0AD3u;
      return c->failed?0:1;
    case 0x0AD3u: /* 1D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x-1u));
      s->pc=0x0AD4u;
      return c->failed?0:1;
    case 0x0AD4u: /* 10 E3 */
      smp_branch_finish(r,(int8_t)0xE3u);
      return c->failed?0:1;
    case 0x0AD6u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x1378u: /* 03 010B */
      smp_bit_branch_finish(r,0x01u,(int8_t)0x0Bu);
      return c->failed?0:1;
    case 0x137Bu: /* 23 0101 */
      smp_bit_branch_finish(r,0x01u,(int8_t)0x01u);
      return c->failed?0:1;
    case 0x137Eu: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x13BBu: /* 8D 00 */
      s->y=smp_set_nz8(s,0x00u);
      s->pc=0x13BDu;
      return c->failed?0:1;
    case 0x13BDu: /* F7 40 */
      smp_a_operand(r,0x40u,SMP_MODE_DPINDY,SMP_OP_LOAD,0u);
      s->pc=0x13BFu;
      return c->failed?0:1;
    case 0x13BFu: /* 3A 40 */
      smp_incw(r,0x40u);
      s->pc=0x13C1u;
      return c->failed?0:1;
    case 0x13C1u: /* 2D  */
      smp_push(r,s->a);
      s->pc=0x13C2u;
      return c->failed?0:1;
    case 0x13C2u: /* F7 40 */
      smp_a_operand(r,0x40u,SMP_MODE_DPINDY,SMP_OP_LOAD,0u);
      s->pc=0x13C4u;
      return c->failed?0:1;
    case 0x13C4u: /* 3A 40 */
      smp_incw(r,0x40u);
      s->pc=0x13C6u;
      return c->failed?0:1;
    case 0x13C6u: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x13C7u;
      return c->failed?0:1;
    case 0x13C7u: /* AE  */
      smp_pop_register(r,&s->a);
      s->pc=0x13C8u;
      return c->failed?0:1;
    case 0x13C8u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x13C9u: /* 60  */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;
      s->pc=0x13CAu;
      return c->failed?0:1;
    case 0x13CAu: /* CD 00 */
      s->x=smp_set_nz8(s,0x00u);
      s->pc=0x13CCu;
      return c->failed?0:1;
    case 0x13CCu: /* C9 CA03 */
      smp_wr(r,0x03CAu,s->x);
      s->pc=0x13CFu;
      return c->failed?0:1;
    case 0x13CFu: /* C4 0D */
      smp_wr(r,smp_dp(s,0x0Du),s->a);
      s->pc=0x13D1u;
      return c->failed?0:1;
    case 0x13D1u: /* 1C  */
      s->a=smp_modify(s,s->a,0u);
      s->pc=0x13D2u;
      return c->failed?0:1;
    case 0x13D2u: /* 5D  */
      s->x=smp_set_nz8(s,s->a);
      s->pc=0x13D3u;
      return c->failed?0:1;
    case 0x13D3u: /* F5 0F1B */
      smp_a_operand(r,0x1B0Fu,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x13D6u;
      return c->failed?0:1;
    case 0x13D6u: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x13D7u;
      return c->failed?0:1;
    case 0x13D7u: /* F5 0E1B */
      smp_a_operand(r,0x1B0Eu,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x13DAu;
      return c->failed?0:1;
    case 0x13DAu: /* DA 40 */
      smp_storew(r,0x40u);
      s->pc=0x13DCu;
      return c->failed?0:1;
    case 0x13DCu: /* 8F 020C */
      smp_wr(r,smp_dp(s,0x0Cu),0x02u);
      s->pc=0x13DFu;
      return c->failed?0:1;
    case 0x13DFu: /* E4 1A */
      smp_a_operand(r,0x1Au,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x13E1u;
      return c->failed?0:1;
    case 0x13E1u: /* 48 FF */
      s->a=smp_set_nz8(s,(uint8_t)(s->a^0xFFu));
      s->pc=0x13E3u;
      return c->failed?0:1;
    case 0x13E3u: /* 0E 4600 */
      smp_tset(r,0x0046u,1);
      s->pc=0x13E6u;
      return c->failed?0:1;
    case 0x13E6u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x13E7u: /* CD 0E */
      s->x=smp_set_nz8(s,0x0Eu);
      s->pc=0x13E9u;
      return c->failed?0:1;
    case 0x13E9u: /* 8F 8047 */
      smp_wr(r,smp_dp(s,0x47u),0x80u);
      s->pc=0x13ECu;
      return c->failed?0:1;
    case 0x13ECu: /* E8 FF */
      s->a=smp_set_nz8(s,0xFFu);
      s->pc=0x13EEu;
      return c->failed?0:1;
    case 0x13EEu: /* D5 0103 */
      smp_wr(r,(uint16_t)(0x0301u+s->x),s->a);
      s->pc=0x13F1u;
      return c->failed?0:1;
    case 0x13F1u: /* E8 0A */
      s->a=smp_set_nz8(s,0x0Au);
      s->pc=0x13F3u;
      return c->failed?0:1;
    case 0x13F3u: /* 3F FF15 */
      smp_call(r,0x15FFu);
      return c->failed?0:1;
    case 0x13F6u: /* D5 1102 */
      smp_wr(r,(uint16_t)(0x0211u+s->x),s->a);
      s->pc=0x13F9u;
      return c->failed?0:1;
    case 0x13F9u: /* D5 8103 */
      smp_wr(r,(uint16_t)(0x0381u+s->x),s->a);
      s->pc=0x13FCu;
      return c->failed?0:1;
    case 0x13FCu: /* D5 F002 */
      smp_wr(r,(uint16_t)(0x02F0u+s->x),s->a);
      s->pc=0x13FFu;
      return c->failed?0:1;
    case 0x13FFu: /* D5 8002 */
      smp_wr(r,(uint16_t)(0x0280u+s->x),s->a);
      s->pc=0x1402u;
      return c->failed?0:1;
    case 0x1402u: /* D5 FF03 */
      smp_wr(r,(uint16_t)(0x03FFu+s->x),s->a);
      s->pc=0x1405u;
      return c->failed?0:1;
    case 0x1405u: /* D4 B1 */
      smp_wr(r,smp_dp(s,(uint8_t)(0xB1u+s->x)),s->a);
      s->pc=0x1407u;
      return c->failed?0:1;
    case 0x1407u: /* D4 C1 */
      smp_wr(r,smp_dp(s,(uint8_t)(0xC1u+s->x)),s->a);
      s->pc=0x1409u;
      return c->failed?0:1;
    case 0x1409u: /* 1D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x-1u));
      s->pc=0x140Au;
      return c->failed?0:1;
    case 0x140Au: /* 1D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x-1u));
      s->pc=0x140Bu;
      return c->failed?0:1;
    case 0x140Bu: /* 4B 47 */
      smp_modify_mem(r,smp_dp(s,0x47u),2u);
      s->pc=0x140Du;
      return c->failed?0:1;
    case 0x140Du: /* D0 DD */
      smp_branch_finish(r,(int8_t)0xDDu);
      return c->failed?0:1;
    case 0x140Fu: /* C4 5A */
      smp_wr(r,smp_dp(s,0x5Au),s->a);
      s->pc=0x1411u;
      return c->failed?0:1;
    case 0x1411u: /* C4 68 */
      smp_wr(r,smp_dp(s,0x68u),s->a);
      s->pc=0x1413u;
      return c->failed?0:1;
    case 0x1413u: /* C4 54 */
      smp_wr(r,smp_dp(s,0x54u),s->a);
      s->pc=0x1415u;
      return c->failed?0:1;
    case 0x1415u: /* C4 50 */
      smp_wr(r,smp_dp(s,0x50u),s->a);
      s->pc=0x1417u;
      return c->failed?0:1;
    case 0x1417u: /* C4 42 */
      smp_wr(r,smp_dp(s,0x42u),s->a);
      s->pc=0x1419u;
      return c->failed?0:1;
    case 0x1419u: /* C4 5F */
      smp_wr(r,smp_dp(s,0x5Fu),s->a);
      s->pc=0x141Bu;
      return c->failed?0:1;
    case 0x141Bu: /* 8F C059 */
      smp_wr(r,smp_dp(s,0x59u),0xC0u);
      s->pc=0x141Eu;
      return c->failed?0:1;
    case 0x141Eu: /* 8F 2053 */
      smp_wr(r,smp_dp(s,0x53u),0x20u);
      s->pc=0x1421u;
      return c->failed?0:1;
    case 0x1421u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x1422u: /* E4 00 */
      smp_a_operand(r,0x00u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x1424u;
      return c->failed?0:1;
    case 0x1424u: /* F0 1A */
      smp_branch_finish(r,(int8_t)0x1Au);
      return c->failed?0:1;
    case 0x1426u: /* C4 04 */
      smp_wr(r,smp_dp(s,0x04u),s->a);
      s->pc=0x1428u;
      return c->failed?0:1;
    case 0x1428u: /* 68 F0 */
      smp_compare(s,s->a,0xF0u);
      s->pc=0x142Au;
      return c->failed?0:1;
    case 0x142Au: /* F0 81 */
      smp_branch_finish(r,(int8_t)0x81u);
      return c->failed?0:1;
    case 0x142Cu: /* 68 F1 */
      smp_compare(s,s->a,0xF1u);
      s->pc=0x142Eu;
      return c->failed?0:1;
    case 0x142Eu: /* D0 03 */
      smp_branch_finish(r,(int8_t)0x03u);
      return c->failed?0:1;
    case 0x1433u: /* 80  */
      s->psw|=SC_SMP_FLAG_C;
      s->pc=0x1434u;
      return c->failed?0:1;
    case 0x1434u: /* 68 07 */
      smp_compare(s,s->a,0x07u);
      s->pc=0x1436u;
      return c->failed?0:1;
    case 0x1436u: /* B0 91 */
      smp_branch_finish(r,(int8_t)0x91u);
      return c->failed?0:1;
    case 0x1440u: /* E4 0D */
      smp_a_operand(r,0x0Du,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x1442u;
      return c->failed?0:1;
    case 0x1442u: /* F0 DD */
      smp_branch_finish(r,(int8_t)0xDDu);
      return c->failed?0:1;
    case 0x1444u: /* E5 CA03 */
      smp_a_operand(r,0x03CAu,SMP_MODE_ABS,SMP_OP_LOAD,0u);
      s->pc=0x1447u;
      return c->failed?0:1;
    case 0x1447u: /* F0 03 */
      smp_branch_finish(r,(int8_t)0x03u);
      return c->failed?0:1;
    case 0x144Cu: /* E4 0C */
      smp_a_operand(r,0x0Cu,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x144Eu;
      return c->failed?0:1;
    case 0x144Eu: /* F0 5D */
      smp_branch_finish(r,(int8_t)0x5Du);
      return c->failed?0:1;
    case 0x1450u: /* 6E 0C94 */
      smp_dbnz_finish(r,0x0Cu,(int8_t)0x94u);
      return c->failed?0:1;
    case 0x1453u: /* 3F BB13 */
      smp_call(r,0x13BBu);
      return c->failed?0:1;
    case 0x1456u: /* D0 25 */
      smp_branch_finish(r,(int8_t)0x25u);
      return c->failed?0:1;
    case 0x147Du: /* DA 16 */
      smp_storew(r,0x16u);
      s->pc=0x147Fu;
      return c->failed?0:1;
    case 0x147Fu: /* 8D 0F */
      s->y=smp_set_nz8(s,0x0Fu);
      s->pc=0x1481u;
      return c->failed?0:1;
    case 0x1481u: /* F7 16 */
      smp_a_operand(r,0x16u,SMP_MODE_DPINDY,SMP_OP_LOAD,0u);
      s->pc=0x1483u;
      return c->failed?0:1;
    case 0x1483u: /* D6 3000 */
      smp_wr(r,(uint16_t)(0x0030u+s->y),s->a);
      s->pc=0x1486u;
      return c->failed?0:1;
    case 0x1486u: /* DC  */
      s->y=smp_set_nz8(s,(uint8_t)(s->y-1u));
      s->pc=0x1487u;
      return c->failed?0:1;
    case 0x1487u: /* 10 F8 */
      smp_branch_finish(r,(int8_t)0xF8u);
      return c->failed?0:1;
    case 0x1489u: /* CD 00 */
      s->x=smp_set_nz8(s,0x00u);
      s->pc=0x148Bu;
      return c->failed?0:1;
    case 0x148Bu: /* 8F 0147 */
      smp_wr(r,smp_dp(s,0x47u),0x01u);
      s->pc=0x148Eu;
      return c->failed?0:1;
    case 0x148Eu: /* F4 31 */
      smp_a_operand(r,0x31u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x1490u;
      return c->failed?0:1;
    case 0x1490u: /* F0 0A */
      smp_branch_finish(r,(int8_t)0x0Au);
      return c->failed?0:1;
    case 0x1492u: /* F5 1102 */
      smp_a_operand(r,0x0211u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x1495u;
      return c->failed?0:1;
    case 0x1495u: /* D0 05 */
      smp_branch_finish(r,(int8_t)0x05u);
      return c->failed?0:1;
    case 0x1497u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x1499u;
      return c->failed?0:1;
    case 0x1499u: /* 3F A615 */
      smp_call(r,0x15A6u);
      return c->failed?0:1;
    case 0x149Cu: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x149Eu;
      return c->failed?0:1;
    case 0x149Eu: /* D4 80 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x80u+s->x)),s->a);
      s->pc=0x14A0u;
      return c->failed?0:1;
    case 0x14A0u: /* D4 90 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x90u+s->x)),s->a);
      s->pc=0x14A2u;
      return c->failed?0:1;
    case 0x14A2u: /* D4 91 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x91u+s->x)),s->a);
      s->pc=0x14A4u;
      return c->failed?0:1;
    case 0x14A4u: /* BC  */
      s->a=smp_set_nz8(s,(uint8_t)(s->a+1u));
      s->pc=0x14A5u;
      return c->failed?0:1;
    case 0x14A5u: /* D4 70 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x70u+s->x)),s->a);
      s->pc=0x14A7u;
      return c->failed?0:1;
    case 0x14A7u: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x14A8u;
      return c->failed?0:1;
    case 0x14A8u: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x14A9u;
      return c->failed?0:1;
    case 0x14A9u: /* 0B 47 */
      smp_modify_mem(r,smp_dp(s,0x47u),0u);
      s->pc=0x14ABu;
      return c->failed?0:1;
    case 0x14ABu: /* D0 E1 */
      smp_branch_finish(r,(int8_t)0xE1u);
      return c->failed?0:1;
    case 0x14ADu: /* CD 00 */
      s->x=smp_set_nz8(s,0x00u);
      s->pc=0x14AFu;
      return c->failed?0:1;
    case 0x14AFu: /* D8 5E */
      smp_wr(r,smp_dp(s,0x5Eu),s->x);
      s->pc=0x14B1u;
      return c->failed?0:1;
    case 0x14B1u: /* 8F 0147 */
      smp_wr(r,smp_dp(s,0x47u),0x01u);
      s->pc=0x14B4u;
      return c->failed?0:1;
    case 0x14B4u: /* D8 44 */
      smp_wr(r,smp_dp(s,0x44u),s->x);
      s->pc=0x14B6u;
      return c->failed?0:1;
    case 0x14B6u: /* F4 31 */
      smp_a_operand(r,0x31u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x14B8u;
      return c->failed?0:1;
    case 0x14B8u: /* F0 7A */
      smp_branch_finish(r,(int8_t)0x7Au);
      return c->failed?0:1;
    case 0x14BAu: /* 9B 70 */
      smp_modify_mem(r,smp_dp(s,(uint8_t)(0x70u+s->x)),4u);
      s->pc=0x14BCu;
      return c->failed?0:1;
    case 0x14BCu: /* D0 6C */
      smp_branch_finish(r,(int8_t)0x6Cu);
      return c->failed?0:1;
    case 0x14BEu: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x14C1u: /* D0 17 */
      smp_branch_finish(r,(int8_t)0x17u);
      return c->failed?0:1;
    case 0x14C3u: /* F4 80 */
      smp_a_operand(r,0x80u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x14C5u;
      return c->failed?0:1;
    case 0x14C5u: /* F0 8C */
      smp_branch_finish(r,(int8_t)0x8Cu);
      return c->failed?0:1;
    case 0x14C7u: /* 3F F216 */
      smp_call(r,0x16F2u);
      return c->failed?0:1;
    case 0x14CAu: /* 9B 80 */
      smp_modify_mem(r,smp_dp(s,(uint8_t)(0x80u+s->x)),4u);
      s->pc=0x14CCu;
      return c->failed?0:1;
    case 0x14CCu: /* D0 F0 */
      smp_branch_finish(r,(int8_t)0xF0u);
      return c->failed?0:1;
    case 0x14CEu: /* F5 3002 */
      smp_a_operand(r,0x0230u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x14D1u;
      return c->failed?0:1;
    case 0x14D1u: /* D4 30 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x30u+s->x)),s->a);
      s->pc=0x14D3u;
      return c->failed?0:1;
    case 0x14D3u: /* F5 3102 */
      smp_a_operand(r,0x0231u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x14D6u;
      return c->failed?0:1;
    case 0x14D6u: /* D4 31 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x31u+s->x)),s->a);
      s->pc=0x14D8u;
      return c->failed?0:1;
    case 0x14D8u: /* 2F E4 */
      smp_branch_finish(r,(int8_t)0xE4u);
      return c->failed?0:1;
    case 0x14DAu: /* 30 20 */
      smp_branch_finish(r,(int8_t)0x20u);
      return c->failed?0:1;
    case 0x14DCu: /* D5 0002 */
      smp_wr(r,(uint16_t)(0x0200u+s->x),s->a);
      s->pc=0x14DFu;
      return c->failed?0:1;
    case 0x14DFu: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x14E2u: /* 30 18 */
      smp_branch_finish(r,(int8_t)0x18u);
      return c->failed?0:1;
    case 0x14E4u: /* 2D  */
      smp_push(r,s->a);
      s->pc=0x14E5u;
      return c->failed?0:1;
    case 0x14E5u: /* 9F  */
      s->a=smp_set_nz8(s,(uint8_t)((s->a>>4)|(s->a<<4)));
      s->pc=0x14E6u;
      return c->failed?0:1;
    case 0x14E6u: /* 28 07 */
      s->a=smp_set_nz8(s,(uint8_t)(s->a&0x07u));
      s->pc=0x14E8u;
      return c->failed?0:1;
    case 0x14E8u: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x14E9u;
      return c->failed?0:1;
    case 0x14E9u: /* F6 9634 */
      smp_a_operand(r,0x3496u,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x14ECu;
      return c->failed?0:1;
    case 0x14ECu: /* D5 0102 */
      smp_wr(r,(uint16_t)(0x0201u+s->x),s->a);
      s->pc=0x14EFu;
      return c->failed?0:1;
    case 0x14EFu: /* AE  */
      smp_pop_register(r,&s->a);
      s->pc=0x14F0u;
      return c->failed?0:1;
    case 0x14F0u: /* 28 0F */
      s->a=smp_set_nz8(s,(uint8_t)(s->a&0x0Fu));
      s->pc=0x14F2u;
      return c->failed?0:1;
    case 0x14F2u: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x14F3u;
      return c->failed?0:1;
    case 0x14F3u: /* F6 9E34 */
      smp_a_operand(r,0x349Eu,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x14F6u;
      return c->failed?0:1;
    case 0x14F6u: /* D5 1002 */
      smp_wr(r,(uint16_t)(0x0210u+s->x),s->a);
      s->pc=0x14F9u;
      return c->failed?0:1;
    case 0x14F9u: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x14FCu: /* 68 E0 */
      smp_compare(s,s->a,0xE0u);
      s->pc=0x14FEu;
      return c->failed?0:1;
    case 0x14FEu: /* 90 05 */
      smp_branch_finish(r,(int8_t)0x05u);
      return c->failed?0:1;
    case 0x1500u: /* 3F 8A15 */
      smp_call(r,0x158Au);
      return c->failed?0:1;
    case 0x1503u: /* 2F B9 */
      smp_branch_finish(r,(int8_t)0xB9u);
      return c->failed?0:1;
    case 0x1505u: /* F5 FF03 */
      smp_a_operand(r,0x03FFu,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x1508u;
      return c->failed?0:1;
    case 0x1508u: /* 04 1B */
      smp_a_operand(r,0x1Bu,SMP_MODE_DP,SMP_OP_LOGIC,0u);
      s->pc=0x150Au;
      return c->failed?0:1;
    case 0x150Au: /* D0 0C */
      smp_branch_finish(r,(int8_t)0x0Cu);
      return c->failed?0:1;
    case 0x150Cu: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0x150Du;
      return c->failed?0:1;
    case 0x150Du: /* 2D  */
      smp_push(r,s->a);
      s->pc=0x150Eu;
      return c->failed?0:1;
    case 0x150Eu: /* E4 47 */
      smp_a_operand(r,0x47u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x1510u;
      return c->failed?0:1;
    case 0x1510u: /* 24 1A */
      smp_a_operand(r,0x1Au,SMP_MODE_DP,SMP_OP_LOGIC,1u);
      s->pc=0x1512u;
      return c->failed?0:1;
    case 0x1512u: /* AE  */
      smp_pop_register(r,&s->a);
      s->pc=0x1513u;
      return c->failed?0:1;
    case 0x1513u: /* D0 03 */
      smp_branch_finish(r,(int8_t)0x03u);
      return c->failed?0:1;
    case 0x1515u: /* 3F 0609 */
      smp_call(r,0x0906u);
      return c->failed?0:1;
    case 0x1518u: /* F5 0002 */
      smp_a_operand(r,0x0200u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x151Bu;
      return c->failed?0:1;
    case 0x151Bu: /* D4 70 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x70u+s->x)),s->a);
      s->pc=0x151Du;
      return c->failed?0:1;
    case 0x151Du: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x151Eu;
      return c->failed?0:1;
    case 0x151Eu: /* F5 0102 */
      smp_a_operand(r,0x0201u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x1521u;
      return c->failed?0:1;
    case 0x1521u: /* CF  */
      smp_mul(r);
      s->pc=0x1522u;
      return c->failed?0:1;
    case 0x1522u: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0x1523u;
      return c->failed?0:1;
    case 0x1523u: /* D0 01 */
      smp_branch_finish(r,(int8_t)0x01u);
      return c->failed?0:1;
    case 0x1525u: /* BC  */
      s->a=smp_set_nz8(s,(uint8_t)(s->a+1u));
      s->pc=0x1526u;
      return c->failed?0:1;
    case 0x1526u: /* D4 71 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x71u+s->x)),s->a);
      s->pc=0x1528u;
      return c->failed?0:1;
    case 0x1528u: /* 2F 07 */
      smp_branch_finish(r,(int8_t)0x07u);
      return c->failed?0:1;
    case 0x152Au: /* E4 1B */
      smp_a_operand(r,0x1Bu,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x152Cu;
      return c->failed?0:1;
    case 0x152Cu: /* D0 06 */
      smp_branch_finish(r,(int8_t)0x06u);
      return c->failed?0:1;
    case 0x152Eu: /* 3F 2019 */
      smp_call(r,0x1920u);
      return c->failed?0:1;
    case 0x1531u: /* 3F B517 */
      smp_call(r,0x17B5u);
      return c->failed?0:1;
    case 0x1534u: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x1535u;
      return c->failed?0:1;
    case 0x1535u: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x1536u;
      return c->failed?0:1;
    case 0x1536u: /* 0B 47 */
      smp_modify_mem(r,smp_dp(s,0x47u),0u);
      s->pc=0x1538u;
      return c->failed?0:1;
    case 0x1538u: /* F0 03 */
      smp_branch_finish(r,(int8_t)0x03u);
      return c->failed?0:1;
    case 0x153Au: /* 5F B414 */
      s->pc=0x14B4u;
      return c->failed?0:1;
    case 0x153Du: /* E4 54 */
      smp_a_operand(r,0x54u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x153Fu;
      return c->failed?0:1;
    case 0x153Fu: /* F0 0B */
      smp_branch_finish(r,(int8_t)0x0Bu);
      return c->failed?0:1;
    case 0x154Cu: /* E4 68 */
      smp_a_operand(r,0x68u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x154Eu;
      return c->failed?0:1;
    case 0x154Eu: /* F0 15 */
      smp_branch_finish(r,(int8_t)0x15u);
      return c->failed?0:1;
    case 0x1550u: /* BA 64 */
      smp_loadw(r,0x64u);
      s->pc=0x1552u;
      return c->failed?0:1;
    case 0x1552u: /* 7A 60 */
      smp_addw(r,smp_rd_word_dp(r,s,0x60u));
      s->pc=0x1554u;
      return c->failed?0:1;
    case 0x1554u: /* DA 60 */
      smp_storew(r,0x60u);
      s->pc=0x1556u;
      return c->failed?0:1;
    case 0x1556u: /* BA 66 */
      smp_loadw(r,0x66u);
      s->pc=0x1558u;
      return c->failed?0:1;
    case 0x1558u: /* 7A 62 */
      smp_addw(r,smp_rd_word_dp(r,s,0x62u));
      s->pc=0x155Au;
      return c->failed?0:1;
    case 0x155Au: /* 6E 6806 */
      smp_dbnz_finish(r,0x68u,(int8_t)0x06u);
      return c->failed?0:1;
    case 0x155Du: /* BA 68 */
      smp_loadw(r,0x68u);
      s->pc=0x155Fu;
      return c->failed?0:1;
    case 0x155Fu: /* DA 60 */
      smp_storew(r,0x60u);
      s->pc=0x1561u;
      return c->failed?0:1;
    case 0x1561u: /* EB 6A */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x6Au)));
      s->pc=0x1563u;
      return c->failed?0:1;
    case 0x1563u: /* DA 62 */
      smp_storew(r,0x62u);
      s->pc=0x1565u;
      return c->failed?0:1;
    case 0x1565u: /* E4 5A */
      smp_a_operand(r,0x5Au,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x1567u;
      return c->failed?0:1;
    case 0x1567u: /* F0 0E */
      smp_branch_finish(r,(int8_t)0x0Eu);
      return c->failed?0:1;
    case 0x1569u: /* BA 5C */
      smp_loadw(r,0x5Cu);
      s->pc=0x156Bu;
      return c->failed?0:1;
    case 0x156Bu: /* 7A 58 */
      smp_addw(r,smp_rd_word_dp(r,s,0x58u));
      s->pc=0x156Du;
      return c->failed?0:1;
    case 0x156Du: /* 6E 5A02 */
      smp_dbnz_finish(r,0x5Au,(int8_t)0x02u);
      return c->failed?0:1;
    case 0x1570u: /* BA 5A */
      smp_loadw(r,0x5Au);
      s->pc=0x1572u;
      return c->failed?0:1;
    case 0x1572u: /* DA 58 */
      smp_storew(r,0x58u);
      s->pc=0x1574u;
      return c->failed?0:1;
    case 0x1574u: /* 8F FF5E */
      smp_wr(r,smp_dp(s,0x5Eu),0xFFu);
      s->pc=0x1577u;
      return c->failed?0:1;
    case 0x1577u: /* CD 00 */
      s->x=smp_set_nz8(s,0x00u);
      s->pc=0x1579u;
      return c->failed?0:1;
    case 0x1579u: /* 8F 0147 */
      smp_wr(r,smp_dp(s,0x47u),0x01u);
      s->pc=0x157Cu;
      return c->failed?0:1;
    case 0x157Cu: /* F4 31 */
      smp_a_operand(r,0x31u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x157Eu;
      return c->failed?0:1;
    case 0x157Eu: /* F0 03 */
      smp_branch_finish(r,(int8_t)0x03u);
      return c->failed?0:1;
    case 0x1580u: /* 3F 6918 */
      smp_call(r,0x1869u);
      return c->failed?0:1;
    case 0x1583u: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x1584u;
      return c->failed?0:1;
    case 0x1584u: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x1585u;
      return c->failed?0:1;
    case 0x1585u: /* 0B 47 */
      smp_modify_mem(r,smp_dp(s,0x47u),0u);
      s->pc=0x1587u;
      return c->failed?0:1;
    case 0x1587u: /* D0 F3 */
      smp_branch_finish(r,(int8_t)0xF3u);
      return c->failed?0:1;
    case 0x1589u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x158Au: /* 1C  */
      s->a=smp_modify(s,s->a,0u);
      s->pc=0x158Bu;
      return c->failed?0:1;
    case 0x158Bu: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x158Cu;
      return c->failed?0:1;
    case 0x158Cu: /* F6 5517 */
      smp_a_operand(r,0x1755u,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x158Fu;
      return c->failed?0:1;
    case 0x158Fu: /* 2D  */
      smp_push(r,s->a);
      s->pc=0x1590u;
      return c->failed?0:1;
    case 0x1590u: /* F6 5417 */
      smp_a_operand(r,0x1754u,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x1593u;
      return c->failed?0:1;
    case 0x1593u: /* 2D  */
      smp_push(r,s->a);
      s->pc=0x1594u;
      return c->failed?0:1;
    case 0x1594u: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0x1595u;
      return c->failed?0:1;
    case 0x1595u: /* 5C  */
      s->a=smp_modify(s,s->a,2u);
      s->pc=0x1596u;
      return c->failed?0:1;
    case 0x1596u: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x1597u;
      return c->failed?0:1;
    case 0x1597u: /* F6 EA17 */
      smp_a_operand(r,0x17EAu,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x159Au;
      return c->failed?0:1;
    case 0x159Au: /* F0 08 */
      smp_branch_finish(r,(int8_t)0x08u);
      return c->failed?0:1;
    case 0x159Cu: /* E7 30 */
      smp_a_operand(r,0x30u,SMP_MODE_DPXIND,SMP_OP_LOAD,0u);
      s->pc=0x159Eu;
      return c->failed?0:1;
    case 0x159Eu: /* BB 30 */
      smp_modify_mem(r,smp_dp(s,(uint8_t)(0x30u+s->x)),5u);
      s->pc=0x15A0u;
      return c->failed?0:1;
    case 0x15A0u: /* D0 02 */
      smp_branch_finish(r,(int8_t)0x02u);
      return c->failed?0:1;
    case 0x15A2u: /* BB 31 */
      smp_modify_mem(r,smp_dp(s,(uint8_t)(0x31u+s->x)),5u);
      s->pc=0x15A4u;
      return c->failed?0:1;
    case 0x15A4u: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x15A5u;
      return c->failed?0:1;
    case 0x15A5u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x15A6u: /* D5 1102 */
      smp_wr(r,(uint16_t)(0x0211u+s->x),s->a);
      s->pc=0x15A9u;
      return c->failed?0:1;
    case 0x15A9u: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x15AAu;
      return c->failed?0:1;
    case 0x15AAu: /* 10 06 */
      smp_branch_finish(r,(int8_t)0x06u);
      return c->failed?0:1;
    case 0x15B2u: /* 8D 06 */
      s->y=smp_set_nz8(s,0x06u);
      s->pc=0x15B4u;
      return c->failed?0:1;
    case 0x15B4u: /* CF  */
      smp_mul(r);
      s->pc=0x15B5u;
      return c->failed?0:1;
    case 0x15B5u: /* DA 14 */
      smp_storew(r,0x14u);
      s->pc=0x15B7u;
      return c->failed?0:1;
    case 0x15B7u: /* 60  */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;
      s->pc=0x15B8u;
      return c->failed?0:1;
    case 0x15B8u: /* 98 0014 */
      smp_dp_imm(r,0x14u,0x00u,4u);
      s->pc=0x15BBu;
      return c->failed?0:1;
    case 0x15BBu: /* 98 3415 */
      smp_dp_imm(r,0x15u,0x34u,4u);
      s->pc=0x15BEu;
      return c->failed?0:1;
    case 0x15BEu: /* E4 1A */
      smp_a_operand(r,0x1Au,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x15C0u;
      return c->failed?0:1;
    case 0x15C0u: /* 24 47 */
      smp_a_operand(r,0x47u,SMP_MODE_DP,SMP_OP_LOGIC,1u);
      s->pc=0x15C2u;
      return c->failed?0:1;
    case 0x15C2u: /* D0 3A */
      smp_branch_finish(r,(int8_t)0x3Au);
      return c->failed?0:1;
    case 0x15C4u: /* 4D  */
      smp_push(r,s->x);
      s->pc=0x15C5u;
      return c->failed?0:1;
    case 0x15C5u: /* 7D  */
      s->a=smp_set_nz8(s,s->x);
      s->pc=0x15C6u;
      return c->failed?0:1;
    case 0x15C6u: /* 9F  */
      s->a=smp_set_nz8(s,(uint8_t)((s->a>>4)|(s->a<<4)));
      s->pc=0x15C7u;
      return c->failed?0:1;
    case 0x15C7u: /* 5C  */
      s->a=smp_modify(s,s->a,2u);
      s->pc=0x15C8u;
      return c->failed?0:1;
    case 0x15C8u: /* 08 04 */
      s->a=smp_set_nz8(s,(uint8_t)(s->a|0x04u));
      s->pc=0x15CAu;
      return c->failed?0:1;
    case 0x15CAu: /* 5D  */
      s->x=smp_set_nz8(s,s->a);
      s->pc=0x15CBu;
      return c->failed?0:1;
    case 0x15CBu: /* 8D 00 */
      s->y=smp_set_nz8(s,0x00u);
      s->pc=0x15CDu;
      return c->failed?0:1;
    case 0x15CDu: /* F7 14 */
      smp_a_operand(r,0x14u,SMP_MODE_DPINDY,SMP_OP_LOAD,0u);
      s->pc=0x15CFu;
      return c->failed?0:1;
    case 0x15CFu: /* 10 0E */
      smp_branch_finish(r,(int8_t)0x0Eu);
      return c->failed?0:1;
    case 0x15DFu: /* E4 47 */
      smp_a_operand(r,0x47u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x15E1u;
      return c->failed?0:1;
    case 0x15E1u: /* 4E 4900 */
      smp_tset(r,0x0049u,0);
      s->pc=0x15E4u;
      return c->failed?0:1;
    case 0x15E4u: /* F7 14 */
      smp_a_operand(r,0x14u,SMP_MODE_DPINDY,SMP_OP_LOAD,0u);
      s->pc=0x15E6u;
      return c->failed?0:1;
    case 0x15E6u: /* C9 F200 */
      smp_wr(r,0x00F2u,s->x);
      s->pc=0x15E9u;
      return c->failed?0:1;
    case 0x15E9u: /* C5 F300 */
      smp_wr(r,0x00F3u,s->a);
      s->pc=0x15ECu;
      return c->failed?0:1;
    case 0x15ECu: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x15EDu;
      return c->failed?0:1;
    case 0x15EDu: /* FC  */
      s->y=smp_set_nz8(s,(uint8_t)(s->y+1u));
      s->pc=0x15EEu;
      return c->failed?0:1;
    case 0x15EEu: /* AD 04 */
      smp_compare(s,s->y,0x04u);
      s->pc=0x15F0u;
      return c->failed?0:1;
    case 0x15F0u: /* D0 F2 */
      smp_branch_finish(r,(int8_t)0xF2u);
      return c->failed?0:1;
    case 0x15F2u: /* CE  */
      smp_pop_register(r,&s->x);
      s->pc=0x15F3u;
      return c->failed?0:1;
    case 0x15F3u: /* F7 14 */
      smp_a_operand(r,0x14u,SMP_MODE_DPINDY,SMP_OP_LOAD,0u);
      s->pc=0x15F5u;
      return c->failed?0:1;
    case 0x15F5u: /* D5 2102 */
      smp_wr(r,(uint16_t)(0x0221u+s->x),s->a);
      s->pc=0x15F8u;
      return c->failed?0:1;
    case 0x15F8u: /* FC  */
      s->y=smp_set_nz8(s,(uint8_t)(s->y+1u));
      s->pc=0x15F9u;
      return c->failed?0:1;
    case 0x15F9u: /* F7 14 */
      smp_a_operand(r,0x14u,SMP_MODE_DPINDY,SMP_OP_LOAD,0u);
      s->pc=0x15FBu;
      return c->failed?0:1;
    case 0x15FBu: /* D5 2002 */
      smp_wr(r,(uint16_t)(0x0220u+s->x),s->a);
      s->pc=0x15FEu;
      return c->failed?0:1;
    case 0x15FEu: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x15FFu: /* D5 5103 */
      smp_wr(r,(uint16_t)(0x0351u+s->x),s->a);
      s->pc=0x1602u;
      return c->failed?0:1;
    case 0x1602u: /* 28 1F */
      s->a=smp_set_nz8(s,(uint8_t)(s->a&0x1Fu));
      s->pc=0x1604u;
      return c->failed?0:1;
    case 0x1604u: /* D5 3103 */
      smp_wr(r,(uint16_t)(0x0331u+s->x),s->a);
      s->pc=0x1607u;
      return c->failed?0:1;
    case 0x1607u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x1609u;
      return c->failed?0:1;
    case 0x1609u: /* D5 3003 */
      smp_wr(r,(uint16_t)(0x0330u+s->x),s->a);
      s->pc=0x160Cu;
      return c->failed?0:1;
    case 0x160Cu: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x1626u: /* D5 B002 */
      smp_wr(r,(uint16_t)(0x02B0u+s->x),s->a);
      s->pc=0x1629u;
      return c->failed?0:1;
    case 0x1629u: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x162Cu: /* D5 A102 */
      smp_wr(r,(uint16_t)(0x02A1u+s->x),s->a);
      s->pc=0x162Fu;
      return c->failed?0:1;
    case 0x162Fu: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x1632u: /* D4 B1 */
      smp_wr(r,smp_dp(s,(uint8_t)(0xB1u+s->x)),s->a);
      s->pc=0x1634u;
      return c->failed?0:1;
    case 0x1634u: /* D5 C102 */
      smp_wr(r,(uint16_t)(0x02C1u+s->x),s->a);
      s->pc=0x1637u;
      return c->failed?0:1;
    case 0x1637u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x1639u;
      return c->failed?0:1;
    case 0x1639u: /* D5 B102 */
      smp_wr(r,(uint16_t)(0x02B1u+s->x),s->a);
      s->pc=0x163Cu;
      return c->failed?0:1;
    case 0x163Cu: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x164Du: /* E5 CA03 */
      smp_a_operand(r,0x03CAu,SMP_MODE_ABS,SMP_OP_LOAD,0u);
      s->pc=0x1650u;
      return c->failed?0:1;
    case 0x1650u: /* D0 04 */
      smp_branch_finish(r,(int8_t)0x04u);
      return c->failed?0:1;
    case 0x1652u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x1654u;
      return c->failed?0:1;
    case 0x1654u: /* DA 58 */
      smp_storew(r,0x58u);
      s->pc=0x1656u;
      return c->failed?0:1;
    case 0x1656u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x1657u: /* C4 5A */
      smp_wr(r,smp_dp(s,0x5Au),s->a);
      s->pc=0x1659u;
      return c->failed?0:1;
    case 0x1659u: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x165Cu: /* C4 5B */
      smp_wr(r,smp_dp(s,0x5Bu),s->a);
      s->pc=0x165Eu;
      return c->failed?0:1;
    case 0x165Eu: /* 80  */
      s->psw|=SC_SMP_FLAG_C;
      s->pc=0x165Fu;
      return c->failed?0:1;
    case 0x165Fu: /* A4 59 */
      smp_a_operand(r,0x59u,SMP_MODE_DP,SMP_OP_SBC,0u);
      s->pc=0x1661u;
      return c->failed?0:1;
    case 0x1661u: /* F8 5A */
      s->x=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x5Au)));
      s->pc=0x1663u;
      return c->failed?0:1;
    case 0x1663u: /* 3F F817 */
      smp_call(r,0x17F8u);
      return c->failed?0:1;
    case 0x1666u: /* DA 5C */
      smp_storew(r,0x5Cu);
      s->pc=0x1668u;
      return c->failed?0:1;
    case 0x1668u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x1669u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x166Bu;
      return c->failed?0:1;
    case 0x166Bu: /* DA 52 */
      smp_storew(r,0x52u);
      s->pc=0x166Du;
      return c->failed?0:1;
    case 0x166Du: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x16B4u: /* D5 0103 */
      smp_wr(r,(uint16_t)(0x0301u+s->x),s->a);
      s->pc=0x16B7u;
      return c->failed?0:1;
    case 0x16B7u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x16B9u;
      return c->failed?0:1;
    case 0x16B9u: /* D5 0003 */
      smp_wr(r,(uint16_t)(0x0300u+s->x),s->a);
      s->pc=0x16BCu;
      return c->failed?0:1;
    case 0x16BCu: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x16BDu: /* D4 90 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x90u+s->x)),s->a); s->pc=0x16BFu; return c->failed?0:1;
    case 0x16BFu: /* 2D */
      smp_push(r,s->a); s->pc=0x16C0u; return c->failed?0:1;
    case 0x16C0u: /* 3F 9C15 */
      smp_call(r,0x159Cu); return c->failed?0:1;
    case 0x16C3u: /* D5 2003 */
      smp_wr(r,(uint16_t)(0x0320u+s->x),s->a); s->pc=0x16C6u; return c->failed?0:1;
    case 0x16C6u: /* 80 */
      s->psw|=SC_SMP_FLAG_C; s->pc=0x16C7u; return c->failed?0:1;
    case 0x16C7u: /* B5 0103 */
      smp_a_operand(r,0x0301u,SMP_MODE_ABSX,SMP_OP_SBC,0u); s->pc=0x16CAu; return c->failed?0:1;
    case 0x16CAu: /* CE */
      smp_pop_register(r,&s->x); s->pc=0x16CBu; return c->failed?0:1;
    case 0x16CBu: /* 3F F817 */
      smp_call(r,0x17F8u); return c->failed?0:1;
    case 0x16CEu: /* D5 1003 */
      smp_wr(r,(uint16_t)(0x0310u+s->x),s->a); s->pc=0x16D1u; return c->failed?0:1;
    case 0x16D1u: /* DD */
      s->a=smp_set_nz8(s,s->y); s->pc=0x16D2u; return c->failed?0:1;
    case 0x16D2u: /* D5 1103 */
      smp_wr(r,(uint16_t)(0x0311u+s->x),s->a); s->pc=0x16D5u; return c->failed?0:1;
    case 0x16D5u: /* 6F */
      smp_ret(r); return c->failed?0:1;
    case 0x16D6u: /* D5 8103 */
      smp_wr(r,(uint16_t)(0x0381u+s->x),s->a); s->pc=0x16D9u; return c->failed?0:1;
    case 0x16D9u: /* 6F */
      smp_ret(r); return c->failed?0:1;
    case 0x16DAu: /* D5 4002 */
      smp_wr(r,(uint16_t)(0x0240u+s->x),s->a);
      s->pc=0x16DDu;
      return c->failed?0:1;
    case 0x16DDu: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x16E0u: /* D5 4102 */
      smp_wr(r,(uint16_t)(0x0241u+s->x),s->a);
      s->pc=0x16E3u;
      return c->failed?0:1;
    case 0x16E3u: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x16E6u: /* D4 80 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x80u+s->x)),s->a);
      s->pc=0x16E8u;
      return c->failed?0:1;
    case 0x16E8u: /* F4 30 */
      smp_a_operand(r,0x30u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x16EAu;
      return c->failed?0:1;
    case 0x16EAu: /* D5 3002 */
      smp_wr(r,(uint16_t)(0x0230u+s->x),s->a);
      s->pc=0x16EDu;
      return c->failed?0:1;
    case 0x16EDu: /* F4 31 */
      smp_a_operand(r,0x31u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x16EFu;
      return c->failed?0:1;
    case 0x16EFu: /* D5 3102 */
      smp_wr(r,(uint16_t)(0x0231u+s->x),s->a);
      s->pc=0x16F2u;
      return c->failed?0:1;
    case 0x16F2u: /* F5 4002 */
      smp_a_operand(r,0x0240u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x16F5u;
      return c->failed?0:1;
    case 0x16F5u: /* D4 30 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x30u+s->x)),s->a);
      s->pc=0x16F7u;
      return c->failed?0:1;
    case 0x16F7u: /* F5 4102 */
      smp_a_operand(r,0x0241u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x16FAu;
      return c->failed?0:1;
    case 0x16FAu: /* D4 31 */
      smp_wr(r,smp_dp(s,(uint8_t)(0x31u+s->x)),s->a);
      s->pc=0x16FCu;
      return c->failed?0:1;
    case 0x16FCu: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x16FDu: /* C5 C303 */
      smp_wr(r,0x03C3u,s->a);
      s->pc=0x1700u;
      return c->failed?0:1;
    case 0x1700u: /* C4 4A */
      smp_wr(r,smp_dp(s,0x4Au),s->a);
      s->pc=0x1702u;
      return c->failed?0:1;
    case 0x1702u: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x1705u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x1707u;
      return c->failed?0:1;
    case 0x1707u: /* DA 60 */
      smp_storew(r,0x60u);
      s->pc=0x1709u;
      return c->failed?0:1;
    case 0x1709u: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x170Cu: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x170Eu;
      return c->failed?0:1;
    case 0x170Eu: /* DA 62 */
      smp_storew(r,0x62u);
      s->pc=0x1710u;
      return c->failed?0:1;
    case 0x1710u: /* B2 48 */
      smp_bit_set(r,0x48u,5u,0);
      s->pc=0x1712u;
      return c->failed?0:1;
    case 0x1712u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x1713u: /* C4 68 */
      smp_wr(r,smp_dp(s,0x68u),s->a);
      s->pc=0x1715u;
      return c->failed?0:1;
    case 0x1715u: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x1718u: /* C4 69 */
      smp_wr(r,smp_dp(s,0x69u),s->a);
      s->pc=0x171Au;
      return c->failed?0:1;
    case 0x171Au: /* 80  */
      s->psw|=SC_SMP_FLAG_C;
      s->pc=0x171Bu;
      return c->failed?0:1;
    case 0x171Bu: /* A4 61 */
      smp_a_operand(r,0x61u,SMP_MODE_DP,SMP_OP_SBC,0u);
      s->pc=0x171Du;
      return c->failed?0:1;
    case 0x171Du: /* F8 68 */
      s->x=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x68u)));
      s->pc=0x171Fu;
      return c->failed?0:1;
    case 0x171Fu: /* 3F F817 */
      smp_call(r,0x17F8u);
      return c->failed?0:1;
    case 0x1722u: /* DA 64 */
      smp_storew(r,0x64u);
      s->pc=0x1724u;
      return c->failed?0:1;
    case 0x1724u: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x1727u: /* C4 6A */
      smp_wr(r,smp_dp(s,0x6Au),s->a);
      s->pc=0x1729u;
      return c->failed?0:1;
    case 0x1729u: /* 80  */
      s->psw|=SC_SMP_FLAG_C;
      s->pc=0x172Au;
      return c->failed?0:1;
    case 0x172Au: /* A4 63 */
      smp_a_operand(r,0x63u,SMP_MODE_DP,SMP_OP_SBC,0u);
      s->pc=0x172Cu;
      return c->failed?0:1;
    case 0x172Cu: /* F8 68 */
      s->x=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x68u)));
      s->pc=0x172Eu;
      return c->failed?0:1;
    case 0x172Eu: /* 3F F817 */
      smp_call(r,0x17F8u);
      return c->failed?0:1;
    case 0x1731u: /* DA 66 */
      smp_storew(r,0x66u);
      s->pc=0x1733u;
      return c->failed?0:1;
    case 0x1733u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x173Bu: /* 3F 5D17 */
      smp_call(r,0x175Du);
      return c->failed?0:1;
    case 0x173Eu: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x1741u: /* C4 4E */
      smp_wr(r,smp_dp(s,0x4Eu),s->a);
      s->pc=0x1743u;
      return c->failed?0:1;
    case 0x1743u: /* 3F 9C15 */
      smp_call(r,0x159Cu);
      return c->failed?0:1;
    case 0x1746u: /* 8D 08 */
      s->y=smp_set_nz8(s,0x08u);
      s->pc=0x1748u;
      return c->failed?0:1;
    case 0x1748u: /* CF  */
      smp_mul(r);
      s->pc=0x1749u;
      return c->failed?0:1;
    case 0x1749u: /* 5D  */
      s->x=smp_set_nz8(s,s->a);
      s->pc=0x174Au;
      return c->failed?0:1;
    case 0x174Au: /* 8D 0F */
      s->y=smp_set_nz8(s,0x0Fu);
      s->pc=0x174Cu;
      return c->failed?0:1;
    case 0x174Cu: /* F5 B51A */
      smp_a_operand(r,0x1AB5u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x174Fu;
      return c->failed?0:1;
    case 0x174Fu: /* 3F FB09 */
      smp_call(r,0x09FBu);
      return c->failed?0:1;
    case 0x1752u: /* 3D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x+1u));
      s->pc=0x1753u;
      return c->failed?0:1;
    case 0x1753u: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0x1754u;
      return c->failed?0:1;
    case 0x1754u: /* 60  */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;
      s->pc=0x1755u;
      return c->failed?0:1;
    case 0x1755u: /* 88 10 */
      s->a=smp_adc8(s,s->a,0x10u);
      s->pc=0x1757u;
      return c->failed?0:1;
    case 0x1757u: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x1758u;
      return c->failed?0:1;
    case 0x1758u: /* 10 F2 */
      smp_branch_finish(r,(int8_t)0xF2u);
      return c->failed?0:1;
    case 0x175Au: /* F8 44 */
      s->x=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x44u)));
      s->pc=0x175Cu;
      return c->failed?0:1;
    case 0x175Cu: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x175Du: /* C4 4D */
      smp_wr(r,smp_dp(s,0x4Du),s->a);
      s->pc=0x175Fu;
      return c->failed?0:1;
    case 0x175Fu: /* 8D 7D */
      s->y=smp_set_nz8(s,0x7Du);
      s->pc=0x1761u;
      return c->failed?0:1;
    case 0x1761u: /* CC F200 */
      smp_wr(r,0x00F2u,s->y);
      s->pc=0x1764u;
      return c->failed?0:1;
    case 0x1764u: /* E5 F300 */
      smp_a_operand(r,0x00F3u,SMP_MODE_ABS,SMP_OP_LOAD,0u);
      s->pc=0x1767u;
      return c->failed?0:1;
    case 0x1767u: /* 64 4D */
      smp_a_operand(r,0x4Du,SMP_MODE_DP,SMP_OP_CMP,0u);
      s->pc=0x1769u;
      return c->failed?0:1;
    case 0x1769u: /* F0 2B */
      smp_branch_finish(r,(int8_t)0x2Bu);
      return c->failed?0:1;
    case 0x176Bu: /* 28 0F */
      s->a=smp_set_nz8(s,(uint8_t)(s->a&0x0Fu));
      s->pc=0x176Du;
      return c->failed?0:1;
    case 0x176Du: /* 48 FF */
      s->a=smp_set_nz8(s,(uint8_t)(s->a^0xFFu));
      s->pc=0x176Fu;
      return c->failed?0:1;
    case 0x176Fu: /* F3 4C03 */
      smp_bit_branch_finish(r,0x4Cu,(int8_t)0x03u);
      return c->failed?0:1;
    case 0x1772u: /* 60  */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;
      s->pc=0x1773u;
      return c->failed?0:1;
    case 0x1773u: /* 84 4C */
      smp_a_operand(r,0x4Cu,SMP_MODE_DP,SMP_OP_ADC,0u);
      s->pc=0x1775u;
      return c->failed?0:1;
    case 0x1775u: /* C4 4C */
      smp_wr(r,smp_dp(s,0x4Cu),s->a);
      s->pc=0x1777u;
      return c->failed?0:1;
    case 0x1777u: /* 8D 04 */
      s->y=smp_set_nz8(s,0x04u);
      s->pc=0x1779u;
      return c->failed?0:1;
    case 0x1779u: /* F6 D41A */
      smp_a_operand(r,0x1AD4u,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x177Cu;
      return c->failed?0:1;
    case 0x177Cu: /* C5 F200 */
      smp_wr(r,0x00F2u,s->a);
      s->pc=0x177Fu;
      return c->failed?0:1;
    case 0x177Fu: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x1781u;
      return c->failed?0:1;
    case 0x1781u: /* C5 F300 */
      smp_wr(r,0x00F3u,s->a);
      s->pc=0x1784u;
      return c->failed?0:1;
    case 0x1784u: /* FE F3 */
      smp_dbnz_y_finish(r,(int8_t)0xF3u);
      return c->failed?0:1;
    case 0x1786u: /* E4 48 */
      smp_a_operand(r,0x48u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x1788u;
      return c->failed?0:1;
    case 0x1788u: /* 08 20 */
      s->a=smp_set_nz8(s,(uint8_t)(s->a|0x20u));
      s->pc=0x178Au;
      return c->failed?0:1;
    case 0x178Au: /* 8D 6C */
      s->y=smp_set_nz8(s,0x6Cu);
      s->pc=0x178Cu;
      return c->failed?0:1;
    case 0x178Cu: /* 3F FB09 */
      smp_call(r,0x09FBu);
      return c->failed?0:1;
    case 0x178Fu: /* E4 4D */
      smp_a_operand(r,0x4Du,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x1791u;
      return c->failed?0:1;
    case 0x1791u: /* 8D 7D */
      s->y=smp_set_nz8(s,0x7Du);
      s->pc=0x1793u;
      return c->failed?0:1;
    case 0x1793u: /* 3F FB09 */
      smp_call(r,0x09FBu);
      return c->failed?0:1;
    case 0x1796u: /* 1C  */
      s->a=smp_modify(s,s->a,0u);
      s->pc=0x1797u;
      return c->failed?0:1;
    case 0x1797u: /* 1C  */
      s->a=smp_modify(s,s->a,0u);
      s->pc=0x1798u;
      return c->failed?0:1;
    case 0x1798u: /* 1C  */
      s->a=smp_modify(s,s->a,0u);
      s->pc=0x1799u;
      return c->failed?0:1;
    case 0x1799u: /* 48 FF */
      s->a=smp_set_nz8(s,(uint8_t)(s->a^0xFFu));
      s->pc=0x179Bu;
      return c->failed?0:1;
    case 0x179Bu: /* 80  */
      s->psw|=SC_SMP_FLAG_C;
      s->pc=0x179Cu;
      return c->failed?0:1;
    case 0x179Cu: /* 88 D0 */
      s->a=smp_adc8(s,s->a,0xD0u);
      s->pc=0x179Eu;
      return c->failed?0:1;
    case 0x179Eu: /* 8D 6D */
      s->y=smp_set_nz8(s,0x6Du);
      s->pc=0x17A0u;
      return c->failed?0:1;
    case 0x17A0u: /* 5F FB09 */
      s->pc=0x09FBu;
      return c->failed?0:1;
    case 0x17A3u: /* C4 5F */
      smp_wr(r,smp_dp(s,0x5Fu),s->a);
      s->pc=0x17A5u;
      return c->failed?0:1;
    case 0x17A5u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x17B5u: /* F4 A0 */
      smp_a_operand(r,0xA0u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x17B7u;
      return c->failed?0:1;
    case 0x17B7u: /* D0 33 */
      smp_branch_finish(r,(int8_t)0x33u);
      return c->failed?0:1;
    case 0x17B9u: /* E7 30 */
      smp_a_operand(r,0x30u,SMP_MODE_DPXIND,SMP_OP_LOAD,0u);
      s->pc=0x17BBu;
      return c->failed?0:1;
    case 0x17BBu: /* 68 F9 */
      smp_compare(s,s->a,0xF9u);
      s->pc=0x17BDu;
      return c->failed?0:1;
    case 0x17BDu: /* D0 2D */
      smp_branch_finish(r,(int8_t)0x2Du);
      return c->failed?0:1;
    case 0x17ECu: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x17EDu: /* F5 6103 */
      smp_a_operand(r,0x0361u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x17F0u;
      return c->failed?0:1;
    case 0x17F0u: /* C4 11 */
      smp_wr(r,smp_dp(s,0x11u),s->a);
      s->pc=0x17F2u;
      return c->failed?0:1;
    case 0x17F2u: /* F5 6003 */
      smp_a_operand(r,0x0360u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x17F5u;
      return c->failed?0:1;
    case 0x17F5u: /* C4 10 */
      smp_wr(r,smp_dp(s,0x10u),s->a);
      s->pc=0x17F7u;
      return c->failed?0:1;
    case 0x17F7u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x17F8u: /* ED  */
      s->psw^=SC_SMP_FLAG_C;
      s->pc=0x17F9u;
      return c->failed?0:1;
    case 0x17F9u: /* 6B 12 */
      smp_modify_mem(r,smp_dp(s,0x12u),3u);
      s->pc=0x17FBu;
      return c->failed?0:1;
    case 0x17FBu: /* 10 03 */
      smp_branch_finish(r,(int8_t)0x03u);
      return c->failed?0:1;
    case 0x1800u: /* 8D 00 */
      s->y=smp_set_nz8(s,0x00u);
      s->pc=0x1802u;
      return c->failed?0:1;
    case 0x1802u: /* 9E  */
      smp_div(r);
      s->pc=0x1803u;
      return c->failed?0:1;
    case 0x1803u: /* 2D  */
      smp_push(r,s->a);
      s->pc=0x1804u;
      return c->failed?0:1;
    case 0x1804u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x1806u;
      return c->failed?0:1;
    case 0x1806u: /* 9E  */
      smp_div(r);
      s->pc=0x1807u;
      return c->failed?0:1;
    case 0x1807u: /* EE  */
      smp_pop_register(r,&s->y);
      s->pc=0x1808u;
      return c->failed?0:1;
    case 0x1808u: /* F8 44 */
      s->x=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x44u)));
      s->pc=0x180Au;
      return c->failed?0:1;
    case 0x180Au: /* F3 1206 */
      smp_bit_branch_finish(r,0x12u,(int8_t)0x06u);
      return c->failed?0:1;
    case 0x180Du: /* DA 14 */
      smp_storew(r,0x14u);
      s->pc=0x180Fu;
      return c->failed?0:1;
    case 0x180Fu: /* BA 0E */
      smp_loadw(r,0x0Eu);
      s->pc=0x1811u;
      return c->failed?0:1;
    case 0x1811u: /* 9A 14 */
      smp_subw(r,smp_rd_word_dp(r,s,0x14u));
      s->pc=0x1813u;
      return c->failed?0:1;
    case 0x1813u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x1869u: /* F4 90 */
      smp_a_operand(r,0x90u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x186Bu;
      return c->failed?0:1;
    case 0x186Bu: /* F0 09 */
      smp_branch_finish(r,(int8_t)0x09u);
      return c->failed?0:1;
    case 0x186Du: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u); s->pc=0x186Fu; return c->failed?0:1;
    case 0x186Fu: /* 8D 03 */
      s->y=smp_set_nz8(s,0x03u); s->pc=0x1871u; return c->failed?0:1;
    case 0x1871u: /* 9B 90 */
      smp_modify_mem(r,smp_dp(s,(uint8_t)(0x90u+s->x)),4u); s->pc=0x1873u; return c->failed?0:1;
    case 0x1873u: /* 3F FC18 */
      smp_call(r,0x18FCu); return c->failed?0:1;
    case 0x1876u: /* FB C1 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,(uint8_t)(0xC1u+s->x))));
      s->pc=0x1878u;
      return c->failed?0:1;
    case 0x1878u: /* F0 23 */
      smp_branch_finish(r,(int8_t)0x23u);
      return c->failed?0:1;
    case 0x189Du: /* E8 FF */
      s->a=smp_set_nz8(s,0xFFu);
      s->pc=0x189Fu;
      return c->failed?0:1;
    case 0x189Fu: /* 3F 8E1A */
      smp_call(r,0x1A8Eu);
      return c->failed?0:1;
    case 0x18A2u: /* F4 91 */
      smp_a_operand(r,0x91u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x18A4u;
      return c->failed?0:1;
    case 0x18A4u: /* F0 09 */
      smp_branch_finish(r,(int8_t)0x09u);
      return c->failed?0:1;
    case 0x18AFu: /* E4 47 */
      smp_a_operand(r,0x47u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x18B1u;
      return c->failed?0:1;
    case 0x18B1u: /* 24 5E */
      smp_a_operand(r,0x5Eu,SMP_MODE_DP,SMP_OP_LOGIC,1u);
      s->pc=0x18B3u;
      return c->failed?0:1;
    case 0x18B3u: /* F0 46 */
      smp_branch_finish(r,(int8_t)0x46u);
      return c->failed?0:1;
    case 0x18B5u: /* F5 3103 */
      smp_a_operand(r,0x0331u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x18B8u;
      return c->failed?0:1;
    case 0x18B8u: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x18B9u;
      return c->failed?0:1;
    case 0x18B9u: /* F5 3003 */
      smp_a_operand(r,0x0330u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x18BCu;
      return c->failed?0:1;
    case 0x18BCu: /* DA 10 */
      smp_storew(r,0x10u);
      s->pc=0x18BEu;
      return c->failed?0:1;
    case 0x18BEu: /* 7D  */
      s->a=smp_set_nz8(s,s->x);
      s->pc=0x18BFu;
      return c->failed?0:1;
    case 0x18BFu: /* 9F  */
      s->a=smp_set_nz8(s,(uint8_t)((s->a>>4)|(s->a<<4)));
      s->pc=0x18C0u;
      return c->failed?0:1;
    case 0x18C0u: /* 5C  */
      s->a=smp_modify(s,s->a,2u);
      s->pc=0x18C1u;
      return c->failed?0:1;
    case 0x18C1u: /* C4 12 */
      smp_wr(r,smp_dp(s,0x12u),s->a);
      s->pc=0x18C3u;
      return c->failed?0:1;
    case 0x18C3u: /* EB 11 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x11u)));
      s->pc=0x18C5u;
      return c->failed?0:1;
    case 0x18C5u: /* F6 A11A */
      smp_a_operand(r,0x1AA1u,SMP_MODE_ABSY,SMP_OP_LOAD,0u);
      s->pc=0x18C8u;
      return c->failed?0:1;
    case 0x18C8u: /* 80  */
      s->psw|=SC_SMP_FLAG_C;
      s->pc=0x18C9u;
      return c->failed?0:1;
    case 0x18C9u: /* B6 A01A */
      smp_a_operand(r,0x1AA0u,SMP_MODE_ABSY,SMP_OP_SBC,0u);
      s->pc=0x18CCu;
      return c->failed?0:1;
    case 0x18CCu: /* EB 10 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x10u)));
      s->pc=0x18CEu;
      return c->failed?0:1;
    case 0x18CEu: /* CF  */
      smp_mul(r);
      s->pc=0x18CFu;
      return c->failed?0:1;
    case 0x18CFu: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0x18D0u;
      return c->failed?0:1;
    case 0x18D0u: /* EB 11 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x11u)));
      s->pc=0x18D2u;
      return c->failed?0:1;
    case 0x18D2u: /* 60  */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;
      s->pc=0x18D3u;
      return c->failed?0:1;
    case 0x18D3u: /* 96 A01A */
      smp_a_operand(r,0x1AA0u,SMP_MODE_ABSY,SMP_OP_ADC,0u);
      s->pc=0x18D6u;
      return c->failed?0:1;
    case 0x18D6u: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x18D7u;
      return c->failed?0:1;
    case 0x18D7u: /* F5 2103 */
      smp_a_operand(r,0x0321u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x18DAu;
      return c->failed?0:1;
    case 0x18DAu: /* CF  */
      smp_mul(r);
      s->pc=0x18DBu;
      return c->failed?0:1;
    case 0x18DBu: /* F5 5103 */
      smp_a_operand(r,0x0351u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x18DEu;
      return c->failed?0:1;
    case 0x18DEu: /* 1C  */
      s->a=smp_modify(s,s->a,0u);
      s->pc=0x18DFu;
      return c->failed?0:1;
    case 0x18DFu: /* 13 1201 */
      smp_bit_branch_finish(r,0x12u,(int8_t)0x01u);
      return c->failed?0:1;
    case 0x18E2u: /* 1C  */
      s->a=smp_modify(s,s->a,0u);
      s->pc=0x18E3u;
      return c->failed?0:1;
    case 0x18E3u: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0x18E4u;
      return c->failed?0:1;
    case 0x18E4u: /* 90 03 */
      smp_branch_finish(r,(int8_t)0x03u);
      return c->failed?0:1;
    case 0x18E9u: /* EB 12 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x12u)));
      s->pc=0x18EBu;
      return c->failed?0:1;
    case 0x18EBu: /* 3F F309 */
      smp_call(r,0x09F3u);
      return c->failed?0:1;
    case 0x18EEu: /* 8D 14 */
      s->y=smp_set_nz8(s,0x14u);
      s->pc=0x18F0u;
      return c->failed?0:1;
    case 0x18F0u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0x18F2u;
      return c->failed?0:1;
    case 0x18F2u: /* 9A 10 */
      smp_subw(r,smp_rd_word_dp(r,s,0x10u));
      s->pc=0x18F4u;
      return c->failed?0:1;
    case 0x18F4u: /* DA 10 */
      smp_storew(r,0x10u);
      s->pc=0x18F6u;
      return c->failed?0:1;
    case 0x18F6u: /* AB 12 */
      smp_modify_mem(r,smp_dp(s,0x12u),5u);
      s->pc=0x18F8u;
      return c->failed?0:1;
    case 0x18F8u: /* 33 12C8 */
      smp_bit_branch_finish(r,0x12u,(int8_t)0xC8u);
      return c->failed?0:1;
    case 0x18FBu: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x18FCu: /* 09 475E */
      smp_dp_dp(r,0x47u,0x5Eu,0u); s->pc=0x18FFu; return c->failed?0:1;
    case 0x18FFu: /* DA 14 */
      smp_storew(r,0x14u); s->pc=0x1901u; return c->failed?0:1;
    case 0x1901u: /* DA 16 */
      smp_storew(r,0x16u); s->pc=0x1903u; return c->failed?0:1;
    case 0x1903u: /* 4D */
      smp_push(r,s->x); s->pc=0x1904u; return c->failed?0:1;
    case 0x1904u: /* EE */
      smp_pop_register(r,&s->y); s->pc=0x1905u; return c->failed?0:1;
    case 0x1905u: /* 60 */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C; s->pc=0x1906u; return c->failed?0:1;
    case 0x1906u: /* D0 0A */
      smp_branch_finish(r,(int8_t)0x0Au); return c->failed?0:1;
    case 0x1908u: /* 98 1F16 */
      smp_dp_imm(r,0x16u,0x1Fu,4u); s->pc=0x190Bu; return c->failed?0:1;
    case 0x190Bu: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u); s->pc=0x190Du; return c->failed?0:1;
    case 0x190Du: /* D7 14 */
      smp_store_dp_ind_y(r,0x14u,s->a); s->pc=0x190Fu; return c->failed?0:1;
    case 0x190Fu: /* FC */
      s->y=smp_set_nz8(s,(uint8_t)(s->y+1u)); s->pc=0x1910u; return c->failed?0:1;
    case 0x1910u: /* 2F 09 */
      smp_branch_finish(r,(int8_t)0x09u); return c->failed?0:1;
    case 0x1912u: /* 98 1016 */
      smp_dp_imm(r,0x16u,0x10u,4u); s->pc=0x1915u; return c->failed?0:1;
    case 0x1915u: /* 3F 1919 */
      smp_call(r,0x1919u); return c->failed?0:1;
    case 0x1918u: /* FC */
      s->y=smp_set_nz8(s,(uint8_t)(s->y+1u)); s->pc=0x1919u; return c->failed?0:1;
    case 0x1919u: /* F7 14 */
      smp_a_operand(r,0x14u,SMP_MODE_DPINDY,SMP_OP_LOAD,0u); s->pc=0x191Bu; return c->failed?0:1;
    case 0x191Bu: /* 97 16 */
      smp_a_operand(r,0x16u,SMP_MODE_DPINDY,SMP_OP_ADC,0u); s->pc=0x191Du; return c->failed?0:1;
    case 0x191Du: /* D7 14 */
      smp_store_dp_ind_y(r,0x14u,s->a); s->pc=0x191Fu; return c->failed?0:1;
    case 0x191Fu: /* 6F */
      smp_ret(r); return c->failed?0:1;
    case 0x1920u: /* F4 71 */
      smp_a_operand(r,0x71u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x1922u;
      return c->failed?0:1;
    case 0x1922u: /* F0 63 */
      smp_branch_finish(r,(int8_t)0x63u);
      return c->failed?0:1;
    case 0x1924u: /* 9B 71 */
      smp_modify_mem(r,smp_dp(s,(uint8_t)(0x71u+s->x)),4u);
      s->pc=0x1926u;
      return c->failed?0:1;
    case 0x1926u: /* F0 05 */
      smp_branch_finish(r,(int8_t)0x05u);
      return c->failed?0:1;
    case 0x1928u: /* E8 02 */
      s->a=smp_set_nz8(s,0x02u);
      s->pc=0x192Au;
      return c->failed?0:1;
    case 0x192Au: /* DE 705A */
      smp_cbne_x_finish(r,0x70u,(int8_t)0x5Au);
      return c->failed?0:1;
    case 0x192Du: /* F4 80 */
      smp_a_operand(r,0x80u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x192Fu;
      return c->failed?0:1;
    case 0x192Fu: /* C4 17 */
      smp_wr(r,smp_dp(s,0x17u),s->a);
      s->pc=0x1931u;
      return c->failed?0:1;
    case 0x1931u: /* F4 30 */
      smp_a_operand(r,0x30u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x1933u;
      return c->failed?0:1;
    case 0x1933u: /* FB 31 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,(uint8_t)(0x31u+s->x))));
      s->pc=0x1935u;
      return c->failed?0:1;
    case 0x1935u: /* DA 14 */
      smp_storew(r,0x14u);
      s->pc=0x1937u;
      return c->failed?0:1;
    case 0x1937u: /* 8D 00 */
      s->y=smp_set_nz8(s,0x00u);
      s->pc=0x1939u;
      return c->failed?0:1;
    case 0x1939u: /* F7 14 */
      smp_a_operand(r,0x14u,SMP_MODE_DPINDY,SMP_OP_LOAD,0u);
      s->pc=0x193Bu;
      return c->failed?0:1;
    case 0x193Bu: /* F0 1C */
      smp_branch_finish(r,(int8_t)0x1Cu);
      return c->failed?0:1;
    case 0x193Du: /* 30 05 */
      smp_branch_finish(r,(int8_t)0x05u);
      return c->failed?0:1;
    case 0x193Fu: /* FC  */
      s->y=smp_set_nz8(s,(uint8_t)(s->y+1u));
      s->pc=0x1940u;
      return c->failed?0:1;
    case 0x1940u: /* F7 14 */
      smp_a_operand(r,0x14u,SMP_MODE_DPINDY,SMP_OP_LOAD,0u);
      s->pc=0x1942u;
      return c->failed?0:1;
    case 0x1942u: /* 10 FB */
      smp_branch_finish(r,(int8_t)0xFBu);
      return c->failed?0:1;
    case 0x1944u: /* 68 C8 */
      smp_compare(s,s->a,0xC8u);
      s->pc=0x1946u;
      return c->failed?0:1;
    case 0x1946u: /* F0 3F */
      smp_branch_finish(r,(int8_t)0x3Fu);
      return c->failed?0:1;
    case 0x1948u: /* 68 EF */
      smp_compare(s,s->a,0xEFu);
      s->pc=0x194Au;
      return c->failed?0:1;
    case 0x194Au: /* F0 29 */
      smp_branch_finish(r,(int8_t)0x29u);
      return c->failed?0:1;
    case 0x194Cu: /* 68 E0 */
      smp_compare(s,s->a,0xE0u);
      s->pc=0x194Eu;
      return c->failed?0:1;
    case 0x194Eu: /* 90 30 */
      smp_branch_finish(r,(int8_t)0x30u);
      return c->failed?0:1;
    case 0x1950u: /* 6D */
      smp_push(r,s->y);
      s->pc=0x1951u;
      return c->failed?0:1;
    case 0x1951u: /* FD */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x1952u;
      return c->failed?0:1;
    case 0x1952u: /* AE */
      smp_pop_register(r,&s->a);
      s->pc=0x1953u;
      return c->failed?0:1;
    case 0x1953u: /* 96 6A17 */
      smp_a_operand(r,0x176Au,SMP_MODE_ABSY,SMP_OP_ADC,0u);
      s->pc=0x1956u;
      return c->failed?0:1;
    case 0x1956u: /* FD */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x1957u;
      return c->failed?0:1;
    case 0x1957u: /* 2F E0 */
      smp_branch_finish(r,(int8_t)0xE0u);
      return c->failed?0:1;
    case 0x1959u: /* E4 17 */
      smp_a_operand(r,0x17u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x195Bu;
      return c->failed?0:1;
    case 0x195Bu: /* F0 23 */
      smp_branch_finish(r,(int8_t)0x23u);
      return c->failed?0:1;
    case 0x195Du: /* 8B 17 */
      smp_modify_mem(r,smp_dp(s,0x17u),4u);
      s->pc=0x195Fu;
      return c->failed?0:1;
    case 0x195Fu: /* D0 0A */
      smp_branch_finish(r,(int8_t)0x0Au);
      return c->failed?0:1;
    case 0x1961u: /* F5 3102 */
      smp_a_operand(r,0x0231u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x1964u;
      return c->failed?0:1;
    case 0x1964u: /* 2D  */
      smp_push(r,s->a);
      s->pc=0x1965u;
      return c->failed?0:1;
    case 0x1965u: /* F5 3002 */
      smp_a_operand(r,0x0230u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x1968u;
      return c->failed?0:1;
    case 0x1968u: /* EE  */
      smp_pop_register(r,&s->y);
      s->pc=0x1969u;
      return c->failed?0:1;
    case 0x1969u: /* 2F CA */
      smp_branch_finish(r,(int8_t)0xCAu);
      return c->failed?0:1;
    case 0x196Bu: /* F5 4102 */
      smp_a_operand(r,0x0241u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x196Eu;
      return c->failed?0:1;
    case 0x196Eu: /* 2D  */
      smp_push(r,s->a);
      s->pc=0x196Fu;
      return c->failed?0:1;
    case 0x196Fu: /* F5 4002 */
      smp_a_operand(r,0x0240u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x1972u;
      return c->failed?0:1;
    case 0x1972u: /* EE  */
      smp_pop_register(r,&s->y);
      s->pc=0x1973u;
      return c->failed?0:1;
    case 0x1973u: /* 2F C0 */
      smp_branch_finish(r,(int8_t)0xC0u);
      return c->failed?0:1;
    case 0x1975u: /* FC  */
      s->y=smp_set_nz8(s,(uint8_t)(s->y+1u));
      s->pc=0x1976u;
      return c->failed?0:1;
    case 0x1976u: /* F7 14 */
      smp_a_operand(r,0x14u,SMP_MODE_DPINDY,SMP_OP_LOAD,0u);
      s->pc=0x1978u;
      return c->failed?0:1;
    case 0x1978u: /* 2D  */
      smp_push(r,s->a);
      s->pc=0x1979u;
      return c->failed?0:1;
    case 0x1979u: /* FC  */
      s->y=smp_set_nz8(s,(uint8_t)(s->y+1u));
      s->pc=0x197Au;
      return c->failed?0:1;
    case 0x197Au: /* F7 14 */
      smp_a_operand(r,0x14u,SMP_MODE_DPINDY,SMP_OP_LOAD,0u);
      s->pc=0x197Cu;
      return c->failed?0:1;
    case 0x197Cu: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x197Du;
      return c->failed?0:1;
    case 0x197Du: /* AE  */
      smp_pop_register(r,&s->a);
      s->pc=0x197Eu;
      return c->failed?0:1;
    case 0x197Eu: /* 2F B5 */
      smp_branch_finish(r,(int8_t)0xB5u);
      return c->failed?0:1;
    case 0x1980u: /* E4 47 */
      smp_a_operand(r,0x47u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0x1982u;
      return c->failed?0:1;
    case 0x1982u: /* 8D 5C */
      s->y=smp_set_nz8(s,0x5Cu);
      s->pc=0x1984u;
      return c->failed?0:1;
    case 0x1984u: /* 3F F309 */
      smp_call(r,0x09F3u);
      return c->failed?0:1;
    case 0x1987u: /* F2 13 */
      smp_bit_set(r,0x13u,7u,0);
      s->pc=0x1989u;
      return c->failed?0:1;
    case 0x1989u: /* F4 A0 */
      smp_a_operand(r,0xA0u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x198Bu;
      return c->failed?0:1;
    case 0x198Bu: /* F0 19 */
      smp_branch_finish(r,(int8_t)0x19u);
      return c->failed?0:1;
    case 0x19A6u: /* 3F ED17 */
      smp_call(r,0x17EDu);
      return c->failed?0:1;
    case 0x19A9u: /* F4 B1 */
      smp_a_operand(r,0xB1u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x19ABu;
      return c->failed?0:1;
    case 0x19ABu: /* F0 4C */
      smp_branch_finish(r,(int8_t)0x4Cu);
      return c->failed?0:1;
    case 0x19ADu: /* F5 B002 */
      smp_a_operand(r,0x02B0u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x19B0u;
      return c->failed?0:1;
    case 0x19B0u: /* DE B044 */
      smp_cbne_x_finish(r,0xB0u,(int8_t)0x44u);
      return c->failed?0:1;
    case 0x19B3u: /* F5 0001 */
      smp_a_operand(r,0x0100u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x19B6u;
      return c->failed?0:1;
    case 0x19B6u: /* 75 B102 */
      smp_a_operand(r,0x02B1u,SMP_MODE_ABSX,SMP_OP_CMP,0u);
      s->pc=0x19B9u;
      return c->failed?0:1;
    case 0x19B9u: /* D0 05 */
      smp_branch_finish(r,(int8_t)0x05u);
      return c->failed?0:1;
    case 0x19BBu: /* F5 C102 */
      smp_a_operand(r,0x02C1u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x19BEu;
      return c->failed?0:1;
    case 0x19BEu: /* 2F 0D */
      smp_branch_finish(r,(int8_t)0x0Du);
      return c->failed?0:1;
    case 0x19CDu: /* D4 B1 */
      smp_wr(r,smp_dp(s,(uint8_t)(0xB1u+s->x)),s->a);
      s->pc=0x19CFu;
      return c->failed?0:1;
    case 0x19CFu: /* F5 A002 */
      smp_a_operand(r,0x02A0u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x19D2u;
      return c->failed?0:1;
    case 0x19D2u: /* 60  */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;
      s->pc=0x19D3u;
      return c->failed?0:1;
    case 0x19D3u: /* 95 A102 */
      smp_a_operand(r,0x02A1u,SMP_MODE_ABSX,SMP_OP_ADC,0u);
      s->pc=0x19D6u;
      return c->failed?0:1;
    case 0x19D6u: /* D5 A002 */
      smp_wr(r,(uint16_t)(0x02A0u+s->x),s->a);
      s->pc=0x19D9u;
      return c->failed?0:1;
    case 0x19D9u: /* C4 12 */
      smp_wr(r,smp_dp(s,0x12u),s->a);
      s->pc=0x19DBu;
      return c->failed?0:1;
    case 0x19DBu: /* 1C  */
      s->a=smp_modify(s,s->a,0u);
      s->pc=0x19DCu;
      return c->failed?0:1;
    case 0x19DCu: /* 1C  */
      s->a=smp_modify(s,s->a,0u);
      s->pc=0x19DDu;
      return c->failed?0:1;
    case 0x19DDu: /* 90 02 */
      smp_branch_finish(r,(int8_t)0x02u);
      return c->failed?0:1;
    case 0x19DFu: /* 48 FF */
      s->a=smp_set_nz8(s,(uint8_t)(s->a^0xFFu));
      s->pc=0x19E1u;
      return c->failed?0:1;
    case 0x19E1u: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x19E2u;
      return c->failed?0:1;
    case 0x19E2u: /* F4 B1 */
      smp_a_operand(r,0xB1u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x19E4u;
      return c->failed?0:1;
    case 0x19E4u: /* 68 F1 */
      smp_compare(s,s->a,0xF1u);
      s->pc=0x19E6u;
      return c->failed?0:1;
    case 0x19E6u: /* 90 05 */
      smp_branch_finish(r,(int8_t)0x05u);
      return c->failed?0:1;
    case 0x19EDu: /* CF  */
      smp_mul(r);
      s->pc=0x19EEu;
      return c->failed?0:1;
    case 0x19EEu: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0x19EFu;
      return c->failed?0:1;
    case 0x19EFu: /* 8D 00 */
      s->y=smp_set_nz8(s,0x00u);
      s->pc=0x19F1u;
      return c->failed?0:1;
    case 0x19F1u: /* 3F 6E1A */
      smp_call(r,0x1A6Eu);
      return c->failed?0:1;
    case 0x19F4u: /* 5F 7009 */
      s->pc=0x0970u;
      return c->failed?0:1;
    case 0x19F7u: /* BB B0 */
      smp_modify_mem(r,smp_dp(s,(uint8_t)(0xB0u+s->x)),5u);
      s->pc=0x19F9u;
      return c->failed?0:1;
    case 0x19F9u: /* E3 13F8 */
      smp_bit_branch_finish(r,0x13u,(int8_t)0xF8u);
      return c->failed?0:1;
    case 0x19FCu: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x19FDu: /* F2 13 */
      smp_bit_set(r,0x13u,7u,0);
      s->pc=0x19FFu;
      return c->failed?0:1;
    case 0x19FFu: /* F4 C1 */
      smp_a_operand(r,0xC1u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x1A01u;
      return c->failed?0:1;
    case 0x1A01u: /* F0 09 */
      smp_branch_finish(r,(int8_t)0x09u);
      return c->failed?0:1;
    case 0x1A0Cu: /* F5 3103 */
      smp_a_operand(r,0x0331u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x1A0Fu;
      return c->failed?0:1;
    case 0x1A0Fu: /* FD  */
      s->y=smp_set_nz8(s,s->a);
      s->pc=0x1A10u;
      return c->failed?0:1;
    case 0x1A10u: /* F5 3003 */
      smp_a_operand(r,0x0330u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x1A13u;
      return c->failed?0:1;
    case 0x1A13u: /* DA 10 */
      smp_storew(r,0x10u);
      s->pc=0x1A15u;
      return c->failed?0:1;
    case 0x1A15u: /* F4 91 */
      smp_a_operand(r,0x91u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x1A17u;
      return c->failed?0:1;
    case 0x1A17u: /* F0 0A */
      smp_branch_finish(r,(int8_t)0x0Au);
      return c->failed?0:1;
    case 0x1A23u: /* F3 1303 */
      smp_bit_branch_finish(r,0x13u,(int8_t)0x03u);
      return c->failed?0:1;
    case 0x1A29u: /* F2 13 */
      smp_bit_set(r,0x13u,7u,0);
      s->pc=0x1A2Bu;
      return c->failed?0:1;
    case 0x1A2Bu: /* 3F ED17 */
      smp_call(r,0x17EDu);
      return c->failed?0:1;
    case 0x1A2Eu: /* F4 A0 */
      smp_a_operand(r,0xA0u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x1A30u;
      return c->failed?0:1;
    case 0x1A30u: /* F0 0E */
      smp_branch_finish(r,(int8_t)0x0Eu);
      return c->failed?0:1;
    case 0x1A40u: /* F4 B1 */
      smp_a_operand(r,0xB1u,SMP_MODE_DPX,SMP_OP_LOAD,0u);
      s->pc=0x1A42u;
      return c->failed?0:1;
    case 0x1A42u: /* F0 B5 */
      smp_branch_finish(r,(int8_t)0xB5u);
      return c->failed?0:1;
    case 0x1A44u: /* F5 B002 */
      smp_a_operand(r,0x02B0u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x1A47u;
      return c->failed?0:1;
    case 0x1A47u: /* DE B0AF */
      smp_cbne_x_finish(r,0xB0u,(int8_t)0xAFu);
      return c->failed?0:1;
    case 0x1A4Au: /* EB 51 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x51u)));
      s->pc=0x1A4Cu;
      return c->failed?0:1;
    case 0x1A4Cu: /* F5 A102 */
      smp_a_operand(r,0x02A1u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x1A4Fu;
      return c->failed?0:1;
    case 0x1A4Fu: /* CF  */
      smp_mul(r);
      s->pc=0x1A50u;
      return c->failed?0:1;
    case 0x1A50u: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0x1A51u;
      return c->failed?0:1;
    case 0x1A51u: /* 60  */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;
      s->pc=0x1A52u;
      return c->failed?0:1;
    case 0x1A52u: /* 95 A002 */
      smp_a_operand(r,0x02A0u,SMP_MODE_ABSX,SMP_OP_ADC,0u);
      s->pc=0x1A55u;
      return c->failed?0:1;
    case 0x1A55u: /* 5F D919 */
      s->pc=0x19D9u;
      return c->failed?0:1;
    case 0x1A6Eu: /* 3F 0A18 */
      smp_call(r,0x180Au);
      return c->failed?0:1;
    case 0x1A71u: /* 7A 10 */
      smp_addw(r,smp_rd_word_dp(r,s,0x10u));
      s->pc=0x1A73u;
      return c->failed?0:1;
    case 0x1A73u: /* DA 10 */
      smp_storew(r,0x10u);
      s->pc=0x1A75u;
      return c->failed?0:1;
    case 0x1A75u: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0x1A8Eu: /* EB 59 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x59u)));
      s->pc=0x1A90u;
      return c->failed?0:1;
    case 0x1A90u: /* CF  */
      smp_mul(r);
      s->pc=0x1A91u;
      return c->failed?0:1;
    case 0x1A91u: /* F5 1002 */
      smp_a_operand(r,0x0210u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x1A94u;
      return c->failed?0:1;
    case 0x1A94u: /* CF  */
      smp_mul(r);
      s->pc=0x1A95u;
      return c->failed?0:1;
    case 0x1A95u: /* F5 0103 */
      smp_a_operand(r,0x0301u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);
      s->pc=0x1A98u;
      return c->failed?0:1;
    case 0x1A98u: /* CF  */
      smp_mul(r);
      s->pc=0x1A99u;
      return c->failed?0:1;
    case 0x1A99u: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0x1A9Au;
      return c->failed?0:1;
    case 0x1A9Au: /* CF  */
      smp_mul(r);
      s->pc=0x1A9Bu;
      return c->failed?0:1;
    case 0x1A9Bu: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0x1A9Cu;
      return c->failed?0:1;
    case 0x1A9Cu: /* D5 2103 */
      smp_wr(r,(uint16_t)(0x0321u+s->x),s->a);
      s->pc=0x1A9Fu;
      return c->failed?0:1;
    case 0x1A9Fu: /* 6F  */
      smp_ret(r);
      return c->failed?0:1;
    case 0xFFC0u: /* CD EF */
      s->x=smp_set_nz8(s,0xEFu);
      s->pc=0xFFC2u;
      return c->failed?0:1;
    case 0xFFC2u: /* BD  */
      s->sp=s->x;
      s->pc=0xFFC3u;
      return c->failed?0:1;
    case 0xFFC3u: /* E8 00 */
      s->a=smp_set_nz8(s,0x00u);
      s->pc=0xFFC5u;
      return c->failed?0:1;
    case 0xFFC5u: /* C6  */
      smp_wr(r,smp_dp(s,s->x),s->a);
      s->pc=0xFFC6u;
      return c->failed?0:1;
    case 0xFFC6u: /* 1D  */
      s->x=smp_set_nz8(s,(uint8_t)(s->x-1u));
      s->pc=0xFFC7u;
      return c->failed?0:1;
    case 0xFFC7u: /* D0 FC */
      smp_branch_finish(r,(int8_t)0xFCu);
      return c->failed?0:1;
    case 0xFFC9u: /* 8F AAF4 */
      smp_wr(r,smp_dp(s,0xF4u),0xAAu);
      s->pc=0xFFCCu;
      return c->failed?0:1;
    case 0xFFCCu: /* 8F BBF5 */
      smp_wr(r,smp_dp(s,0xF5u),0xBBu);
      s->pc=0xFFCFu;
      return c->failed?0:1;
    case 0xFFCFu: /* 78 CCF4 */
      smp_dp_imm(r,0xF4u,0xCCu,3u);
      s->pc=0xFFD2u;
      return c->failed?0:1;
    case 0xFFD2u: /* D0 FB */
      smp_branch_finish(r,(int8_t)0xFBu);
      return c->failed?0:1;
    case 0xFFD4u: /* 2F 19 */
      smp_branch_finish(r,(int8_t)0x19u);
      return c->failed?0:1;
    case 0xFFD6u: /* EB F4 */
      s->y=smp_set_nz8(s,smp_rd(r,smp_dp(s,0xF4u)));
      s->pc=0xFFD8u;
      return c->failed?0:1;
    case 0xFFD8u: /* D0 FC */
      smp_branch_finish(r,(int8_t)0xFCu);
      return c->failed?0:1;
    case 0xFFDAu: /* 7E F4 */
      smp_compare(s,s->y,smp_rd(r,smp_dp(s,0xF4u)));
      s->pc=0xFFDCu;
      return c->failed?0:1;
    case 0xFFDCu: /* D0 0B */
      smp_branch_finish(r,(int8_t)0x0Bu);
      return c->failed?0:1;
    case 0xFFDEu: /* E4 F5 */
      smp_a_operand(r,0xF5u,SMP_MODE_DP,SMP_OP_LOAD,0u);
      s->pc=0xFFE0u;
      return c->failed?0:1;
    case 0xFFE0u: /* CB F4 */
      smp_wr(r,smp_dp(s,0xF4u),s->y);
      s->pc=0xFFE2u;
      return c->failed?0:1;
    case 0xFFE2u: /* D7 00 */
      smp_store_dp_ind_y(r,0x00u,s->a);
      s->pc=0xFFE4u;
      return c->failed?0:1;
    case 0xFFE4u: /* FC  */
      s->y=smp_set_nz8(s,(uint8_t)(s->y+1u));
      s->pc=0xFFE5u;
      return c->failed?0:1;
    case 0xFFE5u: /* D0 F3 */
      smp_branch_finish(r,(int8_t)0xF3u);
      return c->failed?0:1;
    case 0xFFE7u: /* AB 01 */
      smp_modify_mem(r,smp_dp(s,0x01u),5u);
      s->pc=0xFFE9u;
      return c->failed?0:1;
    case 0xFFE9u: /* 10 EF */
      smp_branch_finish(r,(int8_t)0xEFu);
      return c->failed?0:1;
    case 0xFFEBu: /* 7E F4 */
      smp_compare(s,s->y,smp_rd(r,smp_dp(s,0xF4u)));
      s->pc=0xFFEDu;
      return c->failed?0:1;
    case 0xFFEDu: /* 10 EB */
      smp_branch_finish(r,(int8_t)0xEBu);
      return c->failed?0:1;
    case 0xFFEFu: /* BA F6 */
      smp_loadw(r,0xF6u);
      s->pc=0xFFF1u;
      return c->failed?0:1;
    case 0xFFF1u: /* DA 00 */
      smp_storew(r,0x00u);
      s->pc=0xFFF3u;
      return c->failed?0:1;
    case 0xFFF3u: /* BA F4 */
      smp_loadw(r,0xF4u);
      s->pc=0xFFF5u;
      return c->failed?0:1;
    case 0xFFF5u: /* C4 F4 */
      smp_wr(r,smp_dp(s,0xF4u),s->a);
      s->pc=0xFFF7u;
      return c->failed?0:1;
    case 0xFFF7u: /* DD  */
      s->a=smp_set_nz8(s,s->y);
      s->pc=0xFFF8u;
      return c->failed?0:1;
    case 0xFFF8u: /* 5D  */
      s->x=smp_set_nz8(s,s->a);
      s->pc=0xFFF9u;
      return c->failed?0:1;
    case 0xFFF9u: /* D0 DB */
      smp_branch_finish(r,(int8_t)0xDBu);
      return c->failed?0:1;
    case 0xFFFBu: /* 1F 0000 */
      smp_jmp_abs_x_ind(r,0x0000u);
      return c->failed?0:1;
    case 0x0A02u: /* 8D 0E; Version 13 menu navigation S-SMP/SFX path */
      s->y=smp_set_nz8(s,0x0Eu);s->pc=0x0A04u;
      return c->failed?0:1;
    case 0x0A04u: /* CD 80; Version 13 menu navigation S-SMP/SFX path */
      s->x=smp_set_nz8(s,0x80u);s->pc=0x0A06u;
      return c->failed?0:1;
    case 0x0A06u: /* C9 C1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C1u,s->x);s->pc=0x0A09u;
      return c->failed?0:1;
    case 0x0A09u: /* F6 A0 03; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x03A0u,SMP_MODE_ABSY,SMP_OP_LOAD,0u);s->pc=0x0A0Cu;
      return c->failed?0:1;
    case 0x0A0Cu: /* 80; Version 13 menu navigation S-SMP/SFX path */
      s->psw|=SC_SMP_FLAG_C;s->pc=0x0A0Du;
      return c->failed?0:1;
    case 0x0A0Du: /* A8 10; Version 13 menu navigation S-SMP/SFX path */
      s->a=smp_sbc8(s,s->a,0x10u);s->pc=0x0A0Fu;
      return c->failed?0:1;
    case 0x0A0Fu: /* 64 03; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x03u,SMP_MODE_DP,SMP_OP_CMP,0u);s->pc=0x0A11u;
      return c->failed?0:1;
    case 0x0A11u: /* F0 09; Version 13 menu navigation S-SMP/SFX path */
      smp_branch_finish(r,(int8_t)0x09u);
      return c->failed?0:1;
    case 0x0A13u: /* DC; Version 13 menu navigation S-SMP/SFX path */
      s->y=smp_set_nz8(s,(uint8_t)(s->y-1u));s->pc=0x0A14u;
      return c->failed?0:1;
    case 0x0A14u: /* DC; Version 13 menu navigation S-SMP/SFX path */
      s->y=smp_set_nz8(s,(uint8_t)(s->y-1u));s->pc=0x0A15u;
      return c->failed?0:1;
    case 0x0A15u: /* 4C C1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_modify_mem(r,0x03C1u,2u);s->pc=0x0A18u;
      return c->failed?0:1;
    case 0x0A18u: /* D0 EF; Version 13 menu navigation S-SMP/SFX path */
      smp_branch_finish(r,(int8_t)0xEFu);
      return c->failed?0:1;
    case 0x0A1Au: /* 2F 31; Version 13 menu navigation S-SMP/SFX path */
      smp_branch_finish(r,(int8_t)0x31u);
      return c->failed?0:1;
    case 0x0A1Cu: /* CC C0 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C0u,s->y);s->pc=0x0A1Fu;
      return c->failed?0:1;
    case 0x0A1Fu: /* 2F 48; Version 13 menu navigation S-SMP/SFX path */
      smp_branch_finish(r,(int8_t)0x48u);
      return c->failed?0:1;
    case 0x0A21u: /* 80; Version 13 menu navigation S-SMP/SFX path */
      s->psw|=SC_SMP_FLAG_C;s->pc=0x0A22u;
      return c->failed?0:1;
    case 0x0A22u: /* E5 C8 03; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x03C8u,SMP_MODE_ABS,SMP_OP_LOAD,0u);s->pc=0x0A25u;
      return c->failed?0:1;
    case 0x0A25u: /* A8 02; Version 13 menu navigation S-SMP/SFX path */
      s->a=smp_sbc8(s,s->a,0x02u);s->pc=0x0A27u;
      return c->failed?0:1;
    case 0x0A27u: /* 28 0F; Version 13 menu navigation S-SMP/SFX path */
      s->a=smp_set_nz8(s,(uint8_t)(s->a&0x0Fu));s->pc=0x0A29u;
      return c->failed?0:1;
    case 0x0A29u: /* C5 C0 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C0u,s->a);s->pc=0x0A2Cu;
      return c->failed?0:1;
    case 0x0A2Cu: /* 60; Version 13 menu navigation S-SMP/SFX path */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;s->pc=0x0A2Du;
      return c->failed?0:1;
    case 0x0A2Du: /* E5 C9 03; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x03C9u,SMP_MODE_ABS,SMP_OP_LOAD,0u);s->pc=0x0A30u;
      return c->failed?0:1;
    case 0x0A30u: /* 5C; Version 13 menu navigation S-SMP/SFX path */
      s->a=smp_modify(s,s->a,2u);s->pc=0x0A31u;
      return c->failed?0:1;
    case 0x0A31u: /* C5 C1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C1u,s->a);s->pc=0x0A34u;
      return c->failed?0:1;
    case 0x0A34u: /* D0 05; Version 13 menu navigation S-SMP/SFX path */
      smp_branch_finish(r,(int8_t)0x05u);
      return c->failed?0:1;
    case 0x0A36u: /* E8 80; Version 13 menu navigation S-SMP/SFX path */
      s->a=smp_set_nz8(s,0x80u);s->pc=0x0A38u;
      return c->failed?0:1;
    case 0x0A38u: /* C5 C1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C1u,s->a);s->pc=0x0A3Bu;
      return c->failed?0:1;
    case 0x0A3Bu: /* E5 C0 03; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x03C0u,SMP_MODE_ABS,SMP_OP_LOAD,0u);s->pc=0x0A3Eu;
      return c->failed?0:1;
    case 0x0A3Eu: /* C5 C8 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C8u,s->a);s->pc=0x0A41u;
      return c->failed?0:1;
    case 0x0A41u: /* E5 C1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x03C1u,SMP_MODE_ABS,SMP_OP_LOAD,0u);s->pc=0x0A44u;
      return c->failed?0:1;
    case 0x0A44u: /* C5 C9 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C9u,s->a);s->pc=0x0A47u;
      return c->failed?0:1;
    case 0x0A47u: /* 04 1A; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x1Au,SMP_MODE_DP,SMP_OP_LOGIC,0u);s->pc=0x0A49u;
      return c->failed?0:1;
    case 0x0A49u: /* C4 1A; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,smp_dp(s,0x1Au),s->a);s->pc=0x0A4Bu;
      return c->failed?0:1;
    case 0x0A4Bu: /* 2F 2C; Version 13 menu navigation S-SMP/SFX path */
      smp_branch_finish(r,(int8_t)0x2Cu);
      return c->failed?0:1;
    case 0x0A4Du: /* E8 FF; Version 13 menu navigation S-SMP/SFX path */
      s->a=smp_set_nz8(s,0xFFu);s->pc=0x0A4Fu;
      return c->failed?0:1;
    case 0x0A4Fu: /* 2E 1A 02; Version 13 menu navigation S-SMP/SFX path */
      smp_branch_finish(r,(int8_t)0x02u);
      return c->failed?0:1;
    case 0x0A52u: /* 2F CD; Version 13 menu navigation S-SMP/SFX path */
      smp_branch_finish(r,(int8_t)0xCDu);
      return c->failed?0:1;
    case 0x0A54u: /* 60; Version 13 menu navigation S-SMP/SFX path */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;s->pc=0x0A55u;
      return c->failed?0:1;
    case 0x0A55u: /* CD 1A; Version 13 menu navigation S-SMP/SFX path */
      s->x=smp_set_nz8(s,0x1Au);s->pc=0x0A57u;
      return c->failed?0:1;
    case 0x0A57u: /* E8 80; Version 13 menu navigation S-SMP/SFX path */
      s->a=smp_set_nz8(s,0x80u);s->pc=0x0A59u;
      return c->failed?0:1;
    case 0x0A59u: /* C5 C1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C1u,s->a);s->pc=0x0A5Cu;
      return c->failed?0:1;
    case 0x0A5Cu: /* 8D 0E; Version 13 menu navigation S-SMP/SFX path */
      s->y=smp_set_nz8(s,0x0Eu);s->pc=0x0A5Eu;
      return c->failed?0:1;
    case 0x0A5Eu: /* 26; Alpha 2 corrected SPC700 boundary */
      smp_a_operand(r,0u,SMP_MODE_X,SMP_OP_LOGIC,1u);s->pc=0x0A5Fu;
      return c->failed?0:1;
    case 0x0A5Fu: /* F0 08; Alpha 2 recovered BEQ */
      smp_branch_finish(r,(int8_t)0x08u);
      return c->failed?0:1;
    case 0x0A61u: /* DC; Alpha 2 recovered DEC Y */
      s->y=smp_set_nz8(s,(uint8_t)(s->y-1u));s->pc=0x0A62u;
      return c->failed?0:1;
    case 0x0A62u: /* DC; Version 13 menu navigation S-SMP/SFX path */
      s->y=smp_set_nz8(s,(uint8_t)(s->y-1u));s->pc=0x0A63u;
      return c->failed?0:1;
    case 0x0A63u: /* 4C C1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_modify_mem(r,0x03C1u,2u);s->pc=0x0A66u;
      return c->failed?0:1;
    case 0x0A66u: /* 5C; Version 13 menu navigation S-SMP/SFX path */
      s->a=smp_modify(s,s->a,2u);s->pc=0x0A67u;
      return c->failed?0:1;
    case 0x0A67u: /* 90 F5; Version 13 menu navigation S-SMP/SFX path */
      smp_branch_finish(r,(int8_t)0xF5u);
      return c->failed?0:1;
    case 0x0A69u: /* CC C0 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C0u,s->y);s->pc=0x0A6Cu;
      return c->failed?0:1;
    case 0x0A6Cu: /* CC C8 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C8u,s->y);s->pc=0x0A6Fu;
      return c->failed?0:1;
    case 0x0A6Fu: /* E5 C1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x03C1u,SMP_MODE_ABS,SMP_OP_LOAD,0u);s->pc=0x0A72u;
      return c->failed?0:1;
    case 0x0A72u: /* C5 C9 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C9u,s->a);s->pc=0x0A75u;
      return c->failed?0:1;
    case 0x0A75u: /* 04 1A; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x1Au,SMP_MODE_DP,SMP_OP_LOGIC,0u);s->pc=0x0A77u;
      return c->failed?0:1;
    case 0x0A77u: /* C4 1A; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,smp_dp(s,0x1Au),s->a);s->pc=0x0A79u;
      return c->failed?0:1;
    case 0x0A79u: /* E5 C1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x03C1u,SMP_MODE_ABS,SMP_OP_LOAD,0u);s->pc=0x0A7Cu;
      return c->failed?0:1;
    case 0x0A7Cu: /* 24 4A; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x4Au,SMP_MODE_DP,SMP_OP_LOGIC,1u);s->pc=0x0A7Eu;
      return c->failed?0:1;
    case 0x0A7Eu: /* F0 0D; Version 13 menu navigation S-SMP/SFX path */
      smp_branch_finish(r,(int8_t)0x0Du);
      return c->failed?0:1;
    case 0x0A80u: /* E4 4A; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x4Au,SMP_MODE_DP,SMP_OP_LOAD,0u);s->pc=0x0A82u;
      return c->failed?0:1;
    case 0x0A82u: /* 80; Version 13 menu navigation S-SMP/SFX path */
      s->psw|=SC_SMP_FLAG_C;s->pc=0x0A83u;
      return c->failed?0:1;
    case 0x0A83u: /* A5 C1 03; Alpha 2 corrected SPC700 boundary */
      smp_a_operand(r,0x03C1u,SMP_MODE_ABS,SMP_OP_SBC,0u);s->pc=0x0A86u;
      return c->failed?0:1;
    case 0x0A86u: /* C4 4A; Alpha 2 recovered MOV $4A,A */
      smp_wr(r,smp_dp(s,0x4Au),s->a);s->pc=0x0A88u;
      return c->failed?0:1;
    case 0x0A88u: /* 8D 4D; Version 13 menu navigation S-SMP/SFX path */
      s->y=smp_set_nz8(s,0x4Du);s->pc=0x0A8Au;
      return c->failed?0:1;
    case 0x0A8Au: /* 3F FB 09; Version 13 menu navigation S-SMP/SFX path */
      smp_call(r,0x09FBu);
      return c->failed?0:1;
    case 0x0A8Du: /* 6F; Version 13 menu navigation S-SMP/SFX path */
      smp_ret(r);
      return c->failed?0:1;
    case 0x0A8Eu: /* E9 C4 03; Version 13 menu navigation S-SMP/SFX path */
      s->x=smp_set_nz8(s,smp_rd(r,0x03C4u));s->pc=0x0A91u;
      return c->failed?0:1;
    case 0x0A91u: /* C9 C0 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C0u,s->x);s->pc=0x0A94u;
      return c->failed?0:1;
    case 0x0A94u: /* EC C5 03; Version 13 menu navigation S-SMP/SFX path */
      s->y=smp_set_nz8(s,smp_rd(r,0x03C5u));s->pc=0x0A97u;
      return c->failed?0:1;
    case 0x0A97u: /* CC C1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C1u,s->y);s->pc=0x0A9Au;
      return c->failed?0:1;
    case 0x0A9Au: /* E5 C1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x03C1u,SMP_MODE_ABS,SMP_OP_LOAD,0u);s->pc=0x0A9Du;
      return c->failed?0:1;
    case 0x0A9Du: /* 8D 5C; Version 13 menu navigation S-SMP/SFX path */
      s->y=smp_set_nz8(s,0x5Cu);s->pc=0x0A9Fu;
      return c->failed?0:1;
    case 0x0A9Fu: /* 3F FB 09; Version 13 menu navigation S-SMP/SFX path */
      smp_call(r,0x09FBu);
      return c->failed?0:1;
    case 0x0AA2u: /* 3F 5E 0B; Version 13 menu navigation S-SMP/SFX path */
      smp_call(r,0x0B5Eu);
      return c->failed?0:1;
    case 0x0AA5u: /* 6F; Version 13 menu navigation S-SMP/SFX path */
      smp_ret(r);
      return c->failed?0:1;
    case 0x0AD7u: /* 3F 02 0A; Version 13 menu navigation S-SMP/SFX path */
      smp_call(r,0x0A02u);
      return c->failed?0:1;
    case 0x0ADAu: /* E9 C0 03; Version 13 menu navigation S-SMP/SFX path */
      s->x=smp_set_nz8(s,smp_rd(r,0x03C0u));s->pc=0x0ADDu;
      return c->failed?0:1;
    case 0x0ADDu: /* E4 03; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x03u,SMP_MODE_DP,SMP_OP_LOAD,0u);s->pc=0x0ADFu;
      return c->failed?0:1;
    case 0x0ADFu: /* 68 09; Version 13 menu navigation S-SMP/SFX path */
      smp_compare(s,s->a,0x09u);s->pc=0x0AE1u;
      return c->failed?0:1;
    case 0x0AE1u: /* D0 09; Version 13 menu navigation S-SMP/SFX path */
      smp_branch_finish(r,(int8_t)0x09u);
      return c->failed?0:1;
    case 0x0AE3u: /* C9 C4 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C4u,s->x);s->pc=0x0AE6u;
      return c->failed?0:1;
    case 0x0AE6u: /* EC C1 03; Version 13 menu navigation S-SMP/SFX path */
      s->y=smp_set_nz8(s,smp_rd(r,0x03C1u));s->pc=0x0AE9u;
      return c->failed?0:1;
    case 0x0AE9u: /* CC C5 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,0x03C5u,s->y);s->pc=0x0AECu;
      return c->failed?0:1;
    case 0x0AECu: /* 60; Version 13 menu navigation S-SMP/SFX path */
      s->psw&=(uint8_t)~SC_SMP_FLAG_C;s->pc=0x0AEDu;
      return c->failed?0:1;
    case 0x0AEDu: /* 88 10; Version 13 menu navigation S-SMP/SFX path */
      s->a=smp_adc8(s,s->a,0x10u);s->pc=0x0AEFu;
      return c->failed?0:1;
    case 0x0AEFu: /* D5 A0 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,(uint16_t)(0x03A0u+s->x),s->a);s->pc=0x0AF2u;
      return c->failed?0:1;
    case 0x0AF2u: /* E8 03; Version 13 menu navigation S-SMP/SFX path */
      s->a=smp_set_nz8(s,0x03u);s->pc=0x0AF4u;
      return c->failed?0:1;
    case 0x0AF4u: /* D5 A1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,(uint16_t)(0x03A1u+s->x),s->a);s->pc=0x0AF7u;
      return c->failed?0:1;
    case 0x0AF7u: /* E8 00; Version 13 menu navigation S-SMP/SFX path */
      s->a=smp_set_nz8(s,0x00u);s->pc=0x0AF9u;
      return c->failed?0:1;
    case 0x0AF9u: /* D5 80 02; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,(uint16_t)(0x0280u+s->x),s->a);s->pc=0x0AFCu;
      return c->failed?0:1;
    case 0x0AFCu: /* E5 C1 03; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x03C1u,SMP_MODE_ABS,SMP_OP_LOAD,0u);s->pc=0x0AFFu;
      return c->failed?0:1;
    case 0x0AFFu: /* 8D 5C; Version 13 menu navigation S-SMP/SFX path */
      s->y=smp_set_nz8(s,0x5Cu);s->pc=0x0B01u;
      return c->failed?0:1;
    case 0x0B01u: /* 3F FB 09; Version 13 menu navigation S-SMP/SFX path */
      smp_call(r,0x09FBu);
      return c->failed?0:1;
    case 0x0B04u: /* F8 03; Version 13 menu navigation S-SMP/SFX path */
      s->x=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x03u)));s->pc=0x0B06u;
      return c->failed?0:1;
    case 0x0B06u: /* F5 12 0E; Version 13 menu navigation S-SMP/SFX path */
      smp_a_operand(r,0x0E12u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);s->pc=0x0B09u;
      return c->failed?0:1;
    case 0x0B09u: /* C4 03; Version 13 menu navigation S-SMP/SFX path */
      smp_wr(r,smp_dp(s,0x03u),s->a);s->pc=0x0B0Bu;
      return c->failed?0:1;
    case 0x0B0Bu: /* D0 CA; Version 13 menu navigation S-SMP/SFX path */
      smp_branch_finish(r,(int8_t)0xCAu);
      return c->failed?0:1;
    case 0x0B0Du: /* 6F; Version 13 menu navigation S-SMP/SFX path */
      smp_ret(r);
      return c->failed?0:1;
    case 0x0B0Eu: /* 3F 4D 0A; Version 14 new-city S-SMP path */
      smp_call(r,0x0A4Du);
      return c->failed?0:1;
    case 0x0B11u: /* E9 C0 03; Version 14 new-city S-SMP path */
      s->x=smp_set_nz8(s,smp_rd(r,0x03C0u));s->pc=0x0B14u;
      return c->failed?0:1;
    case 0x0B14u: /* E4 02; Version 14 new-city S-SMP path */
      smp_a_operand(r,0x02u,SMP_MODE_DP,SMP_OP_LOAD,0u);s->pc=0x0B16u;
      return c->failed?0:1;
    case 0x0B16u: /* D5 A0 03; Version 14 new-city S-SMP path */
      smp_wr(r,(uint16_t)(0x03A0u+s->x),s->a);s->pc=0x0B19u;
      return c->failed?0:1;
    case 0x0B19u: /* E8 03; Version 14 new-city S-SMP path */
      s->a=smp_set_nz8(s,0x03u);s->pc=0x0B1Bu;
      return c->failed?0:1;
    case 0x0B1Bu: /* D5 A1 03; Version 14 new-city S-SMP path */
      smp_wr(r,(uint16_t)(0x03A1u+s->x),s->a);s->pc=0x0B1Eu;
      return c->failed?0:1;
    case 0x0B1Eu: /* E8 00; Version 14 new-city S-SMP path */
      s->a=smp_set_nz8(s,0x00u);s->pc=0x0B20u;
      return c->failed?0:1;
    case 0x0B20u: /* D5 80 02; Version 14 new-city S-SMP path */
      smp_wr(r,(uint16_t)(0x0280u+s->x),s->a);s->pc=0x0B23u;
      return c->failed?0:1;
    case 0x0B23u: /* E5 C1 03; Version 14 new-city S-SMP path */
      smp_a_operand(r,0x03C1u,SMP_MODE_ABS,SMP_OP_LOAD,0u);s->pc=0x0B26u;
      return c->failed?0:1;
    case 0x0B26u: /* 8D 5C; Version 14 new-city S-SMP path */
      s->y=smp_set_nz8(s,0x5Cu);s->pc=0x0B28u;
      return c->failed?0:1;
    case 0x0B28u: /* 3F FB 09; Version 14 new-city S-SMP path */
      smp_call(r,0x09FBu);
      return c->failed?0:1;
    case 0x0B2Bu: /* F8 02; Version 14 new-city S-SMP path */
      s->x=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x02u)));s->pc=0x0B2Du;
      return c->failed?0:1;
    case 0x0B2Du: /* F5 95 0D; Version 14 new-city S-SMP path */
      smp_a_operand(r,0x0D95u,SMP_MODE_ABSX,SMP_OP_LOAD,0u);s->pc=0x0B30u;
      return c->failed?0:1;
    case 0x0B30u: /* C4 02; Version 14 new-city S-SMP path */
      smp_wr(r,smp_dp(s,0x02u),s->a);s->pc=0x0B32u;
      return c->failed?0:1;
    case 0x0B32u: /* D0 DA; Version 14 new-city S-SMP path */
      smp_branch_finish(r,(int8_t)0xDAu);
      return c->failed?0:1;
    case 0x0B34u: /* 6F; Version 14 new-city S-SMP path */
      smp_ret(r);
      return c->failed?0:1;
    case 0x13ADu: /* E4 1A; Alpha 1 recorder no-input S-SMP extension */
      smp_a_operand(r,0x1Au,SMP_MODE_DP,SMP_OP_LOAD,0u);s->pc=0x13AFu;
      return c->failed?0:1;
    case 0x13AFu: /* 48 FF; Alpha 1 recorder no-input S-SMP extension */
      s->a=smp_set_nz8(s,(uint8_t)(s->a^0xFFu));s->pc=0x13B1u;
      return c->failed?0:1;
    case 0x13B1u: /* 0E 46 00; Alpha 1 recorder no-input S-SMP extension */
      smp_tset(r,0x0046u,1);s->pc=0x13B4u;
      return c->failed?0:1;
    case 0x13B4u: /* 8F 00 0D; Alpha 1 recorder no-input S-SMP extension */
      smp_wr(r,smp_dp(s,0x0Du),0x00u);s->pc=0x13B7u;
      return c->failed?0:1;
    case 0x13B7u: /* 8F 00 47; Alpha 1 recorder no-input S-SMP extension */
      smp_wr(r,smp_dp(s,0x47u),0x00u);s->pc=0x13BAu;
      return c->failed?0:1;
    case 0x13BAu: /* 6F; Alpha 1 recorder no-input S-SMP extension */
      smp_ret(r);
      return c->failed?0:1;
    case 0x1458u: /* FD; Alpha 1 recorder no-input S-SMP extension */
      s->y=smp_set_nz8(s,s->a);s->pc=0x1459u;
      return c->failed?0:1;
    case 0x1459u: /* D0 03; Alpha 1 recorder no-input S-SMP extension */
      smp_branch_finish(r,(int8_t)0x03u);
      return c->failed?0:1;
    case 0x145Bu: /* 5F AD 13; Alpha 1 recorder no-input S-SMP extension */
      s->pc=0x13ADu;
      return c->failed?0:1;
    case 0x145Eu: /* 68 80; Alpha 1 recorder no-input S-SMP extension */
      smp_compare(s,s->a,0x80u);s->pc=0x1460u;
      return c->failed?0:1;
    case 0x1460u: /* F0 06; Alpha 1 recorder no-input S-SMP extension */
      smp_branch_finish(r,(int8_t)0x06u);
      return c->failed?0:1;
    case 0x1462u: /* 68 81; Alpha 1 recorder no-input S-SMP extension */
      smp_compare(s,s->a,0x81u);s->pc=0x1464u;
      return c->failed?0:1;
    case 0x1464u: /* D0 06; Alpha 1 recorder no-input S-SMP extension */
      smp_branch_finish(r,(int8_t)0x06u);
      return c->failed?0:1;
    case 0x1466u: /* E8 00; Alpha 1 recorder no-input S-SMP extension */
      s->a=smp_set_nz8(s,0x00u);s->pc=0x1468u;
      return c->failed?0:1;
    case 0x1468u: /* C4 1B; Alpha 1 recorder no-input S-SMP extension */
      smp_wr(r,smp_dp(s,0x1Bu),s->a);s->pc=0x146Au;
      return c->failed?0:1;
    case 0x146Au: /* 2F E7; Alpha 1 recorder no-input S-SMP extension */
      smp_branch_finish(r,(int8_t)0xE7u);
      return c->failed?0:1;
    case 0x146Cu: /* 8B 42; Alpha 1 recorder no-input S-SMP extension */
      smp_modify_mem(r,smp_dp(s,0x42u),4u);s->pc=0x146Eu;
      return c->failed?0:1;
    case 0x146Eu: /* 10 02; Alpha 1 recorder no-input S-SMP extension */
      smp_branch_finish(r,(int8_t)0x02u);
      return c->failed?0:1;
    case 0x1470u: /* C4 42; Alpha 1 recorder no-input S-SMP extension */
      smp_wr(r,smp_dp(s,0x42u),s->a);s->pc=0x1472u;
      return c->failed?0:1;
    case 0x1472u: /* 3F BB 13; Alpha 1 recorder no-input S-SMP extension */
      smp_call(r,0x13BBu);
      return c->failed?0:1;
    case 0x1475u: /* F8 42; Alpha 1 recorder no-input S-SMP extension */
      s->x=smp_set_nz8(s,smp_rd(r,smp_dp(s,0x42u)));s->pc=0x1477u;
      return c->failed?0:1;
    case 0x1477u: /* F0 DA; Alpha 1 recorder no-input S-SMP extension */
      smp_branch_finish(r,(int8_t)0xDAu);
      return c->failed?0:1;
    case 0x1479u: /* DA 40; Alpha 1 recorder no-input S-SMP extension */
      smp_storew(r,0x40u);s->pc=0x147Bu;
      return c->failed?0:1;
    case 0x147Bu: /* 2F D6; Alpha 1 recorder no-input S-SMP extension */
      smp_branch_finish(r,(int8_t)0xD6u);
      return c->failed?0:1;
    default:return smp_fail(r,"unknown completing S-SMP PC");
  }
}
