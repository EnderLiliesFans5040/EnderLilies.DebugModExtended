#include "CounterAttackComponent.h"

class AAbility;
class UCommandAction;
class AActor;

void UCounterAttackComponent::OnJustGuard(AAbility* Ability, AActor* Invoker, bool bWillForwardEventToAttacker) {
}

void UCounterAttackComponent::OnExecuteCommandWhileCounter(UCommandAction* CommandAction) {
}

UCounterAttackComponent::UCounterAttackComponent() {
    this->CounterUIClass = NULL;
    this->bCanUseCounterAttack = true;
    this->TimeDilatationTarget = 0.20f;
    this->TimeDilatationDuration = 1.00f;
    this->StateComponent = NULL;
    this->CommandComponent = NULL;
}

