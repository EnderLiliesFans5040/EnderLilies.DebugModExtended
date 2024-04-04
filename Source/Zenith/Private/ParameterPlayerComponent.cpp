#include "ParameterPlayerComponent.h"

UParameterPlayerComponent::UParameterPlayerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DefaultHP = 100;
    this->DefaultMP = 100;
    this->Level = 1;
    this->ExperiencePoints = 0;
    this->SkinLevel = 1;
    this->SkinLevelOverride = -1;
    this->FinalPassivePartCount = 0;
    this->MaxFinalPassivePartCount = 7;
    this->MaxHPBonusPercentage = 0.00f;
    this->MaxMPBonusPercentage = 0.00f;
    this->MaxStaminaBonusPercentage = 0.00f;
    this->MPRestoreBonusPercentage = 0.00f;
    this->DamageCutPercentage = 0.00f;
    this->ExpBonusPercent = 0.00f;
    this->PostDamageInvincibilityBonusTime = 0.00f;
    this->DamagePercentBonus = 0.00f;
    this->DamagePercentBonusOnMaxHP = 0.00f;
    this->DamagePercentBonusWhenGrounded = 0.00f;
    this->DamagePercentBonusWhenAirborne = 0.00f;
    this->DamagePercentBonusWhenSwimming = 0.00f;
    this->StaminaDamagePercentBonus = 0.00f;
    this->StunDamagePercentBonus = 0.00f;
}

void UParameterPlayerComponent::SubStunDamagePercentBonus(float StunDamagePercentBonusToSub) {
}

void UParameterPlayerComponent::SubStaminaDamagePercentBonus(float StaminaDamagePercentBonusToSub) {
}

void UParameterPlayerComponent::SubPostDamageInvincibilityBonusTime(float BonusTimeToSub) {
}

void UParameterPlayerComponent::SubMPRestorePercentBonus(float MPPercentBonusToSub) {
}

void UParameterPlayerComponent::SubMaxStaminaBonusPercentage(float MaxStaminaBonusToSub) {
}

void UParameterPlayerComponent::SubMaxMPBonusPercentage(float MaxMPBonusToSub) {
}

void UParameterPlayerComponent::SubMaxHPBonusPercentage(float MaxHPBonusToSub) {
}

void UParameterPlayerComponent::SubExpPercentBonus(float ExpBonusToSub) {
}

void UParameterPlayerComponent::SubDamagePercentBonusWhenSwimming(float DamagePercentBonusToSub) {
}

void UParameterPlayerComponent::SubDamagePercentBonusWhenGrounded(float DamagePercentBonusToSub) {
}

void UParameterPlayerComponent::SubDamagePercentBonusWhenAirborne(float DamagePercentBonusToSub) {
}

void UParameterPlayerComponent::SubDamagePercentBonusOnMaxHP(float DamagePercentBonusToSub) {
}

void UParameterPlayerComponent::SubDamagePercentBonus(float DamagePercentBonusToSub) {
}

void UParameterPlayerComponent::SubDamageCutPercentageForAttribute(EDamageAttribute DamageAttribute, float DamageCutToSub) {
}

void UParameterPlayerComponent::SubDamageCutPercentage(float DamageCutToSub) {
}

void UParameterPlayerComponent::SetSkinLevelOverride(int32 NewSkinLevelOverride, bool bForceOverride) {
}

int32 UParameterPlayerComponent::SetSkinLevel(int32 NewSkinLevel) {
    return 0;
}

int32 UParameterPlayerComponent::SetLevel(int32 NewLevel) {
    return 0;
}

int32 UParameterPlayerComponent::SetFinalPassivePartCount(int32 NewFinalPassivePartCount) {
    return 0;
}

void UParameterPlayerComponent::OnItemParameterAdded(const FInventoryBaseItemData& InventoryParameterData) {
}

void UParameterPlayerComponent::OnChallengeMaxPlayerLevelChanged() {
}

bool UParameterPlayerComponent::IsMaxLevel(bool bIgnoreOverride) const {
    return false;
}

bool UParameterPlayerComponent::HasSkinLevelOverride() const {
    return false;
}

int32 UParameterPlayerComponent::GetSkinLevel(bool bWithoutOverride) const {
    return 0;
}

int32 UParameterPlayerComponent::GetNecessaryExpPointsForLevelUp() const {
    return 0;
}

int32 UParameterPlayerComponent::GetMaxLevel() const {
    return 0;
}

int32 UParameterPlayerComponent::GetLevel(bool bIgnoreOverride) const {
    return 0;
}

int32 UParameterPlayerComponent::GetFinalPassivePartMaxCount() const {
    return 0;
}

int32 UParameterPlayerComponent::GetFinalPassivePartCount() const {
    return 0;
}

float UParameterPlayerComponent::GetExperienceRatio() const {
    return 0.0f;
}

int32 UParameterPlayerComponent::GetExperiencePoints() const {
    return 0;
}

float UParameterPlayerComponent::GetExpBonusPercent() const {
    return 0.0f;
}

int32 UParameterPlayerComponent::GetBonusRateAdjustedExperiencePoints(int32 DefaultPoints) const {
    return 0;
}

float UParameterPlayerComponent::GetAttackBonusPercentage() const {
    return 0.0f;
}

void UParameterPlayerComponent::ClearSkinLevelOverride() {
}

void UParameterPlayerComponent::AddStunDamagePercentBonus(float StunDamagePercentBonusToAdd) {
}

void UParameterPlayerComponent::AddStaminaDamagePercentBonus(float StaminaDamagePercentBonusToAdd) {
}

int32 UParameterPlayerComponent::AddSkinLevel() {
    return 0;
}

void UParameterPlayerComponent::AddPostDamageInvincibilityBonusTime(float BonusTimeToAdd) {
}

void UParameterPlayerComponent::AddMPRestorePercentBonus(float MPPercentBonusToAdd) {
}

void UParameterPlayerComponent::AddMaxStaminaBonusPercentage(float MaxStaminaBonusToAdd) {
}

void UParameterPlayerComponent::AddMaxMPBonusPercentage(float MaxMPBonusToAdd) {
}

void UParameterPlayerComponent::AddMaxHPBonusPercentage(float MaxHPBonusToAdd) {
}

int32 UParameterPlayerComponent::AddFinalPassivePartCount() {
    return 0;
}

void UParameterPlayerComponent::AddExpPercentBonus(float ExpBonusToAdd) {
}

void UParameterPlayerComponent::AddExperiencePoints(int32 PointsToAdd, bool bAppliedBonusExpRate) {
}

void UParameterPlayerComponent::AddDamagePercentBonusWhenSwimming(float DamagePercentBonusToAdd) {
}

void UParameterPlayerComponent::AddDamagePercentBonusWhenGrounded(float DamagePercentBonusToAdd) {
}

void UParameterPlayerComponent::AddDamagePercentBonusWhenAirborne(float DamagePercentBonusToAdd) {
}

void UParameterPlayerComponent::AddDamagePercentBonusOnMaxHP(float DamagePercentBonusToAdd) {
}

void UParameterPlayerComponent::AddDamagePercentBonus(float DamagePercentBonusToAdd) {
}

void UParameterPlayerComponent::AddDamageCutPercentageForAttribute(EDamageAttribute DamageAttribute, float DamageCutToAdd) {
}

void UParameterPlayerComponent::AddDamageCutPercentage(float DamageCutToAdd) {
}


