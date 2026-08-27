# SimCity SNES Static Recomp 1.2.0

Native Windows static recompilation frontend and core for SimCity on the Super Nintendo Entertainment System.

The original game ROM is not included. Use an externally supplied, legally obtained ROM matching `ROM-REQUIREMENTS.txt`.

## What "fully static recompilation" means

SimCity is a fully static, ahead-of-time recompilation. Its executable W65C816
game instructions were analysed and translated into generated native C code
before the application was built. The production launcher dispatches directly
to exact processor-state and program-counter contexts.

At runtime, the application does not use a general-purpose SNES CPU
interpreter, runtime opcode decoder, dynamic recompiler, JIT compiler or
automatic emulator fallback. Unknown CPU or audio execution states stop the
core with a diagnostic error rather than switching to another execution
method.

The complete runtime includes:

- Generated exact-PC W65C816 game-code dispatch.
- Native cartridge, WRAM and machine-bus handling.
- Native PPU register, video and framebuffer generation.
- Native DMA, HDMA, controller and CPU-I/O handling.
- NTSC scheduling, refresh, NMI, IRQ and scanline events.
- Fail-closed Full Static S-SMP and S-DSP audio.
- Native 32,040 Hz stereo PCM generation.
- Battery-backed SRAM persistence and deterministic snapshots.
- Exact-ROM validation and runtime integrity checks.
- An accessible native Windows launcher with direct GDI presentation,
  four-buffer WinMM audio, and statically linked SDL gamepad support.

"Fully static" does not mean that the city simulation, graphics or audio are
prerecorded. The simulation advances live according to player decisions and
current machine state. It means that executable game instructions are compiled
ahead of time and the production application has no interpretive or fallback
execution path.

Reference code retained for research or provenance is not linked into the
production launcher and cannot be selected as an automatic runtime fallback.

## Static-core compaction in 1.2.0

Version 1.2.0 replaces repeated generated entry and exit bookkeeping with
compile-time C macros and removes 2,503 later exact contexts that were
unreachable because an earlier production dispatch stage already owned the
same `PBR:PC:E:M:X` key. The dispatch order and every retained context key are
unchanged. The compaction introduces no runtime opcode fetch, decoder,
interpreter, JIT or fallback path.

Machine-readable receipts in `static-recomp/generated` record the source
transformations and hashes. The corresponding scripts in `tools` can verify
the compacted files without requiring the game ROM.

## Windows frontend and audio

The 1.2.0 launcher uses a thin host connector over the public SimCity static
core API. Video frames are presented directly through Win32 GDI. Native
32,040 Hz stereo PCM is queued through four fixed WinMM buffers with complete
pre-roll and a short resume fade. This replaces the previous adaptive SDL
audio stream and its playback-ratio correction. SDL remains statically linked
only for gamepad discovery, mappings, and input.

The launcher follows the established Bubble Bobble frontend layout: Browse,
Play, Reset, Audio, Settings, Keys, Full screen, and Auto-Run. F1 opens the
single Welcome and shortcut guide; F2/F3 save and load snapshots; F4 opens
Settings; F5 opens controller bindings; F6 opens Audio; F7 runs the selected
ROM; and F8 captures the complete game window. Welcome and About use the same
accessible information window with explicit Tab and Shift+Tab navigation.

Battery data and snapshots are written under `Saves`. Screenshots are written
under `Screenshots`, with per-capture diagnostics under `Screenshots/Logs`.
The portable release includes both main folders with Readme files but contains
no user settings, saves, snapshots, captures, ROMs, or test data.

All persistent launcher state is stored in one portable `settings.ini` beside
`Launcher.exe`, including general/display options, audio, keyboard and gamepad
bindings, first-run state, current snapshot slot, and the remembered ROM path.
Older split launcher INIs are migrated automatically.

## Building on Windows

Requirements:

- Windows 10 or later
- CMake 3.20 or later
- Visual Studio 2022 with Desktop development with C++
- Internet access during the first CMake configure so the pinned SDL source can be downloaded

```powershell
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release --target simcity-launcher
```

The resulting portable `Launcher.exe` is placed in `build/release`.

SDL is downloaded from its official `release-3.4.10` tag and checked against a pinned SHA-256 before it is used for gamepad support. No SDL DLL is required beside `Launcher.exe`. The controller database and project adapter are included under `third_party`; video and speaker output use native Windows APIs.
