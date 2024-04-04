#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "EWalkMode.h"
#include "ZenithCharacterMovementComponent.generated.h"

class ACustomPhysicsVolume;
class AZenithCharacter;
class ULocomotionComponent;
class UStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UZenithCharacterMovementComponent : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bClampInWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AZenithCharacter* ZenithCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULocomotionComponent* LocomotionComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRunSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDashSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DashAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImmersionDepthForOutOfWater;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxZVelocityForStickingToWaterSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinImmersionDepthForStickingToWaterSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxImmersionDepthForStickingToWaterSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightOffsetForStickingToWaterSurface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlideAlongUnderwaterSurfaces;
    
    UZenithCharacterMovementComponent(const FObjectInitializer& ObjectInitializer);

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
    UFUNCTION(BlueprintCallable)
    void OnStateRemoved();
    
    UFUNCTION(BlueprintCallable)
    void OnStateAdded();
    
    UFUNCTION(BlueprintCallable)
    void OnGameMapSwitch();
    
    UFUNCTION(BlueprintCallable)
    void OnEventStop();
    
    UFUNCTION(BlueprintCallable)
    void OnEventStart();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClampedInCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClampedInArea() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWaterImmersionDepth(bool bForceRecompute) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWalkMode GetWalkMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastWallGrab() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceLastGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastNonFallingLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetJumpTimeForZTarget(float ZTarget, float& out_ResultA, float& out_ResultB) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACustomPhysicsVolume* GetCustomPhysicsVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ComputeLaunchVelocityToDestination(const FVector& DestinationLocation, float Duration) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomPhysicsVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanReachTargetByJump(FVector TargetLocation, bool bDrawDebug) const;
    
};

