#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ECommandResult.h"
#include "Components/ActorComponent.h"
#include "EDirectionInputTypes.h"
#include "InputSnapshot.h"
#include "StartCommandDelegate.h"
#include "EndCommandDelegate.h"
#include "CommandEventDelegate.h"
#include "CommandSettings.h"
#include "ECommandInputTypes.h"
#include "CommandQueueComponent.generated.h"

class UCommand;
class APawn;
class UCommandAction;
class UStateComponent;
class UCharacterMovementComponent;
class UCommandSet;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UCommandQueueComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, BlueprintReadOnly)
    TMap<UClass*, UCommandAction*> CommandsForClasses;
private:
    UPROPERTY(Transient)
    APawn* Pawn;

    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UCommand*> AvailableCommands;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UCommand*> CommandQueue;
    
    UPROPERTY(Instanced)
    UStateComponent* StateComponent;
    
    UPROPERTY(Instanced, Transient)
    UCharacterMovementComponent* MovementComponent;
    
public:
    UPROPERTY(BlueprintReadOnly)
    FInputSnapshot CurrentInputSnapshot;
    
    UPROPERTY(BlueprintReadOnly)
    FInputSnapshot LastInputSnapshot;
    
    UPROPERTY(BlueprintAssignable)
    FStartCommand OnStartCommand;
    
    UPROPERTY(BlueprintAssignable)
    FEndCommand OnEndCommand;
    
    UPROPERTY(BlueprintAssignable)
    FCommandEvent OnClearCommands;
    
    UPROPERTY(BlueprintAssignable)
    FCommandEvent OnPostUpdateCommands;
    
    UCommandQueueComponent();
    UFUNCTION(BlueprintCallable)
    void UpdateCommands(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    int32 TryAddCommandsFromSettings(const FInputSnapshot& InputSnapshot, const FCommandSettings& CommandSettings, int32 FrameID);
    
    UFUNCTION(BlueprintCallable)
    int32 TryAddCommandsForInputs(const EDirectionInputTypes DirectionInputType, const ECommandInputTypes CommandInputType, const UCommandSet* CommandSet);
    
    UFUNCTION(BlueprintCallable)
    int32 TryAddCommands(const FInputSnapshot& InputSnapshot, const UCommandSet* CommandSet);
    
    UFUNCTION(BlueprintCallable)
    int32 TryAddCommandForInputsFromSettings(const EDirectionInputTypes DirectionInputType, const ECommandInputTypes CommandInputType, const FCommandSettings& CommandSettings, int32 FrameID);
    
    UFUNCTION(BlueprintCallable)
    int32 TryAddCommandForInputs(const EDirectionInputTypes DirectionInputType, const ECommandInputTypes CommandInputType, const UCommandSet* CommandSet);
    
    UFUNCTION(BlueprintCallable)
    void SubRecastTimeCutPercentage(float RecastTimeCutPercentageToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToSub);
    
    UFUNCTION(BlueprintCallable)
    void RestoreUseCountByRatio(float RestoreValue);
    
    UFUNCTION(BlueprintCallable)
    void RestoreCooldownByRatio(float RestoreValue);
    
    UFUNCTION(BlueprintCallable)
    void PreloadCommandAction(const TSubclassOf<UCommandAction>& CommandActionType);
    
    UFUNCTION(BlueprintCallable)
    bool IsCommandSettingsStartable(const FCommandSettings& CommandSettings, EDirectionInputTypes DirectionInputType, ECommandInputTypes CommandInputType);
    
    UFUNCTION(BlueprintPure)
    bool HasCommandOfType(TSubclassOf<UCommandAction> CommandActionClass) const;
    
    UFUNCTION(BlueprintPure)
    bool HasCommandForCommandID(int32 CommandID) const;
    
    UFUNCTION(BlueprintPure)
    bool HasCommand() const;
    
    UFUNCTION(BlueprintCallable)
    UCommandAction* GetOrCreateCommandAction(const TSubclassOf<UCommandAction>& CommandActionType);
    
    UFUNCTION(BlueprintPure)
    int32 GetNextFrameID();
    
    UFUNCTION(BlueprintPure)
    ECommandResult GetCurrentResultForCommandID(int32 CommandID) const;
    
    UFUNCTION(BlueprintPure)
    UCommand* GetCurrentCommand() const;
    
    UFUNCTION(BlueprintCallable)
    void FullyRestore();
    
    UFUNCTION(BlueprintCallable)
    void ClearQueuedCommandBuffer();
    
    UFUNCTION(BlueprintCallable)
    void ClearCommandBuffer();
    
    UFUNCTION(BlueprintCallable)
    void AddRecastTimeCutPercentage(float RecastTimeCutPercentageToAdd);
    
    UFUNCTION(BlueprintCallable)
    int32 AddNewImmediateCommand(const EDirectionInputTypes DirectionInputType, const ECommandInputTypes CommandInputType, const TSubclassOf<UCommandAction>& CommandActionClass);
    
    UFUNCTION(BlueprintCallable)
    void AddNewCommandGroup(const EDirectionInputTypes DirectionInputType, const ECommandInputTypes CommandInputType, const TArray<TSubclassOf<UCommandAction>>& CommandActionClasses, float BufferTTL);
    
    UFUNCTION(BlueprintCallable)
    int32 AddNewCommand(const EDirectionInputTypes DirectionInputType, const ECommandInputTypes CommandInputType, const FCommandSettings& CommandSettings, int32 FrameID, bool AddToFront);
    
    UFUNCTION(BlueprintCallable)
    void AddMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToAdd);
    
};

