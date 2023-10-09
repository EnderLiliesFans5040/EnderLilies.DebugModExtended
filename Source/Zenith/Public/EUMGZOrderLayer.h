#pragma once
#include "CoreMinimal.h"
#include "EUMGZOrderLayer.generated.h"

UENUM()
enum class EUMGZOrderLayer : uint8 {
    Default,
    AreaDiscovery = 0x5,
    Menu = 0xA,
    Fade = 0x32,
    MoviePlayer = 0x50,
    PauseMenu = 0x5A,
    Dialogue = 0x64,
    System = 0x6E,
    SystemController = 0x69,
    InputLock = 0xC8,
};

