#pragma once
#include "CoreMinimal.h"
#include "ECommandInputTypes.h"
#include "ESummonSet.h"
#include "SpiritEquipElementSaveData.generated.h"

USTRUCT(BlueprintType)
struct FSpiritEquipElementSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESummonSet SummonSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpiritID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommandInputTypes CommandInputType;
    
    ZENITH_API FSpiritEquipElementSaveData();
};

