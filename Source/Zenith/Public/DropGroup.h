#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DropGroup.generated.h"

class ACollectable;

USTRUCT(BlueprintType)
struct ZENITH_API FDropGroup {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    float DropRatio;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<ACollectable>> DropCollectables;
    
    FDropGroup();
};

