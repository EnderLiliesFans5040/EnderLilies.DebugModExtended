#pragma once
#include "CoreMinimal.h"
#include "ESummonSet.h"
#include "SpiritEquipElementSaveData.h"
#include "SpiritEquipSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSpiritEquipSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESummonSet ActiveSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpiritEquipElementSaveData> Elements;
    
    ZENITH_API FSpiritEquipSaveData();
};

