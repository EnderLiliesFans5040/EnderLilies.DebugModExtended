#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameFramework/PlayerInput.h"
#include "GameFramework/PlayerInput.h"
#include "InputCoreTypes.h"
#include "Framework/Commands/InputChord.h"
#include "ActionBinding.h"
#include "AxisBinding.h"
#include "EBindingType.h"
#include "EInputActionSet.h"
#include "EInputStyle.h"
#include "InputSettingsDelegateDelegate.h"
#include "InputSettingsSubsystem.generated.h"

class APlayerController;

UCLASS(Blueprintable)
class ZENITH_API UInputSettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputSettingsDelegate OnInputStyleChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInputSettingsDelegate OnInputOverrideChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FActionBinding> OverrideKeyBindingsForActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FAxisBinding> OverrideKeyBindingsForAxises;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyMappedForAction(const FName& ActionName, FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyMouseBindings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputAxisKeyMapping> GetKeyMappingForAxis(const FName& AxisName, float ScaleSign) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputActionKeyMapping> GetKeyMappingForAction(const FName& ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputStyle GetInputStyle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputChord> GetInputChordsForAxis(const FName& AxisName, float ScaleSign) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FInputChord> GetInputChordsForAction(const FName& ActionName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EInputStyle GetDefaultInputStyle() const;
    
    UFUNCTION(BlueprintCallable)
    void ActivateActionSet(EInputActionSet ActionSet);
    
};

