#pragma once
#include "CoreMinimal.h"
#include "HomingEventDelegate.h"
#include "GameFramework/MovementComponent.h"
#include "ResettableComponentInterface.h"
#include "HomingComponent.generated.h"

class USceneComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UHomingComponent : public UMovementComponent, public IResettableComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float InitialSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float Acceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float InitialAngularSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AngularAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    float MaxAngularSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float AngularSpeedForStraightToTarget;
    
    UPROPERTY(EditDefaultsOnly)
    bool bRotationFollowVelocity;
    
    UPROPERTY(EditDefaultsOnly)
    float InitialForwardDeviation;
    
    UPROPERTY(EditDefaultsOnly)
    float AutoStopHomingDelay;
    
    UPROPERTY(EditDefaultsOnly)
    float RangeForTargetReach;
    
    UPROPERTY(BlueprintAssignable)
    FHomingEvent OnTargetReached;
    
public:
    UHomingComponent();
    UFUNCTION(BlueprintCallable)
    void SetTarget(USceneComponent* SceneComponent);
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetTarget() const;
    
    UFUNCTION(BlueprintPure)
    bool DidReachTarget() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

