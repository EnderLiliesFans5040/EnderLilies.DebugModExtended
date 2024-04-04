#pragma once
#include "CoreMinimal.h"
#include "ESoundHeavinessCategory.generated.h"

UENUM(BlueprintType)
enum class ESoundHeavinessCategory : uint8 {
    NONE,
    Light,
    Medium,
    Heavy,
};

