#pragma once
#include "CoreMinimal.h"
#include "ESaveExistsType.generated.h"

UENUM(BlueprintType)
enum class ESaveExistsType : uint8 {
    OK,
    DoesNotExist,
    Corrupt,
    UnspecifiedError,
};

