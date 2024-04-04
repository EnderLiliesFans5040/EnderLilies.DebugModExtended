#include "InventoryComponent.h"

UInventoryComponent::UInventoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PassiveSlotCount = 0;
    this->ItemGenericInventory = NULL;
    this->ItemParameterInventory = NULL;
    this->ItemSpiritInventory = NULL;
    this->ItemAptitudeInventory = NULL;
    this->ItemPassiveInventory = NULL;
    this->ItemTipInventory = NULL;
}

int32 UInventoryComponent::SpendCurrency(ECurrencyType CurrencyType, int32 CurrencyToSpend) {
    return 0;
}

void UInventoryComponent::OnTryAddSpiritItem(const FInventoryBaseItemData& ItemData) {
}

void UInventoryComponent::OnTipItemAdded(const FInventoryBaseItemData& ItemData) {
}

void UInventoryComponent::OnSpiritItemAdded(const FInventoryBaseItemData& ItemData) {
}

void UInventoryComponent::OnPassiveItemAdded(const FInventoryBaseItemData& ItemData) {
}

void UInventoryComponent::OnParameterItemAdded(const FInventoryBaseItemData& ItemData) {
}

void UInventoryComponent::OnAptitudeItemRemoved(const FInventoryBaseItemData& ItemData) {
}

void UInventoryComponent::OnAptitudeItemAdded(const FInventoryBaseItemData& ItemData) {
}

bool UInventoryComponent::HasItem(FDataTableRowHandle ItemToAdd) {
    return false;
}

UItemTipInventory* UInventoryComponent::GetItemTipInventory() {
    return NULL;
}

UItemSpiritInventory* UInventoryComponent::GetItemSpiritInventory() {
    return NULL;
}

UItemPassiveInventory* UInventoryComponent::GetItemPassiveInventory() {
    return NULL;
}

UItemParameterInventory* UInventoryComponent::GetItemParameterInventory() {
    return NULL;
}

UItemInventory* UInventoryComponent::GetItemGenericInventory() {
    return NULL;
}

UItemAptitudeInventory* UInventoryComponent::GetItemAptitudeInventory() {
    return NULL;
}

int32 UInventoryComponent::GetCurrency(ECurrencyType CurrencyType) {
    return 0;
}

bool UInventoryComponent::AddItem(FDataTableRowHandle ItemToAdd) {
    return false;
}

int32 UInventoryComponent::AddCurrency(ECurrencyType CurrencyType, int32 CurrencyToAdd) {
    return 0;
}


