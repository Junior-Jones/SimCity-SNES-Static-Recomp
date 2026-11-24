[CmdletBinding()]
param(
    [Parameter(Mandatory)][string]$Reference,
    [Parameter(Mandatory)][string]$Candidate,
    [Parameter(Mandatory)][string]$Rom,
    [Parameter(Mandatory)][string]$TapeDirectory,
    [Parameter(Mandatory)][string]$OutputDirectory
)

$ErrorActionPreference = 'Stop'
$a = (Resolve-Path -LiteralPath $Reference).ProviderPath
$b = (Resolve-Path -LiteralPath $Candidate).ProviderPath
$romPath = (Resolve-Path -LiteralPath $Rom).ProviderPath
$tapeRoot = (Resolve-Path -LiteralPath $TapeDirectory).ProviderPath
$inputs = @('input.scinput', 'input-start.scsnap', 'input-end.scsnap') |
    ForEach-Object { Get-Item -LiteralPath (Join-Path $tapeRoot "stock-world-construction-$_") }
$binaryHashA = (Get-FileHash -LiteralPath $a).Hash
$binaryHashB = (Get-FileHash -LiteralPath $b).Hash
if ($binaryHashA -eq $binaryHashB) { throw 'Reference and candidate are the same binary.' }
if (Test-Path -LiteralPath $OutputDirectory) { throw 'Use a new output directory to preserve earlier evidence.' }
if (Get-Process -Name 'simcity-widescreen-probe', ([IO.Path]::GetFileNameWithoutExtension($a)),
        ([IO.Path]::GetFileNameWithoutExtension($b)) -ErrorAction SilentlyContinue) {
    throw 'A probe is already running. Wait for it instead of competing for timing.'
}
$out = (New-Item -ItemType Directory -Path $OutputDirectory).FullName
$inputs | ForEach-Object { Get-FileHash -LiteralPath $_.FullName } |
    Export-Csv -LiteralPath (Join-Path $out 'input-hashes.csv') -NoTypeInformation
$expectedHash = ($inputs | Where-Object Name -like '*input-end.scsnap' |
    Get-FileHash).Hash
$parity = $null
$rows = foreach ($label in 'a1','b1','b2','a2') {
    $variant = $label.Substring(0, 1)
    $exe = if ($variant -eq 'a') { $a } else { $b }
    $dir = (New-Item -ItemType Directory -Path (Join-Path $out $label)).FullName
    foreach ($inputFile in $inputs) { Copy-Item -LiteralPath $inputFile.FullName -Destination $dir }
    $log = Join-Path $dir 'replay.log'
    & $exe $romPath 'stock-world-construction-tape-verify' $dir > $log 2> (Join-Path $dir 'stderr.log')
    if ($LASTEXITCODE -ne 0) { throw "Replay $label failed (exit $LASTEXITCODE). See $dir." }
    $fields = @{}
    foreach ($line in (Get-Content -LiteralPath $log)) {
        if ($line -notmatch '^stock-construction-tape-(verify|compute|compute-cycles) ') { continue }
        foreach ($m in [regex]::Matches($line, '(\w+)=([0-9A-F.]+)(?:\s|$)')) {
            $fields[$m.Groups[1].Value] = $m.Groups[2].Value
        }
    }
    if ($fields.snapshot_exact -ne '1' -or !$fields.hash -or !$fields.pcm -or
        !$fields.frames -or $fields.samples -ne $fields.frames -or
        [uint64]$fields.mean_scheduled_cycles -le 0 -or
        (Get-FileHash -LiteralPath (Join-Path $dir 'stock-world-construction-input-replayed.scsnap')).Hash -ne $expectedHash) {
        throw "Replay $label lacks exact snapshot or complete timing samples. See $dir."
    }
    $identity = "$($fields.start_frame):$($fields.frames):$($fields.pcm):$($fields.hash)"
    if ($null -eq $parity) { $parity = $identity }
    if ($parity -ne $identity) { throw "Replay $label differs in input range or PCM. See $dir." }
    [pscustomobject]@{
        Run = $label; ExeHash = if ($variant -eq 'a') { $binaryHashA } else { $binaryHashB }
        Frames = [int]$fields.frames; PcmFrames = [uint64]$fields.pcm; PcmHash = $fields.hash
        MeanCycles = [uint64]$fields.mean_scheduled_cycles; PeakCycles = [uint64]$fields.peak_scheduled_cycles
        MeanMs = $fields.mean_ms; PeakMs = $fields.peak_ms
        Over8_33Ms = [int]$fields.over_8_33ms; Over16_67Ms = [int]$fields.over_16_67ms
    }
}
$rows | Export-Csv -LiteralPath (Join-Path $out 'summary.csv') -NoTypeInformation
$rows
