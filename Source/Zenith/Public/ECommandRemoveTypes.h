#pragma once
#include "CoreMinimal.h"
#include "ECommandRemoveTypes.generated.h"

UENUM(BlueprintType)
enum class ECommandRemoveTypes : uint8 {
    Normal,
    TTL,
    Override,
    Clear,
    NotStartable,
    Group,
    Frame,
};

