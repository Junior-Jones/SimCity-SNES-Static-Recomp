param([Parameter(Mandatory)][string[]]$Log)

$ErrorActionPreference = 'Stop'
foreach ($path in $Log) {
    # Cohorts are reset on each stock-paced line. A log can contain the
    # same width more than once when it contains multiple game modes.
    $current = $null
    foreach ($line in (Get-Content -LiteralPath $path)) {
        if ($line -match '^stock-paced map=(\S+) policy=(\S+) mode=(\S+) .* draw_late=(\d+) .* guest_frames=(\d+) ') {
            $current = [pscustomobject]@{
                Log = $path; Map = $Matches[1]; Policy = $Matches[2]; Width = $Matches[3]
                LatePaints = [int]$Matches[4]; GuestFrames = [int]$Matches[5]
                NoInlineBlitFrames = 0; NoInlineBlitOver8_33ms = 0; AllOver8_33msExcludingBlit = 0
                GuestPeakExcludingBlitMs = $null; WorkerPeakMs = $null; BlitPeakMs = $null
                TargetNotSubmitted = $null; TargetNotQueued = $null; TargetNotShown = $null
                TargetReadyLate = $null; Merged = $null; CountedFrames = 0
            }
        } elseif ($current -and $line -match '^stock-headroom-cohort mode=(\S+) inline_draw=([01]) no_blit_late=([01]) frames=(\d+) .* peak_no_blit_wall_ms=([0-9.]+) ') {
            if ($Matches[1] -ne $current.Width) { throw "Mismatched cohort width in $path" }
            $n = [int]$Matches[4]
            $current.CountedFrames += $n
            if ($n) {
                $peak = [double]::Parse($Matches[5], [Globalization.CultureInfo]::InvariantCulture)
                $current.GuestPeakExcludingBlitMs = [Math]::Max([double]$current.GuestPeakExcludingBlitMs, $peak)
            }
            if ($Matches[2] -eq '0') {
                $current.NoInlineBlitFrames += $n
                if ($Matches[3] -eq '1') { $current.NoInlineBlitOver8_33ms += $n }
            }
            if ($Matches[3] -eq '1') { $current.AllOver8_33msExcludingBlit += $n }
        } elseif ($current -and $line -match '^stock-world-prepared mode=(\S+) .* render_peak_ms=([0-9.]+) ') {
            if ($Matches[1] -ne $current.Width) { throw "Mismatched worker width in $path" }
            $current.WorkerPeakMs = [double]::Parse($Matches[2], [Globalization.CultureInfo]::InvariantCulture)
        } elseif ($current -and $line -match '^stock-offscreen-gdi .* peak_ms=([0-9.]+) ') {
            $current.BlitPeakMs = [double]::Parse($Matches[1], [Globalization.CultureInfo]::InvariantCulture)
        } elseif ($current -and $line -match '^stock-video-deadlines mode=(\S+) target_not_submitted_in_time=(\d+) target_not_queued=(\d+) target_submitted_but_not_shown=(\d+) target_ready_after_nominal_slot=(\d+) host_slots_merged=(\d+)') {
            if ($Matches[1] -ne $current.Width) { throw "Mismatched deadline width in $path" }
            $current.TargetNotSubmitted = [int]$Matches[2]
            $current.TargetNotQueued = [int]$Matches[3]
            $current.TargetNotShown = [int]$Matches[4]
            $current.TargetReadyLate = [int]$Matches[5]
            $current.Merged = [int]$Matches[6]
        } elseif ($current -and $line -match '^stock-pace-parity map=(\S+) mode=(\S+) ') {
            if ($Matches[1] -ne $current.Map -or $Matches[2] -ne $current.Width) { throw "Mismatched parity in $path" }
            if ($current.CountedFrames) {
                if ($current.CountedFrames -ne $current.GuestFrames -or $null -eq $current.Merged) {
                    throw "Incomplete headroom cohorts in $path ($($current.Map)/$($current.Width))."
                }
                # A measured stage over 8.33 ms is a counterexample. A
                # clean row still does not prove combined pipeline capacity.
                $exceeded = $current.AllOver8_33msExcludingBlit -gt 0 -or
                    $current.WorkerPeakMs -gt 1000.0 / 120.0 -or $current.BlitPeakMs -gt 1000.0 / 120.0
                $current | Add-Member -NotePropertyName MeasuredStageExceeded8_33ms -NotePropertyValue $exceeded
                $current
            }
            $current = $null
        }
    }
}
