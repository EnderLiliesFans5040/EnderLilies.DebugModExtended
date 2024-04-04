#include "SummonerComponent.h"

USummonerComponent::USummonerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void USummonerComponent::OnUnpossessed() {
}

void USummonerComponent::OnUnequipSpirit(ESummonSet SummonSet, const FSpiritData& SpiritData) {
}

void USummonerComponent::OnSwitchSummonSet(ESummonSet PrevSummonSet, ESummonSet NewSummonSet) {
}

void USummonerComponent::OnPossessed() {
}

void USummonerComponent::OnEquipSpirit(ESummonSet SummonSet, const FSpiritData& SpiritData) {
}


