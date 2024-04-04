#pragma once
#include "CoreMinimal.h"
#include "EPassiveEquipResult.generated.h"

UENUM(BlueprintType)
enum class EPassiveEquipResult : uint8 {
    Success,
    InsufficientFreeSlotCount,
    PassiveEquipLimitReached,
    InvalidPassive,
};

