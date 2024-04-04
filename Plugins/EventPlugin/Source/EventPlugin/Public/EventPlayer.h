#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "ActorBindingInfos.h"
#include "EEventActorType.h"
#include "EventNode.h"
#include "EventPlayerEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "EventPlayer.generated.h"

class AActor;
class AController;
class AEventCamera;
class APlayerController;
class UEventAsset;
class UEventBlackBoard;
class UEventPlayer;
class UEventUserWidget;
class UExecuteEventActionAsync;

UCLASS(Blueprintable)
class EVENTPLUGIN_API UEventPlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventPlayerEvent OnStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventPlayerEvent OnEventStep;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventPlayerEvent OnFinish;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventAsset* EventAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEventBlackBoard* EventBlackBoard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<AController> EventControllerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEventUserWidget> EventWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AController*> UnusedEventControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEventUserWidget* EventWidgetInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AEventCamera* EventCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEventNode CurrentNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEventNode> PlayerChoices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UExecuteEventActionAsync* CurrentAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable)
    void OnReceivedFinishActionFireAndForget(UExecuteEventActionAsync* EventActionAsync);
    
    UFUNCTION(BlueprintCallable)
    void OnReceivedFinishAction(UExecuteEventActionAsync* EventActionAsync);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventSkippable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventPausable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FEventNode> GetPlayerChoices() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetPlayerActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetOriginTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetInteractingPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetInstigator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEventUserWidget* GetEventWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AEventCamera* GetEventCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEventAsset* GetEventAsset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FEventNode GetCurrentNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEventBlackBoard* GetBlackBoard() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBindingForActor(AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorForBinding(FName Binding) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetActorForActorType(EEventActorType ActorType, const FName& Binding, bool bLogIfNotFound) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

