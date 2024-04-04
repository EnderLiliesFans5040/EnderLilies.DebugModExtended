#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClearableEventDelegate.h"
#include "ClearableComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UClearableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClearableEvent OnClearedStatusChecked;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUnique;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckPreviousRuns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsUsedForMapCompletion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClearStatusChecked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCleared;
    
public:
    UClearableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnsetUniqueFlag();
    
    UFUNCTION(BlueprintCallable)
    void UnsetMapCompletionFlag();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGameMapReady();
    
    UFUNCTION(BlueprintCallable)
    void OnClearedObjectManagerReady();
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkCleared();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsedForMapCompletion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnique() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClearStatusChecked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCleared() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckPreviousRuns() const;
    
};

