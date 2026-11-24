[CmdletBinding()]
param(
    [Parameter(Mandatory)][string]$Reference,
    [Parameter(Mandatory)][string]$Candidate,
    [Parameter(Mandatory)][string]$Rom,
    [Parameter(Mandatory)][string]$TapeDirectory,
    [Parameter(Mandatory)][string]$OutputDirectory
)

$ErrorActionPreference = 'Stop'
$executables = @{
    a = (Resolve-Path -LiteralPath $Reference).ProviderPath
    b = (Resolve-Path -LiteralPath $Candidate).ProviderPath
}
$hashes = @{ a = (Get-FileHash -LiteralPath $executables.a).Hash; b = (Get-FileHash -LiteralPath $executables.b).Hash }
if ($hashes.a -eq $hashes.b) { throw 'Reference and candidate are the same binary.' }
$romPath = (Resolve-Path -LiteralPath $Rom).ProviderPath
$tapeRoot = (Resolve-Path -LiteralPath $TapeDirectory).ProviderPath
$inputs = @('input.scinput', 'input-start.scsnap', 'input-end.scsnap') |
    ForEach-Object { Get-Item -LiteralPath (Join-Path $tapeRoot "stock-world-construction-$_") }
$expectedSnapshot = ($inputs | Where-Object Name -like '*input-end.scsnap' | Get-FileHash).Hash
if (Test-Path -LiteralPath $OutputDirectory) { throw 'Use a new output directory.' }
if (Get-Process -Name 'simcity-widescreen-probe', ([IO.Path]::GetFileNameWithoutExtension($executables.a)),
        ([IO.Path]::GetFileNameWithoutExtension($executables.b)) -ErrorAction SilentlyContinue) {
    throw 'Another probe is running. Timing runs must be sequential.'
}
$out = (New-Item -ItemType Directory -Path $OutputDirectory).FullName
$inputs | ForEach-Object { Get-FileHash -LiteralPath $_.FullName } |
    Export-Csv -LiteralPath (Join-Path $out 'input-hashes.csv') -NoTypeInformation
$identity = $null
foreach ($label in 'a1','b1','b2','a2') {
    $variant = $label.Substring(0, 1)
    $dir = (New-Item -ItemType Directory -Path (Join-Path $out $label)).FullName
    foreach ($inputFile in $inputs) { Copy-Item -LiteralPath $inputFile.FullName -Destination $dir }
    $log = Join-Path $dir 'paced.log'
    & $executables[$variant] $romPath 'stock-60hz-world-construction-tape-wide' $dir > $log 2> (Join-Path $dir 'stderr.log')
    $exitCode = $LASTEXITCODE
    $timing = @(& (Join-Path $PSScriptRoot 'Read-WorldDisasterTiming.ps1') -Log $log)
    $lines = Get-Content -LiteralPath $log
    $verify = @($lines -match '^stock-construction-tape-verify .* snapshot_exact=1 ')
    $parity = @($lines -match '^stock-pace-parity .* mode=wide398 .* clocks_and_work=1 wram_and_tiles=1 world_overlays_and_passes=1 pcm=1$')
    if ($timing.Count -ne 1 -or $timing[0].Width -ne 'wide398' -or $timing[0].Status -notin @('Passed','Failed') -or
        $timing[0].WorkloadVerified -ne $true -or $null -eq $timing[0].StreamedMissingPcm -or
        $verify.Count -ne 1 -or $parity.Count -ne 1 -or
        ($timing[0].Status -eq 'Passed' -and $exitCode -ne 0) -or
        ($timing[0].Status -eq 'Failed' -and $exitCode -ne 1) -or
        (Get-FileHash -LiteralPath (Join-Path $dir 'stock-world-construction-input-replayed.scsnap')).Hash -ne $expectedSnapshot) {
        throw "Run $label is incomplete or lost exact replay parity. See $dir."
    }
    if ($null -eq $identity) { $identity = $verify[0] }
    if ($identity -ne $verify[0]) { throw "Run $label used different inputs or produced different PCM." }
    $row = $timing[0] | Select-Object @{n='Run';e={$label}}, @{n='ExeHash';e={$hashes[$variant]}}, *
    $csv = Join-Path $out 'summary.csv'
    $row | Export-Csv -LiteralPath $csv -NoTypeInformation -Append
    $row
}
