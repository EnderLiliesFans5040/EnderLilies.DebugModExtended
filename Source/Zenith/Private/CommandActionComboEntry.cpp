#include "CommandActionComboEntry.h"

class UCommandActionCombo;


UCommandActionCombo* UCommandActionComboEntry::GetOwnerCommandActionCombo() const {
    return NULL;
}

UCommandActionComboEntry::UCommandActionComboEntry() {
    this->OwnerCommandActionCombo = NULL;
}

