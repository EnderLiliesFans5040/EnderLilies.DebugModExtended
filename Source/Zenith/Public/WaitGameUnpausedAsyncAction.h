#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitGameUnpausedOutputPinDelegate.h"
#include "WaitGameUnpausedAsyncAction.generated.h"

class UObject;
class UWaitGameUnpausedAsyncAction;

UCLASS(Blueprintable)
class ZENITH_API UWaitGameUnpausedAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitGameUnpausedOutputPin OnGameUnpaused;
    
    UWaitGameUnpausedAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitGameUnpausedAsyncAction* WaitGameUnpaused(const UObject* WorldContextObject);
    
};

