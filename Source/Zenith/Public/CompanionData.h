#pragma once
#include "CoreMinimal.h"
#include "ECommandInputTypes.h"
#include "ItemSpiritData.h"
#include "CompanionData.generated.h"

class AZenithAICompanionController;
class AZenithCompanionCharacter;

USTRUCT(BlueprintType)
struct FCompanionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemSpiritData ItemSpiritData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AZenithAICompanionController> CompanionController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AZenithCompanionCharacter> Companion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECommandInputTypes CommandInputType;
    
    ZENITH_API FCompanionData();
};

