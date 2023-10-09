#include "BaseItemData.h"

FBaseItemData::FBaseItemData() {
    this->ItemType = EItemType::None;
    this->AddToInventory = false;
    this->GetItemTriggerClass = NULL;
    this->OverrideGetSoundEvent = NULL;
}

