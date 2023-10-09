#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UMGSubsystemDelegateDelegate.h"
#include "EUIInputTypes.h"
#include "InputCoreTypes.h"
#include "UMGSubsystem.generated.h"

class UFooterUserWidget;
class UUserWidget;

UCLASS(BlueprintType)
class ZENITH_API UUMGSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FUMGSubsystemDelegate OnUIInputChange;
    
    UUMGSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetFocusedWidget(UUserWidget* NewFocusedWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFooterWidget(UFooterUserWidget* NewFooterWidget);
    
    UFUNCTION(BlueprintCallable)
    void RestoreDefaultBindings();
    
    UFUNCTION(BlueprintCallable)
    void OverrideUIInput(EUIInputTypes UIInputType, FKey Key);
    
    UFUNCTION(BlueprintPure)
    bool IsNavigationEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsKeyUIInputType(EUIInputTypes UIInputType, FKey Key) const;
    
    UFUNCTION(BlueprintPure)
    bool IsFocusingAnyWidget() const;
    
    UFUNCTION(BlueprintPure)
    UUserWidget* GetLastFocusedWidget() const;
    
    UFUNCTION(BlueprintPure)
    TArray<FKey> GetKeysForUIInput(EUIInputTypes UIInputType) const;
    
    UFUNCTION(BlueprintPure)
    FKey GetKeyForUIInput(EUIInputTypes UIInputType, bool bGamepad) const;
    
    UFUNCTION(BlueprintPure)
    UFooterUserWidget* GetCurrentFooterWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableNavigationAndResetLocks(bool bExecuteImmediately);
    
    UFUNCTION(BlueprintCallable)
    void EnableNavigation(bool bExecuteImmediately);
    
    UFUNCTION(BlueprintCallable)
    void DisableNavigation(TSubclassOf<UUserWidget> InputBlockerWidgetClass);
    
};

