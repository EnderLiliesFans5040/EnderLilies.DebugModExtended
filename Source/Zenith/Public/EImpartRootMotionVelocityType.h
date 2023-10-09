#pragma once
#include "CoreMinimal.h"
#include "EImpartRootMotionVelocityType.generated.h"

UENUM(BlueprintType)
enum class EImpartRootMotionVelocityType : uint8 {
    Never,
    Always,
    OnAnimationComplete,
};

