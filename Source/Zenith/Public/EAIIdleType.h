#pragma once
#include "CoreMinimal.h"
#include "EAIIdleType.generated.h"

UENUM(BlueprintType)
enum class EAIIdleType : uint8 {
    None,
    Patrol,
    IdlePeace,
};

