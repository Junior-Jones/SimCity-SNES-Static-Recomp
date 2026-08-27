#!/usr/bin/env python3
"""Compact repeated generated-core bookkeeping without runtime decoding.

The generated exact-context bodies repeat the same entry/exit sequences tens
of thousands of times.  This tool replaces only those byte-for-byte templates
with compile-time macros declared by sc_v11_runtime.h.  The C preprocessor
restores the original statements before compilation, so context identity,
instruction semantics, fail-closed behavior, and dispatch topology remain
unchanged.
"""

from __future__ import annotations

import argparse
import hashlib
import json
import re
import subprocess
from pathlib import Path


BEGIN_RE = re.compile(
    r"(?P<indent>[ \t]*)sc_v11_scheduler_code_access\(r,(?P<address>[^,\r\n]+),"
    r"(?P<length>[^)\r\n]+)\);r->open_bus=(?P<open_bus>[^;\r\n]+);\r?\n"
    r"(?P=indent)r->scheduler\.cpu_instructions\+\+;r->generated_callbacks\+\+;"
    r"r->machine\.static_executed_instructions="
    r"\(uint32_t\)r->scheduler\.cpu_instructions;c->pc=(?P<next_pc>[^;\r\n]+);"
)

END_RE = re.compile(
    r"(?P<indent>[ \t]*)if\(!sc_v11_finish_instruction\(r\)\)return 0;"
    r"(?:\r?\n(?P=indent)|[ \t]*)return r->route_failed\?0:1;"
)


def sha256(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def compact_text(text: str) -> tuple[str, int, int]:
    newline = "\r\n" if "\r\n" in text else "\n"

    def begin(match: re.Match[str]) -> str:
        return (
            f"{match.group('indent')}SC_STATIC_CONTEXT_BEGIN("
            f"{match.group('address')},{match.group('length')},"
            f"{match.group('open_bus')},{match.group('next_pc')});"
        )

    def end(match: re.Match[str]) -> str:
        return f"{match.group('indent')}SC_STATIC_CONTEXT_END();"

    result, begin_count = BEGIN_RE.subn(begin, text)
    result, end_count = END_RE.subn(end, result)
    # Preserve the file's existing newline convention.
    if newline == "\r\n":
        result = result.replace("\r\n", "\n").replace("\n", "\r\n")
    return result, begin_count, end_count


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--root", type=Path, default=Path(__file__).resolve().parents[1])
    parser.add_argument("--check", action="store_true")
    args = parser.parse_args()

    root = args.root.resolve()
    generated = root / "static-recomp" / "generated"
    manifest_path = generated / "SC-COMPACT-GENERATED-RECEIPT.json"

    if args.check:
        if not manifest_path.exists():
            raise SystemExit("compaction receipt is missing")
        receipt = json.loads(manifest_path.read_text(encoding="utf-8"))
        pruning_path = generated / "SC-CONTEXT-PRUNING-RECEIPT.json"
        pruning = {}
        if pruning_path.exists():
            pruning_receipt = json.loads(pruning_path.read_text(encoding="utf-8"))
            pruning = {row["path"]: row for row in pruning_receipt.get("files", [])}
        for row in receipt.get("files", []):
            path = root / str(row["path"])
            data = path.read_bytes()
            expected_size = int(row["bytes_after"])
            expected_hash = row["sha256_after"]
            later = pruning.get(row["path"])
            if later:
                if later["sha256_before"] != expected_hash:
                    raise SystemExit(f"receipt chain mismatch: {path}")
                expected_size = int(later["bytes_after"])
                expected_hash = later["sha256_after"]
            if len(data) != expected_size or sha256(data) != expected_hash:
                raise SystemExit(f"compacted authority mismatch: {path}")
            text = data.decode("utf-8")
            if not later:
                if text.count("SC_STATIC_CONTEXT_BEGIN(") != int(row["entry_templates"]):
                    raise SystemExit(f"entry-template count mismatch: {path}")
                if text.count("SC_STATIC_CONTEXT_END()") != int(row["exit_templates"]):
                    raise SystemExit(f"exit-template count mismatch: {path}")
        print(json.dumps({"passed": True, "files_checked": len(receipt.get("files", [])),
                          "receipt_chain": bool(pruning)}, sort_keys=True))
        return 0

    rows: list[dict[str, object]] = []
    total_begin = 0
    total_end = 0
    total_before = 0
    total_after = 0

    pending: list[tuple[Path, bytes]] = []
    for path in sorted(generated.rglob("*.c")):
        if path.name == manifest_path.name:
            continue
        # The bootstrap authority uses a deliberately different entry
        # sequence.  Its exit happens to match the common template, so leave
        # the entire file unchanged rather than producing a partial rewrite.
        if path.name == "sc_v11_bootstrap_dispatch.c":
            continue
        before = path.read_bytes()
        text = before.decode("utf-8")
        compacted, begin_count, end_count = compact_text(text)
        after = compacted.encode("utf-8")
        final_begin_count = compacted.count("SC_STATIC_CONTEXT_BEGIN(")
        final_end_count = compacted.count("SC_STATIC_CONTEXT_END()")
        if final_begin_count or final_end_count:
            rel = path.relative_to(root).as_posix()
            try:
                baseline = subprocess.check_output(
                    ["git", "show", f"HEAD:{rel}"], cwd=root
                )
            except subprocess.CalledProcessError as exc:
                raise SystemExit(f"cannot read baseline for {rel}") from exc
            rows.append(
                {
                    "path": rel,
                    "entry_templates": final_begin_count,
                    "exit_templates": final_end_count,
                    "bytes_before": len(baseline),
                    "bytes_after": len(after),
                    "sha256_before": sha256(baseline),
                    "sha256_after": sha256(after),
                }
            )
            total_begin += final_begin_count
            total_end += final_end_count
            total_before += len(baseline)
            total_after += len(after)
            pending.append((path, after))

    receipt = {
        "schema": "simcity-generated-bookkeeping-compaction-v1",
        "method": "compile-time-macro-template-substitution",
        "runtime_opcode_fetch": False,
        "runtime_opcode_decode": False,
        "interpreter_fallback": False,
        "hybrid_fallback": False,
        "context_identity_changed": False,
        "dispatch_topology_changed": False,
        "files_changed": len(rows),
        "entry_templates": total_begin,
        "exit_templates": total_end,
        "bytes_before": total_before,
        "bytes_after": total_after,
        "bytes_removed": total_before - total_after,
        "files": rows,
    }

    for path, after in pending:
        path.write_bytes(after)
    manifest_path.write_text(json.dumps(receipt, indent=2) + "\n", encoding="utf-8")
    print(json.dumps(receipt, sort_keys=True))
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
