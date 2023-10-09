#pragma once
#include "CoreMinimal.h"
#include "ECommandCondition.generated.h"

UENUM()
enum class ECommandCondition : uint8 {
    NONE,
    IsGrounded,
    IsAirborne,
    IsSwimming,
    IsAirborneOrSwimming = 0x1E,
    IsPressingUp = 0x64,
    IsPressingDown,
    IsPressingLeft,
    IsPressingRight,
    IsPressingUpStrict,
    IsPressingHorizontal = 0x6E,
    IsPressingVertical,
    HasTarget = 0x8C,
    HasNoTarget,
    IsTargetGrounded = 0x96,
    IsTargetAirborne,
};

