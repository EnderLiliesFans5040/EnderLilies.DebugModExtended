#include "ZenithPathFollowingComponent.h"

UZenithPathFollowingComponent::UZenithPathFollowingComponent() {
    this->bUseQuadraticBezier = false;
    this->BezierControlPointDistance = 1000.00f;
    this->BezierMinHeightBetweenPoints = 500.00f;
    this->ZenithCharacter = NULL;
}

