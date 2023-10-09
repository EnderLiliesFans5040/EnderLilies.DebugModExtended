#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitGameUnpausedOutputPinDelegate.h"
#include "WaitGameUnpausedAsyncAction.generated.h"

class UWaitGameUnpausedAsyncAction;
class UObject;

UCLASS()
class ZENITH_API UWaitGameUnpausedAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWaitGameUnpausedOutputPin OnGameUnpaused;
    
    UWaitGameUnpausedAsyncAction();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitGameUnpausedAsyncAction* WaitGameUnpaused(const UObject* WorldContextObject);
    
};

