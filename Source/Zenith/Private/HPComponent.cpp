#include "HPComponent.h"

UHPComponent::UHPComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->DamageNullifyingStates.AddDefaulted(3);
    this->MaxHP = 100;
    this->CurrHP = 0;
    this->StateComponent = NULL;
    this->FactionComponent = NULL;
}

void UHPComponent::SetMaxHP(int32 NewMaxHP) {
}



bool UHPComponent::IsNullifyingDamage() const {
    return false;
}

bool UHPComponent::IsAlive() const {
    return false;
}

int32 UHPComponent::GetMaxHP() const {
    return 0;
}

float UHPComponent::GetCurrHPRatio() const {
    return 0.0f;
}

int32 UHPComponent::GetCurrHP() const {
    return 0;
}

void UHPComponent::FullyRestore() {
}

void UHPComponent::DoHeal(AActor* From, int32 Heal) {
}

void UHPComponent::DoDamage(AActor* From, int32 Damage, bool bJustGuarding, bool bGuarding) {
}


