SimCity (SNES) Static Recompilation 2.0.0
Windows x64

Getting started
---------------
Place the exact SimCity USA/Canada NTSC ROM in Rom beside Launcher.exe.
Auto-Run is on by default: open Launcher.exe and close the first-run
Welcome screen to start the game. Turn Auto-Run off in Settings if you
prefer to start manually. Use Browse if the ROM is elsewhere.

Required format: unheadered .sfc, 524,288 bytes (512 KiB).
The filename can be anything. SHA-256:
e9c0bc05511e05a0d7c3e7cc42e761e1e8e532d46f59b9854b6902e1a2e9dd0a

The original ROM is not included. The Windows build does not require an
SDL DLL or a separate runtime installation.

World Maps
----------
At the title screen press Start (G by default). Move down past Select
Scenario to World Maps and press B (D). Up and Down browse nine 240x200
maps and update the terrain preview. B selects the highlighted map; X (S)
goes back. Finish the original New City setup to start building.

Display and audio
-----------------
Wide Screen and 60 FPS are enabled by default. Both can be changed on the
launcher toolbar or in Settings. Wide Screen shows real map content at
398x239 instead of stretching the original 256x239 frame. Menus retain
their original layout. 60 FPS changes display timing, not game speed.

F6 opens Audio Settings. Adjust overall volume, output sample rate,
resampler, and optional added latency there. The core generates 32,040 Hz
stereo PCM; Windows handles playback and resampling.

Launcher shortcuts
------------------
Ctrl+O   Browse for a ROM
Escape   Switch between the game and launcher
1 / 2    Save / load the current snapshot
F1       Welcome and shortcut guide
F2 / F3  Open Save / Load Snapshot
F4       Settings
F5       Controls
F6       Audio Settings
F7       Run the selected ROM
F8       Take a screenshot and write a matching diagnostic report

Saved data and screenshots
--------------------------
Keep settings.ini and Saves when updating. The two original in-game slots
accept either a regular city or a World Map. If In-Game Saves.scwb does not
exist yet, the launcher reads any older SimCity-USA.srm without modifying
it. Launcher snapshots are separate from the original in-game slots.

F8 saves a BMP in Screenshots and a matching TXT report in Log. Log is
created on the first successful screenshot. The report identifies the
image frame and the live diagnostic frame, which can be different when
buffered display is enabled. It includes timing, audio, and guest RAM and
simulation diagnostics.

See VERSION.txt for release changes and THIRD-PARTY-NOTICES.txt for notices.
