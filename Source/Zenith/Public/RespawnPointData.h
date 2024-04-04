#pragma once
#include "CoreMinimal.h"
#include "RespawnPointData.generated.h"

USTRUCT(BlueprintType)
struct FRespawnPointData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GameMapID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlayerStartTag;
    
    ZENITH_API FRespawnPointData();
};

