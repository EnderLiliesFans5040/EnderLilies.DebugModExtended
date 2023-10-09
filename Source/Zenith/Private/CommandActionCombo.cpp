#include "CommandActionCombo.h"
#include "Templates/SubclassOf.h"

class UCommandActionComboEntry;
class UCommandAction;

void UCommandActionCombo::SetNextComboEntry(TSubclassOf<UCommandActionComboEntry> NextComboEntry, bool bExecuteAutomatically) {
}

void UCommandActionCombo::ResetCombo() {
}

void UCommandActionCombo::OnResetCombo_Implementation() {
}

void UCommandActionCombo::OnPawnStartCommand(UCommandAction* Command) {
}

void UCommandActionCombo::OnPawnKnockback(FKnockbackRuntimeData KnockbackRuntimeData) {
}

void UCommandActionCombo::OnPawnEndCommand(UCommandAction* Command, ECommandRemoveTypes RemoveType) {
}

UCommandActionCombo::UCommandActionCombo() {
    this->ResetComboOnInputs = 0;
    this->CurrDefinition = NULL;
    this->NextDefinition = NULL;
    this->OverrideNextDefinition = NULL;
}

