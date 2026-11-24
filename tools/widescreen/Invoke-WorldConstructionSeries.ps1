[CmdletBinding()]
param(
    [Parameter(Mandatory)][string] $Rom,
    [Parameter(Mandatory)][string] $AdoptRunDirectory,
    [Parameter(Mandatory)][string] $OutputDirectory,
    [ValidateRange(5,15)][int] $Tests = 10,
    [ValidateRange(5,50)][int] $MinNewLots = 8,
    [ValidateRange(1800,36000)][int] $MinGuestFrames = 3600,
    [ValidateRange(5,90)][int] $MaxMinutesPerTest = 30
)

$ErrorActionPreference = 'Stop'
$romPath = (Resolve-Path -LiteralPath $Rom).ProviderPath
$first = [IO.Path]::GetFullPath($AdoptRunDirectory, (Get-Location).ProviderPath)
$out = [IO.Path]::GetFullPath($OutputDirectory, (Get-Location).ProviderPath)
$mode = 'stock-world-construction-infill-live-resume-dense'
$readLive = Join-Path $PSScriptRoot 'Read-WorldLiveConstruction.ps1'
$readSave = Join-Path $PSScriptRoot 'Read-WorldInfillCheckpoint.ps1'
$stage = Join-Path $PSScriptRoot 'Stage-WorldInfillResume.ps1'
if (Test-Path -LiteralPath $out) { throw 'Use a new series output directory.' }

function Find-ActiveRun([string] $directory) {
    Get-CimInstance Win32_Process -Filter "Name='simcity-widescreen-probe.exe'" | Where-Object {
        $_.CommandLine -and $_.CommandLine.Contains($directory) -and $_.CommandLine.Contains($mode)
    }
}

function Get-DurableSave([string] $directory) {
    $pairs = Get-ChildItem -LiteralPath $directory -File -Filter 'stock-world-infill-lot-*.txt' |
        Sort-Object { [int]($_.BaseName -replace '^.*-','') } -Descending | Select-Object -First 4
    foreach ($pair in $pairs) {
        $snapshot = [IO.Path]::ChangeExtension($pair.FullName, '.scsnap')
        try { $record = & $readSave -Snapshot $snapshot -WorldWork } catch { continue }
        if ($record.PowerRecordLoadable) { return $record }
    }
}

$deadline = [DateTime]::UtcNow.AddMinutes($MaxMinutesPerTest)
do {
    $active = @(Find-ActiveRun $first)
    if (!$active.Count) { Start-Sleep -Seconds 3 }
} until ($active.Count -or [DateTime]::UtcNow -ge $deadline)
if ($active.Count -ne 1) { throw 'Could not identify one scoped dense construction run to adopt.' }
$exe = $active[0].ExecutablePath
$process = Get-Process -Id $active[0].ProcessId
$directory = $first
New-Item -ItemType Directory -Path $out | Out-Null
$summary = Join-Path $out 'summary.csv'
"Adopted construction PID $($process.Id) using $exe"

for ($test = 1; $test -le $Tests; ++$test) {
    $log = Join-Path $directory 'live-construction.log'
    $deadline = [DateTime]::UtcNow.AddMinutes($MaxMinutesPerTest)
    [bool]$stopRequested = $false
    while (!$process.HasExited -and [DateTime]::UtcNow -lt $deadline) {
        if ((Test-Path -LiteralPath $log) -and (Get-Item -LiteralPath $log).Length) {
            $live = & $readLive -Log $log
            if ($live.RenderWidth -eq 398 -and $live.GuestFrames -ge $MinGuestFrames -and
                $live.FinishedLotsInThisRun -ge $MinNewLots) {
                $save = Get-DurableSave $directory
                if ($save -and $save.InfillSites -ge $live.CarriedInLots + $MinNewLots) {
                    $request = Join-Path $directory 'stop-after-checkpoint.request'
                    if (!(Test-Path -LiteralPath $request)) { New-Item -ItemType File -Path $request | Out-Null }
                    $stopRequested = $true
                    "Test ${test}: requested orderly stop after durable lot $($save.InfillSites)."
                    [void]$process.WaitForExit(240000)
                    break
                }
            }
        }
        [void]$process.WaitForExit(4500)
    }
    if (!$process.HasExited) { throw "Test $test is still running; no other probe was started." }
    $finished = & $readLive -Log $log
    $end = Get-DurableSave $directory
    $savedLots = if ($end) { $end.InfillSites - $finished.CarriedInLots } else { 0 }
    $workloadPass = $finished.RenderWidth -eq 398 -and $finished.GuestFrames -ge $MinGuestFrames -and
        $savedLots -ge $MinNewLots -and $null -ne $finished.FinalTimingPass
    $sectors = @(Select-String -LiteralPath $log -Pattern '^stock-infill-built sector=(\d+) ' |
        ForEach-Object { [int]$_.Matches[0].Groups[1].Value } | Sort-Object -Unique)
    $row = [pscustomobject]@{
        Test = $test; Directory = $directory; NewlySavedLots = $savedLots
        TotalInfillLots = $end.InfillSites; BuiltTypes = $finished.FinishedTypes
        BuiltSectors = $sectors -join ','; GuestFrames = $finished.GuestFrames
        DisplaySlots = $finished.DisplaySlots; ExactDisplaySlots = $finished.ExactDisplaySlots
        MergedSlots = $finished.MergedSlots; RepeatedSlots = $finished.RepeatedSlots
        MissingPcm = $finished.ModeledMissingPcmFrames; Underruns = $finished.ModeledUnderruns
        Overflows = $finished.ModeledOverflows; ClockErrorTicks = $finished.NominalGuestClockErrorTicks
        QueuedCheckpointSaves = $finished.QueuedCheckpointCaptures
        SharedCheckpointSaves = $finished.SharedCheckpointCaptures
        LongestCheckpointCaptureMs = $finished.LongestCheckpointCaptureMs
        LongestActionGapMs = $finished.FinalLongestActionGapMs
        Over8_33MsCoreAndSubmit = $finished.GuestAndSubmitOver8_33MsWithoutInlineBlitOrPcmTransfer
        StrictTimingPass = $finished.FinalTimingPass; WorkloadPass = $workloadPass
        CheckpointStopRequested = $stopRequested
    }
    $row | Export-Csv -LiteralPath $summary -Append -NoTypeInformation
    $row
    if (!$workloadPass) { throw "Test $test did not reach its construction workload; it does not count as a passed workload." }
    if ($test -eq $Tests) { break }
    if (Get-Process -Name 'simcity-widescreen-probe' -ErrorAction SilentlyContinue) {
        throw 'Another probe is running; not starting a competing timing test.'
    }
    $next = Join-Path $out ('test-{0:D2}' -f ($test + 1))
    $staged = @(& $stage -SourceDirectory $directory -DestinationDirectory $next)
    if (!$staged.Count -or $staged[0].Frame -ne $end.Frame) { throw 'Next test did not stage the same committed city.' }
    $directory = $next
    $process = Start-Process -FilePath $exe -ArgumentList ('"{0}" {1} "{2}"' -f $romPath,$mode,$directory) `
        -WorkingDirectory $directory -RedirectStandardOutput (Join-Path $directory 'live-construction.log') `
        -RedirectStandardError (Join-Path $directory 'live-construction.err') -WindowStyle Hidden -PassThru
}
