#include "AbilityHitbox.h"
#include "Components/SceneComponent.h"

class AActor;
class UPrimitiveComponent;

void AAbilityHitbox::SetCollisionEnabled(bool bEnableCollision) {
}

void AAbilityHitbox::ProcessActorExit(AActor* ExitActor) {
}

void AAbilityHitbox::ProcessActorEnter(AActor* EnterActor, const FHitInfos& HitInfos) {
}

void AAbilityHitbox::OnPawnExit_Implementation(AActor* ExitActor) {
}

void AAbilityHitbox::OnPawnEnter_Implementation(AActor* EnterActor) {
}

void AAbilityHitbox::OnNonPawnEnter_Implementation() {
}

void AAbilityHitbox::OnActorOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AAbilityHitbox::OnActorOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AAbilityHitbox::AAbilityHitbox() {
    this->bCanHitHitboxes = false;
    this->bCanBeHitByHitboxes = false;
    this->bCollideInvoker = false;
    this->bCollideInvokerFaction = false;
    this->bStopOnPawnCollision = false;
    this->bStopOnHitboxCollision = false;
    this->bStopOnNonPawnCollision = false;
    this->BlockingCollisionChannels.AddDefaulted(3);
    this->bIgnoreReentry = false;
    this->RetriggerContactAfter = 0.00f;
    this->SkipCollisionIfTargetHasAnyStates.AddDefaulted(2);
    this->RootSceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

