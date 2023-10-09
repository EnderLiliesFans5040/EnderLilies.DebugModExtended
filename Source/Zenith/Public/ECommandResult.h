#pragma once
#include "CoreMinimal.h"
#include "ECommandResult.generated.h"

UENUM()
enum class ECommandResult : uint8 {
    NONE,
    IN_PROGRESS,
    SUCCESS,
    FAILURE,
};

