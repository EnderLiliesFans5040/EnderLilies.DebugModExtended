#pragma once
#include "CoreMinimal.h"
#include "SpineAnimationDefinition.h"
#include "Components/ActorComponent.h"
#include "SpineTransitionDefinition.h"
#include "SpineAnimationEventDelegate.h"
#include "SpineAnimDamageSetDefinition.h"
#include "EDamageAdditiveType.h"
#include "UObject/NoExportTypes.h"
#include "ESpineAnimationLayer.h"
#include "SpineAnimationDelegateDelegate.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "SpineAnimationComponent.generated.h"

class USpineSkeletonAnimationComponent;
class USpineSkeletonRendererComponent;
class ACharacter;
class AZenithCharacter;
class UZenithCharacterMovementComponent;
class ULocomotionComponent;
class UZenithInputComponent;
class UStateComponent;
class USpineAnimationRuntimeData;
class UTrackEntry;
class USpineSkeletonComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API USpineAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FSpineAnimationDefinition TurnSlowDefinition;
    
    UPROPERTY(EditDefaultsOnly)
    FSpineAnimationDefinition TurnFastDefinition;
    
    UPROPERTY(EditDefaultsOnly)
    FSpineAnimationDefinition FlyTurnDefinition;
    
    UPROPERTY(EditDefaultsOnly)
    FSpineAnimationDefinition SwimTurnDefinition;
    
    UPROPERTY(EditDefaultsOnly)
    FSpineAnimationDefinition DiveTurnDefinition;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSpineTransitionDefinition> TransitionDefinitions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSpineAnimDamageSetDefinition> DamageGroundDefinitions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSpineAnimDamageSetDefinition> DamageAirDefinitions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSpineAnimDamageSetDefinition> DamageSwimDefinitions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSpineAnimationDefinition> LandKnockbackDefinitions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSpineAnimationDefinition> SwimLandKnockbackDefinitions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSpineAnimationDefinition> WakeUpDefinitions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSpineAnimationDefinition> SwimWakeUpDefinitions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSpineAnimationDefinition> DeathDefinitions;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FSpineAnimationDefinition> DeathBackSideDefinitions;
    
    UPROPERTY(BlueprintAssignable)
    FSpineAnimationEvent OnWakeUpEnd;
    
    UPROPERTY(BlueprintAssignable)
    FSpineAnimationEvent OnWakeUpComplete;
    
    UPROPERTY(BlueprintAssignable)
    FSpineAnimationEvent OnDeathEnd;
    
    UPROPERTY(BlueprintAssignable)
    FSpineAnimationEvent OnDeathComplete;
    
    UPROPERTY(BlueprintAssignable)
    FSpineAnimationEvent OnSprintStart;
    
    UPROPERTY(BlueprintAssignable)
    FSpineAnimationEvent OnSprintEnd;
    
private:
    UPROPERTY(EditDefaultsOnly)
    bool bUpdateAnimationsInTick;
    
    UPROPERTY(EditDefaultsOnly)
    bool bForceUseGroundedLocomotion;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCheckTurnTransitionsInTick;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSetEmptyIfNoAnim;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAllowVerticalLocomotionAnimation;
    
    UPROPERTY(EditDefaultsOnly)
    bool bApplyRootMotionLocomotion;
    
    UPROPERTY(EditDefaultsOnly)
    bool bRootMotionLocomotionIdleOnly;
    
    UPROPERTY(EditDefaultsOnly)
    float RootMotionFactor;
    
    UPROPERTY(EditDefaultsOnly)
    bool bSyncLocomotionTimings;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAutoStopEventAnimations;
    
    UPROPERTY(EditDefaultsOnly)
    EDamageAdditiveType DamageAdditiveType;
    
    UPROPERTY(Instanced, Transient)
    USpineSkeletonAnimationComponent* AnimComponent;
    
    UPROPERTY(Instanced, Transient)
    USpineSkeletonRendererComponent* RendererComponent;
    
    UPROPERTY(Transient)
    ACharacter* Character;
    
    UPROPERTY(Transient)
    AZenithCharacter* ZenithCharacter;
    
    UPROPERTY(Instanced, Transient)
    UZenithCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(Instanced, Transient)
    ULocomotionComponent* LocomotionComponent;
    
    UPROPERTY(Instanced, Transient)
    UStateComponent* StateComponent;
    
    UPROPERTY(Instanced, Transient)
    UZenithInputComponent* InputComponent;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<USpineAnimationRuntimeData*> AnimationDataLayers;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<USpineAnimationRuntimeData*> PastAnimationDataLayers;
    
    UPROPERTY(Transient)
    TArray<USpineAnimationRuntimeData*> AvailableAnimDataPool;
    
    UPROPERTY(Transient)
    TArray<USpineAnimationRuntimeData*> InUseAnimDataPool;
    
