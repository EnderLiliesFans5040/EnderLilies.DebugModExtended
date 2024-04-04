#pragma once
#include "CoreMinimal.h"
#include "EGameEndingType.h"
#include "MapCompleteData.generated.h"

USTRUCT(BlueprintType)
struct FMapCompleteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ActorCountForMapCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGameEndingType> ClearedEndings;
    
    ZENITH_API FMapCompleteData();
};

