#pragma once
#include "CoreMinimal.h"
#include "ESoundMaterial.h"
#include "SoundMaterialMap.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct ZENITH_API FSoundMaterialMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<ESoundMaterial, UFMODEvent*> Sounds;
    
    FSoundMaterialMap();
};

