#include "FollowSplineComponent.h"

void UFollowSplineComponent::Launch(bool bForward) {
}

UFollowSplineComponent::UFollowSplineComponent() {
    this->SplineComponent = NULL;
    this->bAutoStart = true;
    this->bStartForward = true;
    this->PlayType = EFollowSplineType::PingPong;
    this->Speed = 100.00f;
    this->DelayBetweenMove = 0.00f;
}

