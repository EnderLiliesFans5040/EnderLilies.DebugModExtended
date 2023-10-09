#pragma once
#include "CoreMinimal.h"
#include "ECommandSummonLimitType.generated.h"

UENUM()
enum class ECommandSummonLimitType : uint8 {
    None,
    CastCount,
    Time,
    AttackCount,
};

