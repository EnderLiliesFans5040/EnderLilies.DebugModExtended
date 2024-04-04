#pragma once
#include "CoreMinimal.h"
#include "NameSet.h"
#include "NameTransformMap.h"
#include "ClearedObjectsSaveData.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FClearedObjectsSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> ClearedSavedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameTransformMap> GenericTransforms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> MapCompletionActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameSet> PreviousRunsClearedSavedActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNameTransformMap> PreviousRunsGenericSavedTransforms;
    
    FClearedObjectsSaveData();
};

