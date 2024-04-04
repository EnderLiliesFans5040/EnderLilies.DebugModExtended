**English** | [简体中文](README_CN.md)
# EnderLilies.DebugModExtended
Debug mod extended for ENDER LILIES: Quietus of the night

[Upstream](https://github.com/Trexounay/EnderLilies.DebugMod) More features and bugs.
## Instalation
 - Download the latest [release](https://github.com/EnderLiliesFans5040/EnderLilies.DebugModExtended/releases/latest) DebugMod zip
 - [Optional] Download ExtraMod zip
 - Extract the zip file in the "Paks" directory of Ender Lilies' installation folder:
 `steamapps\common\ENDER LILIES\EnderLilies\Content\Paks\`
 - The zip works from version 1.0.3 to version 1.1.6 of the game
 - Early Access requires DebugMod_0_P.pak, function of DebugMod's EA version is now same as Upstream, need to download DebugMod_0_P.pak from [release](https://github.com/EnderLiliesFans5040/EnderLilies.DebugModExtended/releases/latest) and put into "Paks" directory
 - Press **[F1]** during game to show the available hotkeys
 - :warning:  Make sure to remove any mods before submitting a speedrun of the game

![](https://i.imgur.com/cVu3sxn.jpg)

## Recent Updates
 - **LilySpeed** Control Lily Speed with a slider, can also edit the value 0.000~100.000
 - **BossSpeed** Control Boss Speed with a slider, can also edit the value 0.000~100.000
 - **GlobalSpeed** Control Game Speed with a slider, can also edit the value 0.000~100.000

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
 - **[F10]** Toggle gravity
 - **Reformat HP UI** If there are multiple enemies(2~5) this would be useful
 - **Event Mode** Enemies no longer target at you, but you can not interact with events
 - **Water Mode** Global environment act like water, Lily swim in the air
 - **[shift]+[F1]** Show hitboxes of attacks and projectiles
 - **[shift]+[F2]** Show colliders/geometry
 - **[shift]+[F3]** Show triggers, hurtboxes and collision capsules of characters
 - **[shift]+[F4]** Show animations
 - **[shift]+[F5]** Show locations and velocity
 - **[shift]+[F6]** Show DPS counter
 - **[shift]+[F7]** Show Speed counter
 - **[shift]+[F9]** Lily can move during rest (Toggle:free move)
 - **[shift]+[F8]** Copy boss in this scene
 - **[shift]+[F10]** Append boss in this scene to boss array 
 - **[shift]+[F12]** Paste boss in boss array
 
 - **[Page Up]** Increase game speed
 - **[Page Down]** Decrease game speed
 - **[Home]** Reset speed
 - **[End]** Pause game (set speed to 0)

 - **[ctrl]+[F1]** Clone Lily
 - **[ctrl]+[F2]** Control previous Lily
 - **[ctrl]+[F3]** Control next Lily
 - **[ctrl]+[F4]** Clear cloned Lilies
 - **[ctrl]+[F5]** Change Lilies' animation
 - **[ctrl]+[F6]** Spawn random boss
 - **[ctrl]+[F7]** Clear enemies spawned.
 - **[ctrl]+[F8]** Switch all enemies' faction to player/enemy
 - **[ctrl]+[F9]** Change last enemy's faction to player
 - **[ctrl]+[F10]** Switch enemies' faction(random)
 - **[ctrl]+[F12]** Swap enemies' faction

Additional relic and spirit in test (in ExtraMod).

## Build Instruction
Prerequisites: UE4.26, vs2019/2022(desktop and game with c++, prefer vs 2019)
- clone repo, checkout latest release tag if you need(main is not stable as latest release).
- edit path in config.bat, open uproject and setup, hit package.bat, DebugMod will be installed, press 'n' if you don't want start the game automatically.

# Acknowledgments
[Trex's DebugMod](https://github.com/Trexounay/EnderLilies.DebugMod)

Enjoy!
