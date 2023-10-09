#include "StreamingVolume.h"
#include "Components/SceneComponent.h"

class UPrimitiveComponent;
class AActor;

void AStreamingVolume::OnLevelLoaded() {
}

void AStreamingVolume::OnEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AStreamingVolume::OnBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

AStreamingVolume::AStreamingVolume() {
    this->DelayBeforeUnload = 2.00f;
    this->bBlockOnLoad = false;
    this->SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}

