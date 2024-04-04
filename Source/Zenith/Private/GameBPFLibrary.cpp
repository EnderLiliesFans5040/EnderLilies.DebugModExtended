#include "GameBPFLibrary.h"

UGameBPFLibrary::UGameBPFLibrary() {
}

void UGameBPFLibrary::SetPreviewLanguage(const FString& CultureName) {
}

void UGameBPFLibrary::PrintStringWarning(const FString& Message) {
}

void UGameBPFLibrary::PrintStringError(const FString& Message) {
}

bool UGameBPFLibrary::IsXboxOne() {
    return false;
}

bool UGameBPFLibrary::IsXboxFamilyBuild() {
    return false;
}

bool UGameBPFLibrary::IsSwitchBuild() {
    return false;
}

bool UGameBPFLibrary::IsSteamBuild() {
    return false;
}

bool UGameBPFLibrary::IsShippingBuild() {
    return false;
}

bool UGameBPFLibrary::IsPSFamilyBuild() {
    return false;
}

bool UGameBPFLibrary::IsPS5Build() {
    return false;
}

bool UGameBPFLibrary::IsPS4Build() {
    return false;
}

bool UGameBPFLibrary::IsPCBuild() {
    return false;
}

bool UGameBPFLibrary::IsEditor() {
    return false;
}

bool UGameBPFLibrary::IsEarlyAccessBuild(UObject* WorldContextObject) {
    return false;
}

FString UGameBPFLibrary::GetVersion() {
    return TEXT("");
}

FString UGameBPFLibrary::GetRHIInfo() {
    return TEXT("");
}

FString UGameBPFLibrary::GetPreviewLanguage() {
    return TEXT("");
}

FIntPoint UGameBPFLibrary::GetGameResolution() {
    return FIntPoint{};
}

FIntPoint UGameBPFLibrary::GetDesktopResolution() {
    return FIntPoint{};
}

int32 UGameBPFLibrary::GetBuildNumber() {
    return 0;
}

bool UGameBPFLibrary::DoesGameVersionMatchesPakVersion() {
    return false;
}


