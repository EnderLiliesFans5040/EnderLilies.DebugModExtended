#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "WaitUMGNavigationOutputPinDelegate.h"
#include "WaitUMGNavigationAsyncAction.generated.h"

class UObject;
class UWaitUMGNavigationAsyncAction;

UCLASS(Blueprintable)
class ZENITH_API UWaitUMGNavigationAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWaitUMGNavigationOutputPin OnNavigationEnabled;
    
    UWaitUMGNavigationAsyncAction();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UWaitUMGNavigationAsyncAction* WaitUMGNavigation(const UObject* WorldContextObject);
    
};

