#pragma once
#include "CoreMinimal.h"
#include "EConversationFlowMode.h"
#include "ConversationEntry.generated.h"

USTRUCT(BlueprintType)
struct FConversationEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Speaker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EConversationFlowMode Mode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Duration;
    
    ZENITH_API FConversationEntry();
};

