#pragma once
#include "CoreMinimal.h"
#include "CommandActionComboEntry.h"
#include "CommandActionSettingsSummon.h"
#include "CommandActionSummonSettingsInterface.h"
#include "ConditionedCommandList.h"
#include "CommandActionComboSummonEntry.generated.h"

UCLASS(Abstract, Blueprintable)
class ZENITH_API UCommandActionComboSummonEntry : public UCommandActionComboEntry, public ICommandActionSummonSettingsInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditionedCommandList SpiritCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandActionSettingsSummon SummonSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachSpiritToSummoner;
    
public:
    UCommandActionComboSummonEntry();


    // Fix for true pure virtual functions not being implemented
};

