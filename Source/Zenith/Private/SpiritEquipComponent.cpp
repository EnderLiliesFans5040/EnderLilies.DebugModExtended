#include "SpiritEquipComponent.h"

USpiritEquipComponent::USpiritEquipComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USpiritEquipComponent::UnequipSpiritFromCurrentSet(ECommandInputTypes CommandInputType) {
}

void USpiritEquipComponent::UnequipSpirit(ESummonSet SummonSet, ECommandInputTypes CommandInputType) {
}

void USpiritEquipComponent::UnequipAllSpirits() {
}

void USpiritEquipComponent::ToggleSummonSet() {
}

void USpiritEquipComponent::SwitchSummonSet(ESummonSet NewSet) {
}

void USpiritEquipComponent::SetCanChangeEquipment(bool bNewCanChangeEquipment) {
}

void USpiritEquipComponent::ReequipSpirits() {
}

void USpiritEquipComponent::OnSpiritLevelChanged(const FName& SpiritID, int32 NewSpiritLevel) {
}

void USpiritEquipComponent::OnGameMapSwitch() {
}

bool USpiritEquipComponent::IsSpiritEquipped(ESummonSet SummonSet, FName SpiritID) {
    return false;
}

FSummonSetData USpiritEquipComponent::GetSummonSetDataAsReadOnly(ESummonSet SummonSet) const {
    return FSummonSetData{};
}

ESummonSet USpiritEquipComponent::GetCurrentSummonSet() const {
    return ESummonSet::None;
}

TMap<ESummonSet, FSummonSetData> USpiritEquipComponent::GetAllSummonSets() const {
    return TMap<ESummonSet, FSummonSetData>();
}

void USpiritEquipComponent::ForceDisappearAllSpirits() {
}

void USpiritEquipComponent::EquipSpiritToCurrentSet(FName SpiritID, ECommandInputTypes CommandInputType) {
}

void USpiritEquipComponent::EquipSpirit(ESummonSet SummonSet, FName SpiritID, ECommandInputTypes CommandInputType) {
}

bool USpiritEquipComponent::CanChangeEquipment() const {
    return false;
}


