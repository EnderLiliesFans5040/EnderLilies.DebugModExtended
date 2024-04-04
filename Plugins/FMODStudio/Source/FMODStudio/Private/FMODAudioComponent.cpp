#include "FMODAudioComponent.h"

UFMODAudioComponent::UFMODAudioComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->Event = NULL;
    this->bEnableTimelineCallbacks = false;
    this->bAutoDestroy = false;
    this->bStopWhenOwnerDestroyed = true;
}

void UFMODAudioComponent::TriggerCue() {
}

void UFMODAudioComponent::Stop() {
}

void UFMODAudioComponent::SetVolume(float Volume) {
}

void UFMODAudioComponent::SetTimelinePosition(int32 Time) {
}

void UFMODAudioComponent::SetProperty(TEnumAsByte<EFMODEventProperty::Type> Property, float Value) {
}

void UFMODAudioComponent::SetProgrammerSoundName(const FString& Value) {
}

void UFMODAudioComponent::SetPitch(float Pitch) {
}

void UFMODAudioComponent::SetPaused(bool paused) {
}

void UFMODAudioComponent::SetParameter(FName Name, float Value) {
}

void UFMODAudioComponent::SetEvent(UFMODEvent* NewEvent) {
}

void UFMODAudioComponent::Release() {
}

void UFMODAudioComponent::Play() {
}

bool UFMODAudioComponent::IsPlaying() {
    return false;
}

int32 UFMODAudioComponent::GetTimelinePosition() {
    return 0;
}

float UFMODAudioComponent::GetProperty(TEnumAsByte<EFMODEventProperty::Type> Property) {
    return 0.0f;
}

void UFMODAudioComponent::GetParameterValue(FName Name, float& UserValue, float& FinalValue) {
}

float UFMODAudioComponent::GetParameter(FName Name) {
    return 0.0f;
}

int32 UFMODAudioComponent::GetLength() const {
    return 0;
}


