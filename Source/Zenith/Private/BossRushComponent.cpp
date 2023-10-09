#include "BossRushComponent.h"

void UBossRushComponent::UnbindEvents() {
}

int32 UBossRushComponent::TryAddNewRecord(const FBossRushRecordData& NewRecordData) {
    return 0;
}

void UBossRushComponent::StartBossRush() {
}

void UBossRushComponent::ResetRecords() {
}


void UBossRushComponent::OnPlayerRespawn() {
}




bool UBossRushComponent::IsBossRushActive() const {
    return false;
}

FBossRushRecordData UBossRushComponent::GetRecordData(const int32 RecordIndex) const {
    return FBossRushRecordData{};
}

float UBossRushComponent::GetBossRushTime() const {
    return 0.0f;
}

void UBossRushComponent::EndBossRush() {
}

void UBossRushComponent::ClearBossRush() {
}

bool UBossRushComponent::CanUpdateTime_Implementation() const {
    return false;
}

void UBossRushComponent::BindEvents() {
}

UBossRushComponent::UBossRushComponent() {
}

