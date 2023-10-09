#pragma once
#include "CoreMinimal.h"
#include "ESummonSet.h"
#include "ECommandInputTypes.h"
#include "SpiritEquipElementSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSpiritEquipElementSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    ESummonSet SummonSet;
    
    UPROPERTY()
    FName SpiritID;
    
    UPROPERTY()
    ECommandInputTypes CommandInputType;
    
    ZENITH_API FSpiritEquipElementSaveData();
};

