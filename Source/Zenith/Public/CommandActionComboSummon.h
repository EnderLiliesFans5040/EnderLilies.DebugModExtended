#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECommandSummonLimitType.h"
#include "CommandActionSummonSettingsCastLimitInterface.h"
#include "CommandActionCombo.h"
#include "SummonComponentBPEventDelegate.h"
#include "CommandActionSummonInterface.h"
#include "CommandActionSettingsSummonCastLimit.h"
#include "CommandActionComboSummon.generated.h"

class AZenithSpirit;

UCLASS(Abstract)
class ZENITH_API UCommandActionComboSummon : public UCommandActionCombo, public ICommandActionSummonInterface, public ICommandActionSummonSettingsCastLimitInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<AZenithSpirit> SpiritClass;
    
    UPROPERTY(EditDefaultsOnly)
    FCommandActionSettingsSummonCastLimit SettingsSummonCastLimit;
    
public:
    UCommandActionComboSummon();
    
    // Fix for true pure virtual functions not being implemented
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

