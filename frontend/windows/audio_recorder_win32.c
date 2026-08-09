#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif
#include "audio_recorder_win32.h"
#include "simcity_static_recomp.h"
#include <stdio.h>
#include <string.h>
#include <wchar.h>

static void le16(unsigned char *p,unsigned v){p[0]=(unsigned char)v;p[1]=(unsigned char)(v>>8);}
static void le32(unsigned char *p,uint32_t v){p[0]=(unsigned char)v;p[1]=(unsigned char)(v>>8);p[2]=(unsigned char)(v>>16);p[3]=(unsigned char)(v>>24);}
static int write_header(FILE *f,uint64_t frames){
    unsigned char h[44];uint64_t data64=frames*4u;uint32_t data;
    if(!f||data64>UINT32_MAX-36u)return 0;
    data=(uint32_t)data64;
    memset(h,0,sizeof(h));memcpy(h,"RIFF",4);le32(h+4,36u+data);memcpy(h+8,"WAVEfmt ",8);le32(h+16,16);le16(h+20,1);le16(h+22,2);le32(h+24,SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE);le32(h+28,SIMCITY_RECOMP_HOST_AUDIO_SAMPLE_RATE*4u);le16(h+32,4);le16(h+34,16);memcpy(h+36,"data",4);le32(h+40,data);return fflush(f)==0&&fseek(f,0,SEEK_SET)==0&&fwrite(h,1,44,f)==44;
}
void simcity_audio_recorder_win32_init(SimCityAudioRecorderWin32 *r){if(r)memset(r,0,sizeof(*r));}
int simcity_audio_recorder_win32_start(SimCityAudioRecorderWin32 *r,const wchar_t *dir){
    SYSTEMTIME t;const wchar_t *folder=dir&&dir[0]?dir:L".";unsigned char zero[44]={0};int written;unsigned attempt;
    if(!r||r->file)return 0;
    r->last_error[0]=L'\0';r->write_failed=0;GetLocalTime(&t);
    for(attempt=0;attempt<100u;attempt++){
        written=_snwprintf(r->path,4096,
            attempt==0u?
            L"%s\\SimCity-Full-Static-%04u%02u%02u-%02u%02u%02u-%03u.wav":
            L"%s\\SimCity-Full-Static-%04u%02u%02u-%02u%02u%02u-%03u-%02u.wav",
            folder,t.wYear,t.wMonth,t.wDay,t.wHour,t.wMinute,t.wSecond,
            t.wMilliseconds,attempt);
        if(written<0||written>=4096){
            r->path[0]=L'\0';wcscpy(r->last_error,L"The audio recording path is too long.");return 0;
        }
        if(GetFileAttributesW(r->path)==INVALID_FILE_ATTRIBUTES)break;
    }
    if(attempt==100u){wcscpy(r->last_error,L"Unable to choose a unique WAV filename.");return 0;}
    r->file=_wfopen(r->path,L"wb+");if(!r->file){wcscpy(r->last_error,L"Unable to create the WAV file.");return 0;}if(fwrite(zero,1,44,r->file)!=44){fclose(r->file);r->file=NULL;DeleteFileW(r->path);wcscpy(r->last_error,L"Unable to reserve the WAV header.");return 0;}r->frames_written=0;return 1;
}
int simcity_audio_recorder_win32_write(SimCityAudioRecorderWin32 *r,const int16_t *s,size_t frames){uint64_t max_frames=(UINT32_MAX-36u)/4u;if(!r||!r->file||!s)return 0;if(r->frames_written>max_frames||frames>max_frames-r->frames_written){r->write_failed=1;wcscpy(r->last_error,L"The WAV file reached its 4 GB format limit.");return 0;}if(fwrite(s,sizeof(int16_t)*2u,frames,r->file)!=frames){r->write_failed=1;wcscpy(r->last_error,L"WAV write failed.");return 0;}r->frames_written+=frames;return 1;}
int simcity_audio_recorder_win32_stop(SimCityAudioRecorderWin32 *r){int ok;int write_failed;if(!r||!r->file)return 1;write_failed=r->write_failed;ok=write_header(r->file,r->frames_written);if(fclose(r->file)!=0)ok=0;r->file=NULL;r->write_failed=0;if(!ok&&!write_failed)wcscpy(r->last_error,L"Unable to finalize the WAV file.");return ok&&!write_failed;}
int simcity_audio_recorder_win32_active(const SimCityAudioRecorderWin32 *r){return r&&r->file;}
