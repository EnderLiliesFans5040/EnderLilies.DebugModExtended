#pragma once
#include "CoreMinimal.h"
#include "EEnemySpawnPointClearTiming.generated.h"

UENUM(BlueprintType)
enum class EEnemySpawnPointClearTiming : uint8 {
    None,
    OnDeath,
    OnPostDeath,
};

