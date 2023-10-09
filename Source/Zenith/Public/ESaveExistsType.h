#pragma once
#include "CoreMinimal.h"
#include "ESaveExistsType.generated.h"

UENUM()
enum class ESaveExistsType : uint8 {
    OK,
    DoesNotExist,
    Corrupt,
    UnspecifiedError,
};

