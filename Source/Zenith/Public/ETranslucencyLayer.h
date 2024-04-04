#pragma once
#include "CoreMinimal.h"
#include "ETranslucencyLayer.generated.h"

UENUM(BlueprintType)
enum class ETranslucencyLayer : uint8 {
    Default,
    Boss = 5,
    Companion = 10,
    EnemyBack = 20,
    SpiritDefault = 30,
    EnemyDefault = 40,
    AboveEnemyBelowPlayer = 50,
    Player = 60,
    AbovePlayerBelowSpiritFront = 70,
    SpiritFront = 80,
    AbovePlayer = 90,
};

