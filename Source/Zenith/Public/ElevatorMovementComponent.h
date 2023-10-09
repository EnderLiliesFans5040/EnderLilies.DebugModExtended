#pragma once
#include "CoreMinimal.h"
#include "GameFramework/MovementComponent.h"
#include "ElevatorMovementEventDelegate.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "ElevatorMovementComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UElevatorMovementComponent : public UMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FElevatorMovementEvent OnStartedMovement;
    
    UPROPERTY(BlueprintAssignable)
    FElevatorMovementEvent OnFinishedMovement;
    
private:
    UPROPERTY(EditDefaultsOnly)
    FComponentReference ElevatorComponentRef;
    
    UPROPERTY(EditDefaultsOnly)
    FComponentReference DestinationComponentRef;
    
    UPROPERTY(EditAnywhere)
    float Speed;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve MovementCurve;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSweep;
    
    UPROPERTY(EditDefaultsOnly)
    ETeleportType TeleportType;
    
public:
    UElevatorMovementComponent();
    UFUNCTION(BlueprintCallable)
    void TeleportToOrigin();
    
    UFUNCTION(BlueprintCallable)
    void TeleportToDestination();
    
    UFUNCTION(BlueprintCallable)
    void SetSpeedFactor(float NewSpeedFactor);
    
    UFUNCTION(BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDirectionSetToDestination() const;
    
    UFUNCTION(BlueprintCallable)
    void GoToOrigin();
    
    UFUNCTION(BlueprintCallable)
    void GoToDestination();
    
    UFUNCTION(BlueprintPure)
    float GetSpeedFactor() const;
    
};

