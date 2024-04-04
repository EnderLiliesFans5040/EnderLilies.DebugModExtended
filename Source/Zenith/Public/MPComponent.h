#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MPUpdateEventDelegate.h"
#include "MPComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UMPComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMPUpdateEvent OnMaxMPChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMPUpdateEvent OnMPChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMPUpdateEvent OnMPAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMPUpdateEvent OnMPSubtracted;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrMP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BonusMPAddPercentage;
    
public:
    UMPComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Subtract(int32 MPToSub);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxMP(int32 NewMaxMP);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxMP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrMPRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrMP() const;
    
    UFUNCTION(BlueprintCallable)
    void Add(int32 MPToAdd);
    
};

