call config.bat

if exist "%PROJPATH%\%MODNAME%\" RD /S /Q "%PROJPATH%\%MODNAME%"
MKDIR "%PROJPATH%\%MODNAME%"
if exist "%PROJPATH%\%MOD2NAME%\" RD /S /Q "%PROJPATH%\%MOD2NAME%"
MKDIR "%PROJPATH%\%MOD2NAME%"

XCOPY "%PROJPATH%\Saved\StagedBuilds\WindowsNoEditor\%PROJNAME%\Content\Paks\*chunk1*" "%PROJPATH%\%MODNAME%\."
XCOPY "%PROJPATH%\Saved\StagedBuilds\WindowsNoEditor\%PROJNAME%\Content\Paks\*chunk2*" "%PROJPATH%\%MOD2NAME%\."

For /R "%PROJPATH%\%MODNAME%\" %%# in ("*.*") Do (
  ren "%%#" "%MODNAME%_0_P%%~x#"
)
For /R "%PROJPATH%\%MOD2NAME%\" %%# in ("*.*") Do (
  ren "%%#" "%MOD2NAME%_0_P%%~x#"
)

if exist "%GAMEPATH%\Content\Paks\%MODNAME%\" RD /S /Q "%GAMEPATH%\Content\Paks\%MODNAME%%"
XCOPY /Y /C /I /E "%PROJPATH%\%MODNAME%" "%GAMEPATH%\Content\Paks\%MODNAME%"

if exist "%GAMEPATH%\Content\Paks\%MOD2NAME%\" RD /S /Q "%GAMEPATH%\Content\Paks\%MOD2NAME%%"
if /I "%MOD2Install%"=="True" XCOPY /Y /C /I /E "%PROJPATH%\%MOD2NAME%" "%GAMEPATH%\Content\Paks\%MOD2NAME%"