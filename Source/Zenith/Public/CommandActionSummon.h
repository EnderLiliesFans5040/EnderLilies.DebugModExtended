#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CommandActionSummonSettingsInterface.h"
#include "CommandActionGameplay.h"
#include "CommandActionSettingsSummon.h"
#include "CommandActionSummonInterface.h"
#include "ECommandSummonLimitType.h"
#include "CommandActionSummonSettingsCastLimitInterface.h"
#include "ConditionedCommandList.h"
#include "CommandActionSettingsSummonCastLimit.h"
#include "SummonComponentBPEventDelegate.h"
#include "CommandActionSummon.generated.h"

class AZenithSpirit;

UCLASS(Abstract)
class ZENITH_API UCommandActionSummon : public UCommandActionGameplay, public ICommandActionSummonInterface, public ICommandActionSummonSettingsInterface, public ICommandActionSummonSettingsCastLimitInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AZenithSpirit> SpiritClass;
    
    UPROPERTY(EditDefaultsOnly)
    FConditionedCommandList SpiritCommandList;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAttachSpiritToSummoner;
    
    UPROPERTY(EditDefaultsOnly)
    FCommandActionSettingsSummon SettingsSummon;
    
    UPROPERTY(EditDefaultsOnly)
    FCommandActionSettingsSummonCastLimit SettingsSummonCastLimit;
    
public:
    UCommandActionSummon();
protected:
    UFUNCTION(BlueprintPure)
    AZenithSpirit* GetSpirit() const;
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    bool ReachedCastLimit() const override PURE_VIRTUAL(ReachedCastLimit, return false;);
    
    UFUNCTION(BlueprintCallable)
    float GetRemainingCastValue() const override PURE_VIRTUAL(GetRemainingCastValue, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    ECommandSummonLimitType GetCastLimitType() const override PURE_VIRTUAL(GetCastLimitType, return ECommandSummonLimitType::None;);
    
    UFUNCTION(BlueprintCallable)
    void BindOnCastLimitReached(const FSummonComponentBPEvent OnCastLimitReached) override PURE_VIRTUAL(BindOnCastLimitReached,);
    
    UFUNCTION(BlueprintCallable)
    void BindOnCastLimitChanged(const FSummonComponentBPEvent OnCastLimitChanged) override PURE_VIRTUAL(BindOnCastLimitChanged,);
    
};

