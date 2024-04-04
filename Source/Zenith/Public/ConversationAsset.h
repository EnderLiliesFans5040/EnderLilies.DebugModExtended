#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ConditionedConversationData.h"
#include "ConversationAsset.generated.h"

UCLASS(Blueprintable)
class UConversationAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConditionedConversationData> Conversations;
    
    UConversationAsset();

};

