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
- Native 32,040 Hz stereo PCM generation and WinMM playback.
- Battery-backed SRAM persistence and deterministic snapshots.
- Exact-ROM validation and runtime integrity checks.
- An accessible native Windows launcher with Win32/GDI presentation,
  WinMM audio and statically linked SDL gamepad support.

"Fully static" does not mean that the city simulation, graphics or audio are
prerecorded. The simulation advances live according to player decisions and
current machine state. It means that executable game instructions are compiled
ahead of time and the production application has no interpretive or fallback
execution path.

Reference code retained for research or provenance is not linked into the
production launcher and cannot be selected as an automatic runtime fallback.

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

SDL is downloaded from its official `release-3.4.10` tag and checked against a pinned SHA-256 before it is used. It supplies statically linked gamepad support; no SDL DLL is required beside `Launcher.exe`. Video presentation uses native Win32/GDI and audio playback uses native WinMM. The controller database and project adapter are included under `third_party`.
