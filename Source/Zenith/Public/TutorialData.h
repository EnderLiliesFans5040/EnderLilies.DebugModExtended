#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETutorialHook.h"
#include "Engine/DataTable.h"
#include "TutorialData.generated.h"

class UTriggerCondition;

USTRUCT(BlueprintType)
struct FTutorialData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ETutorialHook TutorialHook;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UTriggerCondition> TutorialCondition;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FText TutorialMessage;
    
    ZENITH_API FTutorialData();
};

