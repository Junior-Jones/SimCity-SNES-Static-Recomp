#include "simcity_frontend_settings_win32.h"
#include "simcity_static_recomp.h"
#include <stdio.h>
#include <string.h>

#define SETTINGS_CLASS L"SimCityFrontendSettings"
#define CONTROLS_CLASS L"SimCityControls"
#define ID_SCALE 3101
#define ID_PAUSE_FOCUS 3102
#define ID_AUTO_RUN 3103
#define ID_SHOW_STATUS 3104
#define ID_SLOT 3105
#define ID_CLASSIC 3107
#define ID_APPLY 3108
#define ID_CANCEL 3109
#define ID_FULLSCREEN_SETTING 3110
#define ID_OPEN_AUDIO 3111
#define ID_OPEN_KEYS 3112
#define ID_CORRECT_ASPECT 3113
#define ID_VSYNC 3114
#define ID_CONTROL_BASE 3200
#define ID_INPUT_SOURCE 3300
#define ID_CONTROLS_STANDARD_KEYS 3301
#define ID_CONTROLS_CLASSIC 3302
#define ID_CONTROLS_GAMEPAD_DEFAULTS 3303
#define ID_CONTROLS_APPLY 3304
#define ID_CONTROLS_CANCEL 3305
#define ID_CONTROLLER_STATUS 3306
#define ID_PLAYER 3307
#define ID_ALLOW_INVALID 3308
#define ID_DEADZONE 3309
#define ID_GAMEPAD_CHANGE_BASE 3400
#define ID_GAMEPAD_CAPTURE_TIMER 1
#define WM_CANCEL_GAMEPAD_CAPTURE (WM_APP + 41)
#define WM_CANCEL_KEYBOARD_CAPTURE (WM_APP + 42)
#define WM_COMPLETE_KEYBOARD_CAPTURE (WM_APP + 43)
#define SIMCITY_PHYSICAL_KEY_FLAG 0x10000u

typedef struct DialogContext {
    SimCityFrontendSettingsWin32 value;
    SimCityFrontendSettingsWin32 *target;
    int accepted;
    HWND parent;
    HWND controls[SIMCITY_WIN_BINDING_COUNT];
    HWND gamepad_assignments[SIMCITY_WIN_BINDING_COUNT];
    HWND gamepad_changes[SIMCITY_WIN_BINDING_COUNT];
    HWND source;
    HWND player_selector;
    HWND controller_status;
    HWND assigned_header;
    HWND change_header;
    HWND keyboard_help_group;
    HWND keyboard_help_text;
    HWND gamepad_help_group;
    HWND gamepad_help_text;
    HWND standard_defaults;
    HWND classic_defaults;
    HWND gamepad_defaults;
    SimCityGamepadInputWin32 *gamepads;
    int selected_player;
    int capture_action;
    int capture_wait_for_neutral;
    int keyboard_capture_action;
} DialogContext;

static SimCityGamepadInputWin32 *selected_gamepad(DialogContext *c) {
    return c && c->gamepads ? &c->gamepads[c->selected_player] : NULL;
}

static void set_font(HWND h) {
    SendMessageW(h, WM_SETFONT, (WPARAM)GetStockObject(DEFAULT_GUI_FONT), TRUE);
}

static void center_dialog(HWND w,HWND parent){
    RECT wr,pr;MONITORINFO mi;HMONITOR monitor;int width,height,x,y;
    if(!w||!GetWindowRect(w,&wr))return;
    if(!parent||!IsWindow(parent)||!GetWindowRect(parent,&pr)){
        pr.left=0;pr.top=0;pr.right=GetSystemMetrics(SM_CXSCREEN);pr.bottom=GetSystemMetrics(SM_CYSCREEN);
    }
    width=wr.right-wr.left;height=wr.bottom-wr.top;
    x=pr.left+((pr.right-pr.left)-width)/2;y=pr.top+((pr.bottom-pr.top)-height)/2;
    monitor=MonitorFromWindow(parent?parent:w,MONITOR_DEFAULTTONEAREST);
    memset(&mi,0,sizeof(mi));mi.cbSize=sizeof(mi);
    if(GetMonitorInfoW(monitor,&mi)){
        if(x<mi.rcWork.left)x=mi.rcWork.left;if(y<mi.rcWork.top)y=mi.rcWork.top;
        if(x+width>mi.rcWork.right)x=mi.rcWork.right-width;
        if(y+height>mi.rcWork.bottom)y=mi.rcWork.bottom-height;
    }
    SetWindowPos(w,NULL,x,y,0,0,SWP_NOSIZE|SWP_NOZORDER|SWP_NOACTIVATE);
}

static int keyboard_key_is_reserved(UINT key){
    return key==VK_ESCAPE||(key>=VK_F1&&key<=VK_F9)||key=='1'||key=='2';
}

UINT simcity_frontend_settings_win32_physical_key(UINT virtual_key,
                                                   LPARAM key_lparam) {
    UINT scan;
    if (key_lparam != 0) {
        scan = ((UINT_PTR)key_lparam >> 16) & 0xffu;
        if ((((UINT_PTR)key_lparam >> 24) & 1u) != 0u) scan |= 0xe000u;
    } else {
        scan = MapVirtualKeyW(virtual_key, MAPVK_VK_TO_VSC_EX) & 0xffffu;
        /* MapVirtualKey does not consistently retain the E0 prefix for the
           navigation cluster. Preserve the physical distinction from the
           numeric keypad when creating defaults or migrating old VK INIs. */
        if (virtual_key == VK_LEFT || virtual_key == VK_RIGHT ||
            virtual_key == VK_UP || virtual_key == VK_DOWN ||
            virtual_key == VK_INSERT || virtual_key == VK_DELETE ||
            virtual_key == VK_HOME || virtual_key == VK_END ||
            virtual_key == VK_PRIOR || virtual_key == VK_NEXT)
            scan = (scan & 0xffu) | 0xe000u;
    }
    return scan ? SIMCITY_PHYSICAL_KEY_FLAG | scan : virtual_key;
}

static int keyboard_bindings_are_valid(
    const UINT bindings[SIMCITY_WIN_BINDING_COUNT]){
    int first;int second;
    if(!bindings)return 0;
    for(first=0;first<SIMCITY_WIN_BINDING_COUNT;first++){
        if((bindings[first]&SIMCITY_PHYSICAL_KEY_FLAG)==0u||
           (bindings[first]&0xffffu)==0u)return 0;
        for(second=first+1;second<SIMCITY_WIN_BINDING_COUNT;second++)
            if(bindings[first]==bindings[second])return 0;
    }
    return 1;
}

