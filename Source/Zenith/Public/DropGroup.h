#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DropGroup.generated.h"

class ACollectable;

USTRUCT(BlueprintType)
struct ZENITH_API FDropGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ACollectable>> DropCollectables;
    
    FDropGroup();
};

