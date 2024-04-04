#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "AbilityTimeline.h"
#include "CommandActionEndEventDelegate.h"
#include "CommandActionEventDelegate.h"
#include "ECommandInputTypes.h"
#include "ECommandRemoveTypes.h"
#include "ECommandResult.h"
#include "EDirectionInputTypes.h"
#include "FXTimeline.h"
#include "InputSnapshot.h"
#include "MoveTimeline.h"
#include "SoundTimeline.h"
#include "SpineAnimationDefinition.h"
#include "StateTimeline.h"
#include "Templates/SubclassOf.h"
#include "CommandAction.generated.h"

class ACharacter;
class APawn;
class UCharacterMovementComponent;
class UCommandAction;
class UHitStopComponent;
class UMPComponent;
class USpineAnimationComponent;
class UStateComponent;

UCLASS(Abstract, Blueprintable)
class ZENITH_API UCommandAction : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandActionEvent OnCommandActionStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandActionEndEvent OnCommandActionEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommandActionEvent OnCommandActionUseCountRestored;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateTimeline StateTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAbilityTimeline AbilityTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveTimeline MoveTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFXTimeline FXTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoundTimeline SoundTimeline;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowOverrideFromCommands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumeMP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecastTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRecastTimeCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAirborneExecutionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UCommandAction>> ResetAirborneExecutionCountActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APawn* Pawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* CachedWorldObjectContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHitStopComponent* CachedHitStopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMPComponent* CachedMPComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStateComponent* CachedStateComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USpineAnimationComponent* CachedAnimComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable)
    void OnWallgrabStarted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWallgrabStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnStartCommandAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    ECommandResult OnSampleCommandAction(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRemovedFromBuffer();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOverrideByCommandAction(UCommandAction* CommandAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementModeUpdated(EMovementMode NewMovementMode, EMovementMode PrevMovementMode);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreMovementMode, uint8 PreviousCustomMode);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLanded();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInitialize();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHookStarted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHookStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnFall();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnEndCommandAction(ECommandRemoveTypes RemoveType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCommandActionStarted(UCommandAction* CommandAction);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangePawn(APawn* OldPawnSubject, APawn* NewPawnSubject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnChangeInvokedByInputType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingActionAnimation() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsOverridenByActionType(ECommandInputTypes commandType) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputTypePressed(ECommandInputTypes InputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGrounded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFalling() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityTimelineCompleted(bool bCheckAbilities) const;
    
    UFUNCTION(BlueprintCallable)
    void Initialize(UObject* WorldObjectContext);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStateComponent* GetStateComponent() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecastTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMPCost() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMPComponent* GetMPComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EMovementMode> GetMovementMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetMoveInput() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECommandInputTypes GetInvokedByInputType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDirectionInputTypes GetInvokedByDirectionInputType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetInputVector() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInputSnapshot GetInputSnapshot() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHitStopComponent* GetHitStopComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetExecutionTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDirectionInputTypes GetDirectionInputType() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownTime() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterMovementComponent* GetCharacterMovementComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpineAnimationComponent* GetAnimationComponent() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void FullyRestore();
    
    UFUNCTION(BlueprintCallable)
    void EndCommandAction(ECommandRemoveTypes RemoveType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsConsumeMPCommand() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanUseCommandInput(ECommandInputTypes CommandInputType) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStartCommandAction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanMove() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AllowRecastTimeCut() const;
    
    UFUNCTION(BlueprintCallable)
    void AddRecastTimeCutPercentage(float RecastTimeCutPercentageToAdd);
    
    UFUNCTION(BlueprintCallable)
    void AddMaxExecutionPercentageBonus(float MaxExecutionPercentageBonusToAdd);
    
};

