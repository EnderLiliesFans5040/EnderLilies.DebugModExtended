#include "FadeSubsystem.h"
#include "Templates/SubclassOf.h"

class UFadeUserWidget;

void UFadeSubsystem::PrepareFadeInAtZOrder(TSubclassOf<UFadeUserWidget> FadeClass, int32 ZOrder) {
}

void UFadeSubsystem::PrepareFadeIn(TSubclassOf<UFadeUserWidget> FadeClass) {
}

void UFadeSubsystem::OnFadeFinished(bool bWasFadeIn) {
}

void UFadeSubsystem::LaunchFadeOut(TSubclassOf<UFadeUserWidget> FadeClass, const FFadeDelegate NewOnFadeFinished) {
}

void UFadeSubsystem::LaunchFadeIn(TSubclassOf<UFadeUserWidget> FadeClass, const FFadeDelegate NewOnFadeFinished) {
}

void UFadeSubsystem::LaunchFadeAtZOrder(bool bFadeIn, TSubclassOf<UFadeUserWidget> FadeClass, const FFadeDelegate NewOnFadeFinished, int32 ZOrder) {
}

void UFadeSubsystem::LaunchFade(bool bFadeIn, TSubclassOf<UFadeUserWidget> FadeClass, const FFadeDelegate NewOnFadeFinished) {
}

bool UFadeSubsystem::IsFading() const {
    return false;
}

EFadeTypes UFadeSubsystem::GetLastFadeType() const {
    return EFadeTypes::None;
}

UFadeSubsystem::UFadeSubsystem() {
}

