#pragma once
#include "CoreMinimal.h"
#include "ECommandCondition.h"
#include "Templates/SubclassOf.h"
#include "SpiritActionDefinition.generated.h"

class UCommandAction;

USTRUCT(BlueprintType)
struct ZENITH_API FSpiritActionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECommandCondition> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommandAction>> CommandActionClasses;
    
    FSpiritActionDefinition();
};

