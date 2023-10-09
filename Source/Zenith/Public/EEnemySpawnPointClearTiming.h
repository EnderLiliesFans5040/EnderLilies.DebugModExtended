#pragma once
#include "CoreMinimal.h"
#include "EEnemySpawnPointClearTiming.generated.h"

UENUM()
enum class EEnemySpawnPointClearTiming : uint8 {
    None,
    OnDeath,
    OnPostDeath,
};

