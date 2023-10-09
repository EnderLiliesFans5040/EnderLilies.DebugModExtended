#include "BaseInventory.h"

class UDataTable;

void UBaseInventory::RemoveItemByRowName(const FName& ItemRowName) {
}

void UBaseInventory::RemoveItem(const FDataTableRowHandle& ItemData) {
}

bool UBaseInventory::IsFull() const {
    return false;
}

bool UBaseInventory::HasItemByRowName(const FName& ItemRowName) const {
    return false;
}

bool UBaseInventory::HasItem(const FDataTableRowHandle& ItemData) const {
    return false;
}

UDataTable* UBaseInventory::GetValidDataTable() const {
    return NULL;
}

int32 UBaseInventory::GetItemLimit() const {
    return 0;
}

bool UBaseInventory::GetItemHandleAtIndex(int32 Index, FDataTableRowHandle& out_ItemHandle) const {
    return false;
}

int32 UBaseInventory::GetItemCount() const {
    return 0;
}

bool UBaseInventory::GetItemAtIndex(int32 Index, FInventoryBaseItemData& out_Item) const {
    return false;
}

TArray<FInventoryBaseItemData> UBaseInventory::GetAllItems() const {
    return TArray<FInventoryBaseItemData>();
}

void UBaseInventory::Clear() {
}

bool UBaseInventory::AllowDuplicate() const {
    return false;
}

bool UBaseInventory::AddItem(const FDataTableRowHandle& ItemData) {
    return false;
}

UBaseInventory::UBaseInventory() {
    this->ItemLimit = 5;
    this->bAllowDuplicates = true;
}

