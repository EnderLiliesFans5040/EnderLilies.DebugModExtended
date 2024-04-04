#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "HealPowerData.generated.h"

USTRUCT(BlueprintType)
struct FHealPowerData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealPower;
    
    ZENITH_API FHealPowerData();
};

