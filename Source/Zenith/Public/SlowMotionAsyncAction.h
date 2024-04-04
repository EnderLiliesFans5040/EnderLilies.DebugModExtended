#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SlowMotionOutputPinDelegate.h"
#include "SlowMotionAsyncAction.generated.h"

class AZenithPlayerController;
class USlowMotionAsyncAction;

UCLASS(Blueprintable)
class ZENITH_API USlowMotionAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlowMotionOutputPin OnFinish;
    
    USlowMotionAsyncAction();

private:
    UFUNCTION(BlueprintCallable)
    void Tick();
    
public:
    UFUNCTION(BlueprintCallable)
    static USlowMotionAsyncAction* SlowMotion(AZenithPlayerController* PlayerController, float TimeDilationTarget, float SlowMotionDurationInSec, float BlendInDuration, float BlendOutDuration);
    
};

