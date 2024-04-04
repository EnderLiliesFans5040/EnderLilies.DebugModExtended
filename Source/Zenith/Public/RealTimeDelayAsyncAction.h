#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "RealTimeDelayOutputPinDelegate.h"
#include "RealTimeDelayAsyncAction.generated.h"

class UObject;
class URealTimeDelayAsyncAction;

UCLASS(Blueprintable)
class ZENITH_API URealTimeDelayAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRealTimeDelayOutputPin OnFinish;
    
    URealTimeDelayAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static URealTimeDelayAsyncAction* RealTimeDelay(const UObject* WorldContextObject, float DelayInSeconds);
    
};

