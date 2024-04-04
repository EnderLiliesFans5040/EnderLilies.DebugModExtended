#include "PawnActivationVolume.h"
#include "Components/SceneComponent.h"

APawnActivationVolume::APawnActivationVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bShouldLockCamera = false;
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->ActivationShape = NULL;
}

void APawnActivationVolume::OnPawnEndPlay(AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void APawnActivationVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APawnActivationVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


