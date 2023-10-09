#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractableEventDelegate.h"
#include "EInteractableInputType.h"
#include "EInteractableFacingMode.h"
#include "Interactable.generated.h"

class APlayerController;
class UClearableComponent;

UCLASS(Abstract)
class ZENITH_API AInteractable : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInteractableEvent OnInteractDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FInteractableEvent OnMarkClearedDelegate;
    
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UClearableComponent* ClearableComponent;
    
private:
    UPROPERTY(EditAnywhere)
    EInteractableInputType InteractionInputType;
    
    UPROPERTY(EditAnywhere)
    EInteractableFacingMode FacingMode;
    
    UPROPERTY(EditAnywhere)
    FText InteractionText;
    
public:
    AInteractable();
    UFUNCTION(BlueprintCallable)
    bool TryMarkAsCleared();
    
    UFUNCTION(BlueprintCallable)
    void SetFacingMode(EInteractableFacingMode NewFacingMode);
    
private:
    UFUNCTION()
    void OnTargetRemoveState();
    
    UFUNCTION()
    void OnTargetAddState();
    
    UFUNCTION()
    void OnReleaseInteract();
    
    UFUNCTION()
    void OnPressInteract();
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool OnIsInteractable(APlayerController* Controller) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteractableAlreadyCleared();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInteract(APlayerController* Controller);
    
private:
    UFUNCTION()
    void OnInputOverrideChanged();
    
    UFUNCTION()
    void OnInputDeviceChanged();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDeactivateInteractable(APlayerController* Controller);
    
private:
    UFUNCTION()
    void OnClearedStatusChecked(bool bCleared);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnActivateInteractable(APlayerController* Controller);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInteractableActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInteractable(APlayerController* Controller) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText GetInteractionText() const;
    
protected:
    UFUNCTION(BlueprintPure)
    APlayerController* GetInteractingController() const;
    
    UFUNCTION(BlueprintPure)
    EInteractableInputType GetInteractableInputType() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateInteractable(APlayerController* Controller);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    bool CanBeMarkedAsCleared() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateInteractable(APlayerController* Controller);
    
};

