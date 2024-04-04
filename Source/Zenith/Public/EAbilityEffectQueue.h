#pragma once
#include "CoreMinimal.h"
#include "EAbilityEffectQueue.generated.h"

UENUM(BlueprintType)
enum class EAbilityEffectQueue : uint8 {
    FIRST,
    PRE_DEFAULT,
    DEFAULT,
    POST_DEFAULT,
    MAX,
};

