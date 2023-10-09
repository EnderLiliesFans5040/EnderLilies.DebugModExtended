#include "SpiritParameterLevelData.h"

FSpiritParameterLevelData::FSpiritParameterLevelData() {
    this->AttackFactor = 0.00f;
    this->CurrencyTypeForLevelUp = ECurrencyType::Spirit_Lv1;
    this->NecessaryCurrencyForLevelUp = 0;
    this->bCastCountUpgrade = false;
    this->bCooldownUpgrade = false;
}

