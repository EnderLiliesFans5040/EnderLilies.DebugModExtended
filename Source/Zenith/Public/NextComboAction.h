#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECommandCondition.h"
#include "NextComboAction.generated.h"

class UCommandActionComboEntry;

USTRUCT(BlueprintType)
struct FNextComboAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ECommandCondition> Conditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCommandActionComboEntry> CommandActionClass;
    
    ZENITH_API FNextComboAction();
};

