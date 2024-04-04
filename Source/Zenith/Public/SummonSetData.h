#pragma once
#include "CoreMinimal.h"
#include "ECommandInputTypes.h"
#include "SpiritData.h"
#include "SummonSetData.generated.h"

USTRUCT(BlueprintType)
struct FSummonSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECommandInputTypes, FSpiritData> Spirits;
    
    ZENITH_API FSummonSetData();
};

