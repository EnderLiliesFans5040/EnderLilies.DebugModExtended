#include "CommandActionGameplay.h"

UCommandActionGameplay::UCommandActionGameplay() {
    this->bOverrideStopAnimationBlend = false;
    this->StopAnimationBlend = 0.00f;
    this->MoveInputToForceEnd = 0.10f;
    this->MinInputForFacing = 0.10f;
    this->bResetVelocity = false;
    this->bCanWalkOffLedges = true;
}

