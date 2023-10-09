#include "ChallengeSettingsData.h"

FChallengeSettingsData::FChallengeSettingsData() {
    this->bChallengeSettingsUnlocked = false;
    this->bPlayerOneShotKill = false;
    this->bPlayerCantHeal = false;
    this->MaxPlayerLevel = 0;
    this->MaxSpiritLevel = 0;
    this->ContactDamageFactor = 0.00f;
    this->EnemyAttackFactor = 0.00f;
    this->EnemyMaxHPFactor = 0.00f;
}

