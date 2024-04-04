#include "FactionComponent.h"

UFactionComponent::UFactionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Faction = EFaction::None;
}

void UFactionComponent::SetFaction(EFaction NewFaction) {
}

bool UFactionComponent::IsSameFaction(EFaction OtherFaction) const {
    return false;
}

bool UFactionComponent::IsPlayerFaction() const {
    return false;
}


