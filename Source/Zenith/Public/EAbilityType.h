#pragma once
#include "CoreMinimal.h"
#include "EAbilityType.generated.h"

UENUM()
enum class EAbilityType : uint8 {
    DEFAULT,
    PILE_ATTACK,
    DASH_ATTACK,
};

