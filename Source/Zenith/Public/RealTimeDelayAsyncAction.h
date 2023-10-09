#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RealTimeDelayOutputPinDelegate.h"
#include "RealTimeDelayAsyncAction.generated.h"

class URealTimeDelayAsyncAction;
class UObject;

UCLASS()
class ZENITH_API URealTimeDelayAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRealTimeDelayOutputPin OnFinish;
    
    URealTimeDelayAsyncAction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URealTimeDelayAsyncAction* RealTimeDelay(const UObject* WorldContextObject, float DelayInSeconds);
    
};

