#pragma once
#include "CoreMinimal.h"
#include "ESpineTrackLayer.generated.h"

UENUM(BlueprintType)
enum class ESpineTrackLayer : uint8 {
    DEFAULT,
    MEAT_ACTION = 30,
    DAMAGE_ADDITIVE = 80,
};

