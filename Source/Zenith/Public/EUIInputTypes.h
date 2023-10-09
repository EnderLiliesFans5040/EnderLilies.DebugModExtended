#pragma once
#include "CoreMinimal.h"
#include "EUIInputTypes.generated.h"

UENUM(BlueprintType)
enum class EUIInputTypes : uint8 {
    NONE,
    VALIDATION,
    CANCEL,
    CONTEXT,
    RIGHT,
    LEFT,
    UP,
    DOWN,
    NEXT,
    PREVIOUS,
    DEBUG,
};

