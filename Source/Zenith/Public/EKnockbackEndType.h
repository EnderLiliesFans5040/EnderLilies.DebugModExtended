#pragma once
#include "CoreMinimal.h"
#include "EKnockbackEndType.generated.h"

UENUM(BlueprintType)
enum class EKnockbackEndType : uint8 {
    Default,
    RequestedStop,
    RequestedCancel,
};

