#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitGameDataOutputPinDelegate.h"
#include "WaitGameDataReadyAsyncAction.generated.h"

class UObject;
class UWaitGameDataReadyAsyncAction;

UCLASS(Blueprintable)
class ZENITH_API UWaitGameDataReadyAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameDataOutputPin OnLoaded;
    
    UWaitGameDataReadyAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitGameDataReadyAsyncAction* WaitGameDataReady(const UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void Tick();
    
};

