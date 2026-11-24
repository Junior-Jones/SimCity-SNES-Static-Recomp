# SimCity SNES Static Recomp 2.0.1

<a href="https://recomplauncher.com/game/simcity-snes-static-recomp"><picture><source media="(prefers-color-scheme: dark)" srcset="https://recomplauncher.com/assets/press/launcher/badge-light.svg"><img alt="Get it on RecompLauncher" src="https://recomplauncher.com/assets/press/launcher/badge-dark.svg" height="48"></picture></a>

RecompLauncher can start SimCity with your selected ROM and manage its display settings and saves. To start directly without RecompLauncher, run `Launcher.exe --game "path to your SimCity ROM.sfc"`. Opening `Launcher.exe` without arguments still uses the normal startup flow.

Native Windows static recompilation frontend and core for SimCity on the Super
Nintendo Entertainment System.

The original game ROM is not included. Use an externally supplied, legally
obtained ROM matching the identity in `README.txt`.

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
New settings default to widescreen and 60 Hz display presentation. The
display rate does not change the original SNES game speed or audio timing.
The display setting must not accelerate simulation, progression, input,
menus, animation, or sound. Game events keep their original timing even
when they change at a different rate from the display.
60 Hz is the presentation target, not a guarantee that every Windows paint
will finish on time. A late paint does not change the guest clock. The
8.33 ms stress headroom target is tracked separately; it is not a 120 FPS
player setting.

The World Map template is a 240×200 map: twice the width and height of the
normal 120×100 map, with four times as many tiles. It uses the original
SimCity simulation. Its gameplay requirement is full normal-map parity:
no system is removed, replaced, or simplified to make room for the
larger map. Each system is verified separately on the expanded map.

Open `Launcher.exe` and start the game normally. At the title screen,
press Start, move down past Select Scenario, and press B on World Maps.
Up/Down browse the nine land/sea layouts and show their terrain previews,
B continues to the original New City setup, and X returns to the main
menu without starting a city. The Windows title stays `SimCity (SNES)`.
Inland Plain is the all-land option: all 48,000 tiles start as flat, clear
ground, with no rivers, lakes, or sea.
Its headless regression selects Inland Plain through the catalog, builds
a coal plant and a road- and rail-served residential zone at the far
southeast using the original controls, verifies all nine zone tiles are
powered, and compares the entire map after saving and reopening it.

The nine layouts are fictional, not literal imports of real maps. Real
geography provides design references: the branching [Mississippi Delta](https://pubs.usgs.gov/ha/ha730/ch_f/F-text1.html)
for Delta Coast, a long bay with branching inlets like [Chesapeake Bay](https://oceanservice.noaa.gov/facts/chesapeake.html)
for Inner Sea, and [Stockholm's inner and outer islands](https://www.visitstockholm.com/see-do/excursions/discover-stockholm-archipelago/)
for Island Chain and Outer Archipelago. Adapt the shapes to preserve the
catalog's land/water ratios, a buildable starting area, and useful locations
for native bridges and seaports. These are terrain design references, not
changes to SimCity's rules or the regular maps.

Unobstructed water uses the original deep-water tile, so the seaport's
edge-entry search can find it. A headless Outer Archipelago route built a
road and rail crossing, powered all 16 seaport tiles, and observed the
original ship move over deep water. World Map mode widens the original
edge scan and movement lookups without replacing their rules. An east-only
test copy of that harbor produced a native arrival at (239,4) and four
deep-water moves outside the normal map's bounds. The controlled bus test
also covers the other edges and verifies the ordinary-map path is unchanged.
The headless airport fixture at (150,150) verified native power, takeoff,
flight, and the original Plane Crash command and camera response.
A separate test executes the original runway-detection instructions on
both map sizes. An eligible approach starts the runway roll on the same
tile word in both modes; a wrong heading or a power-flagged runway word
is rejected by the stock routine. This proves detection parity, not that a
plane naturally returned and landed in the earlier flight run.

The two original in-game save slots accept either a regular city or a World Map.
They are stored in `Saves/In-Game Saves.scwb` beside the launcher. If this
file does not exist, the launcher reads any older `Saves/SimCity-USA.srm`
without modifying it. Use the game's original Load/Save toolbar to load a slot.
Launcher snapshots remain separate from the two in-game slots.
The Inland Plain regression covers the original slot 1 Save and Load
dialogs in the same session and in a fresh process, checks the saved
treasury and all tile codes, then checks that power propagation resumes.

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

With a real ROM configured, `simcity-stock-world-developed-render-parity`
replays the developed mixed district with no rendering, native-width
rendering, and widescreen rendering. Identical input must produce identical
guest clocks, instructions, WRAM, tile data and PCM in each run. The separate
`stock-60hz-world-mixed-development-long` probe uses the generated
`stock-world-mixed-development.scsnap` for a 60-second timed check in each width.
It rejects repeated, merged, or wrong-target present slots as well as guest
pace drift and modeled audio buffer errors. The timed probe is headless; its
audio model is not a live speaker test.
The launcher prepares three frames in 60 Hz mode. Compared with
the original two-frame buffer, this adds about 17 ms of video buffering
without changing the guest or audio clock. If the guest is still running
when a presentation deadline arrives, the audio callback may draw the
already prepared immutable frame; it never runs more guest work.

For a headless comparison across gameplay modes, run
`simcity-widescreen-probe <rom> stock-60hz-headless-gate-cooperative <fixture-dir>`.
The directory must contain the developed snapshot above. The probe checks
whether servicing a ready frame during a guest step avoids missed slots.
Append `-extra-lead` to the mode name to test one more prepared frame in the
four ordinary modes. Neither variant changes launcher settings or tests live
display or speaker output.

`stock-60hz-headless-gate-offscreen` adds the launcher's Win32 drawing
routine, targeting a 1920×1080 memory bitmap instead of a window.
`stock-60hz-world-offscreen-overlap` also runs the World Map without the
usual near-deadline deferral for guest work and requires a draw during a
guest progress callback. Neither opens the launcher or tests the desktop
compositor or sound device.

`stock-60hz-world-full-stress` constructs a synthetic, fully occupied
240×200 map with developed residential, commercial and industrial zones,
coal plants, roads and power lines. It drives the authentic city at its
original rate for 60 seconds per width, still presenting at 60 Hz. The
8.33 ms headroom line is a host compute budget, not a guest speed setting.
`stock-full-native-pass-profile` traces consecutive census, power, density,
environment and service work against that same budget. The separate
`stock-60hz-world-full-power` gate replays a saved census checkpoint and
requires native power and fire work to complete while presentation and audio
remain on pace. `stock-60hz-disaster-quake` checks presentation separately
while an actual stock earthquake timer advances.

Third-party notices and licenses are in `THIRD-PARTY-NOTICES.txt` and the
corresponding source directories.
