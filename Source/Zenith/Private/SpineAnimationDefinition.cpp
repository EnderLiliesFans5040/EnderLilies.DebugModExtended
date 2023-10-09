#include "SpineAnimationDefinition.h"

FSpineAnimationDefinition::FSpineAnimationDefinition() {
    this->bLoop = false;
    this->bHold = false;
    this->bUseRootMotion = false;
    this->StartTime = 0.00f;
    this->EndTime = 0.00f;
    this->BlendIn = 0.00f;
    this->ImpartRootMotionVelocityType = EImpartRootMotionVelocityType::Never;
    this->MovementModeToSetOnStart = MOVE_None;
    this->MovementModeToSetOnEnd = MOVE_None;
}

