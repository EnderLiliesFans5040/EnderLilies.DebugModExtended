#pragma once
#include "CoreMinimal.h"
#include "CommandActionGameplay.h"
#include "CommandActionSettingsSummon.h"
#include "CommandActionSettingsSummonCastLimit.h"
#include "CommandActionSummonInterface.h"
#include "CommandActionSummonSettingsCastLimitInterface.h"
#include "CommandActionSummonSettingsInterface.h"
#include "ConditionedCommandList.h"
#include "ECommandSummonLimitType.h"
#include "SummonComponentBPEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "CommandActionSummon.generated.h"

class AZenithSpirit;

UCLASS(Abstract, Blueprintable)
class ZENITH_API UCommandActionSummon : public UCommandActionGameplay, public ICommandActionSummonInterface, public ICommandActionSummonSettingsInterface, public ICommandActionSummonSettingsCastLimitInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AZenithSpirit> SpiritClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConditionedCommandList SpiritCommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAttachSpiritToSummoner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandActionSettingsSummon SettingsSummon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandActionSettingsSummonCastLimit SettingsSummonCastLimit;
    
public:
    UCommandActionSummon();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

