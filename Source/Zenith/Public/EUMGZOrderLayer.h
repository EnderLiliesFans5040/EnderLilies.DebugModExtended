#pragma once
#include "CoreMinimal.h"
#include "EUMGZOrderLayer.generated.h"

UENUM(BlueprintType)
enum class EUMGZOrderLayer : uint8 {
    Default,
    AreaDiscovery = 5,
    Menu = 10,
    Fade = 50,
    MoviePlayer = 80,
    PauseMenu = 90,
    Dialogue = 100,
    System = 110,
    SystemController = 105,
    InputLock = 200,
};

