#pragma once
#include "CoreMinimal.h"
#include "RespawnPointSaveData.generated.h"

USTRUCT(BlueprintType)
struct FRespawnPointSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStartTag;
    
    ZENITH_API FRespawnPointSaveData();
};

