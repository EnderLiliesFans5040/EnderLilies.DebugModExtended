#pragma once
#include "CoreMinimal.h"
#include "ESpineBodyPart.generated.h"

UENUM()
enum class ESpineBodyPart {
    Body,
    Head = 0x32,
    ArmRight = 0x64,
    ArmLeft,
    LegRight = 0xC8,
    LegLeft,
};

