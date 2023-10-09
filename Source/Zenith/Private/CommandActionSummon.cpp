#include "CommandActionSummon.h"

class AZenithSpirit;

AZenithSpirit* UCommandActionSummon::GetSpirit() const {
    return NULL;
}

UCommandActionSummon::UCommandActionSummon() {
    this->SpiritClass = NULL;
    this->bAttachSpiritToSummoner = false;
}

