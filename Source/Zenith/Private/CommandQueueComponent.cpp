#include "CommandQueueComponent.h"
#include "Templates/SubclassOf.h"

class UCommandAction;
class UCommand;
class UCommandSet;

void UCommandQueueComponent::UpdateCommands(float DeltaTime) {
}

int32 UCommandQueueComponent::TryAddCommandsFromSettings(const FInputSnapshot& InputSnapshot, const FCommandSettings& CommandSettings, int32 FrameID) {
    return 0;
}

int32 UCommandQueueComponent::TryAddCommandsForInputs(const EDirectionInputTypes DirectionInputType, const ECommandInputTypes CommandInputType, const UCommandSet* CommandSet) {
    return 0;
}

int32 UCommandQueueComponent::TryAddCommands(const FInputSnapshot& InputSnapshot, const UCommandSet* CommandSet) {
    return 0;
}

int32 UCommandQueueComponent::TryAddCommandForInputsFromSettings(const EDirectionInputTypes DirectionInputType, const ECommandInputTypes CommandInputType, const FCommandSettings& CommandSettings, int32 FrameID) {
    return 0;
}

int32 UCommandQueueComponent::TryAddCommandForInputs(const EDirectionInputTypes DirectionInputType, const ECommandInputTypes CommandInputType, const UCommandSet* CommandSet) {
    return 0;
}

void UCommandQueueComponent::SubRecastTimeCutPercentage(float RecastTimeCutPercentageToSub) {
}

void UCommandQueueComponent::SubMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToSub) {
}

void UCommandQueueComponent::RestoreUseCountByRatio(float RestoreValue) {
}

void UCommandQueueComponent::RestoreCooldownByRatio(float RestoreValue) {
}

void UCommandQueueComponent::PreloadCommandAction(const TSubclassOf<UCommandAction>& CommandActionType) {
}

bool UCommandQueueComponent::IsCommandSettingsStartable(const FCommandSettings& CommandSettings, EDirectionInputTypes DirectionInputType, ECommandInputTypes CommandInputType) {
    return false;
}

bool UCommandQueueComponent::HasCommandOfType(TSubclassOf<UCommandAction> CommandActionClass) const {
    return false;
}

bool UCommandQueueComponent::HasCommandForCommandID(int32 CommandID) const {
    return false;
}

bool UCommandQueueComponent::HasCommand() const {
    return false;
}

UCommandAction* UCommandQueueComponent::GetOrCreateCommandAction(const TSubclassOf<UCommandAction>& CommandActionType) {
    return NULL;
}

int32 UCommandQueueComponent::GetNextFrameID() {
    return 0;
}

ECommandResult UCommandQueueComponent::GetCurrentResultForCommandID(int32 CommandID) const {
    return ECommandResult::NONE;
}

UCommand* UCommandQueueComponent::GetCurrentCommand() const {
    return NULL;
}

void UCommandQueueComponent::FullyRestore() {
}

void UCommandQueueComponent::ClearQueuedCommandBuffer() {
}

void UCommandQueueComponent::ClearCommandBuffer() {
}

void UCommandQueueComponent::AddRecastTimeCutPercentage(float RecastTimeCutPercentageToAdd) {
}

int32 UCommandQueueComponent::AddNewImmediateCommand(const EDirectionInputTypes DirectionInputType, const ECommandInputTypes CommandInputType, const TSubclassOf<UCommandAction>& CommandActionClass) {
    return 0;
}

void UCommandQueueComponent::AddNewCommandGroup(const EDirectionInputTypes DirectionInputType, const ECommandInputTypes CommandInputType, const TArray<TSubclassOf<UCommandAction>>& CommandActionClasses, float BufferTTL) {
}

int32 UCommandQueueComponent::AddNewCommand(const EDirectionInputTypes DirectionInputType, const ECommandInputTypes CommandInputType, const FCommandSettings& CommandSettings, int32 FrameID, bool AddToFront) {
    return 0;
}

void UCommandQueueComponent::AddMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToAdd) {
}

UCommandQueueComponent::UCommandQueueComponent() {
    this->Pawn = NULL;
    this->StateComponent = NULL;
    this->MovementComponent = NULL;
}

