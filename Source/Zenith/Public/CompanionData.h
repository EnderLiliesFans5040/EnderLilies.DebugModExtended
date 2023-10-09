#pragma once
#include "CoreMinimal.h"
#include "ItemSpiritData.h"
#include "ECommandInputTypes.h"
#include "CompanionData.generated.h"

class AZenithAICompanionController;
class AZenithCompanionCharacter;

USTRUCT(BlueprintType)
struct FCompanionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FItemSpiritData ItemSpiritData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AZenithAICompanionController> CompanionController;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AZenithCompanionCharacter> Companion;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ECommandInputTypes CommandInputType;
    
    ZENITH_API FCompanionData();
};

