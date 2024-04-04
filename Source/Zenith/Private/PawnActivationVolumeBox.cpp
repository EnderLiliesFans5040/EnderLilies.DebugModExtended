#include "PawnActivationVolumeBox.h"
#include "Components/BoxComponent.h"

APawnActivationVolumeBox::APawnActivationVolumeBox(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ActivationShape = CreateDefaultSubobject<UBoxComponent>(TEXT("ActivationBox"));
    this->ActivationShape->SetupAttachment(RootComponent);
}


