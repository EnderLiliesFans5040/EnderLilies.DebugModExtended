#pragma once
#include "CoreMinimal.h"
#include "EDeathStyle.generated.h"

UENUM(BlueprintType)
enum class EDeathStyle : uint8 {
    ANIMATION,
    KNOCKBACK,
    PLAYER,
    MANUAL,
    DISSOLVE,
};

