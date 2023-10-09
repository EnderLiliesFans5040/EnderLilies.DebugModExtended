#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConditionedConversationData.h"
#include "ConversationAsset.generated.h"

UCLASS(BlueprintType)
class UConversationAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FConditionedConversationData> Conversations;
    
    UConversationAsset();
};

