#pragma once
#include "CoreMinimal.h"
#include "PassiveEquipSaveData.generated.h"

USTRUCT(BlueprintType)
struct FPassiveEquipSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ItemEquipIDs;
    
    ZENITH_API FPassiveEquipSaveData();
};

