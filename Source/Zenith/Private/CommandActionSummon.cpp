#include "CommandActionSummon.h"

UCommandActionSummon::UCommandActionSummon() {
    this->SpiritClass = NULL;
    this->bAttachSpiritToSummoner = false;
}

AZenithSpirit* UCommandActionSummon::GetSpirit() const {
    return NULL;
}


