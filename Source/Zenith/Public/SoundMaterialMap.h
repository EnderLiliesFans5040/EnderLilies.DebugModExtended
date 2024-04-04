#pragma once
#include "CoreMinimal.h"
#include "ESoundMaterial.h"
#include "SoundMaterialMap.generated.h"

class UFMODEvent;

USTRUCT(BlueprintType)
struct ZENITH_API FSoundMaterialMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESoundMaterial, UFMODEvent*> Sounds;
    
    FSoundMaterialMap();
};

