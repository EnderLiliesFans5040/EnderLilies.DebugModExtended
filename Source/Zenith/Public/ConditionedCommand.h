#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECommandCondition.h"
#include "ConditionedCommand.generated.h"

class UCommandAction;

USTRUCT(BlueprintType)
struct ZENITH_API FConditionedCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ECommandCondition> Conditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSubclassOf<UCommandAction>> CommandActionClasses;
    
    FConditionedCommand();
};

