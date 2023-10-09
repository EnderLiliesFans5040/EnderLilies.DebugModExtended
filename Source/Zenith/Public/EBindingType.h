#pragma once
#include "CoreMinimal.h"
#include "EBindingType.generated.h"

UENUM()
enum class EBindingType : uint8 {
    All,
    Gamepad,
    Keyboard,
};

