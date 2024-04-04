#pragma once
#include "CoreMinimal.h"
#include "ECommandCondition.h"
#include "Templates/SubclassOf.h"
#include "ConditionedCommand.generated.h"

class UCommandAction;

USTRUCT(BlueprintType)
struct ZENITH_API FConditionedCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECommandCondition> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommandAction>> CommandActionClasses;
    
    FConditionedCommand();
};

