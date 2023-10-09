#pragma once
#include "CoreMinimal.h"
#include "ItemData.h"
#include "ItemParameterData.generated.h"

USTRUCT(BlueprintType)
struct FItemParameterData : public FItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BonusMaxHP;
    
    ZENITH_API FItemParameterData();
};

