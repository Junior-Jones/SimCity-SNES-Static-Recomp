#!/usr/bin/env python3
"""Fail if retired emulator DSP authority can enter the SimCity build."""
from __future__ import annotations

import argparse
import pathlib
import subprocess


def fail(message: str) -> None:
    raise SystemExit(f"FAIL: {message}")


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=pathlib.Path, required=True)
    parser.add_argument("--library", type=pathlib.Path)
    parser.add_argument("--dumpbin", type=pathlib.Path)
    args = parser.parse_args()
    root = args.root.resolve()
    dsp_dir = root / "static-recomp/static-audio/snes9x-bapu-aot/dsp"
    retired = [
        dsp_dir / "SPC_DSP.cpp",
        dsp_dir / "SPC_DSP.h",
        dsp_dir / "sc_static_sdsp_primitives.inc",
        dsp_dir / "blargg_common.h",
        dsp_dir / "blargg_config.h",
        dsp_dir / "blargg_endian.h",
        dsp_dir / "blargg_source.h",
    ]
    present = [str(path.relative_to(root)) for path in retired if path.exists()]
    if present:
        fail("retired DSP source remains: " + ", ".join(present))

    cmake = (root / "static-recomp/CMakeLists.txt").read_text(encoding="utf-8")
    if "simcity-project-dsp/simcity_dsp.c" not in cmake:
        fail("project-owned DSP is absent from the production target")
    for banned in ("SPC_DSP.cpp", "SCStaticSPC_DSP_CUSTOM_RUN"):
        if banned in cmake:
            fail(f"retired build token remains: {banned}")

    if args.library and args.dumpbin and args.dumpbin.is_file():
        result = subprocess.run(
            [str(args.dumpbin), "/symbols", str(args.library)],
            check=True, capture_output=True, text=True, errors="replace")
        for banned in ("SCStaticSPC_DSP", "SPC_DSP"):
            if banned in result.stdout:
                fail(f"retired linked symbol remains: {banned}")
        if "simcity_dsp_step_phase" not in result.stdout:
            fail("project-owned DSP phase authority is absent from the library")

    print("PASS: project-owned SimCity S-DSP is the only production DSP authority")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
