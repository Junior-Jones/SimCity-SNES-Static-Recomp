param([Parameter(Mandatory)][string] $Log)

$ErrorActionPreference = 'Stop'
$latest = @{}
$active = $null
$footprint = $null
$feeder = $null
$latestService = $null
$servedCheckpoint = $null
$masterTicks = $null
$clockError = $null
$finished = @{}
$roads = $rails = $wires = 0
$terminal = $false
$resumedLots = 0
$latestLotTotal = 0
$committedStage = $null
$durable = $null
$durableFrame = 0
$loggedActionGaps = 0
$maxActionGapMs = $null
$finalMaxActionGapMs = $null
$maxActionGapFrame = $null
$maxPlanMs = $null
$captureCount = $sharedCaptureCount = $diskCommitCount = $diskFailureCount = 0
$maxCaptureMs = $maxSealMs = $maxDiskCommitMs = $null
$renderWidth = $null
$elapsedSeconds = $null
$guestWork = @{}
$audioFaultRows = 0
$firstAudioFault = $null
$audioMargin = @{}
# Native stdout can be copied in chunks, including the first part of a
# timing record. Only use newline-terminated records as evidence.
$content = Get-Content -LiteralPath $Log -Raw
$lines = $content -split '\r?\n'
for ($lineIndex = 0; $lineIndex -lt $lines.Count - 1; ++$lineIndex) {
    $line = $lines[$lineIndex]
    if ($line -match '^stock-live-construction start .* width=(\d+)') {
        $renderWidth = [int]$Matches[1]
    } elseif ($line -match '^stock-infill-start .* already_built=(\d+)') {
        $resumedLots = [int]$Matches[1]
        $latestLotTotal = $resumedLots
    } elseif ($line -match '^stock-infill-plan sector=(\d+) round=\d+ type=(\w+) lot=\((\d+),(\d+)\)') {
        $active = "Sector $($Matches[1]), $($Matches[2]) at ($($Matches[3]),$($Matches[4]))"
        $footprint = $null
        $feeder = $null
        if ($line -match '\bplan_ms=([0-9.]+)') {
            $planMs = [double]::Parse($Matches[1], [Globalization.CultureInfo]::InvariantCulture)
            if ($null -eq $maxPlanMs -or $planMs -gt $maxPlanMs) { $maxPlanMs = $planMs }
        }
    } elseif ($line -match '^stock-infill-placed .* verified_tiles=(\d+)') {
        $footprint = [int]$Matches[1]
    } elseif ($line -match '^stock-infill-feeder-progress .* service=([1-3]) verified_added=(\d+) planned=(\d+)') {
        $service = @('road','rail','power')[[int]$Matches[1] - 1]
        $feeder = "$service added $($Matches[2]) of $($Matches[3]) planned tiles"
    } elseif ($line -match '^stock-infill-service-now .* type=(\w+) road_edge=([01]) rail_edge=([01]) energized_wire_edge=([01]) powered_footprint=(\d+/\d+)') {
        $latestService = "$($Matches[1]): road $($Matches[2]), rail $($Matches[3]), energized wire $($Matches[4]), powered footprint $($Matches[5])"
    } elseif ($line -match '^stock-infill-checkpoint-service stage=(\d+) served=(\d+/\d+) developed=(\d+)') {
        $servedCheckpoint = "Stage $($Matches[1]): $($Matches[2]) served, $($Matches[3]) developed"
    } elseif ($line -match '^stock-infill-built sector=\d+ type=(\w+).* cumulative=(\d+) road_added=(\d+) rail_added=(\d+) power_added=(\d+)') {
        $finished[$Matches[1]] = 1 + [int]$finished[$Matches[1]]
        $latestLotTotal = [int]$Matches[2]
        $roads += [int]$Matches[3]
        $rails += [int]$Matches[4]
        $wires += [int]$Matches[5]
        $active = $null
        $footprint = $null
        $feeder = $null
    } elseif ($line -match '^stock-infill-checkpoint stage=(\d+/\d+) sector=(\d+) built=(\d+/\d+)') {
        $committedStage = "Stage $($Matches[1]), sector $($Matches[2]), $($Matches[3]) lots"
    } elseif ($line -match '^stock-infill-save-queued .* capture_ms=([0-9.]+)') {
        ++$captureCount
        $captureMs = [double]::Parse($Matches[1], [Globalization.CultureInfo]::InvariantCulture)
        if ($null -eq $maxCaptureMs -or $captureMs -gt $maxCaptureMs) { $maxCaptureMs = $captureMs }
        if ($line -match '\bshared_capture=1(?:\s|$)') { ++$sharedCaptureCount }
    } elseif ($line -match '^stock-infill-save-finished stage=(\d+) lots=(\d+) per_lot=([01]) frame=(\d+) committed=([01]) disk_ms=([0-9.]+)(?: seal_ms=([0-9.]+))?\s*$') {
        if ($Matches.ContainsKey(7)) {
            $seal = [double]::Parse($Matches[7], [Globalization.CultureInfo]::InvariantCulture)
            if ($null -eq $maxSealMs -or $seal -gt $maxSealMs) { $maxSealMs = $seal }
        }
        if ($Matches[5] -eq '1') {
            ++$diskCommitCount
            $diskMs = [double]::Parse($Matches[6], [Globalization.CultureInfo]::InvariantCulture)
            if ($null -eq $maxDiskCommitMs -or $diskMs -gt $maxDiskCommitMs) { $maxDiskCommitMs = $diskMs }
            if ([int]$Matches[4] -ge $durableFrame) {
                $durableFrame = [int]$Matches[4]
                $durable = "Stage $($Matches[1]), $($Matches[2]) lots, guest frame $durableFrame"
            }
        } else {
            ++$diskFailureCount
        }
    } elseif ($line -match '^stock-live-action-gap completed_guest=\d+ frame=(\d+) gap_ms=([0-9.]+)') {
        ++$loggedActionGaps
        $gapMs = [double]::Parse($Matches[2], [Globalization.CultureInfo]::InvariantCulture)
        if ($null -eq $maxActionGapMs -or $gapMs -gt $maxActionGapMs) {
            $maxActionGapMs = $gapMs
            $maxActionGapFrame = [uint64]$Matches[1]
        }
    } elseif ($line -match '^stock-live-audio-margin source=modeled startup_delay_ms=(\d+) guest=(\d+) underruns=(\d+) missing_pcm=(\d+) overflows=(\d+) queued_now=(\d+)$') {
        $delay = [int]$Matches[1]
        $audioMargin[$delay] = [pscustomobject]@{
            StartupDelayMs = $delay; GuestFrames = [uint64]$Matches[2]; Underruns = [uint64]$Matches[3]
            MissingPcm = [uint64]$Matches[4]; Overflows = [uint64]$Matches[5]; QueueNow = [uint64]$Matches[6]
        }
    } elseif ($line -match '^stock-live-audio-fault frame=(\d+) phase=(checkpoint|frame_end) slot=(\d+) queued_before=(\d+) demand_pcm=(\d+) delivered_pcm=(\d+) missing_pcm=(\d+) overflow=([01])$') {
        ++$audioFaultRows
        if (!$firstAudioFault) {
            $firstAudioFault = [pscustomobject]@{
                GuestFrame = [uint64]$Matches[1]; Phase = $Matches[2]; DisplaySlot = [uint64]$Matches[3]
                QueueBefore = [uint64]$Matches[4]; Demand = [uint64]$Matches[5]; Delivered = [uint64]$Matches[6]
                Missing = [uint64]$Matches[7]; Overflow = $Matches[8] -eq '1'
            }
        }
    } elseif ($line -match '^stock-live-construction-(progress|end)\s') {
        $terminal = $Matches[1] -eq 'end'
        $latest = @{}
        foreach ($field in [regex]::Matches($line, '(\w+)=(\d+)')) {
            $latest[$field.Groups[1].Value] = [uint64]$field.Groups[2].Value
        }
        if ($latest.ContainsKey('guest_master_ticks')) {
            $masterTicks = $latest.guest_master_ticks
            # The project's NTSC average; an instruction-boundary sample
            # can land on either side of the exact nominal frame boundary.
            $clockError = [Math]::Abs([long]$masterTicks - 357366L * [long]$latest.guest)
        }
    } elseif ($line -match '^stock-live-guest-work\s') {
        foreach ($field in [regex]::Matches($line, '(\w+)=(\d+)')) {
            $guestWork[$field.Groups[1].Value] = [uint64]$field.Groups[2].Value
        }
    } elseif ($line -match '^stock-live-construction-attribution measured_seconds=([0-9.]+) guest_master_ticks=(\d+) clock_error_ticks=(\d+)') {
        $elapsedSeconds = [double]::Parse($Matches[1], [Globalization.CultureInfo]::InvariantCulture)
        $masterTicks = [uint64]$Matches[2]
        $clockError = [uint64]$Matches[3]
        if ($line -match '\bmax_between_actions_ms=([0-9.]+)') {
            $finalMaxActionGapMs = [double]::Parse($Matches[1], [Globalization.CultureInfo]::InvariantCulture)
        }
    }
}

