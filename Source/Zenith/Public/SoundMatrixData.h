#pragma once
#include "CoreMinimal.h"
#include "SoundActionMaterialMap.h"
#include "Engine/DataAsset.h"
#include "SurfaceToSoundMap.h"
#include "ESoundMaterial.h"
#include "ESoundHeavinessCategory.h"
#include "SoundMatrixData.generated.h"

UCLASS()
class ZENITH_API USoundMatrixData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<ESoundMaterial, FSoundActionMaterialMap> SoundMatrix;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ESoundHeavinessCategory, FSurfaceToSoundMap> StepSounds;
    
    UPROPERTY(EditDefaultsOnly)
    TMap<ESoundHeavinessCategory, FSurfaceToSoundMap> LandingSounds;
    
    USoundMatrixData();
};

