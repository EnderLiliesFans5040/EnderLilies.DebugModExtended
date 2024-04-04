#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EventActionEventDelegate.h"
#include "EventNode.h"
#include "ExecuteEventActionAsync.generated.h"

class AActor;
class APlayerController;
class UEventAction;
class UEventBlackBoard;
class UEventPlayer;
class UExecuteEventActionAsync;
class UObject;

UCLASS(Blueprintable)
class EVENTPLUGIN_API UExecuteEventActionAsync : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventAction* EventAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventPlayer* EventPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* InteractingPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Subject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventBlackBoard* EventBlackBoard;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventActionEvent OnStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventActionEvent OnFinish;
    
    UExecuteEventActionAsync();

private:
    UFUNCTION(BlueprintCallable)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UExecuteEventActionAsync* ExecuteEventActionAsync(UObject* WorldContextObject, UEventPlayer* InEventPlayer, const FEventNode& EventNode, UEventAction* EventActionToExecute);
    
};

