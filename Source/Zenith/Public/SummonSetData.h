#pragma once
#include "CoreMinimal.h"
#include "ECommandInputTypes.h"
#include "SpiritData.h"
#include "SummonSetData.generated.h"

USTRUCT(BlueprintType)
struct FSummonSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    TMap<ECommandInputTypes, FSpiritData> Spirits;
    
    ZENITH_API FSummonSetData();
};

