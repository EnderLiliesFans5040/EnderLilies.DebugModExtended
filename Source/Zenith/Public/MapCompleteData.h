#pragma once
#include "CoreMinimal.h"
#include "EGameEndingType.h"
#include "MapCompleteData.generated.h"

USTRUCT(BlueprintType)
struct FMapCompleteData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 ActorCountForMapCompletion;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EGameEndingType> ClearedEndings;
    
    ZENITH_API FMapCompleteData();
};

