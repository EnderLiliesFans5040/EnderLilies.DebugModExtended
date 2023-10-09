#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "TutorialHookOutputPinDelegate.h"
#include "ETutorialHook.h"
#include "ExecuteTutorialHookAsyncAction.generated.h"

class UExecuteTutorialHookAsyncAction;
class UObject;
class AZenithPlayerController;

UCLASS()
class ZENITH_API UExecuteTutorialHookAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTutorialHookOutputPin OnFinish;
    
    UExecuteTutorialHookAsyncAction();
private:
    UFUNCTION()
    void Finish();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UExecuteTutorialHookAsyncAction* ExecuteTutorialHook(const UObject* WorldContextObject, AZenithPlayerController* PlayerController, ETutorialHook TutorialHook);
    
};

