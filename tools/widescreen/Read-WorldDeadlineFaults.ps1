param([Parameter(Mandatory)][string]$Log)

$ErrorActionPreference = 'Stop'
$summary = $null
$rows = @(
    foreach ($line in Get-Content -LiteralPath $Log) {
        if ($line -match '^stock-live-video-fault-summary observed=(\d+) logged=(\d+)$') {
            if ($summary) { throw 'Use a single-width log for deadline attribution.' }
            $summary = @([int]$Matches[1], [int]$Matches[2])
            continue
        }
        if ($line -notmatch '^stock-live-video-fault ') { continue }
        $fields = @{}
        foreach ($field in [regex]::Matches($line, '(\w+)=([^\s]+)')) {
            $fields[$field.Groups[1].Value] = $field.Groups[2].Value
        }
        # The chosen target belongs to the newest due slot. Earlier
        # merged slots are counted separately, not attributed to it.
        $target = [long]$fields.target
        $shown = [long]$fields.shown
        $known = [int]$fields.ready_known -eq 1
        $blitKnown = $fields.ContainsKey('blit_known') -and [int]$fields.blit_known -eq 1
        $paintStage = if ([int]$fields.late_paint -eq 1 -and $blitKnown) {
            $deadline = [long]$fields.next_deadline_us
            if ([long]$fields.blit_start_us -ge $deadline) { 'BeforeBlit' }
            elseif ([long]$fields.blit_end_us -ge $deadline) { 'DuringBlitOrFlush' }
            else { 'AfterBlit' }
        }
        $reason = if ($shown -eq $target) { 'DeliveredNewest' }
            elseif ([int]$fields.already_presented -eq 1) { 'RecoveryOrPreviouslyShown' }
            elseif ($target -gt [long]$fields.guest_finished) { 'GuestNotComplete' }
            elseif ([int]$fields.submit_result -eq 2) { 'RenderQueueFull' }
            elseif ([int]$fields.core_known -eq 0) { 'TimingHistoryUnavailable' }
            elseif ([int]$fields.submit_result -ne 1) { 'NotSubmitted' }
            elseif ([long]$fields.submit_us -gt [long]$fields.cutoff_us) { 'SubmitAfterCutoff' }
            elseif (!$known) { 'RenderReadinessNotObserved' }
            elseif ([long]$fields.ready_us -gt [long]$fields.cutoff_us) { 'ReadyAfterCutoff' }
            else { 'ReadyButNotSelected' }
        [pscustomobject]@{
            Slot = [long]$fields.slot; MergedPriorSlots = [int]$fields.merged
            Source = $fields.source; Target = $target; Shown = $shown; NewestSlot = $reason
            WorkerStageAtObservation = $fields.worker_stage
            WorkerStartVsNewestDeadlineUs = if ([int]$fields.worker_start_known -eq 1) { [long]$fields.worker_start_us }
            WorkerFinishVsNewestDeadlineUs = if ([int]$fields.worker_finish_known -eq 1) { [long]$fields.worker_finish_us }
            LatePaint = [int]$fields.late_paint -eq 1
            PaintDeadlineCrossing = $paintStage
            BlitDurationUs = if ($blitKnown) { [long]$fields.blit_end_us - [long]$fields.blit_start_us }
            PaintVsNextDeadlineUs = if ($fields.ContainsKey('next_deadline_us') -and [int]$fields.paint_known -eq 1) {
                [long]$fields.paint_us - [long]$fields.next_deadline_us
            }
            ReadyVsNewestDeadlineUs = if ($known) { [long]$fields.ready_us }
            DispatchVsNewestDeadlineUs = [long]$fields.cutoff_us
        }
    }
)
if (!$summary -or $summary[1] -ne $rows.Count -or $summary[0] -lt $summary[1]) {
    throw 'The deadline trace is incomplete.'
}
if ($summary[0] -gt $summary[1]) {
    Write-Warning "Only $($summary[1]) of $($summary[0]) exception events were retained."
}
$rows
