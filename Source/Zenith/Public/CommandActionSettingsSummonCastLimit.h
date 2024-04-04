#pragma once
#include "CoreMinimal.h"
#include "ECommandSummonLimitType.h"
#include "SummonComponentEventDelegate.h"
#include "CommandActionSettingsSummonCastLimit.generated.h"

USTRUCT(BlueprintType)
struct ZENITH_API FCommandActionSettingsSummonCastLimit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSummonComponentEvent OnCastLimitChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSummonComponentEvent OnCastLimitReachedDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECommandSummonLimitType CastLimitType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCastCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAttackCount;
    
public:
    FCommandActionSettingsSummonCastLimit();
};

