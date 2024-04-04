#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "InputCoreTypes.h"
#include "EUIInputTypes.h"
#include "Templates/SubclassOf.h"
#include "UMGSubsystemDelegateDelegate.h"
#include "UMGSubsystem.generated.h"

class UFooterUserWidget;
class UUserWidget;

UCLASS(Blueprintable)
class ZENITH_API UUMGSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsNavigationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsKeyUIInputType(EUIInputTypes UIInputType, FKey Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFocusingAnyWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetLastFocusedWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FKey> GetKeysForUIInput(EUIInputTypes UIInputType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FKey GetKeyForUIInput(EUIInputTypes UIInputType, bool bGamepad) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFooterUserWidget* GetCurrentFooterWidget() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableNavigationAndResetLocks(bool bExecuteImmediately);
    
    UFUNCTION(BlueprintCallable)
    void EnableNavigation(bool bExecuteImmediately);
    
    UFUNCTION(BlueprintCallable)
    void DisableNavigation(TSubclassOf<UUserWidget> InputBlockerWidgetClass);
    
};

