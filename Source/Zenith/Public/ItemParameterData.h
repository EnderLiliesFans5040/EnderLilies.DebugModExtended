#pragma once
#include "CoreMinimal.h"
#include "ItemData.h"
#include "ItemParameterData.generated.h"

USTRUCT(BlueprintType)
struct FItemParameterData : public FItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusMaxHP;
    
    ZENITH_API FItemParameterData();
};

