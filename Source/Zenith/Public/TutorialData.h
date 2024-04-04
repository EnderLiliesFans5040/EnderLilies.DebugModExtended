#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETutorialHook.h"
#include "Templates/SubclassOf.h"
#include "TutorialData.generated.h"

class UTriggerCondition;

USTRUCT(BlueprintType)
struct FTutorialData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialHook TutorialHook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTriggerCondition> TutorialCondition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TutorialMessage;
    
    ZENITH_API FTutorialData();
};

