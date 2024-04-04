#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ETutorialHook.h"
#include "TutorialHookOutputPinDelegate.h"
#include "ExecuteTutorialHookAsyncAction.generated.h"

class AZenithPlayerController;
class UExecuteTutorialHookAsyncAction;
class UObject;

UCLASS(Blueprintable)
class ZENITH_API UExecuteTutorialHookAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTutorialHookOutputPin OnFinish;
    
    UExecuteTutorialHookAsyncAction();

private:
    UFUNCTION(BlueprintCallable)
    void Finish();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UExecuteTutorialHookAsyncAction* ExecuteTutorialHook(const UObject* WorldContextObject, AZenithPlayerController* PlayerController, ETutorialHook TutorialHook);
    
};

