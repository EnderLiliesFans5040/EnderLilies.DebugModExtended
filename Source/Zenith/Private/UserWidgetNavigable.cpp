#include "UserWidgetNavigable.h"


void UUserWidgetNavigable::PlayNavigateSoundEvent() {
}

void UUserWidgetNavigable::PlayConfirmSoundEvent() {
}

void UUserWidgetNavigable::PlayCancelSoundEvent() {
}











bool UUserWidgetNavigable::IsOnFocusPath() const {
    return false;
}

UUserWidgetNavigable::UUserWidgetNavigable() : UUserWidget(FObjectInitializer::Get()) {
    this->bAcceptRepeatKeysInKeyDownEvent = false;
    this->bAcceptRepeatKeysInPressUpDown = false;
    this->bAcceptRepeatKeysInPressLeftRight = false;
    this->bSaveAsFocusedWidget = true;
    this->TriggerDescendantFocusedEvents = false;
    this->SoundEvent_OnNavigate = NULL;
    this->SoundEvent_OnConfirm = NULL;
    this->SoundEvent_OnCancel = NULL;
    this->SoundEvent_OnContext = NULL;
    this->WidgetHost = NULL;
}

