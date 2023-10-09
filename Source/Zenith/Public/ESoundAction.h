#pragma once
#include "CoreMinimal.h"
#include "ESoundAction.generated.h"

UENUM()
enum class ESoundAction : uint8 {
    NONE,
    Cut = 0xA,
    Knock = 0x14,
    Stab = 0x1E,
};

