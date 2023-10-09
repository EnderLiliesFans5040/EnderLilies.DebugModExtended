#pragma once
#include "CoreMinimal.h"
#include "EConditionType.generated.h"

UENUM(BlueprintType)
enum class EConditionType : uint8 {
    Superior,
    SuperiorOrEqual,
    Equal,
    InferiorOrEqual,
    Inferior,
};

