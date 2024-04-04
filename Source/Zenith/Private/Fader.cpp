#include "Fader.h"

AFader::AFader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FadeInSequence = NULL;
    this->FadeOutSequence = NULL;
}

void AFader::PrepareFadeIn() {
}

void AFader::OnLevelSequencePlay() {
}

void AFader::OnLevelSequenceFinished() {
}

void AFader::LaunchFadeOut() {
}

void AFader::LaunchFadeIn() {
}


