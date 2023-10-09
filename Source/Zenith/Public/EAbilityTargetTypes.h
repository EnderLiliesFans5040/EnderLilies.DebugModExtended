#pragma once
#include "CoreMinimal.h"
#include "EAbilityTargetTypes.generated.h"

UENUM()
enum class EAbilityTargetTypes : uint8 {
    NONE,
    OPPONENTS,
    ALLIES,
    ALL,
};

