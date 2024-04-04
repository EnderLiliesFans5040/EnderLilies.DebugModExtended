#pragma once
#include "CoreMinimal.h"
#include "ESoundAction.generated.h"

UENUM(BlueprintType)
enum class ESoundAction : uint8 {
    NONE,
    Cut = 10,
    Knock = 20,
    Stab = 30,
};

