**English** | [简体中文](README_CN.md)
# EnderLilies.DebugMod
Debug mod for ENDER LILIES: Quietus of the night

[Upstream](https://github.com/Trexounay/EnderLilies.DebugMod) Fixes and More features(and bugs).
## Instalation
 - Download the latest [release](https://github.com/EnderLiliesFans5040/EnderLilies-Debug-Mod/releases/latest) zip
 - Extract the zip file in the "Paks" directory of Ender Lilies' installation folder:
 `steamapps\common\ENDER LILIES\EnderLilies\Content\Paks\`
 - The zip works from version 1.0.3 to version 1.1.6 of the game
 - Early Access requires DebugMod_0_P.pak, function of DebugMod's EA version is now same as [Upstream](https://github.com/Trexounay/EnderLilies.DebugMod), need to download DebugMod_0_P.pak from [release](https://github.com/EnderLiliesFans5040/EnderLilies-Debug-Mod/releases/latest) and put into "Paks" directory
 - Press **[F1]** during game to show the available hotkeys
 - :warning:  Make sure to remove any mods before submitting a speedrun of the game

![](https://i.imgur.com/cVu3sxn.jpg)

## Features
 - **[F1]** Help
 - **[F2]** The debug menu left by the devs (you can: fast travel anywhere, save in any room, add/remove abilities, set level/chapter/blights/hp/wishes/slots, equip spirits anywhere)
 - **[F3]** Invincibility, enemies can no longer touch you
 - **[F4]** Fly Mode, No clip
 - **[F5]** Swim Mode
 - **[F6]** Idle Enemy, Switch on/off
 - **[F7]** One Hit KO
 - **[F8]** Refill HP/SP
 - **[F9]** Force Lily Walk
 - **[F10]** challenge mode, hide/unhide and teleport enemies periodically.
 - **Reformat HP UI** If there are multiple enemies(2~5) this would be useful
 - **Event Mode** Enemies no longer target at you, but you can not interact with events
 - **[shift]+[F8]** Copy boss in this scene
 - **[shift]+[F10]** Append boss in this scene to boss array 
 - **[shift]+[F12]** Paste boss in boss array

 - **Hitboxes** Show hitboxes of attacks and projectiles
 - **Colliders** Show colliders/geometry
 - **Triggers** Show triggers, hurtboxes and collision capsules of characters
 - **Animations** Show animations
 - **Locations** Show locations and velocity.
 - **[shift]+[F1]** Spawn random boss
 - **[shift]+[F2]** Spawn random boss periodically.
 - **[shift]+[F3]** Spawn all bosses available.
 - **[shift]+[F4]** Clear enemies spawned.
 - **[shift]+[F5]** Switch all enemies' faction to player/enemy
 - **[ctrl]+[F5]** Change last enemy's faction to player
 - **[shift]+[F6]** Switch enemies' faction(random)
 - **[shift]+[F7]** Swap enemies' faction
 
- **[Page Up]** Increase game speed
- **[Page Down]** Decrease game speed
- **[Home]** Reset speed
- **[End]** Pause game (set speed to 0)

- **[ctrl]+[F1]** Clone Lily
- **[ctrl]+[F2]** Change Lilies' animation

Additional relic and spirit in test.

## First Time Build Instruction
Prerequisites: UE4.26, vs2019/2022(desktop and game with c++)
- clone repo, checkout latest release tag if you need(main is not stable as latest release).
- download [FMOD Plugin](https://www.fmod.com/download#fmodforunreal) and SpinePlugin(download spine-runtime, follow instruction in spine-runtimes-x.x.xx/spine-ue4/README.md), put "FMODStudio" and "SpinePlugin" into "Plugins".
- edit path in config.bat, open uproject and setup, then goto File>>Package Project>>Windows(64-bit) select folder and let it finish, hit copy.bat, DebugMod will be installed.

## Update Build Instruction
- save your edit and hit package.bat, press 'n' if you don't want start the game automatically.

Enjoy!
