#pragma once
#include "CoreMinimal.h"
#include "ConversationEntry.h"
#include "ConversationData.generated.h"

USTRUCT(BlueprintType)
struct FConversationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FConversationEntry> Entries;
    
    ZENITH_API FConversationData();
};

