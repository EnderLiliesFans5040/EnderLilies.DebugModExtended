#include "PawnActivationVolume.h"
#include "Components/SceneComponent.h"

class AActor;
class UPrimitiveComponent;

void APawnActivationVolume::OnPawnEndPlay(AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

void APawnActivationVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APawnActivationVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

APawnActivationVolume::APawnActivationVolume() {
    this->bShouldLockCamera = false;
    this->SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ActivationShape = NULL;
}