void simcity_frontend_settings_win32_defaults(SimCityFrontendSettingsWin32 *s) {
    if (!s) return;
    memset(s, 0, sizeof(*s));
    s->pause_on_focus_loss = 1;
    s->correct_aspect = 1;
    s->vsync_enabled = 1;
    s->allow_invalid_input = 0;
    s->gamepad_deadzone_percent = 35;
    s->snapshot_slot = 1;
    s->input_source[0] = SIMCITY_INPUT_SOURCE_KEYBOARD;
    s->bindings[0][0]=VK_UP; s->bindings[0][1]=VK_DOWN;
    s->bindings[0][2]=VK_LEFT; s->bindings[0][3]=VK_RIGHT;
    s->bindings[0][4]='D'; s->bindings[0][5]='F'; s->bindings[0][6]='A'; s->bindings[0][7]='S';
    s->bindings[0][8]='E'; s->bindings[0][9]='R'; s->bindings[0][10]='G'; s->bindings[0][11]='H';
    {
        int player; int action;
        for(player=0;player<SIMCITY_PLAYER_COUNT;player++)
            for(action=0;action<SIMCITY_WIN_BINDING_COUNT;action++)
                s->bindings[player][action]=
                    simcity_frontend_settings_win32_physical_key(
                        s->bindings[player][action],0);
    }
    simcity_gamepad_win32_default_bindings(s->gamepad_bindings[0]);
}

void simcity_frontend_settings_win32_classic(SimCityFrontendSettingsWin32 *s) {
    if (!s) return;
    simcity_frontend_settings_win32_defaults(s);
    s->bindings[0][4]=simcity_frontend_settings_win32_physical_key('Z',0);
    s->bindings[0][5]=simcity_frontend_settings_win32_physical_key('X',0);
    s->bindings[0][6]=simcity_frontend_settings_win32_physical_key('A',0);
    s->bindings[0][7]=simcity_frontend_settings_win32_physical_key('S',0);
    s->bindings[0][10]=simcity_frontend_settings_win32_physical_key(VK_RETURN,0);
    s->bindings[0][11]=simcity_frontend_settings_win32_physical_key(VK_SPACE,0);
}

void simcity_frontend_settings_win32_load(SimCityFrontendSettingsWin32 *s,
                                          const wchar_t *path) {
    int i,player;
    int invalid_gamepad_binding[SIMCITY_PLAYER_COUNT]={0};
    int source;
    wchar_t key[32];
    if (!s) return;
    simcity_frontend_settings_win32_defaults(s);
    if (!path || !*path) return;
    s->integer_scale=GetPrivateProfileIntW(L"General",L"IntegerScale",0,path);
    s->pause_on_focus_loss=GetPrivateProfileIntW(L"General",L"PauseOnFocusLoss",1,path)!=0;
    s->auto_run_on_load=GetPrivateProfileIntW(L"General",L"AutoRunOnLoad",0,path)!=0;
    s->fullscreen_on_play=GetPrivateProfileIntW(
        L"General",L"FullScreenOnPlay",0,path)!=0;
    s->show_status_text=GetPrivateProfileIntW(L"General",L"ShowStatusText",1,path)!=0;
    s->correct_aspect=GetPrivateProfileIntW(L"General",L"CorrectAspect",1,path)!=0;
    s->vsync_enabled=GetPrivateProfileIntW(L"General",L"VSync",1,path)!=0;
    s->allow_invalid_input=GetPrivateProfileIntW(
        L"General",L"AllowInvalidInput",0,path)!=0;
    s->gamepad_deadzone_percent=GetPrivateProfileIntW(
        L"General",L"GamepadDeadzonePercent",35,path);
    s->snapshot_slot=GetPrivateProfileIntW(L"General",L"SnapshotSlot",1,path);
    s->getting_started_shown=GetPrivateProfileIntW(
        L"General",L"GettingStartedShown",0,path)!=0;
    for(player=0;player<SIMCITY_PLAYER_COUNT;player++){
        const wchar_t *section=L"Input";
        source=GetPrivateProfileIntW(section,L"Source",-1,path);
        if(source==SIMCITY_INPUT_SOURCE_KEYBOARD||
           source==SIMCITY_INPUT_SOURCE_GAMEPAD||
           source==SIMCITY_INPUT_SOURCE_COMBINED){
            s->input_source[player]=source;s->input_source_saved[player]=1;
        }
    }
    if(s->integer_scale<0||s->integer_scale>4)s->integer_scale=0;
    if(s->snapshot_slot<1||s->snapshot_slot>5)s->snapshot_slot=1;
    if(s->gamepad_deadzone_percent<10||s->gamepad_deadzone_percent>90)
        s->gamepad_deadzone_percent=35;
    for(player=0;player<SIMCITY_PLAYER_COUNT;player++){
        const wchar_t *section=L"Input";
        for(i=0;i<SIMCITY_WIN_BINDING_COUNT;i++){
            _snwprintf_s(key,32,_TRUNCATE,L"Action%d",i);
            s->bindings[player][i]=(UINT)GetPrivateProfileIntW(section,key,(int)s->bindings[player][i],path);
            if((s->bindings[player][i]&SIMCITY_PHYSICAL_KEY_FLAG)==0u)
                s->bindings[player][i]=
                    simcity_frontend_settings_win32_physical_key(
                        s->bindings[player][i],0);
            _snwprintf_s(key,32,_TRUNCATE,L"GamepadAction%d",i);
            s->gamepad_bindings[player][i]=GetPrivateProfileIntW(
                section,key,s->gamepad_bindings[player][i],path);
            if(s->gamepad_bindings[player][i]<SC_GAMEPAD_DPAD_UP||
               s->gamepad_bindings[player][i]>SC_GAMEPAD_CONTROL_LAST)
                invalid_gamepad_binding[player]=1;
        }
        if(!keyboard_bindings_are_valid(s->bindings[player])){
            SimCityFrontendSettingsWin32 defaults;
            simcity_frontend_settings_win32_defaults(&defaults);
            memcpy(s->bindings[player],defaults.bindings[player],sizeof(s->bindings[player]));
        }
        if(invalid_gamepad_binding[player])
            simcity_gamepad_win32_default_bindings(s->gamepad_bindings[player]);
        (void)GetPrivateProfileStringW(
            section,L"GamepadGuid",L"",s->gamepad_guid[player],
            SIMCITY_GAMEPAD_GUID_CAPACITY,path);
    }
}

