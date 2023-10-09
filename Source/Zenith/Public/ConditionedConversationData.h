#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ConversationData.h"
#include "ConditionedConversationData.generated.h"

class UTriggerCondition;

USTRUCT(BlueprintType)
struct FConditionedConversationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<TSubclassOf<UTriggerCondition>> Conditions;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FConversationData Conversation;
    
    ZENITH_API FConditionedConversationData();
};

