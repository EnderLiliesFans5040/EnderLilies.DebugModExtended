#include "UMGSubsystem.h"
#include "Templates/SubclassOf.h"

class UFooterUserWidget;
class UUserWidget;

void UUMGSubsystem::SetFocusedWidget(UUserWidget* NewFocusedWidget) {
}

void UUMGSubsystem::SetCurrentFooterWidget(UFooterUserWidget* NewFooterWidget) {
}

void UUMGSubsystem::RestoreDefaultBindings() {
}

void UUMGSubsystem::OverrideUIInput(EUIInputTypes UIInputType, FKey Key) {
}

bool UUMGSubsystem::IsNavigationEnabled() const {
    return false;
}

bool UUMGSubsystem::IsKeyUIInputType(EUIInputTypes UIInputType, FKey Key) const {
    return false;
}

bool UUMGSubsystem::IsFocusingAnyWidget() const {
    return false;
}

UUserWidget* UUMGSubsystem::GetLastFocusedWidget() const {
    return NULL;
}

TArray<FKey> UUMGSubsystem::GetKeysForUIInput(EUIInputTypes UIInputType) const {
    return TArray<FKey>();
}

FKey UUMGSubsystem::GetKeyForUIInput(EUIInputTypes UIInputType, bool bGamepad) const {
    return FKey{};
}

UFooterUserWidget* UUMGSubsystem::GetCurrentFooterWidget() const {
    return NULL;
}

void UUMGSubsystem::EnableNavigationAndResetLocks(bool bExecuteImmediately) {
}

void UUMGSubsystem::EnableNavigation(bool bExecuteImmediately) {
}

void UUMGSubsystem::DisableNavigation(TSubclassOf<UUserWidget> InputBlockerWidgetClass) {
}

UUMGSubsystem::UUMGSubsystem() {
}

