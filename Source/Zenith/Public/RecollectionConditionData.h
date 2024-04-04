#pragma once
#include "CoreMinimal.h"
#include "EGameEndingType.h"
#include "RecollectionConditionData.generated.h"

USTRUCT(BlueprintType)
struct FRecollectionConditionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Spirits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EGameEndingType> ClearedEndings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SeenEvents;
    
    ZENITH_API FRecollectionConditionData();
};

