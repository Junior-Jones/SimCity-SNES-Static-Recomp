#!/usr/bin/env python3
"""Remove exact contexts shadowed by earlier SimCity dispatch authority.

The production dispatcher has strict precedence: v11 -> v23 -> v24 -> v25 ->
v26 -> v34 -> v35.  A later body with the same PBR:PC:E:M:X key can never be
selected.  This tool removes only those unreachable later definitions and
records the earlier owning stage for every removed key.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import re
from pathlib import Path


CASE_RE = re.compile(r"(?m)^  case 0x([0-9A-Fa-f]{6})u:\r?$\n?")
MODE3_RE = re.compile(
    r"(?m)^(?P<indent>[ \t]*)(?P<kind>if|else if)"
    r"\(m==(\d)u&&x==(\d)u&&e==(\d)u\)\{"
)
MODE2_RE = re.compile(r"(?:if|else if)\(m==(\d)u&&x==(\d)u\)")


def digest(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def case_ranges(text: str) -> list[tuple[int, int, int]]:
    matches = list(CASE_RE.finditer(text))
    default = text.find("  default:", matches[-1].end() if matches else 0)
    ranges: list[tuple[int, int, int]] = []
    for index, match in enumerate(matches):
        end = matches[index + 1].start() if index + 1 < len(matches) else default
        if end < 0:
            raise ValueError("dispatcher default marker is missing")
        ranges.append((int(match.group(1), 16), match.start(), end))
    return ranges


def closing_brace(text: str, opening: int) -> int:
    depth = 0
    for index in range(opening, len(text)):
        if text[index] == "{":
            depth += 1
        elif text[index] == "}":
            depth -= 1
            if depth == 0:
                return index + 1
    raise ValueError("unbalanced context body")


def exact_blocks(case_text: str, address: int) -> list[tuple[tuple[int, int, int, int], int, int]]:
    blocks: list[tuple[tuple[int, int, int, int], int, int]] = []
    for match in MODE3_RE.finditer(case_text):
        end = closing_brace(case_text, case_text.find("{", match.start()))
        blocks.append(
            (
                (address, int(match.group(3)), int(match.group(4)), int(match.group(5))),
                match.start(),
                end,
            )
        )
    return blocks


def scan_mode2(files: list[Path]) -> set[tuple[int, int, int, int]]:
    contexts: set[tuple[int, int, int, int]] = set()
    for path in files:
        text = path.read_text(encoding="utf-8")
        for address, start, end in case_ranges(text):
            body = text[start:end]
            for match in MODE2_RE.finditer(body):
                m, x = int(match.group(1)), int(match.group(2))
                contexts.add((address, m, x, 0))
                if m == 1 and x == 1:
                    contexts.add((address, 1, 1, 1))
    return contexts


def scan_mode3(files: list[Path]) -> set[tuple[int, int, int, int]]:
    contexts: set[tuple[int, int, int, int]] = set()
    for path in files:
        text = path.read_text(encoding="utf-8")
        for address, start, end in case_ranges(text):
            contexts.update(key for key, _, _ in exact_blocks(text[start:end], address))
    return contexts


def prune_file(
    path: Path,
    owners: dict[tuple[int, int, int, int], str],
    stage: str,
) -> tuple[bytes, list[dict[str, object]], set[tuple[int, int, int, int]]]:
    before = path.read_bytes()
    text = before.decode("utf-8")
    removals: list[dict[str, object]] = []
    additions: set[tuple[int, int, int, int]] = set()
    replacements: list[tuple[int, int, str]] = []

    for address, case_start, case_end in case_ranges(text):
        case_text = text[case_start:case_end]
        blocks = exact_blocks(case_text, address)
        if not blocks:
            continue
        remove_ranges: list[tuple[int, int]] = []
        kept = 0
        for key, start, end in blocks:
            if key in owners:
                remove_ranges.append((start, end))
                removals.append(
                    {
                        "context": f"{key[0]:06X}:{key[1]}:{key[2]}:{key[3]}",
                        "address": f"{key[0]:06X}",
                        "m": key[1],
                        "x": key[2],
                        "e": key[3],
                        "shadowed_stage": stage,
                        "owning_stage": owners[key],
                        "path": path.as_posix(),
                    }
                )
            else:
                kept += 1
                additions.add(key)

        if not remove_ranges:
            continue
        if kept == 0:
            replacements.append((case_start, case_end, ""))
            continue

        rebuilt = case_text
        for start, end in reversed(remove_ranges):
            rebuilt = rebuilt[:start] + rebuilt[end:]
        # A removed first branch can leave an invalid leading "else if".
        rebuilt = re.sub(r"(?m)^(\s*)else if", r"\1if", rebuilt, count=1)
        replacements.append((case_start, case_end, rebuilt))

    for start, end, replacement in reversed(replacements):
        text = text[:start] + replacement + text[end:]
    return text.encode("utf-8"), removals, additions


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--check", action="store_true")
    args = parser.parse_args()
    root = args.root.resolve()
    generated = root / "static-recomp" / "generated"
    receipt_path = generated / "SC-CONTEXT-PRUNING-RECEIPT.json"

    if args.check:
        receipt = json.loads(receipt_path.read_text(encoding="utf-8"))
        for row in receipt["files"]:
            data = (root / row["path"]).read_bytes()
            if len(data) != row["bytes_after"] or digest(data) != row["sha256_after"]:
                raise SystemExit(f"pruned authority mismatch: {row['path']}")
        print(json.dumps({"passed": True, "files_checked": len(receipt["files"]),
                          "removed_contexts": receipt["removed_contexts"]}, sort_keys=True))
        return 0

    owners: dict[tuple[int, int, int, int], str] = {}
    v11_files = sorted((generated / "v11-shards").glob("*.c"))
    for key in scan_mode2(v11_files):
        owners.setdefault(key, "v11")

    for stage, files in (
        ("v23", [generated / "sc_v23_static_dispatch.c"]),
        ("v25", [generated / "sc_v25_static_dispatch.c"]),
        ("v26", [generated / "sc_v26_static_dispatch.c"]),
    ):
        for key in scan_mode3(files):
            owners.setdefault(key, stage)

    # v24 deliberately owns every native width combination at this address.
    for m in (0, 1):
        for x in (0, 1):
            owners.setdefault((0x00D2E6, m, x, 0), "v24")

    all_removals: list[dict[str, object]] = []
    rows: list[dict[str, object]] = []
    pending: list[tuple[Path, bytes]] = []
    for stage, files in (
        ("v34", sorted((generated / "v34-shards").glob("*.c"))),
        ("v35", sorted((generated / "v35-shards").glob("*.c"))),
    ):
        for path in files:
            before = path.read_bytes()
            after, removals, additions = prune_file(path, owners, stage)
            for key in additions:
                owners.setdefault(key, stage)
            if removals:
                rel = path.relative_to(root).as_posix()
                all_removals.extend(removals)
                rows.append(
                    {
                        "path": rel,
                        "removed_contexts": len(removals),
                        "bytes_before": len(before),
                        "bytes_after": len(after),
                        "sha256_before": digest(before),
                        "sha256_after": digest(after),
                    }
                )
                pending.append((path, after))

    for row in all_removals:
        row["path"] = str(Path(str(row["path"])).relative_to(root).as_posix())
    receipt = {
        "schema": "simcity-shadowed-exact-context-pruning-v1",
        "precedence": ["v11", "v23", "v24", "v25", "v26", "v34", "v35"],
        "runtime_opcode_fetch": False,
        "runtime_opcode_decode": False,
        "interpreter_fallback": False,
        "hybrid_fallback": False,
        "removed_contexts": len(all_removals),
        "bytes_before": sum(int(row["bytes_before"]) for row in rows),
        "bytes_after": sum(int(row["bytes_after"]) for row in rows),
        "bytes_removed": sum(int(row["bytes_before"]) - int(row["bytes_after"]) for row in rows),
        "files": rows,
        "removals": sorted(all_removals, key=lambda row: (row["address"], row["m"], row["x"], row["e"], row["shadowed_stage"])),
    }
    for path, after in pending:
        path.write_bytes(after)
    receipt_path.write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
    print(json.dumps({key: receipt[key] for key in ("removed_contexts", "bytes_removed", "files") if key != "files"} | {"files_changed": len(rows)}, sort_keys=True))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
