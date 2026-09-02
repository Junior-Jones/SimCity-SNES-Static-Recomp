# SimCity static S-SMP/S-DSP provenance

The S-SMP execution semantics retain their Snes9x provenance and original
license, but production is compiled only through SimCity's fail-closed exact-PC
AOT lookup, dispatcher and protected-code bitmap. The generic SPC700 runtime
switch is not present in the production path. Unknown PCs, opcode mismatches,
unemitted forms, unknown semantic ARAM reads, and writes to protected driver
code stop with diagnostics; there is no automatic fallback.

S-DSP authority is the project-owned fixed hardware model in
`../simcity-project-dsp`. It implements all 32 hardware phases, register
visibility, BRR decoding, Gaussian interpolation, envelopes, noise, pitch
modulation, echo/FIR, native PCM, explicit knownness, overflow accounting and
deterministic state. The former emulator DSP runtime and its helper sources are
not present or linked. Snapshots serialize the S-SMP, ARAM-knownness and S-DSP
state required for deterministic PCM continuation.
