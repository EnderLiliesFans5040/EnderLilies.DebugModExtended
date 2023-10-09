#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LocomotionEventDelegate.h"
#include "InputSnapshot.h"
#include "UObject/NoExportTypes.h"
#include "EWalkMode.h"
#include "EDirectionInputTypes.h"
#include "LocomotionComponent.generated.h"

class APawn;
class AActor;
class UStateComponent;
class UZenithCharacterMovementComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API ULocomotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLocomotionEvent OnFacingChange;
    
private:
    UPROPERTY(Transient)
    AActor* Owner;
    
    UPROPERTY(Transient)
    APawn* PawnOwner;
    
    UPROPERTY(Instanced, Transient)
    UStateComponent* StateComponent;
    
    UPROPERTY(Instanced, Transient)
    UZenithCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseRootMotionLocomotion;
    
    UPROPERTY(EditDefaultsOnly)
    float MinXInputForMovement;
    
    UPROPERTY(EditDefaultsOnly)
    float MinInputForRun;
    
    UPROPERTY(EditDefaultsOnly)
    EWalkMode ForcedWalkMode;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSetRotationFromFacing;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseCheapMove;
    
public:
    ULocomotionComponent();
    UFUNCTION(BlueprintPure)
    bool WasFacingRight() const;
    
    UFUNCTION(BlueprintPure)
    bool UseRootMotionLocomotion() const;
    
    UFUNCTION(BlueprintPure)
    bool UseCheapMove() const;
    
    UFUNCTION(BlueprintCallable)
    void ToggleFacing();
    
    UFUNCTION(BlueprintCallable)
    void SetForcedWalkMode(EWalkMode NewForcedWalkMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFacingFromInputSnapshot(const FInputSnapshot& InputSnapshot);
    
    UFUNCTION(BlueprintCallable)
    void SetFacingFromDirectionInputType(const EDirectionInputTypes& DirectionInputType);
    
    UFUNCTION(BlueprintCallable)
    void SetFacing(bool bFacingRight);
    
    UFUNCTION(BlueprintCallable)
    void Sample(float DeltaTime, const FInputSnapshot& InputSnapshot, bool bApplyInputVector);
    
    UFUNCTION(BlueprintPure)
    bool IsFacingRight() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDiving() const;
    
    UFUNCTION(BlueprintPure)
    float GetXYVelocityRatio() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetInputVector() const;
    
    UFUNCTION(BlueprintPure)
    bool CanApplyMove() const;
    
};

