#pragma once
#include "CoreMinimal.h"
#include "ESpiritEndType.generated.h"

UENUM(BlueprintType)
enum class ESpiritEndType : uint8 {
    Manual,
    CommandQueueEnd,
    Time,
};

