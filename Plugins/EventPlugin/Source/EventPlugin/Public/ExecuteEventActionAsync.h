#pragma once
#include "CoreMinimal.h"
#include "EventActionEventDelegate.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EventNode.h"
#include "ExecuteEventActionAsync.generated.h"

class UEventBlackBoard;
class UEventAction;
class UEventPlayer;
class AActor;
class APlayerController;
class UExecuteEventActionAsync;
class UObject;

UCLASS()
class EVENTPLUGIN_API UExecuteEventActionAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UEventAction* EventAction;
    
    UPROPERTY(Transient)
    UEventPlayer* EventPlayer;
    
    UPROPERTY(Transient)
    APlayerController* InteractingPlayer;
    
    UPROPERTY(Transient)
    AActor* Subject;
    
    UPROPERTY(Transient)
    AActor* Target;
    
    UPROPERTY(Transient)
    UEventBlackBoard* EventBlackBoard;
    
public:
    UPROPERTY(BlueprintAssignable)
    FEventActionEvent OnStart;
    
    UPROPERTY(BlueprintAssignable)
    FEventActionEvent OnFinish;
    
    UExecuteEventActionAsync();
private:
    UFUNCTION()
    void Update();
    
    UFUNCTION()
    void Finish();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UExecuteEventActionAsync* ExecuteEventActionAsync(UObject* WorldContextObject, UEventPlayer* InEventPlayer, const FEventNode& EventNode, UEventAction* EventActionToExecute);
    
};

