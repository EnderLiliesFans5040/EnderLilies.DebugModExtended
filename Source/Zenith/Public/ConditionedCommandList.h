#pragma once
#include "CoreMinimal.h"
#include "ConditionedCommand.h"
#include "ConditionedCommandList.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FConditionedCommandList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionedCommand> AvailableCommands;
    
    FConditionedCommandList();
};

