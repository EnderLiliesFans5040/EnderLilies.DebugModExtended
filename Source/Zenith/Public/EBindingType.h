#pragma once
#include "CoreMinimal.h"
#include "EBindingType.generated.h"

UENUM(BlueprintType)
enum class EBindingType : uint8 {
    All,
    Gamepad,
    Keyboard,
};

