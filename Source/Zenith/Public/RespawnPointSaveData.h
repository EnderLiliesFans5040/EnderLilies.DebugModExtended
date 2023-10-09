#pragma once
#include "CoreMinimal.h"
#include "RespawnPointSaveData.generated.h"

USTRUCT(BlueprintType)
struct FRespawnPointSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName GameMapID;
    
    UPROPERTY()
    FName PlayerStartTag;
    
    ZENITH_API FRespawnPointSaveData();
};

