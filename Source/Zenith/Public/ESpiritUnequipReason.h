#pragma once
#include "CoreMinimal.h"
#include "ESpiritUnequipReason.generated.h"

UENUM(BlueprintType)
enum class ESpiritUnequipReason : uint8 {
    Unequip,
    SummonSetSwitch,
};

