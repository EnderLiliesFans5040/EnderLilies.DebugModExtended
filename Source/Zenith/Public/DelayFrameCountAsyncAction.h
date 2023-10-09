#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "DelayFrameCountOutputPinDelegate.h"
#include "DelayFrameCountAsyncAction.generated.h"

class UDelayFrameCountAsyncAction;
class UObject;

UCLASS()
class ZENITH_API UDelayFrameCountAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FDelayFrameCountOutputPin OnFinish;
    
    UDelayFrameCountAsyncAction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UDelayFrameCountAsyncAction* DelayFrameCount(const UObject* WorldContextObject, int32 DelayInFrames);
    
};

