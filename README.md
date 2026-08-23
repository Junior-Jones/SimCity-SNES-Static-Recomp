# SimCity SNES Static Recomp 1.1.2

Native Windows static recompilation frontend and core for SimCity on the Super Nintendo Entertainment System.

The original game ROM is not included. Use an externally supplied, legally obtained ROM matching `ROM-REQUIREMENTS.txt`.

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

SDL is downloaded from its official `release-3.4.10` tag and checked against a pinned SHA-256 before it is used. It supplies static-linked GPU presentation, device audio and gamepad support; no SDL DLL is required beside `Launcher.exe`. The controller database and project adapter are included under `third_party`.
