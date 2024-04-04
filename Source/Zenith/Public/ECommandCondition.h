#pragma once
#include "CoreMinimal.h"
#include "ECommandCondition.generated.h"

UENUM(BlueprintType)
enum class ECommandCondition : uint8 {
    NONE,
    IsGrounded,
    IsAirborne,
    IsSwimming,
    IsAirborneOrSwimming = 30,
    IsPressingUp = 100,
    IsPressingDown,
    IsPressingLeft,
    IsPressingRight,
    IsPressingUpStrict,
    IsPressingHorizontal = 110,
    IsPressingVertical,
    HasTarget = 140,
    HasNoTarget,
    IsTargetGrounded = 150,
    IsTargetAirborne,
};

