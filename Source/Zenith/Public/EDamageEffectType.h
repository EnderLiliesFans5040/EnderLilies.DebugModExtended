#pragma once
#include "CoreMinimal.h"
#include "EDamageEffectType.generated.h"

UENUM()
enum class EDamageEffectType : int32 {
    AttackParameter,
    Absolute,
    TargetPercentage,
};

