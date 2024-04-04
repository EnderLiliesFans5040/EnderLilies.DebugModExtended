#pragma once
#include "CoreMinimal.h"
#include "ECommandInputTypes.h"
#include "ItemSpiritData.h"
#include "SpiritData.generated.h"

class AZenithSpirit;
class UCommandSettingsData;

USTRUCT(BlueprintType)
struct FSpiritData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SpiritID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FItemSpiritData ItemSpiritData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AZenithSpirit* ZenithSpirit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommandSettingsData* CommandSettingsData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECommandInputTypes CommandInputType;
    
    ZENITH_API FSpiritData();
};

