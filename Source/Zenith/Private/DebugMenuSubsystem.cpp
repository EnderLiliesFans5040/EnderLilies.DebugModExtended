#include "DebugMenuSubsystem.h"
#include "Templates/SubclassOf.h"

class UUserWidgetMenu;
class APlayerController;

void UDebugMenuSubsystem::ShowDebugMenu(TSubclassOf<UUserWidgetMenu> DebugMenuClass, APlayerController* PlayerController) {
}

bool UDebugMenuSubsystem::IsDebugMenuShown() const {
    return false;
}

void UDebugMenuSubsystem::HideDebugMenu() {
}

float UDebugMenuSubsystem::GetTimeSinceLastClose() const {
    return 0.0f;
}

bool UDebugMenuSubsystem::CanShowDebugMenu() const {
    return false;
}

UDebugMenuSubsystem::UDebugMenuSubsystem() {
    this->DebugMenuInstance = NULL;
}

