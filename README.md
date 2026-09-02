# SimCity SNES Static Recomp 1.4.0

Native Windows static recompilation frontend and core for SimCity on the Super
Nintendo Entertainment System.

The original game ROM is not included. Use an externally supplied, legally
obtained ROM matching `ROM-REQUIREMENTS.txt`.

## What fully static recompilation means

SimCity's executable W65C816 game instructions were analysed and translated
into generated native C before the application was built. Production dispatch
uses exact processor-state and program-counter contexts. It contains no
general-purpose SNES CPU interpreter, runtime opcode decoder, dynamic
recompiler, JIT, or automatic emulator fallback.

The audio program is static too. SimCity's exact S-SMP program-counter/opcode
authority dispatches only compiled SPC700 instruction forms. Its protected-code
bitmap rejects writes to statically owned driver code, and unknown execution or
semantic ARAM reads stop with a diagnostic. The former emulator S-DSP runtime
has been removed. A project-owned fixed 32-phase S-DSP implements register
timing, BRR decoding, Gaussian interpolation, envelopes, noise, pitch
modulation, echo/FIR and signed 16-bit stereo PCM at the native 32,040 Hz rate.

Game simulation, graphics, samples, music and effects are not prerecorded.
They remain live state driven by the external ROM, cartridge memory, WRAM,
VRAM, ARAM, controller input and SNES timing.

The complete runtime includes:

- Generated exact-context W65C816 game-code dispatch.
- Native cartridge, WRAM, bus, DMA, HDMA, controller and CPU-I/O handling.
- Native PPU registers, scanline events, rendering and framebuffer output.
- Exact rational NTSC scheduling and one guest frame per host deadline.
- Fail-closed exact-PC S-SMP AOT and project-owned 32-phase S-DSP.
- Native 32,040 Hz stereo PCM with knownness, overflow and hash diagnostics.
- Battery SRAM and deterministic snapshots including continuing audio state.
- A native accessible Win32/GDI launcher, SDL3 gamepad input and DirectSound
  speaker output.
- Windowed game-frame screenshots and exact fullscreen-presentation captures.

## SimCity Wide Screen

Wide Screen is a game-specific core feature, not frontend stretching. The core
can render 398x239: the original 256-pixel view plus 71 real city-map pixels on
each side. It extends BG1/BG2 sampling, camera limits, the map cursor and
building placement while keeping the HUD and toolbar anchored correctly.
Title, setup, tutorial prompts, scenario selection and modal screens retain
their native layout. The toolbar control is enabled by default, persists in
`settings.ini`, and can be changed while a game is loaded.

## Windows frontend and audio

Version 1.4.0 ports the current Jungle Strike frontend architecture while
retaining and adapting SimCity's widescreen controls and dynamic geometry.
Win32/GDI owns windows and presentation. SDL3 is used only for gamepad access.

The static core produces 32,040 Hz PCM from guest time. The host drains PCM
during long guest frames, applies the selected nearest, linear or cubic-Hermite
speaker resampler, and writes a DirectSound ring buffer. The playback design is
based on the proven Mesen approach: cursor-derived latency measurement,
pre-roll, bounded drift correction, recovery and exact rational frame pacing.
The default speaker rate is 48,000 Hz. Extra forced latency is disabled by
default and, when enabled, ranges from 0 to 40 ms. Host output changes never
alter the core's native PCM authority.

Mesen was used as the hardware-behaviour and frontend-timing reference during
development. Snes9x-derived S-SMP execution semantics remain under their
original license and are restricted to the generated fail-closed SimCity AOT
authority. Neither emulator is embedded as a runtime fallback.

## Controls and files

The launcher provides accessible Welcome, Settings, Controls, Audio and
snapshot windows. Escape switches between gameplay and the launcher; keys 1
and 2 save/load the current quick-snapshot slot. The function-key group then
runs from F1 for Welcome through F2/F3 save/load snapshots, F4 Settings, F5
Controls, F6 Audio, F7 Run and F8 Screenshot. Closing Welcome or another
frontend dialog restores foreground and keyboard focus to the game or the
previous launcher control.

Configuration is stored in `settings.ini`. On a clean first launch, Welcome is
shown once; closing it persists `General/WelcomeShown=1`, so later launches go
directly to the launcher unless F1 is pressed. Saves, Screenshots and Logs are
created when needed. A static-core error creates a detailed log and displays a
large closeable error window rather than silently changing execution methods.

## Building on Windows

Requirements:

- Windows 10 or later
- CMake 3.20 or later
- Visual Studio 2022 with Desktop development with C++
- Internet access during the first configure for pinned SDL3 gamepad source

```powershell
cmake -S . -B build -G "Visual Studio 17 2022" -A x64
cmake --build build --config Release --parallel
ctest --test-dir build -C Release --output-on-failure
```

`build\Release\Launcher.exe` is the portable application. The optional
`SIMCITY_TEST_ROM` CMake path enables the local real-ROM audio snapshot
continuation test; the ROM is never copied into source or release artifacts.

## Verification

The source includes contract tests for controller ordering, configuration,
resampling, audio defaults, project-owned DSP phase timing, linked DSP purity
and real-ROM snapshot PCM continuation. Long headless routes cover neutral
execution, tutorial gameplay, HUD transitions, toolbar focus, map edges,
wide-cursor travel, construction, scenarios, Freeland and all four map corners.
Unknown static CPU/audio states and PCM overflow remain release failures.

Third-party notices and licenses are in `THIRD-PARTY-NOTICES.txt` and the
corresponding source directories.
