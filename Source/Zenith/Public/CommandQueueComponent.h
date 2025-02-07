#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CommandEventDelegate.h"
#include "CommandSettings.h"
#include "ECommandInputTypes.h"
#include "ECommandResult.h"
#include "EDirectionInputTypes.h"
#include "EndCommandDelegate.h"
#include "InputSnapshot.h"
#include "StartCommandDelegate.h"
#include "Templates/SubclassOf.h"
#include "CommandQueueComponent.generated.h"

class APawn;
class UCharacterMovementComponent;
class UCommand;
class UCommandAction;
class UCommandSet;
class UStateComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ZENITH_API UCommandQueueComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UCommandAction*> CommandsForClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCommand*> AvailableCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCommand*> CommandQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStateComponent* StateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* MovementComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputSnapshot CurrentInputSnapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputSnapshot LastInputSnapshot;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartCommand OnStartCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEndCommand OnEndCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandEvent OnClearCommands;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandEvent OnPostUpdateCommands;
    
    UCommandQueueComponent(const FObjectInitializer& ObjectInitializer);

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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCommandOfType(TSubclassOf<UCommandAction> CommandActionClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCommandForCommandID(int32 CommandID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCommand() const;
    
    UFUNCTION(BlueprintCallable)
    UCommandAction* GetOrCreateCommandAction(const TSubclassOf<UCommandAction>& CommandActionType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextFrameID();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommandResult GetCurrentResultForCommandID(int32 CommandID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
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

