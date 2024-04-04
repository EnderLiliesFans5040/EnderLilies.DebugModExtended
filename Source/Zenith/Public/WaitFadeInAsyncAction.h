#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitFadeInOutputPinDelegate.h"
#include "WaitFadeInAsyncAction.generated.h"

class UObject;
class UWaitFadeInAsyncAction;

UCLASS(Blueprintable)
class ZENITH_API UWaitFadeInAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitFadeInOutputPin OnFadedInFinished;
    
    UWaitFadeInAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitFadeInAsyncAction* WaitFadeIn(const UObject* WorldContextObject);
    
};

