param([Parameter(Mandatory)][string] $Snapshot, [switch] $IncludeBaseline, [switch] $BySector,
      [switch] $WorldWork, [switch] $TileCoverage)

$ErrorActionPreference = 'Stop'
$path = (Resolve-Path -LiteralPath $Snapshot).Path
$manifest = Get-Content -LiteralPath ([IO.Path]::ChangeExtension($path, 'txt'))
if ($manifest.Count -lt 2 -or $manifest[0] -notmatch '^SCWORLD-INFILL 2 (\d+) (\d+) (\d+) (\d+) (\d+)$' -or
    $manifest[-1] -ne 'END') { throw 'The infill manifest is incomplete.' }
$stage = [int]$Matches[1]
$count = [int]$Matches[2]
$frame = [uint32]$Matches[4]
if ($stage -gt 224 -or $count -gt 960 -or $manifest.Count -ne $count + 18) {
    throw 'Unexpected stage or lot count.'
}
$data = [IO.File]::ReadAllBytes($path)
if ($data.Length -lt 36 -or [Text.Encoding]::ASCII.GetString($data, 0, 8) -ne 'SCWORLD6' -or
    [BitConverter]::ToUInt32($data, 8) -ne 6 -or [BitConverter]::ToUInt32($data, 12) -ne $frame) {
    throw 'The snapshot header does not match the sector checkpoint.'
}
# SCWORLD6 appends these six fixed-size work blocks, then 48,000 LE tiles.
# This is a read-only tile audit, not a replacement for the core checksum.
$censusAndPower = 36L + 2L * $frame + [BitConverter]::ToUInt32($data, 20) +
    [BitConverter]::ToUInt32($data, 24)
$traffic = $censusAndPower + 6052
$density = $traffic + 12012 + 37500 # Skip the persistent land/pollution/density/growth block.
$environment = $density + 24020
$services = $environment + 18016
$tiles = $services + 6024
if ($tiles + 96000 -ne $data.Length) { throw 'Unexpected World Map snapshot size.' }

if ($WorldWork) {
    function Read-Work([long] $block, [int] $field) { [BitConverter]::ToUInt32($data, [int]($block + 4 * $field)) }
    $written = Read-Work $censusAndPower 6
    $powered = Read-Work $censusAndPower 7
    $orderErrors = Read-Work $censusAndPower 8
    $propagating = Read-Work $censusAndPower 10
    $materializing = Read-Work $censusAndPower 11
    $complete = Read-Work $censusAndPower 12
    $powerRecordLoadable = ($written -le 48000 -and $powered -le $written -and $orderErrors -le $written -and
        $propagating -le 1 -and $materializing -le 1 -and $complete -le 1 -and
        $propagating + $materializing + $complete -le 1 -and (!$complete -or $written -eq 48000))
    $powerPhase = if (!$powerRecordLoadable) { 'Invalid' }
        elseif ($complete) { 'Complete' }
        elseif ($materializing) { 'WritingTiles' }
        elseif ($propagating) { 'Propagating' }
        else { 'Idle' }
    [pscustomobject]@{
        Frame = $frame; Stage = $stage; InfillSites = $count
        CensusTilesInPass = Read-Work $censusAndPower 0
        CensusComplete = [bool](Read-Work $censusAndPower 5)
        CensusOrderErrors = Read-Work $censusAndPower 1
        PowerCycles = Read-Work $censusAndPower 9
        PowerOrderErrors = $orderErrors
        PowerWrittenTiles = $written
        PowerPoweredTiles = $powered
        PowerPhase = $powerPhase
        PowerRecordLoadable = $powerRecordLoadable
        DensityCycles = Read-Work $density 2
        EnvironmentCycles = Read-Work $environment 0
        CrimeCycles = Read-Work $services 0
        FireCycles = Read-Work $services 1
        TrafficWrites = Read-Work $traffic 0
        TrafficWest = Read-Work $traffic 1
        TrafficEast = Read-Work $traffic 2
    }
    return
}

function Read-Tile([int] $cell) { [BitConverter]::ToUInt16($data, [int]($tiles + 2L * $cell)) }
function Is-Road([int] $v) {
    ($v -ge 0x30 -and $v -le 0x5e -and $v -notin 0x3f,0x4f) -or $v -in 0x7d,0x7e
}
function Is-Rail([int] $v) {
    ($v -ge 0x70 -and $v -le 0x7e) -or $v -in 0x6d,0x6e -or ($v -ge 0x34b -and $v -le 0x353)
}
function Is-Wire([int] $v) {
    ($v -ge 0x60 -and $v -le 0x6e) -or $v -in 0x3d,0x3e,0x4d,0x4e,0x5d,0x5e
}

