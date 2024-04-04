#pragma once
#include "CoreMinimal.h"
#include "ESoundAction.h"
#include "SoundMaterialMap.h"
#include "SoundActionMaterialMap.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FSoundActionMaterialMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESoundAction, FSoundMaterialMap> Sounds;
    
    FSoundActionMaterialMap();
};

