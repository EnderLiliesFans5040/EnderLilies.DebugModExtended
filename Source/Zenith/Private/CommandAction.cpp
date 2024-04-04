#include "CommandAction.h"

UCommandAction::UCommandAction() {
    this->AllowOverrideFromCommands = 0;
    this->bConsumeMP = false;
    this->RecastTime = 0.00f;
    this->bAllowRecastTimeCut = false;
    this->MaxAirborneExecutionCount = 0;
    this->Pawn = NULL;
    this->CachedWorldObjectContext = NULL;
    this->CachedHitStopComponent = NULL;
    this->CachedMPComponent = NULL;
    this->CachedStateComponent = NULL;
    this->CachedAnimComponent = NULL;
    this->CachedMovementComponent = NULL;
}

void UCommandAction::SubRecastTimeCutPercentage(float RecastTimeCutPercentageToSub) {
}

void UCommandAction::SubMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToSub) {
}

void UCommandAction::StopMovementTimeline() {
}

void UCommandAction::StopActionAnimation(bool bOverrideBlend, float Blend) {
}

void UCommandAction::StartCommandAction() {
}

void UCommandAction::SetPawn(APawn* NewPawnSubject) {
}

void UCommandAction::SetMovementMode(TEnumAsByte<EMovementMode> MovementMode) {
}

void UCommandAction::SetInvokedByInputTypes(EDirectionInputTypes DirectionInputType, ECommandInputTypes CommandInputType) {
}

void UCommandAction::SetInputSnapshot(FInputSnapshot NewInputSnapshot) {
}

void UCommandAction::SetAbilityTimelineGlobalOffset(const FTransform& NewGlobalOffset) {
}

ECommandResult UCommandAction::SampleCommandAction(float DeltaTime) {
    return ECommandResult::NONE;
}

void UCommandAction::RestoreUseCountByRatio(float RestoreValue) {
}

void UCommandAction::RestoreCooldownByRatio(float RestoreValue) {
}

void UCommandAction::ResetAirborneExecutionCount() {
}

void UCommandAction::Reset() {
}

void UCommandAction::RequestEnd(bool bEndAsFailure) {
}

void UCommandAction::PlayActionAnimations(const TArray<FSpineAnimationDefinition>& Animations) {
}

void UCommandAction::PlayActionAnimation(const FSpineAnimationDefinition& Animation) {
}

void UCommandAction::OverrideByCommandAction(UCommandAction* CommandAction) {
}

void UCommandAction::OnWallgrabStarted() {
}


void UCommandAction::OnStartCommandAction_Implementation() {
}

ECommandResult UCommandAction::OnSampleCommandAction_Implementation(float DeltaTime) {
    return ECommandResult::NONE;
}

void UCommandAction::OnRemovedFromBuffer_Implementation() {
}

void UCommandAction::OnOverrideByCommandAction_Implementation(UCommandAction* CommandAction) {
}


void UCommandAction::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreMovementMode, uint8 PreviousCustomMode) {
}

void UCommandAction::OnLanded_Implementation() {
}

void UCommandAction::OnInitialize_Implementation() {
}

void UCommandAction::OnHookStarted() {
}


void UCommandAction::OnFall_Implementation() {
}

void UCommandAction::OnEndCommandAction_Implementation(ECommandRemoveTypes RemoveType) {
}

void UCommandAction::OnCommandActionStarted(UCommandAction* CommandAction) {
}

void UCommandAction::OnChangePawn_Implementation(APawn* OldPawnSubject, APawn* NewPawnSubject) {
}

void UCommandAction::OnChangeInvokedByInputType_Implementation() {
}

bool UCommandAction::IsSwimming() const {
    return false;
}

bool UCommandAction::IsPlayingActionAnimation() const {
    return false;
}

bool UCommandAction::IsOverridenByActionType_Implementation(ECommandInputTypes commandType) const {
    return false;
}

bool UCommandAction::IsInputTypePressed(ECommandInputTypes InputType) const {
    return false;
}

bool UCommandAction::IsGrounded() const {
    return false;
}

bool UCommandAction::IsFalling() const {
    return false;
}

bool UCommandAction::IsAbilityTimelineCompleted(bool bCheckAbilities) const {
    return false;
}

void UCommandAction::Initialize(UObject* WorldObjectContext) {
}

UStateComponent* UCommandAction::GetStateComponent() const {
    return NULL;
}

float UCommandAction::GetRecastTime() const {
    return 0.0f;
}

APawn* UCommandAction::GetPawn() const {
    return NULL;
}

int32 UCommandAction::GetMPCost() const {
    return 0;
}

UMPComponent* UCommandAction::GetMPComponent() const {
    return NULL;
}

TEnumAsByte<EMovementMode> UCommandAction::GetMovementMode() const {
    return MOVE_None;
}

FVector UCommandAction::GetMoveInput() const {
    return FVector{};
}

ECommandInputTypes UCommandAction::GetInvokedByInputType() const {
    return ECommandInputTypes::NONE;
}

EDirectionInputTypes UCommandAction::GetInvokedByDirectionInputType() const {
    return EDirectionInputTypes::NONE;
}

FVector2D UCommandAction::GetInputVector() const {
    return FVector2D{};
}

FInputSnapshot UCommandAction::GetInputSnapshot() const {
    return FInputSnapshot{};
}

UHitStopComponent* UCommandAction::GetHitStopComponent() const {
    return NULL;
}

float UCommandAction::GetExecutionTime() const {
    return 0.0f;
}

EDirectionInputTypes UCommandAction::GetDirectionInputType() const {
    return EDirectionInputTypes::NONE;
}

float UCommandAction::GetCooldownTime() const {
    return 0.0f;
}

UCharacterMovementComponent* UCommandAction::GetCharacterMovementComponent() const {
    return NULL;
}

USpineAnimationComponent* UCommandAction::GetAnimationComponent() const {
    return NULL;
}

void UCommandAction::FullyRestore() {
}

void UCommandAction::EndCommandAction(ECommandRemoveTypes RemoveType) {
}

bool UCommandAction::ContainsConsumeMPCommand() const {
    return false;
}

bool UCommandAction::CanUseCommandInput(ECommandInputTypes CommandInputType) const {
    return false;
}

bool UCommandAction::CanStartCommandAction_Implementation() {
    return false;
}

bool UCommandAction::CanMove() const {
    return false;
}

bool UCommandAction::AllowRecastTimeCut() const {
    return false;
}

void UCommandAction::AddRecastTimeCutPercentage(float RecastTimeCutPercentageToAdd) {
}

void UCommandAction::AddMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToAdd) {
}


