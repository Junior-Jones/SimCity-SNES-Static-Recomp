param(
    [Parameter(Mandatory)][string] $SampleLog,
    [Parameter(Mandatory)][string] $LinkMap,
    [ValidateRange(1, 100)][int] $Top = 15
)

$ErrorActionPreference = 'Stop'
$base = $null
$entries = [System.Collections.Generic.List[object]]::new()
foreach ($line in [IO.File]::ReadLines((Resolve-Path -LiteralPath $LinkMap).Path)) {
    if ($line -match 'Preferred load address is ([0-9a-f]+)') {
        $base = [Convert]::ToUInt64($Matches[1], 16)
    } elseif ($line -match '^\s*0001:[0-9a-f]+\s+(\S+)\s+([0-9a-f]+)\s+f\s+(?:i\s+)?(\S+)') {
        $entries.Add([pscustomobject]@{
            RvaAddress = [Convert]::ToUInt64($Matches[2], 16)
            Symbol = $Matches[1]
            Object = $Matches[3]
        })
    }
}
if ($null -eq $base -or $entries.Count -eq 0) { throw 'No code symbols found in the link map.' }
$entries = @($entries | Sort-Object RvaAddress)
[uint64[]] $addresses = $entries.RvaAddress
$summary = $null
$counts = @{}
$tally = 0
foreach ($line in [IO.File]::ReadLines((Resolve-Path -LiteralPath $SampleLog).Path)) {
    if ($line -match '^stock-core-rva-summary samples=(\d+) local=(\d+)') {
        $summary = @{Samples = [int]$Matches[1]; Local = [int]$Matches[2]}
    } elseif ($line -match '^stock-core-rva offset=([0-9a-f]+) hits=(\d+)') {
        $address = $base + [Convert]::ToUInt64($Matches[1], 16)
        $hits = [int]$Matches[2]
        $index = [Array]::BinarySearch($addresses, [uint64]$address)
        if ($index -lt 0) { $index = (-bnot $index) - 1 }
        $key = if ($index -ge 0) {
            "$($entries[$index].Object) $($entries[$index].Symbol)"
        } else { '<before first mapped code symbol>' }
        $counts[$key] += $hits
        $tally += $hits
    }
}
if (!$summary -or $tally -ne $summary.Local -or !$summary.Samples) {
    throw 'Sample log is missing its summary or sample counts do not agree.'
}
$counts['<outside sampled executable>'] = $summary.Samples - $summary.Local
$counts.GetEnumerator() | Sort-Object Value -Descending | Select-Object -First $Top |
    ForEach-Object {
        [pscustomobject]@{
            Hits = $_.Value
            Percent = [Math]::Round(100.0 * $_.Value / $summary.Samples, 1)
            NearestCodeSymbol = $_.Key
        }
    }
