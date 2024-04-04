#pragma once
#include "CoreMinimal.h"
#include "ESpineKnockbackType.generated.h"

UENUM(BlueprintType)
enum class ESpineKnockbackType : uint8 {
    NONE,
    UP,
    APEX,
    DOWN_WEAK,
    DOWN_STRONG,
};

