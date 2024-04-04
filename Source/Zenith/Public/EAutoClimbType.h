#pragma once
#include "CoreMinimal.h"
#include "EAutoClimbType.generated.h"

UENUM(BlueprintType)
enum class EAutoClimbType : uint8 {
    None,
    Low,
    Middle,
    High,
};