static int write_int(const wchar_t *section,const wchar_t *key,int value,const wchar_t *path){
    wchar_t text[32]; _snwprintf_s(text,32,_TRUNCATE,L"%d",value);
    return WritePrivateProfileStringW(section,key,text,path)!=0;
}
int simcity_frontend_settings_win32_save(const SimCityFrontendSettingsWin32 *s,
                                         const wchar_t *path) {
    int i,player,ok=1; wchar_t key[32];
    if(!s||!path||!*path)return 0;
    ok&=write_int(L"General",L"IntegerScale",s->integer_scale,path);
    ok&=write_int(L"General",L"PauseOnFocusLoss",s->pause_on_focus_loss,path);
    ok&=write_int(L"General",L"AutoRunOnLoad",s->auto_run_on_load,path);
    ok&=write_int(L"General",L"FullScreenOnPlay",s->fullscreen_on_play,path);
    ok&=write_int(L"General",L"ShowStatusText",s->show_status_text,path);
    ok&=write_int(L"General",L"CorrectAspect",s->correct_aspect,path);
    ok&=write_int(L"General",L"VSync",s->vsync_enabled,path);
    ok&=write_int(L"General",L"AllowInvalidInput",s->allow_invalid_input,path);
    ok&=write_int(L"General",L"GamepadDeadzonePercent",
                  s->gamepad_deadzone_percent,path);
    ok&=write_int(L"General",L"SnapshotSlot",s->snapshot_slot,path);
    ok&=write_int(L"General",L"GettingStartedShown",
                  s->getting_started_shown,path);
    for(player=0;player<SIMCITY_PLAYER_COUNT;player++){
        const wchar_t *section=L"Input";
        ok&=write_int(section,L"Source",s->input_source[player],path);
        ok&=WritePrivateProfileStringW(
            section,L"GamepadGuid",s->gamepad_guid[player],path)!=0;
        for(i=0;i<SIMCITY_WIN_BINDING_COUNT;i++){
            _snwprintf_s(key,32,_TRUNCATE,L"Action%d",i);
            ok&=write_int(section,key,(int)s->bindings[player][i],path);
            _snwprintf_s(key,32,_TRUNCATE,L"GamepadAction%d",i);
            ok&=write_int(section,key,s->gamepad_bindings[player][i],path);
        }
    }
    return ok;
}

uint16_t simcity_frontend_settings_win32_input(
    const SimCityFrontendSettingsWin32 *s, unsigned player, UINT key) {
    static const uint16_t mask[] = {SIMCITY_INPUT_UP,SIMCITY_INPUT_DOWN,
        SIMCITY_INPUT_LEFT,SIMCITY_INPUT_RIGHT,SIMCITY_INPUT_B,SIMCITY_INPUT_A,
        SIMCITY_INPUT_Y,SIMCITY_INPUT_X,SIMCITY_INPUT_L,SIMCITY_INPUT_R,
        SIMCITY_INPUT_START,SIMCITY_INPUT_SELECT};
    int i; if(!s||player>=SIMCITY_PLAYER_COUNT)return 0;
    for(i=0;i<SIMCITY_WIN_BINDING_COUNT;i++)if(s->bindings[player][i]==key)return mask[i];
    return 0;
}
const wchar_t *simcity_frontend_settings_win32_action_name(int a){
    static const wchar_t *n[]={L"D-pad Up",L"D-pad Down",L"D-pad Left",L"D-pad Right",
        L"B Button",L"A Button",L"Y Button",L"X Button",L"L Button",L"R Button",
        L"Start Button",L"Select Button"};
    return a>=0&&a<SIMCITY_WIN_BINDING_COUNT?n[a]:L"Unknown";
}
void simcity_frontend_settings_win32_key_name(UINT key,wchar_t *text,size_t cap){
    UINT scan; LONG param; if(!text||!cap)return; text[0]=0;
    scan=(key&SIMCITY_PHYSICAL_KEY_FLAG)?key&0xffffu:
        MapVirtualKeyW(key,MAPVK_VK_TO_VSC_EX)&0xffffu;
    param=(LONG)((scan&0xffu)<<16);
    if((scan&0xe000u)!=0u)param|=1L<<24;
    if(!GetKeyNameTextW(param,text,(int)cap))
        _snwprintf(text,cap,L"Scan code %u",scan);
    text[cap-1]=0;
}

static void copy_keyboard_defaults(UINT destination[SIMCITY_WIN_BINDING_COUNT],
                                   int classic,int player){
    SimCityFrontendSettingsWin32 defaults;int i;
    if(classic)simcity_frontend_settings_win32_classic(&defaults);
    else simcity_frontend_settings_win32_defaults(&defaults);
    for(i=0;i<SIMCITY_WIN_BINDING_COUNT;i++)destination[i]=defaults.bindings[player][i];
}

static void set_controls_status(DialogContext *c,const wchar_t *text){
    if(!c||!c->controller_status)return;
    SetWindowTextW(c->controller_status,text?text:L"");
    NotifyWinEvent(EVENT_OBJECT_VALUECHANGE,c->controller_status,
                   OBJID_CLIENT,CHILDID_SELF);
}

static void update_controls_status(DialogContext *c){
    wchar_t text[384];int source;
    if(!c||!c->source||!c->controller_status)return;
    source=(int)SendMessageW(c->source,CB_GETCURSEL,0,0);
    if(source==SIMCITY_INPUT_SOURCE_GAMEPAD||source==SIMCITY_INPUT_SOURCE_COMBINED){
        if(simcity_gamepad_win32_connected(selected_gamepad(c)))
            _snwprintf(text,384,L"Player %d %s selected: %s. Physical-key bindings remain available.",
                       c->selected_player+1,
                       source==SIMCITY_INPUT_SOURCE_COMBINED?L"combined input":L"gamepad",
                       simcity_gamepad_win32_name(selected_gamepad(c)));
        else
            _snwprintf(text,384,L"Player %d gamepad selected, but none is connected. Gameplay uses that player's keyboard bindings until one connects.",c->selected_player+1);
    }else{
        if(simcity_gamepad_win32_connected(selected_gamepad(c)))
            _snwprintf(text,384,L"Player %d keyboard selected. %s is connected and can be selected above.",
                       c->selected_player+1,simcity_gamepad_win32_name(selected_gamepad(c)));
        else
            _snwprintf(text,384,L"Player %d keyboard selected. No assigned gamepad is currently connected.",c->selected_player+1);
    }
    text[383]=L'\0';set_controls_status(c,text);
}

