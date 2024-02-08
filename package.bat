call config.bat

call "%UE4PATH%\Engine\Build\BatchFiles\RunUAT.bat" BuildCookRun^
 -nocompileeditor -SkipCookingEditorContent -installed -nop4^
 -project="%PROJPATH%\%PROJNAME%.uproject"^
 -stagingdirectory="%PROJPATH%\Saved\StagedBuilds"^
 -prereqs -nodebuginfo -manifests -targetplatform=Win64 -clientconfig=Development -utf8output -iostore^
 -cook -stage -pak -package^
 -ddc=InstalledDerivedDataBackendGraph

call copy.bat

choice /c:ABCDEFGHIJKLMNOPQRSTUVWXYZ /n
if %errorlevel% neq 14 (
    start "" "%GAMEPATH%\Binaries\Win64\EnderLiliesSteam-Win64-Shipping.exe"
)