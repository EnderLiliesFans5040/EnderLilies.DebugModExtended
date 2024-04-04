#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "UndilatedDelayOutputPinDelegate.h"
#include "UndilatedDelayAsyncAction.generated.h"

class UObject;
class UUndilatedDelayAsyncAction;

UCLASS(Blueprintable)
class ZENITH_API UUndilatedDelayAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUndilatedDelayOutputPin OnFinish;
    
    UUndilatedDelayAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUndilatedDelayAsyncAction* UndilatedDelay(const UObject* WorldContextObject, float DelayInSeconds);
    
private:
    UFUNCTION(BlueprintCallable)
    void Tick();
    
};