$names = @('residential','commercial','industrial','airport','seaport','stadium','nuclear','police','fire','park','coal')
$sizes = @(3,3,3,6,4,4,4,3,3,1,4)
$zoneFirst = @(0x080,0x137,0x1f4)
$zoneEnd = @(0x137,0x1f4,0x245)
$lots = [System.Collections.Generic.List[object]]::new()
for ($i = 1; $i -le $count; $i++) {
    if ($manifest[$i] -notmatch '^(\d+) (\d+)$') { throw "Invalid lot record at line $($i+1)." }
    $lots.Add([pscustomobject]@{ Kind = [int]$Matches[1]; Cell = [int]$Matches[2]; Source = 'Infill' })
}
if ($IncludeBaseline) {
    $ledger = Join-Path ([IO.Path]::GetDirectoryName($path)) 'construction.log'
    $seen = @{}
    foreach ($line in (Get-Content -LiteralPath $ledger)) {
        if ($line -notmatch '^stock-construction-service quadrant=([0-3]) lot=\((\d+),(\d+)\) stock-building verified=([a-z]+) road=1 rail=1 energized_line=1 ') {
            continue
        }
        $x = [int]$Matches[2]
        $y = [int]$Matches[3]
        $kind = [Array]::IndexOf($names, $Matches[4])
        $q = [int]$Matches[1]
        $key = "$q/$kind"
        if ($x -ge 240 -or $y -ge 200 -or $kind -lt 0 -or $seen.ContainsKey($key) -or
            $q -ne ([int]($x -ge 120) + 2 * [int]($y -ge 100))) { throw 'Invalid baseline service ledger.' }
        $seen[$key] = $true
        $lots.Add([pscustomobject]@{ Kind = $kind; Cell = $y * 240 + $x; Source = 'Baseline' })
    }
    if ($seen.Count -ne 44) { throw 'Expected the complete 44-site original ledger.' }
}
if ($TileCoverage) {
    $footprints = [Collections.Generic.HashSet[int]]::new()
    $sectorLots = [int[]]::new(16)
    foreach ($lot in $lots) {
        if ($lot.Kind -ge $sizes.Count -or $lot.Cell -ge 48000) { throw 'Invalid lot in coverage audit.' }
        $size = $sizes[$lot.Kind]
        $col = $lot.Cell % 240
        $row = [int][Math]::Floor($lot.Cell / 240)
        if ($col + $size -gt 240 -or $row + $size -gt 200) { throw 'Out-of-bounds lot in coverage audit.' }
        if ($BySector) { ++$sectorLots[[int]([Math]::Floor($row / 50) * 4 + [Math]::Floor($col / 60))] }
        for ($dy = 0; $dy -lt $size; ++$dy) {
            for ($dx = 0; $dx -lt $size; ++$dx) { [void]$footprints.Add($lot.Cell + 240*$dy + $dx) }
        }
    }
    $regions = if ($BySector) { 0..15 } else { -1 }
    foreach ($sector in $regions) {
        $x = $y = 0
        $width = 240; $height = 200; $siteCount = $lots.Count
        if ($BySector) {
            $width = 60; $height = 50; $siteCount = $sectorLots[$sector]
            $x = $width * ($sector % 4)
            $y = $height * [int][Math]::Floor($sector / 4)
        }
        # Count every tile once, even where lots span sectors or road and
        # rail cross. Assign a site's anchor to only one sector.
        $roads = $rails = $wires = $energized = $network = $union = $clear = $recorded = 0
        for ($row = $y; $row -lt $y + $height; ++$row) {
            $start = 240*$row + $x
            $end = $start + $width
            for ($cell = $start; $cell -lt $end; ++$cell) {
                $word = Read-Tile $cell
                $code = $word -band 0x3ff
                $road = Is-Road $code
                $rail = Is-Rail $code
                $wire = Is-Wire $code
                $footprint = $footprints.Contains($cell)
                if ($road) { ++$roads }
                if ($rail) { ++$rails }
                if ($wire) { ++$wires; if ($word -band 0x8000) { ++$energized } }
                if ($road -or $rail -or $wire) { ++$network }
                if ($footprint) { ++$recorded }
                if ($road -or $rail -or $wire -or $footprint) { ++$union }
                if (!$code) { ++$clear }
            }
        }
        $area = $width * $height
        $coverage = [ordered]@{
            Frame = $frame; RecordedSites = $siteCount; MapTiles = $area
            RecordedLotFootprintTiles = $recorded; UniqueInfrastructureTiles = $network
            InfrastructureOrRecordedFootprintTiles = $union
            RoadTiles = $roads; RailTiles = $rails; WireTiles = $wires
            EnergizedWireTiles = $energized; ClearGroundTiles = $clear
        }
        $percent = [Math]::Round(100.0 * $union / $area, 2)
        if ($BySector) { $coverage.Sector = $sector; $coverage.PercentOfSectorTiles = $percent }
        else { $coverage.PercentOfAllMapTiles = $percent }
        [pscustomobject]$coverage
    }
    return
}
$audit = foreach ($lot in $lots) {
    $kind = $lot.Kind
    $cell = $lot.Cell
    if ($kind -ge $names.Count -or $cell -ge 48000) { throw 'Invalid building or tile code.' }
    $x = $cell % 240
    $y = [int][Math]::Floor($cell / 240)
    $size = $sizes[$kind]
    if ($x -lt 1 -or $y -lt 1 -or $x + $size -ge 240 -or $y + $size -ge 200) {
        throw 'The lot or its service perimeter is outside the map.'
    }
    $road = $rail = $wire = $live = $false
    $powered = 0
    $zoneInClass = $kind -lt $zoneFirst.Count
    $zoneGrew = $false
    for ($row = 0; $row -lt $size; $row++) {
        for ($col = 0; $col -lt $size; $col++) {
            $word = Read-Tile ($cell + 240*$row + $col)
            if ($word -band 0x8000) { ++$powered }
            if ($zoneInClass) {
                $code = $word -band 0x3ff
                if ($code -lt $zoneFirst[$kind] -or $code -ge $zoneEnd[$kind]) { $zoneInClass = $false }
                elseif ($code -gt $zoneFirst[$kind] + 8) { $zoneGrew = $true }
            }
        }
        foreach ($edge in ($cell-240+$row),($cell+240*$size+$row),($cell+240*$row-1),($cell+240*$row+$size)) {
            $word = Read-Tile $edge
            $code = $word -band 0x3ff
            if (Is-Road $code) { $road = $true }
            if (Is-Rail $code) { $rail = $true }
            if (Is-Wire $code) {
                $wire = $true
                if ($word -band 0x8000) { $live = $true }
            }
        }
    }
    [pscustomobject]@{
        Stage = $stage; Frame = $frame; Source = $lot.Source; Building = $names[$kind]; X = $x; Y = $y
        Sector = [int]([Math]::Floor($y / 50) * 4 + [Math]::Floor($x / 60))
        RoadEdge = $road; RailEdge = $rail; WireEdge = $wire; EnergizedWireEdge = $live
        PoweredFootprint = "$powered/$($size*$size)"
        HasAllServicesNow = $road -and $rail -and $live -and ($kind -eq 9 -or $powered -eq $size*$size)
        ZoneFootprintState = if ($kind -ge $zoneFirst.Count) { $null }
            elseif (!$zoneInClass) { 'ChangedClass' }
            elseif ($zoneGrew) { 'Developed' }
            else { 'ZonedOnly' }
    }
}

if (!$BySector) { $audit; return }

$grouped = @{}
foreach ($lot in $audit) {
    if (!$grouped.ContainsKey($lot.Sector)) { $grouped[$lot.Sector] = [Collections.Generic.List[object]]::new() }
    $grouped[$lot.Sector].Add($lot)
}
foreach ($sector in 0..15) {
    $sites = $grouped[$sector]
    $infill = @($sites | Where-Object Source -eq Infill)
    $baseline = @($sites | Where-Object Source -eq Baseline)
    [pscustomobject]@{
        Sector = $sector
        Frame = $frame
        RecordedBaselineSites = $baseline.Count
        CompletedInfillSites = $infill.Count
        FullyServicedInfillSites = @($infill | Where-Object HasAllServicesNow).Count
        InfillTypes = ($infill | Group-Object Building | Sort-Object Name |
            ForEach-Object { "$($_.Name)=$($_.Count)" }) -join ', '
    }
}
