#include "ZenithSpirit.h"
#include "FactionComponent.h"
#include "CommandQueueComponent.h"
#include "ZenithInputComponent.h"
#include "StateComponent.h"
#include "AbilityComponent.h"
#include "HitStopComponent.h"
#include "LocomotionComponent.h"

class UCommandAction;
class ACharacter;
class APawn;

void AZenithSpirit::StopCurrentCommand() {
}

void AZenithSpirit::ResetLocation() {
}

void AZenithSpirit::OnSummonerMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void AZenithSpirit::OnSummonerCommandsCleared() {
}

void AZenithSpirit::OnStartCommand(UCommandAction* CommandAction) {
}

void AZenithSpirit::OnSourceCommandReachedCastLimit() {
}

void AZenithSpirit::OnSoftDisappear_Implementation() {
}


void AZenithSpirit::OnEndCommand(UCommandAction* CommandAction, ECommandRemoveTypes RemoveType) {
}




bool AZenithSpirit::IsActive() const {
    return false;
}

APawn* AZenithSpirit::GetSummoner() const {
    return NULL;
}

float AZenithSpirit::GetAttackFactor() const {
    return 0.0f;
}

void AZenithSpirit::ForceDisappear() {
}

void AZenithSpirit::Disappear(bool bForce) {
}

bool AZenithSpirit::CanStartCommandAction(APawn* ActionSummoner) const {
    return false;
}

void AZenithSpirit::Appear() {
}

void AZenithSpirit::AddAttackToken() {
}

AZenithSpirit::AZenithSpirit() {
    this->CommandQueueComponent = CreateDefaultSubobject<UCommandQueueComponent>(TEXT("CommandQueueComponent"));
    this->StateComponent = CreateDefaultSubobject<UStateComponent>(TEXT("StateComponent"));
    this->FactionComponent = CreateDefaultSubobject<UFactionComponent>(TEXT("FactionComponent"));
    this->AbilityComponent = CreateDefaultSubobject<UAbilityComponent>(TEXT("AbilityComponent"));
    this->HitStopComponent = CreateDefaultSubobject<UHitStopComponent>(TEXT("HitStopComponent"));
    this->ZenithInputComponent = CreateDefaultSubobject<UZenithInputComponent>(TEXT("InputComponent"));
    this->LocomotionComponent = CreateDefaultSubobject<ULocomotionComponent>(TEXT("LocomotionComponent"));
    this->bUnsummonOnMapSwitch = true;
    this->bUnsummonOnSpiritSwim = false;
    this->bUnsummonOnSummonerSwim = false;
    this->MovementComponent = NULL;
}

