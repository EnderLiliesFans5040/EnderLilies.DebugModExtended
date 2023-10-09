#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NameTransformMap.generated.h"

USTRUCT(BlueprintType)
struct FNameTransformMap {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, FTransform> Entries;
    
    ZENITH_API FNameTransformMap();
};

