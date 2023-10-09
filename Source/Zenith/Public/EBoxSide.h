#pragma once
#include "CoreMinimal.h"
#include "EBoxSide.generated.h"

UENUM()
enum class EBoxSide : uint8 {
    None,
    Top,
    Bottom,
    Left,
    Right,
};

