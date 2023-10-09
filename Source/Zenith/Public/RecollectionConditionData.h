#pragma once
#include "CoreMinimal.h"
#include "EGameEndingType.h"
#include "RecollectionConditionData.generated.h"

USTRUCT(BlueprintType)
struct FRecollectionConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> Spirits;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<EGameEndingType> ClearedEndings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FName> SeenEvents;
    
    ZENITH_API FRecollectionConditionData();
};

