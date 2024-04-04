#pragma once
#include "CoreMinimal.h"
#include "ECommandCondition.h"
#include "Templates/SubclassOf.h"
#include "NextComboAction.generated.h"

class UCommandActionComboEntry;

USTRUCT(BlueprintType)
struct FNextComboAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ECommandCondition> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommandActionComboEntry> CommandActionClass;
    
    ZENITH_API FNextComboAction();
};

