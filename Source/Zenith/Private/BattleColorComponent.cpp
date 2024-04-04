#include "BattleColorComponent.h"

UBattleColorComponent::UBattleColorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoopCurve = NULL;
    this->FadeInCurve = NULL;
    this->FadeOutCurve = NULL;
    this->MaterialParameterName = TEXT("EmissiveFactorAlt");
}

void UBattleColorComponent::SetBattleColorEnabled(bool bEnable) {
}

void UBattleColorComponent::SetAlpha(float NewAlpha) {
}


