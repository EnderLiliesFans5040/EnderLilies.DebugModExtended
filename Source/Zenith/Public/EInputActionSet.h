#pragma once
#include "CoreMinimal.h"
#include "EInputActionSet.generated.h"

UENUM(BlueprintType)
enum class EInputActionSet : uint8 {
    Dummy,
    Game = 1,
    Menu,
    Event,
};

