#include "AE_HitStopComponent.h"

UAE_HitStopComponent::UAE_HitStopComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyApplyOnPawn = true;
    this->bIgnoreIfTargetGuard = true;
    this->bIgnoreIfTargetJustGuard = true;
    this->bIgnoreIfTargetParry = true;
    this->ExecuteOnInvoker = false;
    this->ExecuteOnTarget = true;
}


