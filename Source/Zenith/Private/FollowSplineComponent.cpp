#include "FollowSplineComponent.h"

UFollowSplineComponent::UFollowSplineComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SplineComponent = NULL;
    this->bAutoStart = true;
    this->bStartForward = true;
    this->PlayType = EFollowSplineType::PingPong;
    this->Speed = 100.00f;
    this->DelayBetweenMove = 0.00f;
}

void UFollowSplineComponent::Launch(bool bForward) {
}