static void refresh_control_bindings(DialogContext *c){
    int i;int source;int gamepad_connected;wchar_t name[192];
    if(!c||!c->source)return;
    source=(int)SendMessageW(c->source,CB_GETCURSEL,0,0);
    gamepad_connected=simcity_gamepad_win32_connected(selected_gamepad(c));
    SetWindowTextW(c->assigned_header,source==SIMCITY_INPUT_SOURCE_KEYBOARD?
                   L"Current key - choose to change":L"Assigned input");
    ShowWindow(c->change_header,source!=SIMCITY_INPUT_SOURCE_KEYBOARD?SW_SHOW:SW_HIDE);
    ShowWindow(c->keyboard_help_group,source==SIMCITY_INPUT_SOURCE_KEYBOARD?SW_SHOW:SW_HIDE);
    ShowWindow(c->keyboard_help_text,source==SIMCITY_INPUT_SOURCE_KEYBOARD?SW_SHOW:SW_HIDE);
    ShowWindow(c->gamepad_help_group,source!=SIMCITY_INPUT_SOURCE_KEYBOARD?SW_SHOW:SW_HIDE);
    ShowWindow(c->gamepad_help_text,source!=SIMCITY_INPUT_SOURCE_KEYBOARD?SW_SHOW:SW_HIDE);
    for(i=0;i<SIMCITY_WIN_BINDING_COUNT;i++){
        ShowWindow(c->controls[i],source==SIMCITY_INPUT_SOURCE_KEYBOARD?SW_SHOW:SW_HIDE);
        ShowWindow(c->gamepad_assignments[i],source!=SIMCITY_INPUT_SOURCE_KEYBOARD?SW_SHOW:SW_HIDE);
        ShowWindow(c->gamepad_changes[i],source!=SIMCITY_INPUT_SOURCE_KEYBOARD?SW_SHOW:SW_HIDE);
        if(source==SIMCITY_INPUT_SOURCE_KEYBOARD){
            simcity_frontend_settings_win32_key_name(c->value.bindings[c->selected_player][i],name,
                                                     sizeof(name)/sizeof(name[0]));
            SetWindowTextW(c->controls[i],name);
            EnableWindow(c->controls[i],c->keyboard_capture_action<0);
        }else{
            simcity_gamepad_win32_control_display_name(
                selected_gamepad(c),c->value.gamepad_bindings[c->selected_player][i],name,
                sizeof(name)/sizeof(name[0]));
            SetWindowTextW(c->gamepad_assignments[i],name);
            EnableWindow(c->gamepad_changes[i],gamepad_connected&&c->capture_action<0);
        }
    }
    ShowWindow(c->standard_defaults,source==SIMCITY_INPUT_SOURCE_KEYBOARD?SW_SHOW:SW_HIDE);
    ShowWindow(c->classic_defaults,source==SIMCITY_INPUT_SOURCE_KEYBOARD?SW_SHOW:SW_HIDE);
    ShowWindow(c->gamepad_defaults,source!=SIMCITY_INPUT_SOURCE_KEYBOARD?SW_SHOW:SW_HIDE);
    EnableWindow(c->standard_defaults,source==SIMCITY_INPUT_SOURCE_KEYBOARD&&
                 c->keyboard_capture_action<0);
    EnableWindow(c->classic_defaults,source==SIMCITY_INPUT_SOURCE_KEYBOARD&&
                 c->keyboard_capture_action<0);
    EnableWindow(c->gamepad_defaults,source!=SIMCITY_INPUT_SOURCE_KEYBOARD&&c->capture_action<0);
    EnableWindow(c->source,c->capture_action<0&&c->keyboard_capture_action<0);
    EnableWindow(c->player_selector,c->capture_action<0&&c->keyboard_capture_action<0);
    if(c->capture_action<0&&c->keyboard_capture_action<0)update_controls_status(c);
}

static int first_duplicate_binding(const DialogContext *c,int source){
    int first;int second;int a;int b;
    if(!c)return -1;
    for(first=0;first<SIMCITY_WIN_BINDING_COUNT;first++){
        a=source!=SIMCITY_INPUT_SOURCE_KEYBOARD?
            c->value.gamepad_bindings[c->selected_player][first]:(int)c->value.bindings[c->selected_player][first];
        for(second=first+1;second<SIMCITY_WIN_BINDING_COUNT;second++){
            b=source!=SIMCITY_INPUT_SOURCE_KEYBOARD?
                c->value.gamepad_bindings[c->selected_player][second]:(int)c->value.bindings[c->selected_player][second];
            if(a==b)return second;
        }
    }
    return -1;
}

static void cancel_gamepad_capture(HWND window,DialogContext *c,const wchar_t *message){
    if(!c||c->capture_action<0)return;
    KillTimer(window,ID_GAMEPAD_CAPTURE_TIMER);
    c->capture_action=-1;c->capture_wait_for_neutral=0;
    EnableWindow(GetDlgItem(window,ID_CONTROLS_APPLY),TRUE);
    refresh_control_bindings(c);
    if(message)set_controls_status(c,message);
}

static void start_gamepad_capture(HWND window,DialogContext *c,int action){
    wchar_t message[256];int i;
    if(!c||action<0||action>=SIMCITY_WIN_BINDING_COUNT)return;
    if(!simcity_gamepad_win32_connected(selected_gamepad(c))){
        set_controls_status(c,L"Connect a gamepad before changing a gamepad assignment.");
        return;
    }
    c->capture_action=action;c->capture_wait_for_neutral=1;
    for(i=0;i<SIMCITY_WIN_BINDING_COUNT;i++)EnableWindow(c->gamepad_changes[i],FALSE);
    EnableWindow(c->source,FALSE);EnableWindow(c->gamepad_defaults,FALSE);
    EnableWindow(c->player_selector,FALSE);
    EnableWindow(GetDlgItem(window,ID_CONTROLS_APPLY),FALSE);
    _snwprintf(message,256,L"Release all gamepad controls, then press the control for %s. Escape cancels.",
               simcity_frontend_settings_win32_action_name(action));
    message[255]=L'\0';set_controls_status(c,message);
    SetTimer(window,ID_GAMEPAD_CAPTURE_TIMER,16,NULL);
}

static void cancel_keyboard_capture(HWND window,DialogContext *c,const wchar_t *message){
    int action;
    if(!c||c->keyboard_capture_action<0)return;
    action=c->keyboard_capture_action;c->keyboard_capture_action=-1;
    EnableWindow(GetDlgItem(window,ID_CONTROLS_APPLY),TRUE);
    refresh_control_bindings(c);
    if(message)set_controls_status(c,message);
    SetFocus(c->controls[action]);
}

static void start_keyboard_capture(HWND window,DialogContext *c,int action){
    wchar_t message[256];int i;
    if(!c||action<0||action>=SIMCITY_WIN_BINDING_COUNT)return;
    if(c->keyboard_capture_action>=0)return;
    c->keyboard_capture_action=action;
    for(i=0;i<SIMCITY_WIN_BINDING_COUNT;i++)EnableWindow(c->controls[i],FALSE);
    EnableWindow(c->controls[action],TRUE);
    SetWindowTextW(c->controls[action],L"Press a key...");
    EnableWindow(c->source,FALSE);EnableWindow(c->standard_defaults,FALSE);
    EnableWindow(c->player_selector,FALSE);
    EnableWindow(c->classic_defaults,FALSE);
    EnableWindow(GetDlgItem(window,ID_CONTROLS_APPLY),FALSE);
    _snwprintf(message,256,L"Press the new keyboard key for %s. Escape cancels.",
               simcity_frontend_settings_win32_action_name(action));
    message[255]=L'\0';set_controls_status(c,message);
    SetFocus(c->controls[action]);
}

