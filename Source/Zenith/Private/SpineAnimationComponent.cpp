#include "SpineAnimationComponent.h"

USpineAnimationComponent::USpineAnimationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUpdateAnimationsInTick = true;
    this->bForceUseGroundedLocomotion = false;
    this->bCheckTurnTransitionsInTick = true;
    this->bSetEmptyIfNoAnim = true;
    this->bAllowVerticalLocomotionAnimation = true;
    this->bApplyRootMotionLocomotion = false;
    this->bRootMotionLocomotionIdleOnly = false;
    this->RootMotionFactor = 1.00f;
    this->bSyncLocomotionTimings = false;
    this->bAutoStopEventAnimations = true;
    this->DamageAdditiveType = EDamageAdditiveType::Never;
    this->AnimComponent = NULL;
    this->RendererComponent = NULL;
    this->Character = NULL;
    this->ZenithCharacter = NULL;
    this->MovementComponent = NULL;
    this->LocomotionComponent = NULL;
    this->StateComponent = NULL;
    this->InputComponent = NULL;
}

void USpineAnimationComponent::WakeUpEnd() {
}

void USpineAnimationComponent::WakeUpComplete() {
}

void USpineAnimationComponent::StopDamage(bool bPlayRecovery) {
}

void USpineAnimationComponent::StopAnimation(ESpineAnimationLayer Layer, bool bOverrideBlend, float Blend) {
}

void USpineAnimationComponent::StopAllAnimations() {
}

void USpineAnimationComponent::StopActionAnimation(bool bOverrideBlend, float Blend) {
}

void USpineAnimationComponent::RequestRefreshPlayingAnimation() {
}

void USpineAnimationComponent::PlayWakeUp() {
}

void USpineAnimationComponent::PlayLaunchKnockback() {
}

void USpineAnimationComponent::PlayKnockbackLanding() {
}

void USpineAnimationComponent::PlayDeathBackSide() {
}

void USpineAnimationComponent::PlayDeath() {
}

void USpineAnimationComponent::PlayDamage(bool bForceRestart) {
}

void USpineAnimationComponent::PlayAnimationWithEvents(const FString& AnimName, ESpineAnimationLayer Layer, FSpineAnimationDelegate OnAnimEnd, FSpineAnimationDelegate OnAnimComplete, bool bLoop, float StartTime, float BlendIn, bool bUseRootMotion) {
}

void USpineAnimationComponent::PlayAnimations(TArray<FSpineAnimationDefinition> Animations, ESpineAnimationLayer Layer) {
}

void USpineAnimationComponent::PlayAnimationDefinition(FSpineAnimationDefinition AnimationDefinition, ESpineAnimationLayer Layer) {
}

void USpineAnimationComponent::PlayAnimation(const FString& AnimName, ESpineAnimationLayer Layer, bool bLoop, float StartTime, float BlendIn, bool bUseRootMotion) {
}

void USpineAnimationComponent::PlayAdditiveDamage(float Time) {
}

void USpineAnimationComponent::PlayActionAnimation(const FString& AnimName, bool bLoop, float StartTime, float BlendIn, bool bUseRootMotion) {
}

void USpineAnimationComponent::OnTrackStarted(UTrackEntry* TrackEntry) {
}

void USpineAnimationComponent::OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}

void USpineAnimationComponent::OnLanded(FHitResult HitResult) {
}

void USpineAnimationComponent::OnGameMapSwitch() {
}

void USpineAnimationComponent::OnEventStop() {
}

void USpineAnimationComponent::OnAnimationComplete(UTrackEntry* TrackEntry) {
}

void USpineAnimationComponent::OnAfterBoneTransformUpdate(USpineSkeletonComponent* SpineSkeletonComponent) {
}

void USpineAnimationComponent::OnAdditiveDamageTimerEnd() {
}

void USpineAnimationComponent::KnockbackLandingEnd() {
}

bool USpineAnimationComponent::IsReactionLayerActive(bool bConsiderLoopAsActive) const {
    return false;
}

bool USpineAnimationComponent::IsPlayingSpecificAnimation(const FString& AnimName) const {
    return false;
}

bool USpineAnimationComponent::IsPlayingAnimationAtLayer(ESpineAnimationLayer Layer) const {
    return false;
}

bool USpineAnimationComponent::IsPlayingActionAnimation() const {
    return false;
}

bool USpineAnimationComponent::IsKnockbackLocked() const {
    return false;
}

FVector USpineAnimationComponent::GetLastRootMotionMove() const {
    return FVector{};
}

ESpineAnimationLayer USpineAnimationComponent::GetHighestActiveLayer() const {
    return ESpineAnimationLayer::NONE;
}

FString USpineAnimationComponent::GetCurrentAnimationName() const {
    return TEXT("");
}

void USpineAnimationComponent::DeathEnd() {
}

void USpineAnimationComponent::DeathComplete() {
}


