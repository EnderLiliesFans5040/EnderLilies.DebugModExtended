#pragma once
#include "CoreMinimal.h"
#include "EPawnVolumeState.generated.h"

UENUM(BlueprintType)
enum class EPawnVolumeState : uint8 {
    NONE,
    ACTIVATED,
    CLEARED,
};

