#pragma once
#include "CoreMinimal.h"
#include "EAutoClimbType.generated.h"

UENUM()
enum class EAutoClimbType : uint8 {
    None,
    Low,
    Middle,
    High,
};

