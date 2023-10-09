#pragma once
#include "CoreMinimal.h"
#include "ESpineLocomotionType.generated.h"

UENUM()
enum class ESpineLocomotionType {
    NONE,
    IDLE,
    WALK,
    RUN,
    JUMP_UP,
    JUMP_APEX,
    FALL,
    FLY_IDLE,
    FLY_UP,
    FLY_DOWN,
    FLY_WALK,
    FLY_RUN,
    SWIM_IDLE,
    SWIM_UP,
    SWIM_DOWN,
    SWIM_LATERAL,
    DIVE_IDLE,
    DIVE_UP,
    DIVE_DOWN,
    DIVE_LATERAL,
};

