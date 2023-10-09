#pragma once
#include "CoreMinimal.h"
#include "EFollowSplineType.generated.h"

UENUM(BlueprintType)
enum class EFollowSplineType : uint8 {
    None,
    Loop,
    PingPong,
};

