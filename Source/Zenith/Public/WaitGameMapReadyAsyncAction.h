#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitGameMapOutputPinDelegate.h"
#include "WaitGameMapReadyAsyncAction.generated.h"

class UWaitGameMapReadyAsyncAction;
class UObject;

UCLASS()
class ZENITH_API UWaitGameMapReadyAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitGameMapOutputPin OnReady;
    
    UWaitGameMapReadyAsyncAction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitGameMapReadyAsyncAction* WaitGameMapReady(const UObject* WorldContextObject, bool bConsiderFadeAsLoading);
    
private:
    UFUNCTION()
    void OnGameMapReady();
    
    UFUNCTION()
    void CheckGameMapReady();
    
};

