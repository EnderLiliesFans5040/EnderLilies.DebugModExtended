#include "ProfileSubsystem.h"

bool UProfileSubsystem::UseProfileSystem() const {
    return false;
}

void UProfileSubsystem::SaveCurrProfileAsMainProfile() {
}

void UProfileSubsystem::OpenProfileUIWithDelegate(int32 ControllerIndex, FProfileDelegate OnProfileUIClosed) {
}

void UProfileSubsystem::OpenProfileUI(int32 ControllerIndex) {
}

void UProfileSubsystem::OnPlayerControllerIDChanged(int32 OldControllerID, int32 NewControllerID) {
}

bool UProfileSubsystem::IsUsingMainProfile() const {
    return false;
}

bool UProfileSubsystem::IsMainProfileValid() const {
    return false;
}

int32 UProfileSubsystem::GetMainProfileUserIndex() const {
    return 0;
}

FString UProfileSubsystem::GetMainProfileName() const {
    return TEXT("");
}

void UProfileSubsystem::ClearMainProfile() {
}

UProfileSubsystem::UProfileSubsystem() {
}

