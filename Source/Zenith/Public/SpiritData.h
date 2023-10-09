#pragma once
#include "CoreMinimal.h"
#include "ItemSpiritData.h"
#include "ECommandInputTypes.h"
#include "SpiritData.generated.h"

class AZenithSpirit;
class UCommandSettingsData;

USTRUCT(BlueprintType)
struct FSpiritData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FName SpiritID;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    FItemSpiritData ItemSpiritData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AZenithSpirit* ZenithSpirit;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UCommandSettingsData* CommandSettingsData;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ECommandInputTypes CommandInputType;
    
    ZENITH_API FSpiritData();
};

