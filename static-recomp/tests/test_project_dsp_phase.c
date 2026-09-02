#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "simcity/simcity_dsp.h"

static int fail(const char *m){fprintf(stderr,"FAIL: %s\n",m);return 0;}
static void all_known(uint8_t known[8192]){memset(known,0xff,8192);}
static int stepn(simcity_dsp *d,unsigned n){unsigned i;for(i=0;i<n;i++)if(simcity_dsp_step_phase(d)!=SIMCITY_DSP_STOP_NONE)return 0;return 1;}
static void wr(simcity_dsp *d,uint8_t r,uint8_t v){(void)simcity_dsp_write_register(d,r,v);}

static int test_phase_and_pcm_commit(void){
    uint8_t a[65536]={0},k[8192];simcity_dsp d;all_known(k);simcity_dsp_power_on(&d,a,k);
    if(d.phase!=0u)return fail("power-on phase");
    if(!stepn(&d,27u))return fail("phase pre-PCM");
    if(d.phase!=27u||d.pcm_frames_produced!=0u)return fail("PCM committed before phase 27");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("phase 27");
    if(d.phase!=28u||d.pcm_frames_produced!=1u)return fail("PCM not committed at phase 27");
    if(!stepn(&d,4u))return fail("phase wrap");
    if(d.phase!=0u||d.sample_steps!=1u||d.phase_steps!=32u)return fail("32-phase wrap/sample count");
    return 1;
}

static int test_dir_and_pmon_latches(void){
    uint8_t a[65536]={0},k[8192];simcity_dsp d;all_known(k);simcity_dsp_power_on(&d,a,k);
    wr(&d,0x5d,0x12);wr(&d,0x2d,0xff);
    if(!stepn(&d,27u))return fail("latch pre27");
    if(d.pmon_latch!=0u)return fail("PMON latched early");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("latch phase27");
    if(d.pmon_latch!=0xfeu)return fail("PMON phase27 latch");
    if(d.dir_latch!=0u)return fail("DIR latched before phase28");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("latch phase28");
    if(d.dir_latch!=0x12u)return fail("DIR phase28 latch");
    wr(&d,0x5d,0x34);
    if(!stepn(&d,31u))return fail("DIR next-cycle pre28");
    if(d.phase!=28u||d.dir_latch!=0x12u)return fail("post-latch DIR changed too early");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("DIR next phase28");
    if(d.dir_latch!=0x34u)return fail("DIR did not relatch next phase28");
    return 1;
}

static int test_echo_write_phases(void){
    uint8_t a[65536]={0},k[8192];simcity_dsp d;all_known(k);simcity_dsp_power_on(&d,a,k);
    wr(&d,0x6c,0x00);wr(&d,0x7d,0x01);wr(&d,0x6d,0x00);
    if(!stepn(&d,29u))return fail("echo pre29");
    if(d.aram_writes!=0u)return fail("echo wrote before phase29");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("echo phase29");
    if(d.aram_writes!=2u)return fail("left echo write not phase29");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("echo phase30");
    if(d.aram_writes!=4u)return fail("right echo write not phase30");
    return 1;
}

static int test_noise_phase30(void){
    uint8_t a[65536]={0},k[8192];simcity_dsp d;all_known(k);simcity_dsp_power_on(&d,a,k);
    wr(&d,0x6c,0x3f);
    if(!stepn(&d,30u))return fail("noise pre30");
    if(d.noise_lfsr!=0x4000u)return fail("noise advanced early");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("noise phase30");
    if(d.noise_lfsr!=0x2000u)return fail("noise not advanced phase30");
    return 1;
}

