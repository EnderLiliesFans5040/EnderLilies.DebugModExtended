#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ECommandInputTypes.h"
#include "StateEventDelegate.h"
#include "Templates/SubclassOf.h"
#include "TimedStateData.h"
#include "StateComponent.generated.h"

class UState;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> DefaultStates;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateEvent OnStateAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateEvent OnStateRemoved;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UState>> ActiveStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTimedStateData> TimeStates;
    
public:
    UStateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveStates(const TArray<TSubclassOf<UState>>& States);
    
    UFUNCTION(BlueprintCallable)
    void RemoveState(const TSubclassOf<UState> State);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllStates();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasState(const TSubclassOf<UState> State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyState(const TArray<TSubclassOf<UState>> States) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAllStates(const TArray<TSubclassOf<UState>> States) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseCommandInput(ECommandInputTypes CommandInput) const;
    
    UFUNCTION(BlueprintCallable)
    void AddStatesForDuration(const TArray<TSubclassOf<UState>>& States, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void AddStates(const TArray<TSubclassOf<UState>>& States);
    
    UFUNCTION(BlueprintCallable)
    void AddState(const TSubclassOf<UState> State);
    
};

