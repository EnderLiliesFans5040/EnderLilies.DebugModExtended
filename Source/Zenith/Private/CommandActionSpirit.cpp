#include "CommandActionSpirit.h"

UCommandActionSpirit::UCommandActionSpirit() {
    this->SpiritDirectionStyle = ESpiritDirectionStyle::FollowInput;
    this->DirectionDashSpeed = 2500.00f;
    this->DashDistance = 0.00f;
    this->bEnableCollision = true;
    this->EnemyPawnCollisionResponse = ECR_Ignore;
}


