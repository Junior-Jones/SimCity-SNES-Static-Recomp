param(
    [Parameter(Mandatory)][string] $EvidenceDirectory,
    [string[]] $Policies = @('baseline', 'overlap', 'unscaled')
)

$ErrorActionPreference = 'Stop'

function Read-Field([string] $Line, [string] $Name) {
    $match = [regex]::Match($Line, "(?:^|\s)$([regex]::Escape($Name))=([^\s]+)")
    if ($match.Success) { return $match.Groups[1].Value }
    return $null
}

function Select-Metric($Lines, [string] $Tag, [string] $Width) {
    $pattern = "^$([regex]::Escape($Tag))\s.*\bmode=$Width(?:\s|$)"
    return [string]($Lines | Where-Object { $_ -match $pattern } | Select-Object -Last 1)
}

foreach ($policy in $Policies) {
    $path = Join-Path $EvidenceDirectory "stock-full-pipeline-$policy.log"
    $lines = if (Test-Path -LiteralPath $path) { Get-Content -LiteralPath $path } else { @() }
    $blits = @{}
    $currentWidth = ''
    foreach ($line in $lines) {
        if ($line -match '^stock-streamed-audio\s') { $currentWidth = Read-Field $line 'mode' }
        if ($currentWidth -and $line -match '^stock-offscreen-gdi\s') { $blits[$currentWidth] = $line }
    }
    foreach ($width in 'native256','wide398') {
        $pace = Select-Metric $lines 'stock-paced' $width
        $prepared = Select-Metric $lines 'stock-world-prepared' $width
        $audio = Select-Metric $lines 'stock-streamed-audio' $width
        $gate = Select-Metric $lines 'stock-60hz-gate' $width
        $parity = Select-Metric $lines 'stock-pace-parity' $width
        $deferral = Select-Metric $lines 'stock-full-guest-deferral' $width
        $headroom = Select-Metric $lines 'stock-full-frame-attribution' $width
        $power = Select-Metric $lines 'stock-full-headroom' $width
        $tour = Select-Metric $lines 'stock-full-tour' $width
        $soak = Select-Metric $lines 'stock-construction-soak' $width
        $soakProgress = Select-Metric $lines 'stock-construction-soak-progress' $width
        $progressFrames = Read-Field $soakProgress 'frames'
        $result = 'Incomplete'
        if ($gate -and $parity) {
            $result = 'Fail'
            if ((Read-Field $gate 'result') -eq 'pass' -and
                (Read-Field $parity 'clocks_and_work') -eq '1' -and
                (Read-Field $parity 'wram_and_tiles') -eq '1' -and
                (Read-Field $parity 'world_overlays_and_passes') -eq '1' -and
                (Read-Field $parity 'pcm') -eq '1') { $result = 'Pass' }
        }
        [pscustomobject]@{
            Policy = $policy
            Width = $width
            Status = $result
            Targets = Read-Field $pace 'slots'
            ExactTargets = Read-Field $prepared 'exact_target'
            VideoGate = Read-Field $gate 'video'
            GuestPaceGate = Read-Field $gate 'original_pace'
            AudioGate = Read-Field $gate 'audio'
            GuestRebases = Read-Field $pace 'rebases'
            MissingPCM = Read-Field $audio 'missing_pcm'
            AudioOverflows = Read-Field $audio 'overflows'
            PlannedDeferralMs = Read-Field $deferral 'planned_delay_ms'
            GuestOver8_33MsWithoutBlit = Read-Field $headroom 'no_blit_over_8_33ms'
            PowerCycles = Read-Field $power 'power_cycles'
            BitmapSize = Read-Field $blits[$width] 'size'
            CachedDraws = Read-Field $blits[$width] 'cached_draws'
            PaintMeanMs = Read-Field $blits[$width] 'mean_ms'
            PaintPeakMs = Read-Field $blits[$width] 'peak_ms'
            ProgressGuestFrames = $progressFrames
            ProgressGuestMinutes = if ($progressFrames) {
                [Math]::Round([double]$progressFrames / (60.099 * 60), 2)
            } else { $null }
            ProgressExactTargets = Read-Field $soakProgress 'exact'
            ProgressRepeatedTargets = Read-Field $soakProgress 'repeated'
            ProgressDate = Read-Field $soakProgress 'date'
            ProgressPopulation = Read-Field $soakProgress 'pop'
            ProgressPeakSampledPopulation = Read-Field $soakProgress 'peak_pop'
            ProgressDensityPasses = Read-Field $soakProgress 'density'
            ProgressEnvironmentPasses = Read-Field $soakProgress 'environment'
            ProgressCrimePasses = Read-Field $soakProgress 'crime'
            ProgressGuestOver8_33MsWithoutBlit = Read-Field $soakProgress 'no_blit_over_8_33ms'
            ProgressAudioUnderruns = Read-Field $soakProgress 'underruns'
            ProgressAudioOverflows = Read-Field $soakProgress 'overflows'
            CameraFramesBeyondOldMap = Read-Field $tour 'frames_beyond_both_old_edges'
            ConstructionSoakWorkload = Read-Field $soak 'complete'
        }
    }
}
