# Static S-SMP AOT provenance

This directory is a separately namespaced copy of the Snes9x BAPU S-SMP and
Shay Green snes_spc S-DSP sources retained under the original licenses. It is
compiled with `SC_SMP_AOT`, which removes the generic SPC700 opcode switch and
uses only the generated SimCity initial-epoch PC/opcode authority and the
used-opcode dispatcher. It is the Full Static development lane; the sibling
Hybrid directory retains the generic interpreter solely as a development
reference. There is no automatic fallback between them.