static LRESULT CALLBACK settings_proc(HWND w,UINT msg,WPARAM wp,LPARAM lp){
    DialogContext *c=(DialogContext*)GetWindowLongPtrW(w,GWLP_USERDATA);
    switch(msg){
    case WM_NCCREATE:
        SetWindowLongPtrW(w,GWLP_USERDATA,(LONG_PTR)((CREATESTRUCTW*)lp)->lpCreateParams);
        return TRUE;
    case WM_CREATE:{
        int i; wchar_t t[32]; HWND scale;
        c=(DialogContext*)GetWindowLongPtrW(w,GWLP_USERDATA);
        SetWindowTextW(w,L"Settings");
        set_font(CreateWindowW(L"BUTTON",L"General",WS_CHILD|WS_VISIBLE|BS_GROUPBOX,14,12,512,112,w,NULL,NULL,NULL));
        set_font(CreateWindowW(L"BUTTON",L"Start a valid ROM automatically when the launcher opens",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,32,42,455,24,w,(HMENU)ID_AUTO_RUN,NULL,NULL));
        set_font(CreateWindowW(L"BUTTON",L"Pause the game when the app loses keyboard focus",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,32,76,455,24,w,(HMENU)ID_PAUSE_FOCUS,NULL,NULL));

        set_font(CreateWindowW(L"BUTTON",L"Display",WS_CHILD|WS_VISIBLE|BS_GROUPBOX,14,134,512,158,w,NULL,NULL,NULL));
        set_font(CreateWindowW(L"STATIC",L"Game image scale:",WS_CHILD|WS_VISIBLE,32,166,150,22,w,NULL,NULL,NULL));
        scale=CreateWindowExW(0,L"COMBOBOX",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP|CBS_DROPDOWNLIST,190,162,180,160,w,(HMENU)ID_SCALE,NULL,NULL);
        set_font(scale);
        SendMessageW(scale,CB_ADDSTRING,0,(LPARAM)L"Automatic (fit window)");
        for(i=1;i<=4;i++){_snwprintf(t,32,L"%dx integer scale",i);SendMessageW(scale,CB_ADDSTRING,0,(LPARAM)t);}
        SendMessageW(scale,CB_SETCURSEL,c->value.integer_scale,0);
        set_font(CreateWindowW(L"BUTTON",L"Use full screen when Play starts",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,32,202,320,24,w,(HMENU)ID_FULLSCREEN_SETTING,NULL,NULL));
        set_font(CreateWindowW(L"BUTTON",L"Correct the SNES image to a 4:3 display ratio",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,32,228,430,24,w,(HMENU)ID_CORRECT_ASPECT,NULL,NULL));
        set_font(CreateWindowW(L"BUTTON",L"Synchronize presentation to the monitor (VSync)",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,32,254,430,24,w,(HMENU)ID_VSYNC,NULL,NULL));

        set_font(CreateWindowW(L"BUTTON",L"Audio and controls",WS_CHILD|WS_VISIBLE|BS_GROUPBOX,14,302,512,92,w,NULL,NULL,NULL));
        set_font(CreateWindowW(L"BUTTON",L"Audio Settings...",WS_CHILD|WS_VISIBLE|WS_TABSTOP,32,336,220,30,w,(HMENU)ID_OPEN_AUDIO,NULL,NULL));
        set_font(CreateWindowW(L"BUTTON",L"Controls...",WS_CHILD|WS_VISIBLE|WS_TABSTOP,264,336,220,30,w,(HMENU)ID_OPEN_KEYS,NULL,NULL));
        set_font(CreateWindowW(L"STATIC",L"Configure audio output and keyboard or gamepad controls.",WS_CHILD|WS_VISIBLE,32,370,470,20,w,NULL,NULL,NULL));

        set_font(CreateWindowW(L"BUTTON",L"Apply",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_DEFPUSHBUTTON,350,410,80,30,w,(HMENU)ID_APPLY,NULL,NULL));
        set_font(CreateWindowW(L"BUTTON",L"Close",WS_CHILD|WS_VISIBLE|WS_TABSTOP,440,410,80,30,w,(HMENU)ID_CANCEL,NULL,NULL));
        SendDlgItemMessageW(w,ID_PAUSE_FOCUS,BM_SETCHECK,c->value.pause_on_focus_loss?BST_CHECKED:BST_UNCHECKED,0);
        SendDlgItemMessageW(w,ID_AUTO_RUN,BM_SETCHECK,c->value.auto_run_on_load?BST_CHECKED:BST_UNCHECKED,0);
        SendDlgItemMessageW(w,ID_FULLSCREEN_SETTING,BM_SETCHECK,
            c->value.fullscreen_on_play?BST_CHECKED:BST_UNCHECKED,0);
        SendDlgItemMessageW(w,ID_CORRECT_ASPECT,BM_SETCHECK,
            c->value.correct_aspect?BST_CHECKED:BST_UNCHECKED,0);
        SendDlgItemMessageW(w,ID_VSYNC,BM_SETCHECK,
            c->value.vsync_enabled?BST_CHECKED:BST_UNCHECKED,0);
        return 0;}
    case WM_COMMAND:
        if(!c)break;
        switch(LOWORD(wp)){
        case ID_OPEN_AUDIO:
            EnableWindow(w,FALSE);
            SendMessageW(c->parent,WM_COMMAND,1005,0);
            EnableWindow(w,TRUE);SetForegroundWindow(w);return 0;
        case ID_OPEN_KEYS:
            EnableWindow(w,FALSE);
            SendMessageW(c->parent,WM_COMMAND,1004,0);
            EnableWindow(w,TRUE);SetForegroundWindow(w);return 0;
        case ID_APPLY:
            c->value.integer_scale=(int)SendDlgItemMessageW(w,ID_SCALE,CB_GETCURSEL,0,0);
            c->value.pause_on_focus_loss=SendDlgItemMessageW(w,ID_PAUSE_FOCUS,BM_GETCHECK,0,0)==BST_CHECKED;
            c->value.auto_run_on_load=SendDlgItemMessageW(w,ID_AUTO_RUN,BM_GETCHECK,0,0)==BST_CHECKED;
            c->value.fullscreen_on_play=SendDlgItemMessageW(
                w,ID_FULLSCREEN_SETTING,BM_GETCHECK,0,0)==BST_CHECKED;
            c->value.correct_aspect=SendDlgItemMessageW(
                w,ID_CORRECT_ASPECT,BM_GETCHECK,0,0)==BST_CHECKED;
            c->value.vsync_enabled=SendDlgItemMessageW(
                w,ID_VSYNC,BM_GETCHECK,0,0)==BST_CHECKED;
            SendDlgItemMessageW(c->parent,1020,BM_SETCHECK,
                SendDlgItemMessageW(w,ID_FULLSCREEN_SETTING,BM_GETCHECK,0,0),0);
            *c->target=c->value;c->accepted=1;DestroyWindow(w);return 0;
        case ID_CANCEL:DestroyWindow(w);return 0;
        }break;
    case WM_CLOSE:DestroyWindow(w);return 0;
    }
    return DefWindowProcW(w,msg,wp,lp);
}

