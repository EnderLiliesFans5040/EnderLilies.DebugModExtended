#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ECommandSummonLimitType.h"
#include "SummonComponentBPEventDelegate.h"
#include "CommandActionSummonSettingsCastLimitInterface.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UCommandActionSummonSettingsCastLimitInterface : public UInterface {
    GENERATED_BODY()
};

class ICommandActionSummonSettingsCastLimitInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual bool ReachedCastLimit() const PURE_VIRTUAL(ReachedCastLimit, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual float GetRemainingCastValue() const PURE_VIRTUAL(GetRemainingCastValue, return 0.0f;);
    
    UFUNCTION(BlueprintCallable)
    virtual ECommandSummonLimitType GetCastLimitType() const PURE_VIRTUAL(GetCastLimitType, return ECommandSummonLimitType::None;);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnCastLimitReached(const FSummonComponentBPEvent OnCastLimitReached) PURE_VIRTUAL(BindOnCastLimitReached,);
    
    UFUNCTION(BlueprintCallable)
    virtual void BindOnCastLimitChanged(const FSummonComponentBPEvent OnCastLimitChanged) PURE_VIRTUAL(BindOnCastLimitChanged,);
    
};

