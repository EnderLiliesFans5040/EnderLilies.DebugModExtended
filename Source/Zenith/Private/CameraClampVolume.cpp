#include "CameraClampVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

class UPrimitiveComponent;
class AActor;

void ACameraClampVolume::OnComponentOverlapEnd(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ACameraClampVolume::OnComponentOverlapBegin(UPrimitiveComponent* OverlapComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

int32 ACameraClampVolume::GetPriority() const {
    return 0;
}

FVector ACameraClampVolume::GetMinBorder() const {
    return FVector{};
}

FVector ACameraClampVolume::GetMaxBorder() const {
    return FVector{};
}

ACameraClampVolume::ACameraClampVolume() {
    this->bActive = true;
    this->SceneRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->ActivationBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ActivationBoxComponent"));
    this->ClampComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ClampComponent"));
    this->Blocker_Up = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocker_Up"));
    this->Blocker_Down = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocker_Down"));
    this->Blocker_Left = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocker_Left"));
    this->Blocker_Right = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocker_Right"));
    this->Priority = 0;
}

