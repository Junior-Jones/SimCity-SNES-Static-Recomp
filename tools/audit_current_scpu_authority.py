#!/usr/bin/env python3
"""Export every compacted generated S-CPU context for closure analysis."""

from __future__ import annotations

import argparse
import json
import re
from pathlib import Path


CASE_RE = re.compile(r"case 0x([0-9A-Fa-f]{6})u:")
MODE3_RE = re.compile(r"(?:if|else if)\(m==(\d)u&&x==(\d)u&&e==(\d)u\)")
MODE2_RE = re.compile(r"(?:if|else if)\(m==(\d)u&&x==(\d)u\)")


def parse_file(path: Path) -> set[tuple[int, int, int, int, int]]:
    contexts: set[tuple[int, int, int, int, int]] = set()
    address: int | None = None
    for line in path.read_text(encoding="utf-8", errors="ignore").splitlines():
        match = CASE_RE.search(line)
        if match:
            address = int(match.group(1), 16)
            continue
        if address is None:
            continue
        match = MODE3_RE.search(line)
        if match:
            contexts.add(
                (address >> 16, address & 0xFFFF,
                 int(match.group(1)), int(match.group(2)), int(match.group(3)))
            )
            continue
        match = MODE2_RE.search(line)
        if match:
            m, x = int(match.group(1)), int(match.group(2))
            contexts.add((address >> 16, address & 0xFFFF, m, x, 0))
            if m == 1 and x == 1:
                contexts.add((address >> 16, address & 0xFFFF, 1, 1, 1))
    return contexts


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--source-root", type=Path, default=Path.cwd())
    parser.add_argument("--output", type=Path, required=True)
    args = parser.parse_args()

    generated = args.source_root / "static-recomp" / "generated"
    files = sorted(generated.glob("*.c"))
    files.extend(sorted((generated / "v11-shards").glob("*.c")))
    files.extend(sorted((generated / "v34-shards").glob("*.c")))
    files.extend(sorted((generated / "v35-shards").glob("*.c")))

    contexts: set[tuple[int, int, int, int, int]] = set()
    for path in files:
        contexts.update(parse_file(path))

    rows = [
        {"bank": bank, "pc": pc, "m": m, "x": x, "e": e,
         "source": "current-compacted-authority-audit"}
        for bank, pc, m, x, e in sorted(contexts)
    ]
    document = {
        "schema": "simcity-current-scpu-authority-audit-v1",
        "contexts": rows,
        "runtime_opcode_fetch": False,
        "runtime_opcode_decode": False,
        "interpreter_fallback": False,
        "hybrid_fallback": False,
    }
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(document, indent=2) + "\n", encoding="utf-8")
    print(f"exported {len(rows)} exact current S-CPU contexts from {len(files)} files")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
