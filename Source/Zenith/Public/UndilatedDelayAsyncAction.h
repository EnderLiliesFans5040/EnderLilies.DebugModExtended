#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UndilatedDelayOutputPinDelegate.h"
#include "UndilatedDelayAsyncAction.generated.h"

class UObject;
class UUndilatedDelayAsyncAction;

UCLASS()
class ZENITH_API UUndilatedDelayAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUndilatedDelayOutputPin OnFinish;
    
    UUndilatedDelayAsyncAction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUndilatedDelayAsyncAction* UndilatedDelay(const UObject* WorldContextObject, float DelayInSeconds);
    
private:
    UFUNCTION()
    void Tick();
    
};

