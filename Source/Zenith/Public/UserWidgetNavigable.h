#pragma once
#include "CoreMinimal.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "UserWidgetNavigable.generated.h"

class UFMODEvent;
class UNativeWidgetHost;

UCLASS(EditInlineNew)
class ZENITH_API UUserWidgetNavigable : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAcceptRepeatKeysInKeyDownEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAcceptRepeatKeysInPressUpDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAcceptRepeatKeysInPressLeftRight;
    
private:
    UPROPERTY(EditAnywhere)
    bool bSaveAsFocusedWidget;
    
    UPROPERTY(EditAnywhere)
    bool TriggerDescendantFocusedEvents;
    
    UPROPERTY(EditAnywhere)
    UFMODEvent* SoundEvent_OnNavigate;
    
    UPROPERTY(EditAnywhere)
    UFMODEvent* SoundEvent_OnConfirm;
    
    UPROPERTY(EditAnywhere)
    UFMODEvent* SoundEvent_OnCancel;
    
    UPROPERTY(EditAnywhere)
    UFMODEvent* SoundEvent_OnContext;
    
    UPROPERTY(Instanced)
    UNativeWidgetHost* WidgetHost;
    
public:
    UUserWidgetNavigable();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void RefreshDesign(bool bFocused);
    
    UFUNCTION(BlueprintCallable)
    void PlayNavigateSoundEvent();
    
    UFUNCTION(BlueprintCallable)
    void PlayConfirmSoundEvent();
    
    UFUNCTION(BlueprintCallable)
    void PlayCancelSoundEvent();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEventReply OnPressUp(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEventReply OnPressRight(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEventReply OnPressPrevPage(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEventReply OnPressNextPage(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEventReply OnPressLeft(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEventReply OnPressDown(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEventReply OnPressContext(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEventReply OnPressConfirm(const FKeyEvent& KeyEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FEventReply OnPressCancel(const FKeyEvent& KeyEvent);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDescendantFocused(UNativeWidgetHost* FocusedWidget, EFocusCause FocusCause);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOnFocusPath() const;
    
};

