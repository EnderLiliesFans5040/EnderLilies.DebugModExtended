#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "RecollectionConditionData.h"
#include "RecollectionItemData.generated.h"

USTRUCT(BlueprintType)
struct FRecollectionItemData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FRecollectionConditionData Conditions;
    
    ZENITH_API FRecollectionItemData();
};

