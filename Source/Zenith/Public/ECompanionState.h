#pragma once
#include "CoreMinimal.h"
#include "ECompanionState.generated.h"

UENUM()
enum class ECompanionState : uint8 {
    NONE,
    MOVE,
    IDLE,
    SHOW_SPINE,
    SPINE_VISIBLE,
    HIDE_SPINE,
};

