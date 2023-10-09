#include "ItemSpiritData.h"

FItemSpiritData::FItemSpiritData() {
    this->ItemSpiritType = EItemSpiritType::Main;
    this->SpiritLevelTable = NULL;
    this->bInitialSpirit = false;
    this->bBossSpirit = false;
    this->LayerPriority = 0;
}

