#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitGameMapOutputPinDelegate.h"
#include "WaitGameMapReadyAsyncAction.generated.h"

class UObject;
class UWaitGameMapReadyAsyncAction;

UCLASS(Blueprintable)
class ZENITH_API UWaitGameMapReadyAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameMapOutputPin OnReady;
    
    UWaitGameMapReadyAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitGameMapReadyAsyncAction* WaitGameMapReady(const UObject* WorldContextObject, bool bConsiderFadeAsLoading);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameMapReady();
    
    UFUNCTION(BlueprintCallable)
    void CheckGameMapReady();
    
};

