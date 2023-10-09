#pragma once
#include "CoreMinimal.h"
#include "EWalkMode.generated.h"

UENUM()
enum class EWalkMode : uint8 {
    None,
    Walk,
    Run,
    Dash,
};

