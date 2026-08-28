#!/usr/bin/env python3
"""Regenerate the release-source manifest and SHA-256 list."""

from __future__ import annotations

import argparse
import hashlib
import json
import subprocess
from pathlib import Path


EXCLUDED = {"SOURCE-MANIFEST.json", "SHA256SUMS.txt"}


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--version", default="1.3.0")
    args = parser.parse_args()
    root = args.root.resolve()

    output = subprocess.check_output(
        ["git", "ls-files", "--cached", "--others", "--exclude-standard", "-z"],
        cwd=root,
    )
    paths = sorted(
        path for path in output.decode("utf-8").split("\0")
        if path and path not in EXCLUDED and (root / path).is_file()
    )
    rows = []
    for relative in paths:
        data = (root / relative).read_bytes()
        rows.append({
            "path": relative.replace("\\", "/"),
            "size": len(data),
            "sha256": hashlib.sha256(data).hexdigest(),
        })

    manifest = {
        "schema": "simcity-source-manifest-v1",
        "platform": "Windows",
        "version": args.version,
        "file_count": len(rows),
        "total_bytes": sum(row["size"] for row in rows),
        "files": rows,
    }
    (root / "SOURCE-MANIFEST.json").write_text(
        json.dumps(manifest, indent=2) + "\n", encoding="utf-8", newline="\n"
    )
    sums = "".join(f"{row['sha256']}  {row['path']}\n" for row in rows)
    (root / "SHA256SUMS.txt").write_text(sums, encoding="utf-8", newline="\n")
    print(json.dumps({key: manifest[key] for key in ("version", "file_count", "total_bytes")}))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
