#include "GameSettingsData.h"

FGameSettingsData::FGameSettingsData() {
    this->Gamma = 0.00f;
    this->ResolutionScale = 0;
    this->bDisplayDamageValues = false;
    this->bDisplayHealValues = false;
    this->bDisplayPlayerUI = false;
    this->bDisplayEnemyFloatingGauges = false;
    this->bUseForceFeedback = false;
    this->bUseCameraShake = false;
    this->bDisplayInternalAchievementNotifications = false;
    this->bHoldForSummonSetSwitch = false;
    this->bEnableDamageAreaPostProcess = false;
    this->bNoAutoClimbWhilePressingDown = false;
}

