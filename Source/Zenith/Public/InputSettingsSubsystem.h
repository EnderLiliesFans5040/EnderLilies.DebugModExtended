#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InputSettingsDelegateDelegate.h"
#include "ActionBinding.h"
#include "EInputStyle.h"
#include "EBindingType.h"
#include "AxisBinding.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "Framework/Commands/InputChord.h"
#include "InputCoreTypes.h"
#include "EInputActionSet.h"
#include "InputSettingsSubsystem.generated.h"

class APlayerController;

UCLASS(BlueprintType)
class ZENITH_API UInputSettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInputSettingsDelegate OnInputStyleChanged;
    
    UPROPERTY(BlueprintAssignable)
    FInputSettingsDelegate OnInputOverrideChanged;
    
private:
    UPROPERTY()
    TMap<FName, FActionBinding> OverrideKeyBindingsForActions;
    
    UPROPERTY()
    TMap<FName, FAxisBinding> OverrideKeyBindingsForAxises;
    
    UPROPERTY()
    EInputStyle InputStyle;
    
public:
    UInputSettingsSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetupOverride(const APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void SetInputStyle(const EInputStyle& NewInputStyle);
    
    UFUNCTION(BlueprintCallable)
    void SetAxisMappings(const FName& AxisName, const TArray<FInputAxisKeyMapping>& ActionMappings);
    
    UFUNCTION(BlueprintCallable)
    void SetActionMappings(const FName& ActionName, const TArray<FInputActionKeyMapping>& ActionMappings);
    
    UFUNCTION(BlueprintCallable)
    void RestoreDefaultBindings(EBindingType BindingTypeToRestore);
    
    UFUNCTION(BlueprintCallable)
    void RebuildKeymaps();
    
    UFUNCTION(BlueprintCallable)
    void OverrideAxisMapping(const FName& AxisName, const FInputChord& InputChord, float AxisScale, bool bGamepad);
    
    UFUNCTION(BlueprintCallable)
    void OverrideActionMapping(const FName& ActionName, const FInputChord& InputChord, bool bGamepad);
    
    UFUNCTION(BlueprintPure)
    bool IsKeyMappedForAction(const FName& ActionName, FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    bool HasAnyMouseBindings() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputAxisKeyMapping> GetKeyMappingForAxis(const FName& AxisName, float ScaleSign) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputActionKeyMapping> GetKeyMappingForAction(const FName& ActionName) const;
    
    UFUNCTION(BlueprintPure)
    EInputStyle GetInputStyle() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputChord> GetInputChordsForAxis(const FName& AxisName, float ScaleSign) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FInputChord> GetInputChordsForAction(const FName& ActionName) const;
    
    UFUNCTION(BlueprintPure)
    EInputStyle GetDefaultInputStyle() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateActionSet(EInputActionSet ActionSet);
    
};

