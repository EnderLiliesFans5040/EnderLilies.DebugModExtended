#include "FMODAmbientSound.h"
#include "FMODAudioComponent.h"

AFMODAmbientSound::AFMODAmbientSound(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UFMODAudioComponent>(TEXT("FMODAudioComponent0"));
    this->AudioComponent = (UFMODAudioComponent*)RootComponent;
}


