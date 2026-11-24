param([Parameter(Mandatory)][string[]] $Log)

$ErrorActionPreference = 'Stop'
foreach ($path in $Log) {
    $runs = [ordered]@{}
    $current = $null
    $streamed = @{}
    foreach ($line in (Get-Content -LiteralPath $path)) {
        if ($line -match '^stock-streamed-audio mode=(\S+) underruns=(\d+) missing_pcm=(\d+) overflows=(\d+) queue_min=(\d+) frame_batch_missing_pcm=(\d+)') {
            # Paired with the next stock-paced summary, not the last run
            # of this width: one log can include both map types.
            $streamed[$Matches[1]] = @([uint64]$Matches[2], [uint64]$Matches[3], [uint64]$Matches[4])
        } elseif ($line -match '^stock-paced map=(\S+) policy=(\S+) mode=(\S+)\b') {
            $key = "$($Matches[1])/$($Matches[3])"
            if ($runs.Contains($key)) { throw "Repeated test case: $key in $path" }
            $current = [pscustomobject]@{
                Map=$Matches[1]; Width=$Matches[3]; Policy=$Matches[2]; WorkloadVerified=$null
                Targets=$null; ExactTargets=$null; Repeats=$null; LatePaints=$null; Rebases=$null; ModeledMissingPcm=$null
                FrameBatchMissingPcm=$null; StreamedMissingPcm=$null; StreamedUnderruns=$null; StreamedOverflows=$null
                Gate=$null; GateVideo=$null; GatePace=$null; GateAudio=$null; GateWorkload=$null; ReplayExact=$null
            }
            $runs[$key] = $current
            $numbers = @{}
            foreach ($field in [regex]::Matches($line, '(\w+)=(\d+)')) {
                $numbers[$field.Groups[1].Value] = [uint64]$field.Groups[2].Value
            }
            $current.Targets = $numbers.slots
            $current.ExactTargets = $numbers.unique
            $current.Repeats = $numbers.repeated
            $current.LatePaints = $numbers.draw_late
            $current.Rebases = $numbers.rebases
            $current.FrameBatchMissingPcm = $numbers.missing_pcm
            if ($streamed.ContainsKey($current.Width)) {
                $audio = $streamed[$current.Width]
                $current.StreamedUnderruns = $audio[0]
                $current.StreamedMissingPcm = $audio[1]
                $current.StreamedOverflows = $audio[2]
                $streamed.Remove($current.Width)
            }
            $current.ModeledMissingPcm = if ($null -ne $current.StreamedMissingPcm) { $current.StreamedMissingPcm } else { $numbers.missing_pcm }
        } elseif ($current -and $line -match '^stock-(?:fire-coverage|moving-disaster-coverage|disaster-timer-coverage|plane-coverage|construction-tape-paced|full-power-coverage|full-tour-phases|full-tour|construction-soak|dense-overlay-coverage).* complete=([01])\s*$') {
            $current.WorkloadVerified = $current.WorkloadVerified -ne $false -and $Matches[1] -eq '1'
        } elseif ($line -match '^stock-60hz-gate map=(\S+) mode=(\S+) result=(pass|fail)\b') {
            $key = "$($Matches[1])/$($Matches[2])"
            if ($runs.Contains($key)) {
                $run = $runs[$key]
                $run.Gate = $Matches[3]
                foreach ($field in [regex]::Matches($line, '\b(video|original_pace|audio|workload)=([01])\b')) {
                    $name = switch ($field.Groups[1].Value) {
                        video { 'GateVideo' }
                        original_pace { 'GatePace' }
                        audio { 'GateAudio' }
                        workload { 'GateWorkload' }
                    }
                    $run.$name = $field.Groups[2].Value -eq '1'
                }
            }
        } elseif ($line -match '^stock-pace-parity map=(\S+) mode=(\S+) frames=\d+ clocks_and_work=([01]) wram_and_tiles=([01]) world_overlays_and_passes=([01]) pcm=([01])') {
            $key = "$($Matches[1])/$($Matches[2])"
            if ($runs.Contains($key)) {
                $runs[$key].ReplayExact = @($Matches[3], $Matches[4], $Matches[5], $Matches[6]) -notcontains '0'
            }
        }
    }
    foreach ($run in $runs.Values) {
        $status = if ($run.Gate -eq 'fail' -or $run.ReplayExact -eq $false -or $run.WorkloadVerified -eq $false) {
            'Failed'
        } elseif ($run.Gate -eq 'pass' -and $run.ReplayExact -eq $true -and $run.WorkloadVerified -eq $true) {
            'Passed'
        } else { 'Incomplete' }
        $run | Add-Member -NotePropertyName Status -NotePropertyValue $status -PassThru
    }
}
