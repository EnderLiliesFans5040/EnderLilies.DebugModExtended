#pragma once
#include "CoreMinimal.h"
#include "ECurrencyType.h"
#include "Engine/DataTable.h"
#include "SpiritParameterLevelData.generated.h"

class UCommandSettingsData;

USTRUCT(BlueprintType)
struct FSpiritParameterLevelData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UCommandSettingsData> CommandSettingsData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AttackFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECurrencyType CurrencyTypeForLevelUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NecessaryCurrencyForLevelUp;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCastCountUpgrade;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bCooldownUpgrade;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FText> LevelUpTexts;
    
    ZENITH_API FSpiritParameterLevelData();
};

