#pragma once
#include "CoreMinimal.h"
#include "EEventActionResult.generated.h"

UENUM(BlueprintType)
enum class EEventActionResult : uint8 {
    NONE,
    IN_PROGRESS,
    SUCCESS,
    FAILURE,
};

