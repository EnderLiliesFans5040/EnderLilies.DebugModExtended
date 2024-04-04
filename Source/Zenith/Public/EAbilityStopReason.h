#pragma once
#include "CoreMinimal.h"
#include "EAbilityStopReason.generated.h"

UENUM(BlueprintType)
enum class EAbilityStopReason : uint8 {
    NORMAL,
    MAX_EXECUTION_TIME,
    CANCEL,
    END_PLAY,
};

