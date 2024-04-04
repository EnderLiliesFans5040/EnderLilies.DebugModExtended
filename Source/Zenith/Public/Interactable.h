#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInteractableFacingMode.h"
#include "EInteractableInputType.h"
#include "InteractableEventDelegate.h"
#include "Interactable.generated.h"

class APlayerController;
class UClearableComponent;

UCLASS(Abstract, Blueprintable)
class ZENITH_API AInteractable : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableEvent OnInteractDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractableEvent OnMarkClearedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClearableComponent* ClearableComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractableInputType InteractionInputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractableFacingMode FacingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractionText;
    
public:
    AInteractable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryMarkAsCleared();
    
    UFUNCTION(BlueprintCallable)
    void SetFacingMode(EInteractableFacingMode NewFacingMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnTargetRemoveState();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetAddState();
    
    UFUNCTION(BlueprintCallable)
    void OnReleaseInteract();
    
    UFUNCTION(BlueprintCallable)
    void OnPressInteract();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnIsInteractable(APlayerController* Controller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractableAlreadyCleared();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteract(APlayerController* Controller);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnInputOverrideChanged();
    
    UFUNCTION(BlueprintCallable)
    void OnInputDeviceChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeactivateInteractable(APlayerController* Controller);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnClearedStatusChecked(bool bCleared);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActivateInteractable(APlayerController* Controller);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractableActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractable(APlayerController* Controller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetInteractionText() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APlayerController* GetInteractingController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInteractableInputType GetInteractableInputType() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateInteractable(APlayerController* Controller);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeMarkedAsCleared() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateInteractable(APlayerController* Controller);
    
};

