#pragma once
#include "CoreMinimal.h"
#include "ESpineBodyPart.generated.h"

UENUM(BlueprintType)
enum class ESpineBodyPart : uint8 {
    Body,
    Head = 50,
    ArmRight = 100,
    ArmLeft,
    LegRight = 200,
    LegLeft,
};

