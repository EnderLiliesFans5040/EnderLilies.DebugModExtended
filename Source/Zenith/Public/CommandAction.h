#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "MoveTimeline.h"
#include "CommandActionEventDelegate.h"
#include "CommandActionEndEventDelegate.h"
#include "AbilityTimeline.h"
#include "StateTimeline.h"
#include "FXTimeline.h"
#include "SoundTimeline.h"
#include "ECommandResult.h"
#include "UObject/NoExportTypes.h"
#include "EDirectionInputTypes.h"
#include "Engine/EngineTypes.h"
#include "ECommandInputTypes.h"
#include "InputSnapshot.h"
#include "SpineAnimationDefinition.h"
#include "ECommandRemoveTypes.h"
#include "UObject/NoExportTypes.h"
#include "CommandAction.generated.h"

class UCommandAction;
class APawn;
class UHitStopComponent;
class UMPComponent;
class UStateComponent;
class USpineAnimationComponent;
class UCharacterMovementComponent;
class ACharacter;

UCLASS(Abstract, Blueprintable)
class ZENITH_API UCommandAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCommandActionEvent OnCommandActionStart;
    
    UPROPERTY(BlueprintAssignable)
    FCommandActionEndEvent OnCommandActionEnd;
    
    UPROPERTY(BlueprintAssignable)
    FCommandActionEvent OnCommandActionUseCountRestored;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FStateTimeline StateTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAbilityTimeline AbilityTimeline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMoveTimeline MoveTimeline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FFXTimeline FXTimeline;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoundTimeline SoundTimeline;
    
private:
    UPROPERTY(EditDefaultsOnly)
    int32 AllowOverrideFromCommands;
    
    UPROPERTY(EditDefaultsOnly)
    bool bConsumeMP;
    
    UPROPERTY(EditDefaultsOnly)
    float RecastTime;
    
    UPROPERTY(EditDefaultsOnly)
    bool bAllowRecastTimeCut;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxAirborneExecutionCount;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<TSubclassOf<UCommandAction>> ResetAirborneExecutionCountActions;
    
    UPROPERTY(Transient)
    APawn* Pawn;
    
    UPROPERTY(Transient)
    UObject* CachedWorldObjectContext;
    
    UPROPERTY(Instanced, Transient)
    UHitStopComponent* CachedHitStopComponent;
    
    UPROPERTY(Instanced, Transient)
    UMPComponent* CachedMPComponent;
    
    UPROPERTY(Instanced, Transient)
    UStateComponent* CachedStateComponent;
    
    UPROPERTY(Instanced, Transient)
    USpineAnimationComponent* CachedAnimComponent;
    
    UPROPERTY(Instanced, Transient)
    UCharacterMovementComponent* CachedMovementComponent;
    
public:
    UCommandAction();
    UFUNCTION(BlueprintCallable)
    void SubRecastTimeCutPercentage(float RecastTimeCutPercentageToSub);
    
    UFUNCTION(BlueprintCallable)
    void SubMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToSub);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopMovementTimeline();
    
    UFUNCTION(BlueprintCallable)
    void StopActionAnimation(bool bOverrideBlend, float Blend);
    
public:
    UFUNCTION(BlueprintCallable)
    void StartCommandAction();
    
    UFUNCTION(BlueprintCallable)
    void SetPawn(APawn* NewPawnSubject);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetMovementMode(TEnumAsByte<EMovementMode> MovementMode);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetInvokedByInputTypes(EDirectionInputTypes DirectionInputType, ECommandInputTypes CommandInputType);
    
    UFUNCTION(BlueprintCallable)
    void SetInputSnapshot(FInputSnapshot NewInputSnapshot);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAbilityTimelineGlobalOffset(const FTransform& NewGlobalOffset);
    
