#include "ItemPassiveInventory.h"

UItemPassiveInventory::UItemPassiveInventory() {
    this->bAllowDuplicates = false;
}

void UItemPassiveInventory::MarkPassiveAsChecked(const FName& PassiveID) {
}

bool UItemPassiveInventory::IsPassiveChecked(const FName& PassiveID) const {
    return false;
}

bool UItemPassiveInventory::IsAllObtainedPassivesChecked() const {
    return false;
}


