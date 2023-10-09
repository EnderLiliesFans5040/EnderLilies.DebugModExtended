#pragma once
#include "CoreMinimal.h"
#include "SummonComponentEventDelegate.h"
#include "ECommandSummonLimitType.h"
#include "CommandActionSettingsSummonCastLimit.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FCommandActionSettingsSummonCastLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite)
    FSummonComponentEvent OnCastLimitChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FSummonComponentEvent OnCastLimitReachedDelegate;
    
private:
    UPROPERTY(EditDefaultsOnly)
    ECommandSummonLimitType CastLimitType;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxCastCount;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxTime;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxAttackCount;
    
public:
    FCommandActionSettingsSummonCastLimit();
};

