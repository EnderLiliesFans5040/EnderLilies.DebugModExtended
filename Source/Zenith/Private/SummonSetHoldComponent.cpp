#include "SummonSetHoldComponent.h"

USummonSetHoldComponent::USummonSetHoldComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SummonSetSwitchCommandAction = NULL;
}

void USummonSetHoldComponent::OnSettingsSaved() {
}


