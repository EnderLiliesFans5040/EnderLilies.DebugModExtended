#include "ZenithPathFollowingComponent.h"

UZenithPathFollowingComponent::UZenithPathFollowingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseQuadraticBezier = false;
    this->BezierControlPointDistance = 1000.00f;
    this->BezierMinHeightBetweenPoints = 500.00f;
    this->ZenithCharacter = NULL;
}


