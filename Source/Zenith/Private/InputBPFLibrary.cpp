#include "InputBPFLibrary.h"

UInputBPFLibrary::UInputBPFLibrary() {
}

void UInputBPFLibrary::SetInputModeUIOnlyForAllPlayers(UObject* WorldContextObject, UWidget* FocusTarget, EMouseLockMode MouseLockMode) {
}

void UInputBPFLibrary::SetInputModeGameOnlyForAllPlayers(UObject* WorldContextObject) {
}

void UInputBPFLibrary::SetInputModeGameAndUIForAllPlayers(UObject* WorldContextObject, UWidget* FocusTarget, EMouseLockMode MouseLockModer, bool bHideCursorDuringCapture) {
}

void UInputBPFLibrary::SetAllUserFocus(UWidget* Widget, EFocusCause FocusCause) {
}

bool UInputBPFLibrary::IsUIValidationKey(UObject* WorldContextObject, FKey Key) {
    return false;
}

bool UInputBPFLibrary::IsUIPauseKey(UObject* WorldContextObject, FKey Key) {
    return false;
}

bool UInputBPFLibrary::IsUINavigationUpKey(UObject* WorldContextObject, FKey Key) {
    return false;
}

bool UInputBPFLibrary::IsUINavigationRightKey(UObject* WorldContextObject, FKey Key) {
    return false;
}

bool UInputBPFLibrary::IsUINavigationPrevPageKey(UObject* WorldContextObject, FKey Key) {
    return false;
}

bool UInputBPFLibrary::IsUINavigationNextPageKey(UObject* WorldContextObject, FKey Key) {
    return false;
}

bool UInputBPFLibrary::IsUINavigationLeftKey(UObject* WorldContextObject, FKey Key) {
    return false;
}

bool UInputBPFLibrary::IsUINavigationDownKey(UObject* WorldContextObject, FKey Key) {
    return false;
}

bool UInputBPFLibrary::IsUIMenuKey(UObject* WorldContextObject, FKey Key) {
    return false;
}

bool UInputBPFLibrary::IsUIDebugKey(UObject* WorldContextObject, FKey Key) {
    return false;
}

bool UInputBPFLibrary::IsUIContextKey(UObject* WorldContextObject, FKey Key) {
    return false;
}

bool UInputBPFLibrary::IsUICancelKey(UObject* WorldContextObject, FKey Key) {
    return false;
}

bool UInputBPFLibrary::IsRepeatKeyEvent(const FKeyEvent& KeyEvent) {
    return false;
}

bool UInputBPFLibrary::IsRawInputTypeSet(const FInputSnapshot& InputSnapshot, ECommandInputTypes CommandInputType) {
    return false;
}

bool UInputBPFLibrary::IsCommandInputTypeSet(const FInputSnapshot& InputSnapshot, ECommandInputTypes CommandInputType) {
    return false;
}

FText UInputBPFLibrary::GetRichTextFromInputChord(const FInputChord& InputChord) {
    return FText::GetEmpty();
}

FText UInputBPFLibrary::GetRichTextFromInputActionKeyMapping(const FInputActionKeyMapping& InputActionKeyMapping) {
    return FText::GetEmpty();
}

FText UInputBPFLibrary::GetRichTextForUIKey(TArray<FKey> Keys, bool bRequestGamepad) {
    return FText::GetEmpty();
}

FText UInputBPFLibrary::GetRichTextForAction(UObject* WorldContextObject, const FName ActionName, int32 PlayerIndex) {
    return FText::GetEmpty();
}

FName UInputBPFLibrary::GetNameForCommandInputType(ECommandInputTypes CommandInputType) {
    return NAME_None;
}


