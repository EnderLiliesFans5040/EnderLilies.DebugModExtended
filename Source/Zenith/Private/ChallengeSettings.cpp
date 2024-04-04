#include "ChallengeSettings.h"

UChallengeSettings::UChallengeSettings() {
}

bool UChallengeSettings::SetPlayerOneShot(bool bNewPlayerOneShot) {
    return false;
}

bool UChallengeSettings::SetPlayerCantHeal(bool bPlayerCantHeal) {
    return false;
}

int32 UChallengeSettings::SetMaxSpiritLevel(int32 NewMaxSpiritLevel) {
    return 0;
}

int32 UChallengeSettings::SetMaxPlayerLevel(int32 NewMaxPlayerLevel) {
    return 0;
}

float UChallengeSettings::SetEnemyMaxHPFactor(float NewMaxHPFactor) {
    return 0.0f;
}

float UChallengeSettings::SetEnemyAttackFactor(float NewAttackFactor) {
    return 0.0f;
}

float UChallengeSettings::SetContactDamageFactor(float NewContactDamageFactor) {
    return 0.0f;
}

void UChallengeSettings::Reset() {
}

bool UChallengeSettings::IsUnlocked(const UObject* WorldContextObj) {
    return false;
}

bool UChallengeSettings::HasAnyCustomSettings() const {
    return false;
}

bool UChallengeSettings::GetPlayerOneShot() const {
    return false;
}

bool UChallengeSettings::GetPlayerCantHeal() const {
    return false;
}

int32 UChallengeSettings::GetMaxSpiritLevel() const {
    return 0;
}

int32 UChallengeSettings::GetMaxPlayerLevel() const {
    return 0;
}

float UChallengeSettings::GetEnemyMaxHPFactor() const {
    return 0.0f;
}

float UChallengeSettings::GetEnemyAttackFactor() const {
    return 0.0f;
}

bool UChallengeSettings::GetDefaultPlayerOneShot() const {
    return false;
}

bool UChallengeSettings::GetDefaultPlayerCantHeal() const {
    return false;
}

int32 UChallengeSettings::GetDefaultMaxSpiritLevel() const {
    return 0;
}

int32 UChallengeSettings::GetDefaultMaxPlayerLevel() const {
    return 0;
}

float UChallengeSettings::GetDefaultEnemyMaxHPFactor() const {
    return 0.0f;
}

float UChallengeSettings::GetDefaultEnemyAttackFactor() const {
    return 0.0f;
}

float UChallengeSettings::GetDefaultContactDamageFactor() const {
    return 0.0f;
}

float UChallengeSettings::GetContactDamageFactor() const {
    return 0.0f;
}


