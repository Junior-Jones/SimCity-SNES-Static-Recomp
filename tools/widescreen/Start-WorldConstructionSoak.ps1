param(
    [Parameter(Mandatory)][string] $Probe,
    [Parameter(Mandatory)][string] $Rom,
    [Parameter(Mandatory)][string] $EvidenceDirectory,
    [switch] $VerifyOnly
)

$ErrorActionPreference = 'Stop'
$probePath = (Resolve-Path -LiteralPath $Probe).Path
$romPath = (Resolve-Path -LiteralPath $Rom).Path
$evidence = (Resolve-Path -LiteralPath $EvidenceDirectory).Path
if ([IO.Path]::GetFileName($probePath) -ne 'simcity-widescreen-probe.exe') {
    throw 'Supply the headless widescreen probe, not Launcher.exe.'
}

$snapshot = Join-Path $evidence 'stock-world-construction-quadrants.scsnap'
$ledger = Join-Path $evidence 'construction.log'
if (!(Test-Path -LiteralPath $snapshot -PathType Leaf) -or
    !(Test-Path -LiteralPath $ledger -PathType Leaf)) {
    throw 'The final controller-built city and its verification ledger are both required. A partial snapshot is not accepted.'
}

$expected = @('airport','seaport','stadium','nuclear','residential','commercial','industrial',
              'police','fire','park','coal')
$lines = Get-Content -LiteralPath $ledger
$summary = $lines | Where-Object { $_ -match '^stock-construction-summary\s' } |
    Select-Object -Last 1
if (!$summary -or $summary -notmatch ' unknown=0 underruns=0 overflows=0 core_overflows=0 dropped=0(?:\s|$)' -or
    ($lines -match '^Stock building stress stopped ')) {
    throw 'The construction ledger has no clean final audio and completion summary.'
}

$sites = @{}
foreach ($line in $lines) {
    if ($line -notmatch '^stock-construction-service quadrant=([0-3]) lot=\((\d+),(\d+)\) stock-building verified=([a-z]+) road=1 rail=1 energized_line=1 powered_footprint=(\d+)/(\d+)(?:\s|$)') {
        continue
    }
    $quadrant = [int]$Matches[1]
    $x = [int]$Matches[2]
    $y = [int]$Matches[3]
    $building = $Matches[4]
    $powered = [int]$Matches[5]
    $footprint = [int]$Matches[6]
    $actual = [int]($x -ge 120) + 2 * [int]($y -ge 100)
    if ($x -ge 240 -or $y -ge 200 -or $actual -ne $quadrant -or
        $footprint -lt 1 -or ($building -ne 'park' -and $powered -ne $footprint)) {
        throw "Invalid verified site: $line"
    }
    $key = "$quadrant/$building"
    if ($sites.ContainsKey($key)) { throw "Duplicate verified site: $key" }
    $sites[$key] = $true
}
foreach ($quadrant in 0..3) {
    foreach ($building in $expected) {
        $key = "$quadrant/$building"
        if (!$sites.ContainsKey($key)) { throw "Missing verified building and services: $key" }
    }
}
$sha = (Get-FileHash -LiteralPath $snapshot -Algorithm SHA256).Hash
$source = "stock-construction-soak-source sites=44 snapshot_sha256=$sha"
if ($VerifyOnly) { Write-Output $source; return }

$log = Join-Path $evidence 'stock-full-pipeline-construction-soak.log'
if (Test-Path -LiteralPath $log) {
    throw 'A soak log already exists here. Preserve it and use a new evidence directory for a rerun.'
}
Write-Output $source | Tee-Object -FilePath $log
& $probePath $romPath stock-60hz-world-construction-soak $evidence 2>&1 | Tee-Object -FilePath $log -Append
$code = $LASTEXITCODE
if ((Get-FileHash -LiteralPath $snapshot -Algorithm SHA256).Hash -ne $sha) {
    throw 'The construction checkpoint changed during playback. Discard this timing result.'
}
if ($code) { throw "The full-city soak returned exit code $code. Consult the separate timing and replay gates in the log." }
