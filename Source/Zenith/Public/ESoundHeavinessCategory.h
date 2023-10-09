#pragma once
#include "CoreMinimal.h"
#include "ESoundHeavinessCategory.generated.h"

UENUM()
enum class ESoundHeavinessCategory : uint8 {
    NONE,
    Light,
    Medium,
    Heavy,
};