static LRESULT CALLBACK controls_proc(HWND w,UINT msg,WPARAM wp,LPARAM lp){
    DialogContext *c=(DialogContext*)GetWindowLongPtrW(w,GWLP_USERDATA);int i,player;
    switch(msg){
    case WM_NCCREATE:SetWindowLongPtrW(w,GWLP_USERDATA,(LONG_PTR)((CREATESTRUCTW*)lp)->lpCreateParams);return TRUE;
    case WM_CREATE:{
        HWND group;HWND label;wchar_t change_label[96];
        c=(DialogContext*)GetWindowLongPtrW(w,GWLP_USERDATA);SetWindowTextW(w,L"Controls");
        group=CreateWindowW(L"BUTTON",L"Active input",WS_CHILD|WS_VISIBLE|BS_GROUPBOX,
                            14,12,712,84,w,NULL,NULL,NULL);set_font(group);
        label=CreateWindowW(L"STATIC",L"Player:",WS_CHILD|WS_VISIBLE,
                            30,39,60,22,w,NULL,NULL,NULL);set_font(label);
        c->player_selector=CreateWindowExW(0,L"COMBOBOX",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP|CBS_DROPDOWNLIST,
                                           92,35,120,160,w,(HMENU)ID_PLAYER,NULL,NULL);set_font(c->player_selector);
        {
            wchar_t player_name[32];
            for(player=0;player<SIMCITY_PLAYER_COUNT;player++){
                _snwprintf_s(player_name,32,_TRUNCATE,L"Player %d",player+1);
                SendMessageW(c->player_selector,CB_ADDSTRING,0,
                             (LPARAM)player_name);
            }
        }
        SendMessageW(c->player_selector,CB_SETCURSEL,0,0);
        label=CreateWindowW(L"STATIC",L"Use for gameplay:",WS_CHILD|WS_VISIBLE,
                            235,39,125,22,w,NULL,NULL,NULL);set_font(label);
        c->source=CreateWindowExW(0,L"COMBOBOX",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP|CBS_DROPDOWNLIST,
                                  363,35,190,160,w,(HMENU)ID_INPUT_SOURCE,NULL,NULL);set_font(c->source);
        SendMessageW(c->source,CB_ADDSTRING,0,(LPARAM)L"Keyboard");
        SendMessageW(c->source,CB_ADDSTRING,0,(LPARAM)L"Gamepad");
        SendMessageW(c->source,CB_ADDSTRING,0,(LPARAM)L"Keyboard + gamepad");
        SendMessageW(c->source,CB_SETCURSEL,c->value.input_source[0],0);
        c->controller_status=CreateWindowW(L"STATIC",L"",WS_CHILD|WS_VISIBLE,
                                           30,65,675,20,w,(HMENU)ID_CONTROLLER_STATUS,NULL,NULL);set_font(c->controller_status);
        set_font(CreateWindowW(L"STATIC",L"SNES control",WS_CHILD|WS_VISIBLE,
                               24,108,122,22,w,NULL,NULL,NULL));
        c->assigned_header=CreateWindowW(L"STATIC",L"Assigned input",WS_CHILD|WS_VISIBLE,
                                         158,108,260,22,w,NULL,NULL,NULL);set_font(c->assigned_header);
        c->change_header=CreateWindowW(L"STATIC",L"Change assignment",WS_CHILD|WS_VISIBLE,
                                       438,108,190,22,w,NULL,NULL,NULL);set_font(c->change_header);
        for(i=0;i<SIMCITY_WIN_BINDING_COUNT;i++){
            set_font(CreateWindowW(L"STATIC",simcity_frontend_settings_win32_action_name(i),
                                   WS_CHILD|WS_VISIBLE,24,134+i*28,122,22,w,NULL,NULL,NULL));
            c->controls[i]=CreateWindowW(L"BUTTON",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP,
                                         158,129+i*28,260,25,w,
                                         (HMENU)(INT_PTR)(ID_CONTROL_BASE+i),NULL,NULL);set_font(c->controls[i]);
            c->gamepad_assignments[i]=CreateWindowW(
                L"STATIC",L"",WS_CHILD|SS_LEFT|SS_CENTERIMAGE,
                158,130+i*28,260,24,w,NULL,NULL,NULL);set_font(c->gamepad_assignments[i]);
            _snwprintf(change_label,96,L"Change %s...",
                       simcity_frontend_settings_win32_action_name(i));
            change_label[95]=L'\0';
            c->gamepad_changes[i]=CreateWindowW(
                L"BUTTON",change_label,WS_CHILD|WS_TABSTOP,
                438,129+i*28,190,25,w,
                (HMENU)(INT_PTR)(ID_GAMEPAD_CHANGE_BASE+i),NULL,NULL);set_font(c->gamepad_changes[i]);
        }
        c->keyboard_help_group=CreateWindowW(
            L"BUTTON",L"Changing keyboard keys",WS_CHILD|BS_GROUPBOX,
            438,129,288,112,w,NULL,NULL,NULL);set_font(c->keyboard_help_group);
        c->keyboard_help_text=CreateWindowW(
            L"STATIC",L"Choose the current-key button beside a control, then press the replacement key. Escape cancels. Choose Apply to save all changes.",
            WS_CHILD,454,151,252,70,w,NULL,NULL,NULL);set_font(c->keyboard_help_text);
        group=CreateWindowW(L"BUTTON",L"Defaults",WS_CHILD|WS_VISIBLE|BS_GROUPBOX,
                            14,472,350,72,w,NULL,NULL,NULL);set_font(group);
        c->standard_defaults=CreateWindowW(L"BUTTON",L"Standard keyboard",WS_CHILD|WS_VISIBLE|WS_TABSTOP,
                                           30,495,150,30,w,(HMENU)ID_CONTROLS_STANDARD_KEYS,NULL,NULL);set_font(c->standard_defaults);
        c->classic_defaults=CreateWindowW(L"BUTTON",L"Classic keyboard",WS_CHILD|WS_VISIBLE|WS_TABSTOP,
                                          192,495,150,30,w,(HMENU)ID_CONTROLS_CLASSIC,NULL,NULL);set_font(c->classic_defaults);
        c->gamepad_defaults=CreateWindowW(L"BUTTON",L"SNES gamepad layout",WS_CHILD|WS_VISIBLE|WS_TABSTOP,
                                          95,495,190,30,w,(HMENU)ID_CONTROLS_GAMEPAD_DEFAULTS,NULL,NULL);set_font(c->gamepad_defaults);
        c->gamepad_help_group=CreateWindowW(L"BUTTON",L"Gamepad behavior",WS_CHILD|BS_GROUPBOX,
                                            380,472,346,72,w,NULL,NULL,NULL);set_font(c->gamepad_help_group);
        c->gamepad_help_text=CreateWindowW(L"STATIC",L"Choose Change, release held controls, then press the new button or direction. Escape cancels capture. Keyboard resumes if the gamepad disconnects.",
                                           WS_CHILD,396,492,312,40,w,NULL,NULL,NULL);set_font(c->gamepad_help_text);
        group=CreateWindowW(L"BUTTON",L"Input filtering",WS_CHILD|WS_VISIBLE|BS_GROUPBOX,
                            14,554,712,72,w,NULL,NULL,NULL);set_font(group);
        set_font(CreateWindowW(L"BUTTON",L"Allow opposing directions (Up+Down or Left+Right)",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_AUTOCHECKBOX,
                               30,578,370,24,w,(HMENU)ID_ALLOW_INVALID,NULL,NULL));
        label=CreateWindowW(L"STATIC",L"Stick deadzone:",WS_CHILD|WS_VISIBLE,
                            430,580,105,22,w,NULL,NULL,NULL);set_font(label);
        {
            HWND deadzone=CreateWindowExW(0,L"COMBOBOX",L"",WS_CHILD|WS_VISIBLE|WS_TABSTOP|CBS_DROPDOWNLIST,
                                          540,576,150,140,w,(HMENU)ID_DEADZONE,NULL,NULL);
            set_font(deadzone);
            SendMessageW(deadzone,CB_ADDSTRING,0,(LPARAM)L"20% (small)");
            SendMessageW(deadzone,CB_ADDSTRING,0,(LPARAM)L"35% (recommended)");
            SendMessageW(deadzone,CB_ADDSTRING,0,(LPARAM)L"50% (large)");
            SendMessageW(deadzone,CB_SETCURSEL,
                c->value.gamepad_deadzone_percent<=20?0:
                c->value.gamepad_deadzone_percent>=50?2:1,0);
        }
        SendDlgItemMessageW(w,ID_ALLOW_INVALID,BM_SETCHECK,
            c->value.allow_invalid_input?BST_CHECKED:BST_UNCHECKED,0);
        set_font(CreateWindowW(L"BUTTON",L"Apply",WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_DEFPUSHBUTTON,
                               552,638,82,32,w,(HMENU)ID_CONTROLS_APPLY,NULL,NULL));
        set_font(CreateWindowW(L"BUTTON",L"Cancel",WS_CHILD|WS_VISIBLE|WS_TABSTOP,
                               644,638,82,32,w,(HMENU)ID_CONTROLS_CANCEL,NULL,NULL));
        refresh_control_bindings(c);return 0;}
    case WM_COMMAND:if(!c)break;switch(LOWORD(wp)){
        case ID_PLAYER:
            if(HIWORD(wp)==CBN_SELCHANGE){
                c->value.input_source[c->selected_player]=(int)SendMessageW(c->source,CB_GETCURSEL,0,0);
                c->selected_player=(int)SendMessageW(c->player_selector,CB_GETCURSEL,0,0);
                if(c->selected_player<0||c->selected_player>=SIMCITY_PLAYER_COUNT)c->selected_player=0;
                SendMessageW(c->source,CB_SETCURSEL,c->value.input_source[c->selected_player],0);
                refresh_control_bindings(c);
            }return 0;
        case ID_INPUT_SOURCE:
            if(HIWORD(wp)==CBN_SELCHANGE){
                c->value.input_source[c->selected_player]=(int)SendMessageW(c->source,CB_GETCURSEL,0,0);
                refresh_control_bindings(c);
            }return 0;
        case ID_CONTROLS_STANDARD_KEYS:
            copy_keyboard_defaults(c->value.bindings[c->selected_player],0,c->selected_player);refresh_control_bindings(c);return 0;
        case ID_CONTROLS_CLASSIC:
            copy_keyboard_defaults(c->value.bindings[c->selected_player],1,c->selected_player);refresh_control_bindings(c);return 0;
        case ID_CONTROLS_GAMEPAD_DEFAULTS:
            simcity_gamepad_win32_default_bindings(c->value.gamepad_bindings[c->selected_player]);
            refresh_control_bindings(c);return 0;
        case ID_CONTROLS_APPLY:
            c->value.input_source[c->selected_player]=(int)SendMessageW(c->source,CB_GETCURSEL,0,0);
            c->value.allow_invalid_input=SendDlgItemMessageW(
                w,ID_ALLOW_INVALID,BM_GETCHECK,0,0)==BST_CHECKED;
            i=(int)SendDlgItemMessageW(w,ID_DEADZONE,CB_GETCURSEL,0,0);
            c->value.gamepad_deadzone_percent=i<=0?20:i>=2?50:35;
            for(player=0;player<SIMCITY_PLAYER_COUNT;player++){
                c->selected_player=player;
                i=first_duplicate_binding(c,c->value.input_source[player]);
                if(i>=0){
                    SendMessageW(c->player_selector,CB_SETCURSEL,player,0);
                    SendMessageW(c->source,CB_SETCURSEL,c->value.input_source[player],0);
                    refresh_control_bindings(c);
                    MessageBoxW(w,
                        L"Each SNES control for a player needs a different assigned input. Change the highlighted duplicate before applying.",
                        L"Controls",MB_OK|MB_ICONWARNING);
                    SetFocus(c->value.input_source[player]!=SIMCITY_INPUT_SOURCE_KEYBOARD?
                             c->gamepad_changes[i]:c->controls[i]);return 0;
                }
                c->value.input_source_saved[player]=1;
            }
            *c->target=c->value;c->accepted=1;DestroyWindow(w);return 0;
        case ID_CONTROLS_CANCEL:KillTimer(w,ID_GAMEPAD_CAPTURE_TIMER);DestroyWindow(w);return 0;
        default:
            if(LOWORD(wp)>=ID_CONTROL_BASE&&
               LOWORD(wp)<ID_CONTROL_BASE+SIMCITY_WIN_BINDING_COUNT){
                start_keyboard_capture(w,c,LOWORD(wp)-ID_CONTROL_BASE);return 0;
            }
            if(LOWORD(wp)>=ID_GAMEPAD_CHANGE_BASE&&
               LOWORD(wp)<ID_GAMEPAD_CHANGE_BASE+SIMCITY_WIN_BINDING_COUNT){
                start_gamepad_capture(w,c,LOWORD(wp)-ID_GAMEPAD_CHANGE_BASE);return 0;
            }
            break;}break;
    case WM_TIMER:
        if(c&&wp==ID_GAMEPAD_CAPTURE_TIMER&&c->capture_action>=0){
            int control=simcity_gamepad_win32_capture_control(selected_gamepad(c));
            wchar_t status[320];wchar_t assignment[192];int action=c->capture_action;
            if(!simcity_gamepad_win32_connected(selected_gamepad(c))){
                cancel_gamepad_capture(w,c,L"Gamepad disconnected. Capture cancelled; keyboard gameplay remains available.");return 0;
            }
            if(c->capture_wait_for_neutral){
                if(control==0){
                    c->capture_wait_for_neutral=0;
                    _snwprintf(status,320,L"Press the new gamepad control for %s. Escape cancels.",
                               simcity_frontend_settings_win32_action_name(action));
                    status[319]=L'\0';set_controls_status(c,status);
                }
            }else if(control!=0){
                c->value.gamepad_bindings[c->selected_player][action]=control;
                simcity_gamepad_win32_control_display_name(selected_gamepad(c),control,
                                                           assignment,192);
                cancel_gamepad_capture(w,c,NULL);
                _snwprintf(status,320,L"%s is now assigned to %s. Choose Apply to save.",
                           simcity_frontend_settings_win32_action_name(action),assignment);
                status[319]=L'\0';set_controls_status(c,status);
                SetFocus(c->gamepad_changes[action]);
            }
            return 0;
        }break;
    case WM_CANCEL_GAMEPAD_CAPTURE:
        if(c&&c->capture_action>=0){
            cancel_gamepad_capture(w,c,L"Gamepad assignment capture cancelled.");
            SetFocus(c->gamepad_changes[0]);return 0;
        }break;
    case WM_COMPLETE_KEYBOARD_CAPTURE:
        if(c&&c->keyboard_capture_action>=0){
            wchar_t status[320];wchar_t key_name[96];int action=c->keyboard_capture_action;
            if(keyboard_key_is_reserved((UINT)wp)){
                set_controls_status(c,
                    L"That key is reserved for a launcher shortcut. Press a different key, or Escape to cancel.");
                return 0;
            }
            c->value.bindings[c->selected_player][action]=
                simcity_frontend_settings_win32_physical_key((UINT)wp,lp);
            simcity_frontend_settings_win32_key_name(
                c->value.bindings[c->selected_player][action],key_name,
                                                     sizeof(key_name)/sizeof(key_name[0]));
            cancel_keyboard_capture(w,c,NULL);
            _snwprintf(status,320,L"%s is now assigned to %s. Choose Apply to save.",
                       simcity_frontend_settings_win32_action_name(action),key_name);
            status[319]=L'\0';set_controls_status(c,status);return 0;
        }break;
    case WM_CANCEL_KEYBOARD_CAPTURE:
        if(c&&c->keyboard_capture_action>=0){
            cancel_keyboard_capture(w,c,L"Keyboard assignment capture cancelled.");return 0;
        }break;
    case WM_CLOSE:KillTimer(w,ID_GAMEPAD_CAPTURE_TIMER);DestroyWindow(w);return 0;
    case WM_DESTROY:KillTimer(w,ID_GAMEPAD_CAPTURE_TIMER);return 0;
    }return DefWindowProcW(w,msg,wp,lp);
}

