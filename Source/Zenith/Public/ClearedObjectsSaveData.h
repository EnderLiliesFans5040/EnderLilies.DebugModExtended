#pragma once
#include "CoreMinimal.h"
#include "NameSet.h"
#include "NameTransformMap.h"
#include "ClearedObjectsSaveData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FClearedObjectsSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, FNameSet> ClearedSavedActors;
    
    UPROPERTY()
    TMap<FName, FNameTransformMap> GenericTransforms;
    
    UPROPERTY()
    TMap<FName, FNameSet> MapCompletionActors;
    
    UPROPERTY()
    TMap<FName, FNameSet> PreviousRunsClearedSavedActors;
    
    UPROPERTY()
    TMap<FName, FNameTransformMap> PreviousRunsGenericSavedTransforms;
    
    FClearedObjectsSaveData();
};