public:
    UFUNCTION(BlueprintCallable)
    ECommandResult SampleCommandAction(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void RestoreUseCountByRatio(float RestoreValue);
    
    UFUNCTION(BlueprintCallable)
    void RestoreCooldownByRatio(float RestoreValue);
    
    UFUNCTION(BlueprintCallable)
    void ResetAirborneExecutionCount();
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void RequestEnd(bool bEndAsFailure);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayActionAnimations(const TArray<FSpineAnimationDefinition>& Animations);
    
    UFUNCTION(BlueprintCallable)
    void PlayActionAnimation(const FSpineAnimationDefinition& Animation);
    
public:
    UFUNCTION(BlueprintCallable)
    void OverrideByCommandAction(UCommandAction* CommandAction);
    
private:
    UFUNCTION()
    void OnWallgrabStarted();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnWallgrabStart();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnStartCommandAction();
    
    UFUNCTION(BlueprintNativeEvent)
    ECommandResult OnSampleCommandAction(float DeltaTime);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnRemovedFromBuffer();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnOverrideByCommandAction(UCommandAction* CommandAction);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMovementModeUpdated(EMovementMode NewMovementMode, EMovementMode PrevMovementMode);
    
private:
    UFUNCTION()
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreMovementMode, uint8 PreviousCustomMode);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnLanded();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnInitialize();
    
private:
    UFUNCTION()
    void OnHookStarted();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnHookStart();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnFall();
    
    UFUNCTION(BlueprintNativeEvent)
    void OnEndCommandAction(ECommandRemoveTypes RemoveType);
    
private:
    UFUNCTION()
    void OnCommandActionStarted(UCommandAction* CommandAction);
    
protected:
    UFUNCTION(BlueprintNativeEvent)
    void OnChangePawn(APawn* OldPawnSubject, APawn* NewPawnSubject);
    
    UFUNCTION(BlueprintNativeEvent)
    void OnChangeInvokedByInputType();
    
    UFUNCTION(BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingActionAnimation() const;
    
public:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool IsOverridenByActionType(ECommandInputTypes commandType) const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsInputTypePressed(ECommandInputTypes InputType) const;
    
    UFUNCTION(BlueprintPure)
    bool IsGrounded() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFalling() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool IsAbilityTimelineCompleted(bool bCheckAbilities) const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UObject* WorldObjectContext);
    
protected:
    UFUNCTION(BlueprintPure)
    UStateComponent* GetStateComponent() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetRecastTime() const;
    
    UFUNCTION(BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMPCost() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UMPComponent* GetMPComponent() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EMovementMode> GetMovementMode() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetMoveInput() const;
    
public:
    UFUNCTION(BlueprintPure)
    ECommandInputTypes GetInvokedByInputType() const;
    
    UFUNCTION(BlueprintPure)
    EDirectionInputTypes GetInvokedByDirectionInputType() const;
    
protected:
    UFUNCTION(BlueprintPure)
    FVector2D GetInputVector() const;
    
public:
    UFUNCTION(BlueprintPure)
    FInputSnapshot GetInputSnapshot() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UHitStopComponent* GetHitStopComponent() const;
    
    UFUNCTION(BlueprintPure)
    float GetExecutionTime() const;
    
    UFUNCTION(BlueprintPure)
    EDirectionInputTypes GetDirectionInputType() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetCooldownTime() const;
    
protected:
    UFUNCTION(BlueprintPure)
    UCharacterMovementComponent* GetCharacterMovementComponent() const;
    
    UFUNCTION(BlueprintPure)
    USpineAnimationComponent* GetAnimationComponent() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FullyRestore();
    
    UFUNCTION(BlueprintCallable)
    void EndCommandAction(ECommandRemoveTypes RemoveType);
    
    UFUNCTION(BlueprintPure)
    bool ContainsConsumeMPCommand() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanUseCommandInput(ECommandInputTypes CommandInputType) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStartCommandAction();
    
protected:
    UFUNCTION(BlueprintPure)
    bool CanMove() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool AllowRecastTimeCut() const;
    
    UFUNCTION(BlueprintCallable)
    void AddRecastTimeCutPercentage(float RecastTimeCutPercentageToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToAdd);
    
};