static int test_master_volume_hazard(void){
    uint8_t a1[65536]={0},k1[8192],a2[65536]={0},k2[8192];simcity_dsp x,y;int16_t p[2];
    all_known(k1);all_known(k2);simcity_dsp_power_on(&x,a1,k1);simcity_dsp_power_on(&y,a2,k2);
    wr(&x,0x6c,0x20);wr(&y,0x6c,0x20); /* no mute, echo writes disabled */
    x.out_samples[0]=1000;y.out_samples[0]=1000;
    if(!stepn(&x,26u)||!stepn(&y,26u))return fail("MVOL pre26");
    wr(&x,0x0c,0x7f); /* before phase26 latch/read */
    if(simcity_dsp_step_phase(&x)!=SIMCITY_DSP_STOP_NONE||simcity_dsp_step_phase(&y)!=SIMCITY_DSP_STOP_NONE)return fail("MVOL phase26");
    wr(&y,0x0c,0x7f); /* after phase26: must wait until next sample */
    if(simcity_dsp_step_phase(&x)!=SIMCITY_DSP_STOP_NONE||simcity_dsp_step_phase(&y)!=SIMCITY_DSP_STOP_NONE)return fail("MVOL phase27");
    if(simcity_dsp_pcm_read(&x,p,1u)!=1u||p[0]!=992)return fail("pre-phase26 MVOLL not visible this sample");
    if(simcity_dsp_pcm_read(&y,p,1u)!=1u||p[0]!=0)return fail("post-phase26 MVOLL leaked into current sample");
    return 1;
}

static int test_unknown_aram_consumption_boundary(void){
    uint8_t a[65536]={0},k[8192]={0};simcity_dsp d;simcity_dsp_stop_reason s;unsigned i;
    simcity_dsp_power_on(&d,a,k);
    /* Inactive pipeline ARAM reads are recorded but do not create authority or stop reset execution. */
    for(i=0;i<32u;i++){s=simcity_dsp_step_phase(&d);if(s!=SIMCITY_DSP_STOP_NONE)return fail("irrelevant unknown ARAM stopped reset DSP");}
    if(d.aram_unknown_reads==0u)return fail("unknown ARAM accesses were not tracked");
    /* Force the hardware-latched KON path for voice 1. Its next start pointer is unknown. */
    d.key_on=0x02u;d.every_other_sample=1u;
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("voice1 step2 optional pointer read"); /* phase0 */
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("voice1 KON arm"); /* phase1 */
    while(d.phase!=0u)if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("finish KON arm sample");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("voice1 start-pointer phase0");
    s=simcity_dsp_step_phase(&d); /* voice1 Step3 consumes the unknown start pointer */
    if(s!=SIMCITY_DSP_STOP_ARAM_REQUIRED_UNKNOWN)return fail("unknown start pointer did not fail at semantic consumption phase");
    if(d.phase!=1u)return fail("fail-closed phase moved after required unknown consumption");
    return 1;
}


static int test_visible_register_pipeline(void){
    uint8_t a[65536]={0},k[8192];simcity_dsp d;all_known(k);simcity_dsp_power_on(&d,a,k);
    d.looped=0x01u;d.voice_output=0x1234;d.voices[0].env_out=0x56u;
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("visible phase0");
    if(d.regs[0x7c]!=0u)return fail("ENDX visible at Step5 prepare");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("visible phase1");
    if(d.regs[0x09]!=0u)return fail("OUTX visible at Step6 prepare");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("visible phase2");
    if(d.regs[0x7c]!=0x01u)return fail("ENDX not visible at Step7");
    if(d.regs[0x08]!=0u)return fail("ENVX visible at Step7 prepare");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("visible phase3");
    if(d.regs[0x09]!=0x12u)return fail("OUTX not visible at Step8");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("visible phase4");
    if(d.regs[0x08]!=0x56u)return fail("ENVX not visible at Step9");
    return 1;
}

static int test_kon_koff_every_other_latch(void){
    uint8_t a[65536]={0},k[8192];simcity_dsp d;all_known(k);simcity_dsp_power_on(&d,a,k);
    wr(&d,0x4c,0x04u);wr(&d,0x5c,0x08u);
    if(!stepn(&d,30u))return fail("KON first phase30 pre");
    if(d.phase!=30u||d.key_on!=0u||d.key_off!=0u)return fail("KON/KOFF latched before first phase30");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("KON first phase30");
    if(d.key_on!=0u||d.key_off!=0u)return fail("KON/KOFF loaded on wrong every-other sample");
    if(!stepn(&d,31u))return fail("KON second phase30 pre");
    if(d.phase!=30u)return fail("KON second phase alignment");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("KON second phase30");
    if(d.key_on!=0x04u||d.key_off!=0x08u)return fail("KON/KOFF did not latch on second phase30");
    return 1;
}

