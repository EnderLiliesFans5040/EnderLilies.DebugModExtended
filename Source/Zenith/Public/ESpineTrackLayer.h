#pragma once
#include "CoreMinimal.h"
#include "ESpineTrackLayer.generated.h"

UENUM()
enum class ESpineTrackLayer : uint8 {
    DEFAULT,
    MEAT_ACTION = 0x1E,
    DAMAGE_ADDITIVE = 0x50,
};

