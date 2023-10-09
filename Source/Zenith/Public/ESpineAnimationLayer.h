#pragma once
#include "CoreMinimal.h"
#include "ESpineAnimationLayer.generated.h"

UENUM()
enum class ESpineAnimationLayer : uint8 {
    NONE,
    LOCOMOTION,
    LOCOMOTION_TRANSITION,
    ACTION,
    KNOCKBACK_FALL,
    REACTION,
    DEATH,
    EVENT_LOCOMOTION,
    EVENT_KEEP,
    EVENT,
};