static int test_brr_header_data_access_phase(void){
    uint8_t a[65536]={0},k[8192];simcity_dsp d;all_known(k);simcity_dsp_power_on(&d,a,k);
    d.voices[0].brr_address=0x1234u;d.voices[0].brr_offset=1u;a[0x1234]=0xa5u;a[0x1235]=0x5au;
    if(!stepn(&d,25u))return fail("BRR pre phase25");
    if(d.brr_header==0xa5u||d.brr_data==0x5au)return fail("BRR bytes latched before phase25");
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("BRR phase25");
    if(d.brr_header!=0xa5u||d.brr_data!=0x5au||!d.brr_header_known||!d.brr_data_known)return fail("BRR header/data not latched phase25");
    if(d.last_aram_phase!=25u||d.last_aram_address!=0x1235u)return fail("BRR phase25 ARAM access record");
    return 1;
}

static int test_gaussian_window_starts_at_current_sample(void){
    uint8_t a[65536]={0},k[8192];simcity_dsp d;all_known(k);simcity_dsp_power_on(&d,a,k);
    d.phase=1u;d.voices[1].buffer_pos=4u;d.voices[1].sample_buffer[3]=30000;
    d.voices[1].envelope=0x7ff;d.pitch=0u;
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("Gaussian production phase");
    if(d.voice_output!=0)return fail("Gaussian window consumed stale previous ring sample");
    return 1;
}

static int test_pitch_modulation_uses_15_bit_latch(void){
    uint8_t a[65536]={0},k[8192];simcity_dsp d;uint16_t expected;all_known(k);simcity_dsp_power_on(&d,a,k);
    d.phase=1u;d.pmon_latch=0x02u;d.voice_output=32766;d.pitch=0xffu;
    wr(&d,0x12,0xffu);wr(&d,0x13,0x3fu);
    expected=(uint16_t)((0x3fffu+((((32766>>5)*0x3fff) >> 10)))&0x7fffu);
    if(simcity_dsp_step_phase(&d)!=SIMCITY_DSP_STOP_NONE)return fail("pitch-modulation production phase");
    if(d.pitch!=expected||d.pitch<=0x3fffu)return fail("pitch modulation was clamped to 14 bits");
    return 1;
}

static int test_v10_32_zero_fixture_compatibility(void){
    uint8_t a[65536]={0},k[8192];simcity_dsp d;unsigned i;all_known(k);simcity_dsp_power_on(&d,a,k);
    for(i=0;i<32u;i++)if(simcity_dsp_step_sample(&d)!=SIMCITY_DSP_STOP_NONE)return fail("zero fixture sample");
    if(d.pcm_frames_produced!=32u)return fail("zero fixture frame count");
    if(simcity_dsp_pcm_hash(&d)!=UINT64_C(0x8421ae126c7ced25))return fail("V10.32 zero-fixture PCM hash compatibility");
    return 1;
}

int main(void){
    if(!test_phase_and_pcm_commit())return 1;
    if(!test_dir_and_pmon_latches())return 1;
    if(!test_echo_write_phases())return 1;
    if(!test_noise_phase30())return 1;
    if(!test_master_volume_hazard())return 1;
    if(!test_unknown_aram_consumption_boundary())return 1;
    if(!test_visible_register_pipeline())return 1;
    if(!test_kon_koff_every_other_latch())return 1;
    if(!test_brr_header_data_access_phase())return 1;
    if(!test_gaussian_window_starts_at_current_sample())return 1;
    if(!test_pitch_modulation_uses_15_bit_latch())return 1;
    if(!test_v10_32_zero_fixture_compatibility())return 1;
    puts("SimCity project-owned static S-DSP 32-phase microtiming tests PASS");
    return 0;
}
