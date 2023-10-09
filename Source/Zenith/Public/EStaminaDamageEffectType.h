#pragma once
#include "CoreMinimal.h"
#include "EStaminaDamageEffectType.generated.h"

UENUM()
enum class EStaminaDamageEffectType : int32 {
    Absolute,
    TargetPercentage,
    ForceBreak,
};

