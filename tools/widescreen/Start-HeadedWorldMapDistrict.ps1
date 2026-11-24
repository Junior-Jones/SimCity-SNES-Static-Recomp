param(
    [Parameter(Mandatory)][string] $QaLauncher,
    [Parameter(Mandatory)][string] $Rom,
    [Parameter(Mandatory)][string] $Tape,
    [Parameter(Mandatory)][string] $RunFolder,
    [switch] $PrepareOnly
)

$ErrorActionPreference = 'Stop'
$launcherPath = (Resolve-Path -LiteralPath $QaLauncher).Path
$romPath = (Resolve-Path -LiteralPath $Rom).Path
$tapePath = (Resolve-Path -LiteralPath $Tape).Path
$parent = (Resolve-Path -LiteralPath (Split-Path -Parent $RunFolder)).Path
$run = Join-Path $parent (Split-Path -Leaf $RunFolder)
if ([IO.Path]::GetFileName($launcherPath) -ne 'Launcher-Headed-QA.exe') {
    throw 'Use the isolated QA launcher built with SIMCITY_BUILD_HEADED_QA=ON.'
}
if ((Get-FileHash -LiteralPath $romPath -Algorithm SHA256).Hash -ne
    'e9c0bc05511e05a0d7c3e7cc42e761e1e8e532d46f59b9854b6902e1a2e9dd0a') {
    throw 'The ROM does not match the supported SimCity release.'
}
if (Test-Path -LiteralPath $run) { throw 'Use a new run folder. Existing captures are not overwritten.' }
$exe = Join-Path $run Launcher.exe
$romDir = Join-Path $run Rom
[IO.Directory]::CreateDirectory($romDir) | Out-Null
Copy-Item -LiteralPath $launcherPath -Destination $exe
Copy-Item -LiteralPath $romPath -Destination (Join-Path $romDir 'SimCity (USA).sfc')
Copy-Item -LiteralPath $tapePath -Destination (Join-Path $run 'World-Map-Headed.scinput')
$settings = "[General]`r`nWelcomeShown=1`r`nAutoRunOnLoad=1`r`nWidescreen=1`r`nNtscFrameLock=1`r`nFullScreenOnPlay=0`r`n`r`n[Audio]`r`nEnabled=1`r`nVolumePercent=20`r`n"
[IO.File]::WriteAllText((Join-Path $run settings.ini), $settings, [Text.Encoding]::ASCII)
if ($PrepareOnly) { $exe; return }
Start-Process -FilePath $exe -WorkingDirectory $run -WindowStyle Normal -PassThru
