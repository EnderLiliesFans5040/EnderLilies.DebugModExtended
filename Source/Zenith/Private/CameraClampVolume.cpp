#include "CameraClampVolume.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

ACameraClampVolume::ACameraClampVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->bActive = true;
    this->SceneRootComponent = (USceneComponent*)RootComponent;
    this->ActivationBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ActivationBoxComponent"));
    this->ClampComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ClampComponent"));
    this->Blocker_Up = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocker_Up"));
    this->Blocker_Down = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocker_Down"));
    this->Blocker_Left = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocker_Left"));
    this->Blocker_Right = CreateDefaultSubobject<UBoxComponent>(TEXT("Blocker_Right"));
    this->Priority = 0;
    this->ActivationBoxComponent->SetupAttachment(RootComponent);
    this->ClampComponent->SetupAttachment(RootComponent);
    this->Blocker_Up->SetupAttachment(ClampComponent);
    this->Blocker_Down->SetupAttachment(ClampComponent);
    this->Blocker_Left->SetupAttachment(ClampComponent);
    this->Blocker_Right->SetupAttachment(ClampComponent);
}

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


