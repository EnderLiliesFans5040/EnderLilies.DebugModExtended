#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitFadeInOutputPinDelegate.h"
#include "WaitFadeInAsyncAction.generated.h"

class UWaitFadeInAsyncAction;
class UObject;

UCLASS()
class ZENITH_API UWaitFadeInAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitFadeInOutputPin OnFadedInFinished;
    
    UWaitFadeInAsyncAction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitFadeInAsyncAction* WaitFadeIn(const UObject* WorldContextObject);
    
};

