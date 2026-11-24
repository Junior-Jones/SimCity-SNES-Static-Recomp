[CmdletBinding()]
param([Parameter(Mandatory)][string] $Summary, [ValidateRange(5,15)][int] $ExpectedTests = 10)

$ErrorActionPreference = 'Stop'
$series = @(Import-Csv -LiteralPath $Summary)
$readLive = Join-Path $PSScriptRoot 'Read-WorldLiveConstruction.ps1'
$expectedTypes = 'airport','coal','commercial','fire','industrial','nuclear','park','police','residential','seaport','stadium'
$types = @{}
$sectors = [Collections.Generic.HashSet[int]]::new()
$verifiedHandoffs = 0
$before = $null
$totals = [ordered]@{Tests=0; WorkloadPassed=0; StrictTimingPassed=0; NewLots=0; GuestFrames=0;
    DisplaySlots=0; ExactDisplaySlots=0; Underruns=0; MissingPcm=0; Overflows=0; DeadlineRebases=0}
foreach ($row in $series) {
    if ([int]$row.Test -ne ($totals.Tests + 1)) { throw "Unexpected sequence at test $($row.Test)" }
    $result = & $readLive -Log (Join-Path $row.Directory 'live-construction.log')
    if ($null -eq $result.FinalTimingPass -or [int]$row.StrictTimingPass -ne $result.FinalTimingPass -or
        [int]$row.GuestFrames -ne $result.GuestFrames -or [int]$row.DisplaySlots -ne $result.DisplaySlots -or
        [int]$row.ExactDisplaySlots -ne $result.ExactDisplaySlots -or [int]$row.MissingPcm -ne $result.ModeledMissingPcmFrames -or
        [int]$row.Underruns -ne $result.ModeledUnderruns -or [int]$row.Overflows -ne $result.ModeledOverflows) {
        throw "CSV and terminal probe log disagree at test $($row.Test)"
    }
    if ($row.WorkloadPass -eq 'True') {
        if ([int]$row.NewlySavedLots -ne ([int]$row.TotalInfillLots - $result.CarriedInLots) -or
            $result.FinishedLotsInThisRun -ne [int]$row.NewlySavedLots) {
            throw "Construction ledger does not match the reported work in test $($row.Test)"
        }
        ++$totals.WorkloadPassed
    }
    if ($before) {
        $name = "stock-world-infill-lot-$($before.TotalInfillLots).scsnap"
        if ($result.CarriedInLots -ne [int]$before.TotalInfillLots -or
            (Get-FileHash -LiteralPath (Join-Path $row.Directory $name)).Hash -ne
            (Get-FileHash -LiteralPath (Join-Path $before.Directory $name)).Hash) {
            throw "Checkpoint handoff differs at test $($row.Test)"
        }
        ++$verifiedHandoffs
    }
    foreach ($part in $row.BuiltTypes -split ',\s*') {
        if (!$part) { continue }
        if ($part -notmatch '^(\w+)=(\d+)$' -or $Matches[1] -notin $expectedTypes) {
            throw "Invalid building type in test $($row.Test): $part"
        }
        $types[$Matches[1]] = [int]$types[$Matches[1]] + [int]$Matches[2]
    }
    foreach ($part in $row.BuiltSectors -split ',') {
        if (!$part) { continue }
        if ($part -notmatch '^\d+$' -or [int]$part -gt 15) { throw "Invalid sector: $part" }
        [void]$sectors.Add([int]$part)
    }
    ++$totals.Tests
    $totals.StrictTimingPassed += [int]$row.StrictTimingPass
    $totals.NewLots += [int]$row.NewlySavedLots
    foreach ($field in 'GuestFrames','DisplaySlots','ExactDisplaySlots','Underruns','MissingPcm','Overflows') {
        $totals[$field] += [long]$row.$field
    }
    $totals.DeadlineRebases += [long]$result.GuestDeadlineRebases
    $before = $row
}
if ($totals.Tests -gt $ExpectedTests -or ($types.Values | Measure-Object -Sum).Sum -ne $totals.NewLots) {
    throw 'Series length or aggregate building ledger does not match.'
}
$totals.ExpectedTests = $ExpectedTests
$totals.SeriesWorkloadComplete = $totals.Tests -eq $ExpectedTests -and $totals.WorkloadPassed -eq $ExpectedTests
$totals.VerifiedCheckpointHandoffs = $verifiedHandoffs
$totals.LastSavedInfillLots = $before.TotalInfillLots
$totals.SectorsBuiltIn = (0..15 | Where-Object {$sectors.Contains($_)}) -join ','
$totals.UncoveredSectors = (0..15 | Where-Object {!$sectors.Contains($_)}) -join ','
$totals.UnbuiltTypes = ($expectedTypes | Where-Object {!$types.ContainsKey($_)}) -join ','
$totals.BuildingTypes = ($expectedTypes | Where-Object {$types.ContainsKey($_)} |
    ForEach-Object { "$_=$($types[$_])" }) -join ', '
[pscustomobject]$totals
