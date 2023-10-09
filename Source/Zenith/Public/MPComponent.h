#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MPUpdateEventDelegate.h"
#include "MPComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UMPComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMPUpdateEvent OnMaxMPChanged;
    
    UPROPERTY(BlueprintAssignable)
    FMPUpdateEvent OnMPChanged;
    
    UPROPERTY(BlueprintAssignable)
    FMPUpdateEvent OnMPAdded;
    
    UPROPERTY(BlueprintAssignable)
    FMPUpdateEvent OnMPSubtracted;
    
private:
    UPROPERTY(EditDefaultsOnly)
    int32 MaxMP;
    
    UPROPERTY(Transient, VisibleAnywhere)
    int32 CurrMP;
    
    UPROPERTY(EditDefaultsOnly)
    float BonusMPAddPercentage;
    
public:
    UMPComponent();
    UFUNCTION(BlueprintCallable)
    void Subtract(int32 MPToSub);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxMP(int32 NewMaxMP);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintPure)
    int32 GetMaxMP() const;
    
    UFUNCTION(BlueprintPure)
    float GetCurrMPRatio() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetCurrMP() const;
    
    UFUNCTION(BlueprintCallable)
    void Add(int32 MPToAdd);
    
};

