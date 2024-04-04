#pragma once
#include "CoreMinimal.h"
#include "HealSaveData.generated.h"

USTRUCT(BlueprintType)
struct FHealSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealCountLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HealPowerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrHealCount;
    
    ZENITH_API FHealSaveData();
};

