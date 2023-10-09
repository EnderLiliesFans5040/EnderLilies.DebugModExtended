#pragma once
#include "CoreMinimal.h"
#include "ECommandRemoveTypes.generated.h"

UENUM()
enum class ECommandRemoveTypes : uint8 {
    Normal,
    TTL,
    Override,
    Clear,
    NotStartable,
    Group,
    Frame,
};

