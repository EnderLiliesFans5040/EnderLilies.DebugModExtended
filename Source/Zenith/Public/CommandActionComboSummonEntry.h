#pragma once
#include "CoreMinimal.h"
#include "ConditionedCommandList.h"
#include "CommandActionComboEntry.h"
#include "CommandActionSummonSettingsInterface.h"
#include "CommandActionSettingsSummon.h"
#include "CommandActionComboSummonEntry.generated.h"

UCLASS(Abstract)
class ZENITH_API UCommandActionComboSummonEntry : public UCommandActionComboEntry, public ICommandActionSummonSettingsInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FConditionedCommandList SpiritCommandList;
    
    UPROPERTY(EditDefaultsOnly)
    FCommandActionSettingsSummon SummonSettings;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAttachSpiritToSummoner;
    
public:
    UCommandActionComboSummonEntry();
    
    // Fix for true pure virtual functions not being implemented
};

