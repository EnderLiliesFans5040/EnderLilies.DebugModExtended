#pragma once
#include "CoreMinimal.h"
#include "ESoundAction.h"
#include "SoundMaterialMap.h"
#include "SoundActionMaterialMap.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FSoundActionMaterialMap {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TMap<ESoundAction, FSoundMaterialMap> Sounds;
    
    FSoundActionMaterialMap();
};

