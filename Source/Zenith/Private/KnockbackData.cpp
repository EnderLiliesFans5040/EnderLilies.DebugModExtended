#include "KnockbackData.h"

FKnockbackData::FKnockbackData() {
    this->bForceRestartDamageAnimation = false;
    this->bResetVelocity = false;
    this->bAbsoluteLaunchVector = false;
    this->bKnockbackUntilGrounded = false;
    this->StunTime = 0.00f;
    this->MoveTime = 0.00f;
    this->Strength = 0.00f;
    this->MovementCurve = NULL;
}

