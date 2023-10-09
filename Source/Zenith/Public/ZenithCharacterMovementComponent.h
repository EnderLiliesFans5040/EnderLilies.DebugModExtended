#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EWalkMode.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ZenithCharacterMovementComponent.generated.h"

class AZenithCharacter;
class UStateComponent;
class ULocomotionComponent;
class ACustomPhysicsVolume;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UZenithCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bClampInWater;
    
    UPROPERTY(Transient)
    AZenithCharacter* ZenithCharacter;
    
    UPROPERTY(Instanced, Transient)
    UStateComponent* StateComponent;
    
    UPROPERTY(Instanced, Transient)
    ULocomotionComponent* LocomotionComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxRunSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDashSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DashAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ImmersionDepthForOutOfWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxZVelocityForStickingToWaterSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinImmersionDepthForStickingToWaterSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxImmersionDepthForStickingToWaterSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float HeightOffsetForStickingToWaterSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSlideAlongUnderwaterSurfaces;
    
    UZenithCharacterMovementComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TraceJump(const FVector Input, const FLinearColor Color, const float LifeTime) const;
    
    UFUNCTION(BlueprintCallable)
    void SetWalkMode(EWalkMode NewWalkMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomPhysicsVolume(ACustomPhysicsVolume* NewCustomPhysicsVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetClampedInCamera(bool bClamped);
    
    UFUNCTION(BlueprintCallable)
    void SetClampedInArea(bool bClamped);
    
    UFUNCTION(BlueprintCallable)
    void SetClampArea(const FVector& NewClampAreaMin, FVector NewClampAreaMax);
    
private:
    UFUNCTION()
    void OnStateRemoved();
    
    UFUNCTION()
    void OnStateAdded();
    
    UFUNCTION()
    void OnGameMapSwitch();
    
    UFUNCTION()
    void OnEventStop();
    
    UFUNCTION()
    void OnEventStart();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsClampedInCamera() const;
    
    UFUNCTION(BlueprintPure)
    bool IsClampedInArea() const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterImmersionDepth(bool bForceRecompute) const;
    
    UFUNCTION(BlueprintPure)
    EWalkMode GetWalkMode() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeSinceLastWallGrab() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeSinceLastGround() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastNonFallingLocation() const;
    
    UFUNCTION(BlueprintPure)
    bool GetJumpTimeForZTarget(float ZTarget, float& out_ResultA, float& out_ResultB) const;
    
    UFUNCTION(BlueprintPure)
    ACustomPhysicsVolume* GetCustomPhysicsVolume() const;
    
    UFUNCTION(BlueprintPure)
    FVector ComputeLaunchVelocityToDestination(const FVector& DestinationLocation, float Duration) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomPhysicsVolume();
    
    UFUNCTION(BlueprintPure)
    bool CanReachTargetByJump(FVector TargetLocation, bool bDrawDebug) const;
    
};

