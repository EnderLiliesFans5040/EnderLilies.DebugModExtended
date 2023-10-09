#pragma once
#include "CoreMinimal.h"
#include "ESaveCopyResult.generated.h"

UENUM()
enum class ESaveCopyResult : uint8 {
    Undefined,
    Success,
    NoEmptySlot,
};

