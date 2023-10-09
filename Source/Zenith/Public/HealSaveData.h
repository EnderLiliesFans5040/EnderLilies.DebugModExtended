#pragma once
#include "CoreMinimal.h"
#include "HealSaveData.generated.h"

USTRUCT(BlueprintType)
struct FHealSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 HealCountLevel;
    
    UPROPERTY()
    int32 HealPowerLevel;
    
    UPROPERTY()
    int32 CurrHealCount;
    
    ZENITH_API FHealSaveData();
};

