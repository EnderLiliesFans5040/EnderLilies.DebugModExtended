#pragma once
#include "CoreMinimal.h"
#include "Input/Events.h"
#include "Input/Events.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "UserWidgetNavigable.generated.h"

class UFMODEvent;
class UNativeWidgetHost;

UCLASS(Blueprintable, EditInlineNew)
class ZENITH_API UUserWidgetNavigable : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptRepeatKeysInKeyDownEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptRepeatKeysInPressUpDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAcceptRepeatKeysInPressLeftRight;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSaveAsFocusedWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool TriggerDescendantFocusedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SoundEvent_OnNavigate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SoundEvent_OnConfirm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SoundEvent_OnCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* SoundEvent_OnContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNativeWidgetHost* WidgetHost;
    
public:
    UUserWidgetNavigable();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
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
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDescendantFocused(UNativeWidgetHost* FocusedWidget, EFocusCause FocusCause);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnFocusPath() const;
    
};

