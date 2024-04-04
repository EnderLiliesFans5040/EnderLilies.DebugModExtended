#pragma once
#include "CoreMinimal.h"
#include "Engine/GameViewportClient.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "GameViewportZenithEventDelegate.h"
#include "GameViewportZenithKeyDownEventDelegate.h"
#include "GameViewportZenithOverlayRenderOpacityEventDelegate.h"
#include "GameViewportZenithSwapControllerEventDelegate.h"
#include "GameViewportZenithBase.generated.h"

class UGameViewportZenithBase;

UCLASS(Blueprintable, NonTransient)
class UGameViewportZenithBase : public UGameViewportClient {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportZenithEvent OnLockActiveControllerID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportZenithEvent OnUnlockActiveControllerID;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportZenithEvent OnInputDeviceChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportZenithSwapControllerEvent OnControllerIDChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportZenithEvent OnPlayerControllerConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportZenithEvent OnPlayerControllerDisconnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportZenithEvent OnControllerConnectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportZenithEvent OnApplicationDeactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportZenithEvent OnApplicationReactivatedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameViewportZenithKeyDownEvent OnKeyDownDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReceivedFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMouseMoveBP(const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMouseDownBP(const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKeyDownBP(const FKeyEvent& InKeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputDeviceChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerIDChanged(int32 OldControllerID, int32 NewControllerID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerDisconnected(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControllerConnected(int32 ControllerId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationReactivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApplicationDeactivated();
    
public:
    UFUNCTION(BlueprintCallable)
    void LockActiveController();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGamepadAttached() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveControllerLocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveControllerIDSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveControllerConnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameViewportZenithBase* GetGameViewportZenith();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveControllerID() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void DelayedSetFocusToHighestWidget();
    
};

