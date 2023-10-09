#pragma once
#include "CoreMinimal.h"
#include "EInputActionSet.generated.h"

UENUM()
enum class EInputActionSet : uint8 {
    Game = 0x1,
    Menu,
    Event,
};

