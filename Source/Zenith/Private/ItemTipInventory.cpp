#include "ItemTipInventory.h"

UItemTipInventory::UItemTipInventory() {
    this->bAllowDuplicates = false;
}

bool UItemTipInventory::MarkAsRead(const FName& TipID) {
    return false;
}

bool UItemTipInventory::IsAlreadyRead(const FName& TipID) const {
    return false;
}


