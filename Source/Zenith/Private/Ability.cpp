#include "Ability.h"

AAbility::AAbility(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->IgnoreIfTargetHasAnyState.AddDefaulted(4);
    this->MaxExecutionTime = 0.00f;
    this->bWarnLongExecutionTime = true;
    this->bCanBeJustGuarded = true;
    this->bCanBeJustDodged = true;
    this->bCanBeParried = true;
    this->ExecuteGotJustGuardedEvents = true;
    this->bExecuteGotJustGuardedEvents = true;
    this->bExecuteGotJustDodgedEvents = true;
    this->bExecuteGotParriedEvents = true;
    this->bTriggerParryAbility = true;
    this->Invoker = NULL;
    this->AbilityType = EAbilityType::DEFAULT;
}

void AAbility::Tick(float DeltaTime) {
}

void AAbility::Stop(EAbilityStopReason AbilityStopReason) {
}

void AAbility::OnTick_Implementation(float DeltaTime) {
}

void AAbility::OnStop_Implementation(EAbilityStopReason AbilityStopReason) {
}

void AAbility::OnLaunch_Implementation() {
}

void AAbility::OnInitialize_Implementation() {
}

void AAbility::Launch(AActor* NewInvoker) {
}

bool AAbility::IsLaunched() const {
    return false;
}

void AAbility::Initialize() {
}

float AAbility::GetMaxExecutionTime() const {
    return 0.0f;
}

AActor* AAbility::GetInvoker() const {
    return NULL;
}

float AAbility::GetExecutionTime() const {
    return 0.0f;
}

EAbilityType AAbility::GetAbilityType() const {
    return EAbilityType::DEFAULT;
}

bool AAbility::ExecuteAbilityEffectsOnTarget(AActor* Target, const FHitInfos& HitInfos) {
    return false;
}

bool AAbility::CanTargetActor(AActor* TargetActor, EFaction FactionFilter, EAbilityTargetTypes TargetType) const {
    return false;
}

bool AAbility::CanLaunch_Implementation() {
    return false;
}


