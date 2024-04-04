#include "StreamingVolume.h"
#include "Components/SceneComponent.h"

AStreamingVolume::AStreamingVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->DelayBeforeUnload = 2.00f;
    this->bBlockOnLoad = false;
    this->SceneRootComponent = (USceneComponent*)RootComponent;
}

void AStreamingVolume::OnLevelLoaded() {
}

void AStreamingVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AStreamingVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