public:
    USpineAnimationComponent();
private:
    UFUNCTION()
    void WakeUpEnd();
    
    UFUNCTION()
    void WakeUpComplete();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopDamage(bool bPlayRecovery);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimation(ESpineAnimationLayer Layer, bool bOverrideBlend, float Blend);
    
    UFUNCTION(BlueprintCallable)
    void StopAllAnimations();
    
    UFUNCTION(BlueprintCallable)
    void StopActionAnimation(bool bOverrideBlend, float Blend);
    
    UFUNCTION(BlueprintCallable)
    void RequestRefreshPlayingAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayWakeUp();
    
    UFUNCTION(BlueprintCallable)
    void PlayLaunchKnockback();
    
    UFUNCTION(BlueprintCallable)
    void PlayKnockbackLanding();
    
    UFUNCTION(BlueprintCallable)
    void PlayDeathBackSide();
    
    UFUNCTION(BlueprintCallable)
    void PlayDeath();
    
    UFUNCTION(BlueprintCallable)
    void PlayDamage(bool bForceRestart);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationWithEvents(const FString& AnimName, ESpineAnimationLayer Layer, FSpineAnimationDelegate OnAnimEnd, FSpineAnimationDelegate OnAnimComplete, bool bLoop, float StartTime, float BlendIn, bool bUseRootMotion);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimations(TArray<FSpineAnimationDefinition> Animations, ESpineAnimationLayer Layer);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationDefinition(FSpineAnimationDefinition AnimationDefinition, ESpineAnimationLayer Layer);
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimation(const FString& AnimName, ESpineAnimationLayer Layer, bool bLoop, float StartTime, float BlendIn, bool bUseRootMotion);
    
    UFUNCTION(BlueprintCallable)
    void PlayAdditiveDamage(float Time);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionAnimation(const FString& AnimName, bool bLoop, float StartTime, float BlendIn, bool bUseRootMotion);
    
private:
    UFUNCTION()
    void OnTrackStarted(UTrackEntry* TrackEntry);
    
    UFUNCTION()
    void OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION()
    void OnLanded(FHitResult HitResult);
    
    UFUNCTION()
    void OnGameMapSwitch();
    
    UFUNCTION()
    void OnEventStop();
    
    UFUNCTION()
    void OnAnimationComplete(UTrackEntry* TrackEntry);
    
    UFUNCTION()
    void OnAfterBoneTransformUpdate(USpineSkeletonComponent* SpineSkeletonComponent);
    
    UFUNCTION()
    void OnAdditiveDamageTimerEnd();
    
    UFUNCTION()
    void KnockbackLandingEnd();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsReactionLayerActive(bool bConsiderLoopAsActive) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingSpecificAnimation(const FString& AnimName) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingAnimationAtLayer(ESpineAnimationLayer Layer) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingActionAnimation() const;
    
    UFUNCTION(BlueprintPure)
    bool IsKnockbackLocked() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetLastRootMotionMove() const;
    
    UFUNCTION(BlueprintPure)
    ESpineAnimationLayer GetHighestActiveLayer() const;
    
    UFUNCTION(BlueprintPure)
    FString GetCurrentAnimationName() const;
    
private:
    UFUNCTION()
    void DeathEnd();
    
    UFUNCTION()
    void DeathComplete();
    
};

