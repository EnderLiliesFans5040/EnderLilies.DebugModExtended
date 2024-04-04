#pragma once
#include "CoreMinimal.h"
#include "ItemPassiveData.h"
#include "PassiveEquipRuntimeData.generated.h"

class UPassive;

USTRUCT(BlueprintType)
struct ZENITH_API FPassiveEquipRuntimeData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PassiveID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FItemPassiveData ItemPassiveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPassive* PassiveInstance;
    
    FPassiveEquipRuntimeData();
};

