#pragma once
#include "CoreMinimal.h"
#include "ConversationData.h"
#include "Templates/SubclassOf.h"
#include "ConditionedConversationData.generated.h"

class UTriggerCondition;

USTRUCT(BlueprintType)
struct FConditionedConversationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTriggerCondition>> Conditions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationData Conversation;
    
    ZENITH_API FConditionedConversationData();
};

