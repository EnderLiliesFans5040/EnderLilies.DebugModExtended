#pragma once
#include "CoreMinimal.h"
#include "PassiveEquipSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPassiveEquipSaveData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 SlotCount;
    
    UPROPERTY()
    TArray<FName> ItemEquipIDs;
    
    ZENITH_API FPassiveEquipSaveData();
};

