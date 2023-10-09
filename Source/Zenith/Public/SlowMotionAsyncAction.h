#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SlowMotionOutputPinDelegate.h"
#include "SlowMotionAsyncAction.generated.h"

class USlowMotionAsyncAction;
class AZenithPlayerController;

UCLASS()
class ZENITH_API USlowMotionAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSlowMotionOutputPin OnFinish;
    
    USlowMotionAsyncAction();
private:
    UFUNCTION()
    void Tick();
    
public:
    UFUNCTION(BlueprintCallable)
    static USlowMotionAsyncAction* SlowMotion(AZenithPlayerController* PlayerController, float TimeDilationTarget, float SlowMotionDurationInSec, float BlendInDuration, float BlendOutDuration);
    
};

