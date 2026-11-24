param(
    [Parameter(Mandatory)][string] $SourceDirectory,
    [Parameter(Mandatory)][string] $DestinationDirectory,
    [ValidateRange(1,16)][int] $Keep = 3
)

$ErrorActionPreference = 'Stop'
$source = (Resolve-Path -LiteralPath $SourceDirectory).Path
$dest = [IO.Path]::GetFullPath($DestinationDirectory, (Get-Location).Path)
if (Test-Path -LiteralPath $dest) { throw 'Use a fresh evidence destination.' }
$baseline = @('construction.log', 'stock-world-construction-quadrants.scsnap')
foreach ($name in $baseline) {
    if (!(Test-Path -LiteralPath (Join-Path $source $name) -PathType Leaf)) {
        throw "Missing construction baseline file: $name"
    }
}

$entries = foreach ($manifest in Get-ChildItem -LiteralPath $source -Filter 'stock-world-infill-*.txt' -File) {
    if ($manifest.BaseName -notmatch '^stock-world-infill-(lot-)?(\d+)$') { continue }
    $perLot = $Matches[1] -eq 'lot-'
    $index = [int]$Matches[2]
    $first = Get-Content -LiteralPath $manifest.FullName -TotalCount 1
    if ($first -notmatch '^SCWORLD-INFILL 2 (\d+) (\d+) (\d+) (\d+) (\d+)$') { continue }
    $stage = [int]$Matches[1]
    $count = [int]$Matches[2]
    $frame = [uint32]$Matches[4]
    if (($perLot -and $index -ne $count) -or (!$perLot -and $index -ne $stage)) { continue }
    $snapshot = [IO.Path]::ChangeExtension($manifest.FullName, 'scsnap')
    if (Test-Path -LiteralPath $snapshot -PathType Leaf) {
        [pscustomobject]@{ Frame=$frame; Stage=$stage; Count=$count; Snapshot=$snapshot; Manifest=$manifest.FullName }
    }
}
$selected = [Collections.Generic.List[object]]::new()
$audit = Join-Path $PSScriptRoot 'Read-WorldInfillCheckpoint.ps1'
foreach ($entry in ($entries | Sort-Object Frame,Stage -Descending)) {
    try { $state = & $audit -Snapshot $entry.Snapshot -WorldWork }
    catch { Write-Verbose "Skipping incomplete pair: $($entry.Manifest)"; continue }
    if (!$state.PowerRecordLoadable) {
        Write-Verbose "Skipping incompatible saved power counters: $($entry.Manifest)"
        continue
    }
    if ($state.Frame -ne $entry.Frame -or $state.Stage -ne $entry.Stage -or $state.InfillSites -ne $entry.Count) { continue }
    $selected.Add($entry)
    if ($selected.Count -ge $Keep) { break }
}
if (!$selected.Count) { throw 'No readable checkpoint pairs matched their manifests.' }

New-Item -ItemType Directory -Path $dest | Out-Null
foreach ($name in $baseline) { Copy-Item -LiteralPath (Join-Path $source $name) -Destination $dest }
foreach ($entry in $selected) {
    foreach ($path in @($entry.Snapshot, $entry.Manifest)) {
        Copy-Item -LiteralPath $path -Destination $dest
        $copy = Join-Path $dest ([IO.Path]::GetFileName($path))
        if ((Get-FileHash -LiteralPath $copy).Hash -ne (Get-FileHash -LiteralPath $path).Hash) {
            throw "Source pair changed during staging; do not use this destination: $dest"
        }
    }
    [pscustomobject]@{ Directory=$dest; Frame=$entry.Frame; Stage=$entry.Stage; CompletedSites=$entry.Count }
}
