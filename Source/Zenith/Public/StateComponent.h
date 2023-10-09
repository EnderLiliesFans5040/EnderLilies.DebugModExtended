#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "StateEventDelegate.h"
#include "TimedStateData.h"
#include "ECommandInputTypes.h"
#include "StateComponent.generated.h"

class UState;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UState>> DefaultStates;
    
    UPROPERTY(BlueprintAssignable)
    FStateEvent OnStateAdded;
    
    UPROPERTY(BlueprintAssignable)
    FStateEvent OnStateRemoved;
    
private:
    UPROPERTY(VisibleAnywhere)
    TArray<TSubclassOf<UState>> ActiveStates;
    
    UPROPERTY()
    TArray<FTimedStateData> TimeStates;
    
public:
    UStateComponent();
    UFUNCTION(BlueprintCallable)
    void RemoveStates(const TArray<TSubclassOf<UState>>& States);
    
    UFUNCTION(BlueprintCallable)
    void RemoveState(const TSubclassOf<UState> State);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllStates();
    
    UFUNCTION(BlueprintPure)
    bool HasState(const TSubclassOf<UState> State) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyState(const TArray<TSubclassOf<UState>> States) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAllStates(const TArray<TSubclassOf<UState>> States) const;
    
    UFUNCTION(BlueprintPure)
    bool CanUseCommandInput(ECommandInputTypes CommandInput) const;
    
    UFUNCTION(BlueprintCallable)
    void AddStatesForDuration(const TArray<TSubclassOf<UState>>& States, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void AddStates(const TArray<TSubclassOf<UState>>& States);
    
    UFUNCTION(BlueprintCallable)
    void AddState(const TSubclassOf<UState> State);
    
};

