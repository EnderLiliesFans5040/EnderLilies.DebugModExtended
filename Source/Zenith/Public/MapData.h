#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "MapData.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FMapData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UWorld> DestinationWorld;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PlayerStartTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Name;
    
    ZENITH_API FMapData();
};

