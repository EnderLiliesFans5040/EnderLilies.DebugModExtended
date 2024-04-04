#pragma once
#include "CoreMinimal.h"
#include "InventoryBaseItemData.generated.h"

USTRUCT(BlueprintType)
struct FInventoryBaseItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    ZENITH_API FInventoryBaseItemData();
};

