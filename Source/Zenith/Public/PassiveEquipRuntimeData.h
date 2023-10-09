#pragma once
#include "CoreMinimal.h"
#include "ItemPassiveData.h"
#include "PassiveEquipRuntimeData.generated.h"

class UPassive;

USTRUCT(BlueprintType)
struct ZENITH_API FPassiveEquipRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FName PassiveID;
    
    UPROPERTY(BlueprintReadOnly)
    FItemPassiveData ItemPassiveData;
    
    UPROPERTY(BlueprintReadOnly)
    UPassive* PassiveInstance;
    
    FPassiveEquipRuntimeData();
};

