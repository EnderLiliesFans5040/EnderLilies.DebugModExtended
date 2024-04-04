#pragma once
#include "CoreMinimal.h"
#include "PawnActivationVolume.h"
#include "PawnActivationVolumeBox.generated.h"

UCLASS(Blueprintable)
class ZENITH_API APawnActivationVolumeBox : public APawnActivationVolume {
    GENERATED_BODY()
public:
    APawnActivationVolumeBox(const FObjectInitializer& ObjectInitializer);

};

