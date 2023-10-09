#pragma once
#include "CoreMinimal.h"
#include "EDirectionInputTypes.generated.h"

UENUM(BlueprintType)
enum class EDirectionInputTypes : uint8 {
    NONE,
    UP,
    DOWN,
    LEFT,
    RIGHT,
    UP_RIGHT,
    UP_LEFT,
    DOWN_RIGHT,
    DOWN_LEFT,
    MAX,
};

