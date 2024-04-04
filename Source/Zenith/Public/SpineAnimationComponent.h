#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EDamageAdditiveType.h"
#include "ESpineAnimationLayer.h"
#include "SpineAnimDamageSetDefinition.h"
#include "SpineAnimationDefinition.h"
#include "SpineAnimationDelegateDelegate.h"
#include "SpineAnimationEventDelegate.h"
#include "SpineTransitionDefinition.h"
#include "SpineAnimationComponent.generated.h"

class ACharacter;
class AZenithCharacter;
class ULocomotionComponent;
class USpineAnimationRuntimeData;
class USpineSkeletonAnimationComponent;
class USpineSkeletonComponent;
class USpineSkeletonRendererComponent;
class UStateComponent;
class UTrackEntry;
class UZenithCharacterMovementComponent;
class UZenithInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API USpineAnimationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDefinition TurnSlowDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDefinition TurnFastDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDefinition FlyTurnDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDefinition SwimTurnDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationDefinition DiveTurnDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineTransitionDefinition> TransitionDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimDamageSetDefinition> DamageGroundDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimDamageSetDefinition> DamageAirDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimDamageSetDefinition> DamageSwimDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> LandKnockbackDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> SwimLandKnockbackDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> WakeUpDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> SwimWakeUpDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> DeathDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSpineAnimationDefinition> DeathBackSideDefinitions;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationEvent OnWakeUpEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationEvent OnWakeUpComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationEvent OnDeathEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationEvent OnDeathComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationEvent OnSprintStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpineAnimationEvent OnSprintEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateAnimationsInTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceUseGroundedLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckTurnTransitionsInTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetEmptyIfNoAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowVerticalLocomotionAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyRootMotionLocomotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRootMotionLocomotionIdleOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootMotionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncLocomotionTimings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStopEventAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDamageAdditiveType DamageAdditiveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonAnimationComponent* AnimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineSkeletonRendererComponent* RendererComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AZenithCharacter* ZenithCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UZenithCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    ULocomotionComponent* LocomotionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UZenithInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USpineAnimationRuntimeData*> AnimationDataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USpineAnimationRuntimeData*> PastAnimationDataLayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USpineAnimationRuntimeData*> AvailableAnimDataPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USpineAnimationRuntimeData*> InUseAnimDataPool;
    
public:
    USpineAnimationComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable)
    void WakeUpEnd();
    
    UFUNCTION(BlueprintCallable)
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
    UFUNCTION(BlueprintCallable)
    void OnTrackStarted(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void OnLanded(FHitResult HitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnGameMapSwitch();
    
    UFUNCTION(BlueprintCallable)
    void OnEventStop();
    
    UFUNCTION(BlueprintCallable)
    void OnAnimationComplete(UTrackEntry* TrackEntry);
    
    UFUNCTION(BlueprintCallable)
    void OnAfterBoneTransformUpdate(USpineSkeletonComponent* SpineSkeletonComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnAdditiveDamageTimerEnd();
    
    UFUNCTION(BlueprintCallable)
    void KnockbackLandingEnd();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReactionLayerActive(bool bConsiderLoopAsActive) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingSpecificAnimation(const FString& AnimName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingAnimationAtLayer(ESpineAnimationLayer Layer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingActionAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKnockbackLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastRootMotionMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESpineAnimationLayer GetHighestActiveLayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentAnimationName() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DeathEnd();
    
    UFUNCTION(BlueprintCallable)
    void DeathComplete();
    
};

