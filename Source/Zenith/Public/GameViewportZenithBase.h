#pragma once
#include "CoreMinimal.h"
#include "GameViewportZenithOverlayRenderOpacityEventDelegate.h"
#include "Engine/GameViewportClient.h"
#include "GameViewportZenithEventDelegate.h"
#include "Input/Events.h"
#include "GameViewportZenithSwapControllerEventDelegate.h"
#include "GameViewportZenithKeyDownEventDelegate.h"
#include "Input/Events.h"
#include "GameViewportZenithBase.generated.h"

class UGameViewportZenithBase;

UCLASS(Blueprintable, NonTransient)
class UGameViewportZenithBase : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGameViewportZenithEvent OnLockActiveControllerID;
    
    UPROPERTY(BlueprintAssignable)
    FGameViewportZenithEvent OnUnlockActiveControllerID;
    
    UPROPERTY(BlueprintAssignable)
    FGameViewportZenithEvent OnInputDeviceChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameViewportZenithSwapControllerEvent OnControllerIDChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameViewportZenithEvent OnPlayerControllerConnected;
    
    UPROPERTY(BlueprintAssignable)
    FGameViewportZenithEvent OnPlayerControllerDisconnected;
    
    UPROPERTY(BlueprintAssignable)
    FGameViewportZenithEvent OnControllerConnectionChanged;
    
    UPROPERTY(BlueprintAssignable)
    FGameViewportZenithEvent OnApplicationDeactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameViewportZenithEvent OnApplicationReactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameViewportZenithKeyDownEvent OnKeyDownDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FGameViewportZenithOverlayRenderOpacityEvent OnOverlayRenderOpacityChanged;
    
    UGameViewportZenithBase();
    UFUNCTION(BlueprintCallable)
    void UnlockActiveController(bool bResetLockCount);
    
    UFUNCTION(BlueprintCallable)
    void SetViewportOverlayWidgetVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetViewportOverlayRenderOpacity(float Opacity);
    
    UFUNCTION(BlueprintCallable)
    void RefreshControllerInputStyle();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnReceivedFocus();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMouseMoveBP(const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMouseDownBP(const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnKeyDownBP(const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInputDeviceChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnControllerIDChanged(int32 OldControllerID, int32 NewControllerID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnControllerDisconnected(int32 ControllerId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnControllerConnected(int32 ControllerId);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplicationReactivated();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnApplicationDeactivated();
    
public:
    UFUNCTION(BlueprintCallable)
    void LockActiveController();
    
    UFUNCTION(BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGamepadAttached() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActiveControllerLocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActiveControllerIDSet() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActiveControllerConnected() const;
    
    UFUNCTION(BlueprintPure)
    static UGameViewportZenithBase* GetGameViewportZenith();
    
    UFUNCTION(BlueprintPure)
    int32 GetActiveControllerID() const;
    
private:
    UFUNCTION()
    void DelayedSetFocusToHighestWidget();
    
};

