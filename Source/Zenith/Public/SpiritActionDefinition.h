#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECommandCondition.h"
#include "SpiritActionDefinition.generated.h"

class UCommandAction;

USTRUCT(BlueprintType)
struct ZENITH_API FSpiritActionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<ECommandCondition> Conditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UCommandAction>> CommandActionClasses;
    
    FSpiritActionDefinition();
};

