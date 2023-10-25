call config.bat

if exist "%PROJPATH%\%MODNAME%\" RD /S /Q "%PROJPATH%\%MODNAME%"
MKDIR "%PROJPATH%\%MODNAME%"

XCOPY "%PROJPATH%\Saved\StagedBuilds\WindowsNoEditor\%PROJNAME%\Content\Paks\*chunk1*" "%PROJPATH%\%MODNAME%\."

For /R "%PROJPATH%\%MODNAME%\" %%# in ("*.*") Do (
  ren "%%#" "%MODNAME%_0_P%%~x#"
)

if exist "%GAMEPATH%\Content\Paks\%MODNAME%\" RD /S /Q "%GAMEPATH%\Content\Paks\%MODNAME%%"
if exist "%GAMEPATH2%\Content\Paks\%MODNAME%\" RD /S /Q "%GAMEPATH2%\Content\Paks\%MODNAME%%"

XCOPY /Y /C /I /E "%PROJPATH%\%MODNAME%" "%GAMEPATH%\Content\Paks\%MODNAME%"
XCOPY /Y /C /I /E "%PROJPATH%\%MODNAME%" "%GAMEPATH2%\Content\Paks\%MODNAME%"