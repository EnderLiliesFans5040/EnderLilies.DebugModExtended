#pragma once
#include "CoreMinimal.h"
#include "CompanionData.h"
#include "SummonSetCompanions.generated.h"

class AZenithSpirit;

USTRUCT(BlueprintType)
struct FSummonSetCompanions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<AZenithSpirit*, FCompanionData> Companions;
    
    ZENITH_API FSummonSetCompanions();
};

