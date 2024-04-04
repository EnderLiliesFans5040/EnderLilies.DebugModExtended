#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ESoundHeavinessCategory.h"
#include "ESoundMaterial.h"
#include "SoundActionMaterialMap.h"
#include "SurfaceToSoundMap.h"
#include "SoundMatrixData.generated.h"

UCLASS(Blueprintable)
class ZENITH_API USoundMatrixData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESoundMaterial, FSoundActionMaterialMap> SoundMatrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESoundHeavinessCategory, FSurfaceToSoundMap> StepSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESoundHeavinessCategory, FSurfaceToSoundMap> LandingSounds;
    
    USoundMatrixData();

};

