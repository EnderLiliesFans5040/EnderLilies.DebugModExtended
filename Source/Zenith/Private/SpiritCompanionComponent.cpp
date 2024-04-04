#include "SpiritCompanionComponent.h"

USpiritCompanionComponent::USpiritCompanionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USpiritCompanionComponent::ResetCurrentSetStateAndLocation() {
}

AZenithCompanionCharacter* USpiritCompanionComponent::RequestExtraCompanion(const TSoftClassPtr<AZenithCompanionCharacter>& CompanionClass) {
    return NULL;
}

void USpiritCompanionComponent::OnUnequipSpirit(ESummonSet SummonSet, const FSpiritData& SpiritData) {
}

void USpiritCompanionComponent::OnSummonSetSwitch(ESummonSet PrevSummonSet, ESummonSet NewSummonSet) {
}

void USpiritCompanionComponent::OnSpiritDisappear(AZenithSpirit* Spirit) {
}

void USpiritCompanionComponent::OnSpiritAppear(AZenithSpirit* Spirit) {
}

void USpiritCompanionComponent::OnGameMapSwitch() {
}

void USpiritCompanionComponent::OnEquipSpirit(ESummonSet SummonSet, const FSpiritData& SpiritData) {
}

TArray<AZenithCompanionCharacter*> USpiritCompanionComponent::GetOrderedCurrentCompanions() const {
    return TArray<AZenithCompanionCharacter*>();
}

TArray<AZenithCompanionCharacter*> USpiritCompanionComponent::GetExtraCompanions() const {
    return TArray<AZenithCompanionCharacter*>();
}

void USpiritCompanionComponent::ClearAllExtraCompanions() {
}