static int run_dialog(HWND parent,HINSTANCE inst,const wchar_t *cls,const wchar_t *title,WNDPROC proc,int width,int height,SimCityFrontendSettingsWin32 *s,SimCityGamepadInputWin32 *gamepads){
    WNDCLASSW wc;DialogContext c;MSG msg;HWND w;BOOL parent_enabled;int message_result=1;
    memset(&wc,0,sizeof(wc));wc.lpfnWndProc=proc;wc.hInstance=inst;wc.lpszClassName=cls;wc.hCursor=LoadCursor(NULL,IDC_ARROW);wc.hbrBackground=(HBRUSH)(COLOR_WINDOW+1);RegisterClassW(&wc);
    memset(&msg,0,sizeof(msg));
    memset(&c,0,sizeof(c));c.value=*s;c.target=s;c.parent=parent;c.gamepads=gamepads;c.selected_player=0;
    c.capture_action=-1;c.keyboard_capture_action=-1;
    w=CreateWindowExW(WS_EX_DLGMODALFRAME,cls,title,WS_OVERLAPPED|WS_CAPTION|WS_SYSMENU|WS_VISIBLE,CW_USEDEFAULT,CW_USEDEFAULT,width,height,parent,NULL,inst,&c);if(!w)return 0;SetWindowTextW(w,title);center_dialog(w,parent);
    parent_enabled=IsWindowEnabled(parent);EnableWindow(parent,FALSE);SetFocus(GetNextDlgTabItem(w,NULL,FALSE));
    while(IsWindow(w)&&(message_result=GetMessageW(&msg,NULL,0,0))>0){
        if(c.capture_action>=0&&msg.message==WM_KEYDOWN&&msg.wParam==VK_ESCAPE){
            SendMessageW(w,WM_CANCEL_GAMEPAD_CAPTURE,0,0);continue;
        }
        if(c.keyboard_capture_action>=0&&msg.message==WM_KEYDOWN){
            if(msg.wParam==VK_ESCAPE)SendMessageW(w,WM_CANCEL_KEYBOARD_CAPTURE,0,0);
            else SendMessageW(w,WM_COMPLETE_KEYBOARD_CAPTURE,msg.wParam,msg.lParam);
            continue;
        }
        if(!IsDialogMessageW(w,&msg)){TranslateMessage(&msg);DispatchMessageW(&msg);}
    }
    if(parent_enabled)EnableWindow(parent,TRUE);SetForegroundWindow(parent);
    if(message_result==0)PostQuitMessage((int)msg.wParam);
    return c.accepted;
}
int simcity_frontend_settings_win32_dialog(HWND p,HINSTANCE i,SimCityFrontendSettingsWin32 *s){return run_dialog(p,i,SETTINGS_CLASS,L"Settings",settings_proc,560,500,s,NULL);}
int simcity_frontend_controls_win32_dialog(HWND p,HINSTANCE i,SimCityFrontendSettingsWin32 *s,SimCityGamepadInputWin32 gamepads[SIMCITY_PLAYER_COUNT]){return run_dialog(p,i,CONTROLS_CLASS,L"Controls",controls_proc,760,720,s,gamepads);}
