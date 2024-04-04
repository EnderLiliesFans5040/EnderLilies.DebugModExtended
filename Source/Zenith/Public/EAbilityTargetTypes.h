#pragma once
#include "CoreMinimal.h"
#include "EAbilityTargetTypes.generated.h"

UENUM(BlueprintType)
enum class EAbilityTargetTypes : uint8 {
    NONE,
    OPPONENTS,
    ALLIES,
    ALL,
};

