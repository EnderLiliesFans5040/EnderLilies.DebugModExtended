#pragma once
#include "CoreMinimal.h"
#include "EPassiveEquipResult.generated.h"

UENUM()
enum class EPassiveEquipResult : uint8 {
    Success,
    InsufficientFreeSlotCount,
    PassiveEquipLimitReached,
    InvalidPassive,
};

