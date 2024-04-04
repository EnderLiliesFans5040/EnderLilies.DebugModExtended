#pragma once
#include "CoreMinimal.h"
#include "EDamageAdditiveType.generated.h"

UENUM(BlueprintType)
enum class EDamageAdditiveType : uint8 {
    Never,
    Always,
    GroundedOnly,
};

