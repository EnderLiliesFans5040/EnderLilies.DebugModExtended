#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EDirectionInputTypes.h"
#include "EWalkMode.h"
#include "InputSnapshot.h"
#include "LocomotionEventDelegate.h"
#include "LocomotionComponent.generated.h"

class AActor;
class APawn;
class UStateComponent;
class UZenithCharacterMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API ULocomotionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocomotionEvent OnFacingChange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* PawnOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UZenithCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRootMotionLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinXInputForMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinInputForRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWalkMode ForcedWalkMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetRotationFromFacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCheapMove;
    
public:
    ULocomotionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasFacingRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool UseRootMotionLocomotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFacingRight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDiving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetXYVelocityRatio() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInputVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanApplyMove() const;
    
};

