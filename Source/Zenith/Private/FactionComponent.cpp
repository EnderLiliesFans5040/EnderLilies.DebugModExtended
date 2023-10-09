#include "FactionComponent.h"

void UFactionComponent::SetFaction(EFaction NewFaction) {
}

bool UFactionComponent::IsSameFaction(EFaction OtherFaction) const {
    return false;
}

bool UFactionComponent::IsPlayerFaction() const {
    return false;
}

UFactionComponent::UFactionComponent() {
    this->Faction = EFaction::None;
}

