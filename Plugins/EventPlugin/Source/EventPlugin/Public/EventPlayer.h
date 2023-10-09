#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/Object.h"
#include "EventPlayerEventDelegate.h"
#include "EventNode.h"
#include "ActorBindingInfos.h"
#include "UObject/NoExportTypes.h"
#include "EEventActorType.h"
#include "EventPlayer.generated.h"

class UEventAsset;
class AEventCamera;
class AActor;
class UEventBlackBoard;
class AController;
class UEventUserWidget;
class UExecuteEventActionAsync;
class APlayerController;
class UEventPlayer;

UCLASS(BlueprintType)
class EVENTPLUGIN_API UEventPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEventPlayerEvent OnStart;
    
    UPROPERTY(BlueprintAssignable)
    FEventPlayerEvent OnEventStep;
    
    UPROPERTY(BlueprintAssignable)
    FEventPlayerEvent OnFinish;
    
private:
    UPROPERTY(Transient)
    AActor* Owner;
    
    UPROPERTY(Transient)
    UEventAsset* EventAsset;
    
    UPROPERTY(Transient)
    UEventBlackBoard* EventBlackBoard;
    
    UPROPERTY(Transient)
    TSubclassOf<AController> EventControllerClass;
    
    UPROPERTY(Transient)
    TSubclassOf<UEventUserWidget> EventWidgetClass;
    
    UPROPERTY(Transient)
    TArray<AController*> UnusedEventControllers;
    
    UPROPERTY(Instanced, Transient)
    UEventUserWidget* EventWidgetInstance;
    
    UPROPERTY(Transient)
    AEventCamera* EventCamera;
    
    UPROPERTY()
    FEventNode CurrentNode;
    
    UPROPERTY()
    TArray<FEventNode> PlayerChoices;
    
    UPROPERTY(Transient)
    UExecuteEventActionAsync* CurrentAction;
    
    UPROPERTY(Transient)
    TArray<UExecuteEventActionAsync*> RunningActions;
    
public:
    UEventPlayer();
    UFUNCTION(BlueprintCallable)
    void SubmitReply(const FEventNode& Reply);
    
    UFUNCTION(BlueprintCallable)
    void SpawnActorBinding(FName BindingName, const FActorBindingInfos& ActorBindingInfos);
    
    UFUNCTION(BlueprintCallable)
    void SetEventSkippable();
    
    UFUNCTION(BlueprintCallable)
    void RemoveActorBinding(FName BindingName);
    
    UFUNCTION(BlueprintCallable)
    void Play(APlayerController* PlayerInstigator, AActor* EventInstigator, const TMap<FName, AActor*>& EventActorBindings);
    
private:
    UFUNCTION()
    void OnReceivedFinishActionFireAndForget(UExecuteEventActionAsync* EventActionAsync);
    
    UFUNCTION()
    void OnReceivedFinishAction(UExecuteEventActionAsync* EventActionAsync);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsWaitingForPlayer() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEventSkippable() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEventPausable() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FEventNode> GetPlayerChoices() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetPlayerActor() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetOriginTransform() const;
    
    UFUNCTION(BlueprintPure)
    APlayerController* GetInteractingPlayer() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetInstigator() const;
    
    UFUNCTION(BlueprintPure)
    UEventUserWidget* GetEventWidget() const;
    
    UFUNCTION(BlueprintPure)
    AEventCamera* GetEventCamera() const;
    
    UFUNCTION(BlueprintPure)
    UEventAsset* GetEventAsset() const;
    
    UFUNCTION(BlueprintPure)
    FEventNode GetCurrentNode() const;
    
    UFUNCTION(BlueprintPure)
    UEventBlackBoard* GetBlackBoard() const;
    
    UFUNCTION(BlueprintPure)
    FName GetBindingForActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetActorForBinding(FName Binding) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetActorForActorType(EEventActorType ActorType, const FName& Binding, bool bLogIfNotFound) const;
    
    UFUNCTION(BlueprintPure)
    TMap<FName, AActor*> GetActorBindings() const;
    
    UFUNCTION(BlueprintCallable)
    static UEventPlayer* CreateEventPlayer(AActor* NewOwner, UEventAsset* NewEventAsset, TSubclassOf<AController> ControllerClassToUse, TSubclassOf<UEventUserWidget> NewEventWidgetClass);
    
    UFUNCTION(BlueprintCallable)
    void Continue();
    
    UFUNCTION(BlueprintCallable)
    void AddOrReplaceActorBinding(FName BindingName, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void AddActorBinding(FName BindingName, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void Abort();
    
};

