#pragma once
#include "CoreMinimal.h"
#include "ETranslucencyLayer.generated.h"

UENUM(BlueprintType)
enum class ETranslucencyLayer : uint8 {
    Default,
    Boss = 0x5,
    Companion = 0xA,
    EnemyBack = 0x14,
    SpiritDefault = 0x1E,
    EnemyDefault = 0x28,
    AboveEnemyBelowPlayer = 0x32,
    Player = 0x3C,
    AbovePlayerBelowSpiritFront = 0x46,
    SpiritFront = 0x50,
    AbovePlayer = 0x5A,
};

