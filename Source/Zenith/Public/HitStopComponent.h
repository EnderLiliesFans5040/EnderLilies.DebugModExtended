#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Components/ActorComponent.h"
#include "HitStopEventDelegate.h"
#include "HitStopComponent.generated.h"

class USpineSkeletonAnimationComponent;
class UState;
class UStateComponent;
class UMovementComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UHitStopComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float HitStopFactor;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UState>> AdditionalHitStopStates;
    
    UPROPERTY(Instanced, Transient)
    USpineSkeletonAnimationComponent* SpineAnimComponent;
    
    UPROPERTY(Instanced, Transient)
    UStateComponent* StateComponent;
    
    UPROPERTY(Instanced, Transient)
    UMovementComponent* MovementComponent;
    
public:
    UPROPERTY(BlueprintAssignable)
    FHitStopEvent OnHitStopStart;
    
    UPROPERTY(BlueprintAssignable)
    FHitStopEvent OnHitStopEnd;
    
    UHitStopComponent();
    UFUNCTION(BlueprintCallable)
    void LaunchHitStop(float HitStopDuration);
    
    UFUNCTION(BlueprintPure)
    bool IsInHitStop() const;
    
    UFUNCTION(BlueprintPure)
    float GetHitStopFactor() const;
    
};

