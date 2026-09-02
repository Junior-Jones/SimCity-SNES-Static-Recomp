SimCity SNES Static Recomp

Place the exact matching .sfc ROM in the Rom folder, or use Browse to select it, then choose Run. The filename can be anything. The ROM is not included.

Save data is written atomically beside Launcher.exe at Saves\SimCity-USA.srm.

The Windows launcher uses a native static recompilation core with Win32/GDI presentation, SDL3 gamepad input, project-owned Full Static audio at 32,040 Hz, and DirectSound speaker output.

Frontend, controls, audio, display, snapshot slot, remembered ROM path, and first-run Welcome status are stored together in settings.ini. Deleting settings.ini restores defaults and displays Welcome again.

Welcome appears once on a clean first launch. Closing it saves General/WelcomeShown=1; press F1 whenever you want to open it again. Closing Welcome returns keyboard focus to the game or the previous launcher control.

Screenshots, Snapshots, Audio, Saves, and Logs folders are created only when their matching feature first writes a file.

See Rom\readme.txt and ROM-REQUIREMENTS.txt for the required ROM details.