[pscustomobject]@{
    CarriedInLots = $resumedLots
    RenderWidth = $renderWidth
    FinalMeasuredSeconds = $elapsedSeconds
    FinishedLotsInThisRun = ($finished.Values | Measure-Object -Sum).Sum
    TotalFinishedInfillLots = $latestLotTotal
    FinishedTypes = ($finished.GetEnumerator() | Sort-Object Key |
        ForEach-Object { "$($_.Key)=$($_.Value)" }) -join ', '
    CurrentPlan = $active
    VerifiedFootprintTilesInCurrentLot = $footprint
    LatestFeederActivity = $feeder
    LatestLotServiceVerification = $latestService
    LatestCheckpointCityServices = $servedCheckpoint
    LatestCommittedStageInThisRun = $committedStage
    LatestBackgroundDiskCommit = $durable
    QueuedCheckpointCaptures = $captureCount
    SharedCheckpointCaptures = $sharedCaptureCount
    LongestCheckpointCaptureMs = $maxCaptureMs
    LongestBackgroundSealMs = $maxSealMs
    CompletedBackgroundDiskCommits = $diskCommitCount
    FailedBackgroundDiskCommits = $diskFailureCount
    LongestBackgroundDiskCommitMs = $maxDiskCommitMs
    ConfirmedRoadTilesForFinishedLots = $roads
    ConfirmedRailTilesForFinishedLots = $rails
    ConfirmedPowerTilesForFinishedLots = $wires
    GuestFrames = $latest.guest
    GuestMasterTicks = $masterTicks
    NominalGuestClockErrorTicks = $clockError
    DisplaySlots = $latest.slots
    ExactDisplaySlots = $latest.exact
    RepeatedSlots = $latest.repeated
    MergedSlots = $latest.merged
    GuestDeadlineRebases = $latest.rebases
    LatePreparedDraws = $latest.late_draws
    PreparedQueueFull = $latest.queue_full
    PreparedCheckpointFailed = $latest.checkpoint_failed
    LatePreparedTargets = $latest.late_ready
    LatePresentationDispatches = $latest.late_dispatch
    LoggedActionGapEvents = $loggedActionGaps
    FinalLongestActionGapMs = $finalMaxActionGapMs
    LongestLoggedActionGapMs = $maxActionGapMs
    LongestLoggedActionGapGuestFrame = $maxActionGapFrame
    LongestLoggedPlanMs = $maxPlanMs
    ModeledUnderruns = $latest.underruns
    ModeledMissingPcmFrames = $latest.missing_pcm
    ModeledOverflows = $latest.overflows
    LoggedAudioFaults = $audioFaultRows
    FirstLoggedAudioFault = $firstAudioFault
    ModeledAudioStartupMargins = @($audioMargin.Values | Sort-Object StartupDelayMs)
    GuestOver8_33MsWithoutInlineBlit = $latest.no_blit_over_8_33ms
    GuestOver16_67MsWithoutInlineBlit = $latest.no_blit_over_16_67ms
    PeakGuestWithoutInlineBlitMs = if ($latest.ContainsKey('peak_no_blit_us')) { $latest.peak_no_blit_us / 1000.0 }
    GuestWorkSampleFrames = $guestWork.guest
    GuestOver8_33MsWithoutInlineBlitOrPcmTransfer = $guestWork.no_blit_no_stream_over_8_33ms
    AverageScheduledGuestThreadCycles = $guestWork.mean_scheduled_cycles
    PreparedSubmitSamples = $guestWork.submit_samples
    PreparedSubmitMeanUs = $guestWork.submit_mean_us
    PreparedSubmitPeakUs = $guestWork.submit_peak_us
    GuestAndSubmitOver8_33MsWithoutInlineBlitOrPcmTransfer = $guestWork.core_and_submit_over_8_33ms
    FinalTimingPass = if ($terminal) { $latest.timing_pass } else { $null }
}
