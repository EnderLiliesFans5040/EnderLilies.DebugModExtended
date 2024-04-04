#include "CommandActionCombo.h"
#include "Templates/SubclassOf.h"

UCommandActionCombo::UCommandActionCombo() {
    this->ResetComboOnInputs = 0;
    this->CurrDefinition = NULL;
    this->NextDefinition = NULL;
    this->OverrideNextDefinition = NULL;
}

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


