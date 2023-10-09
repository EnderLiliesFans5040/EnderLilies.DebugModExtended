#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitGameDataOutputPinDelegate.h"
#include "WaitGameDataReadyAsyncAction.generated.h"

class UWaitGameDataReadyAsyncAction;
class UObject;

UCLASS()
class ZENITH_API UWaitGameDataReadyAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitGameDataOutputPin OnLoaded;
    
    UWaitGameDataReadyAsyncAction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitGameDataReadyAsyncAction* WaitGameDataReady(const UObject* WorldContextObject);
    
private:
    UFUNCTION()
    void Tick();
    
};

