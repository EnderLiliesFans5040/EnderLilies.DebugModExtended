#include "ItemSpiritInventory.h"

UItemSpiritInventory::UItemSpiritInventory() {
    this->bAllowDuplicates = false;
}

bool UItemSpiritInventory::UnlockedAllSpirits() const {
    return false;
}

int32 UItemSpiritInventory::SetSpiritLevel(const FName& SpiritID, int32 NewLevel) {
    return 0;
}

void UItemSpiritInventory::MarkSpiritAsChecked(const FName& SpiritID) {
}

bool UItemSpiritInventory::IsSpiritMaxLevel(const FName& SpiritID) const {
    return false;
}

bool UItemSpiritInventory::IsSpiritChecked(const FName& SpiritID) const {
    return false;
}

bool UItemSpiritInventory::IsAllObtainedSpiritsChecked() const {
    return false;
}

int32 UItemSpiritInventory::GetSpiritMaxLevel() const {
    return 0;
}

int32 UItemSpiritInventory::GetSpiritLevel(const FName& SpiritID, bool bIgnoreLevelOverride) const {
    return 0;
}

int32 UItemSpiritInventory::GetSpiritCount(bool bCountBossSpirit) const {
    return 0;
}

int32 UItemSpiritInventory::GetCommonSpiritCount() const {
    return 0;
}

int32 UItemSpiritInventory::GetBossSpiritCount() const {
    return 0;
}

int32 UItemSpiritInventory::AddSpiritLevel(const FName& SpiritID) {
    return 0;
}


