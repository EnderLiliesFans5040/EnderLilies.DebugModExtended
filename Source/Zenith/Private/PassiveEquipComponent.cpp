#include "PassiveEquipComponent.h"

UPassiveEquipComponent::UPassiveEquipComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSlotCount = 20;
    this->MaxPassiveEquipCount = 14;
}

bool UPassiveEquipComponent::UnequipPassive(const FName& PassiveID) {
    return false;
}

int32 UPassiveEquipComponent::SetSlotCount(int32 NewSlotCount) {
    return 0;
}

bool UPassiveEquipComponent::IsPassiveEquipped(const FName& PassiveID) const {
    return false;
}

int32 UPassiveEquipComponent::GetUsedSlotCount() const {
    return 0;
}

int32 UPassiveEquipComponent::GetSlotCount() const {
    return 0;
}

int32 UPassiveEquipComponent::GetMaxSlotCount() const {
    return 0;
}

int32 UPassiveEquipComponent::GetMaxEquippablePassiveCount() const {
    return 0;
}

TArray<FPassiveEquipRuntimeData> UPassiveEquipComponent::GetEquippedPassives() const {
    return TArray<FPassiveEquipRuntimeData>();
}

int32 UPassiveEquipComponent::GetAvailableSlotCount() const {
    return 0;
}

EPassiveEquipResult UPassiveEquipComponent::EquipPassive(const FName& PassiveID) {
    return EPassiveEquipResult::Success;
}

EPassiveEquipResult UPassiveEquipComponent::CanEquipPassive(const FItemPassiveData& ItemPassiveData) const {
    return EPassiveEquipResult::Success;
}

int32 UPassiveEquipComponent::AddSlotCount(int32 SlotToAdd) {
    return 0;
}

int32 UPassiveEquipComponent::AddSlot() {
    return 0;
}


