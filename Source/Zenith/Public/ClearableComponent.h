#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClearableEventDelegate.h"
#include "ClearableComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UClearableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FClearableEvent OnClearedStatusChecked;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool bIsUnique;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCheckPreviousRuns;
    
    UPROPERTY(EditDefaultsOnly)
    bool bIsUsedForMapCompletion;
    
    UPROPERTY(VisibleAnywhere)
    bool bClearStatusChecked;
    
    UPROPERTY(VisibleAnywhere)
    bool bCleared;
    
public:
    UClearableComponent();
    UFUNCTION(BlueprintCallable)
    void UnsetUniqueFlag();
    
    UFUNCTION(BlueprintCallable)
    void UnsetMapCompletionFlag();
    
private:
    UFUNCTION()
    void OnGameMapReady();
    
    UFUNCTION()
    void OnClearedObjectManagerReady();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkCleared();
    
    UFUNCTION(BlueprintPure)
    bool IsUsedForMapCompletion() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUnique() const;
    
    UFUNCTION(BlueprintPure)
    bool IsClearStatusChecked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCleared() const;
    
    UFUNCTION(BlueprintPure)
    bool CheckPreviousRuns() const;
    
};

