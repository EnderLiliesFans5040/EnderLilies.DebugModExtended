#include "BattleColorComponent.h"

void UBattleColorComponent::SetBattleColorEnabled(bool bEnable) {
}

void UBattleColorComponent::SetAlpha(float NewAlpha) {
}

UBattleColorComponent::UBattleColorComponent() {
    this->LoopCurve = NULL;
    this->FadeInCurve = NULL;
    this->FadeOutCurve = NULL;
    this->MaterialParameterName = TEXT("EmissiveFactorAlt");
}

