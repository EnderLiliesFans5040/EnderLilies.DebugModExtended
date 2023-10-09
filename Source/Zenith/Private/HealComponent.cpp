#include "HealComponent.h"

void UHealComponent::UseHeal() {
}

float UHealComponent::SubHealPowerPercentageBonus(float HealPercentBonusToSub) {
    return 0.0f;
}

int32 UHealComponent::SubHealCountBonus(int32 HealCountBonusToSub) {
    return 0;
}

int32 UHealComponent::SetHealPowerLevel(int32 NewHealPowerLevel) {
    return 0;
}

int32 UHealComponent::SetHealCountLevel(int32 NewHealCountLevel) {
    return 0;
}

bool UHealComponent::RestoreHeal() {
    return false;
}

void UHealComponent::PlayerCantHealChanged() {
}

bool UHealComponent::IsHealCountMax() const {
    return false;
}

int32 UHealComponent::GetRemainingHealCount() const {
    return 0;
}

int32 UHealComponent::GetMaxHealPowerLevel() const {
    return 0;
}

int32 UHealComponent::GetMaxHealCount() const {
    return 0;
}

int32 UHealComponent::GetHealValue() const {
    return 0;
}

int32 UHealComponent::GetHealPowerLevel() const {
    return 0;
}

int32 UHealComponent::GetHealCountLevel() const {
    return 0;
}

bool UHealComponent::FullyRestoreHeals() {
    return false;
}

float UHealComponent::AddHealPowerPercentageBonus(float HealPercentBonusToAdd) {
    return 0.0f;
}

void UHealComponent::AddHealPowerLevel() {
}

void UHealComponent::AddHealCountLevel() {
}

int32 UHealComponent::AddHealCountBonus(int32 HealCountBonusToAdd) {
    return 0;
}

UHealComponent::UHealComponent() {
    this->MaxHealCountLevel = 5;
    this->MaxHealPowerLevel = 5;
    this->HealCountBonus = 0;
    this->HealPowerPercentageBonus = 0.00f;
}

