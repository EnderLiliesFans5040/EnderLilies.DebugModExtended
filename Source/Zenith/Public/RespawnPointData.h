#pragma once
#include "CoreMinimal.h"
#include "RespawnPointData.generated.h"

USTRUCT(BlueprintType)
struct FRespawnPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GameMapID;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName PlayerStartTag;
    
    ZENITH_API FRespawnPointData();
};

