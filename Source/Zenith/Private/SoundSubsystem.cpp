#include "SoundSubsystem.h"

USoundSubsystem::USoundSubsystem() {
    this->CurrentBGM = NULL;
    this->CurrentAmbience = NULL;
}

void USoundSubsystem::StopSoundEventInstance(const FFMODEventInstance& SoundInstance) {
}

void USoundSubsystem::StopBGM() {
}

void USoundSubsystem::StopAmbience() {
}

void USoundSubsystem::StopAll() {
}

void USoundSubsystem::SetVolume(ESoundFamily SoundFamily, float NewVolume) {
}

void USoundSubsystem::SetParameter(FName Parameter, float Value) {
}

void USoundSubsystem::ResetVolumes() {
}

FFMODEventInstance USoundSubsystem::PlaySoundEvent(UFMODEvent* SoundEvent) {
    return FFMODEventInstance{};
}

void USoundSubsystem::PlayBGM(UFMODEvent* SoundEvent) {
}

void USoundSubsystem::PlayAmbience(UFMODEvent* SoundEvent) {
}

float USoundSubsystem::GetVolume(ESoundFamily SoundFamily) const {
    return 0.0f;
}

UFMODEvent* USoundSubsystem::GetStepSoundEffect(ESoundHeavinessCategory Heaviness, TEnumAsByte<EPhysicalSurface> SurfaceType) const {
    return NULL;
}

UFMODEvent* USoundSubsystem::GetLandingSoundEffect(ESoundHeavinessCategory Heaviness, TEnumAsByte<EPhysicalSurface> SurfaceType) const {
    return NULL;
}

UFMODEvent* USoundSubsystem::GetHitSoundEffect(ESoundMaterial From, ESoundMaterial To, ESoundAction Action) const {
    return NULL;
}

UFMODEvent* USoundSubsystem::GetCurrentBGM() const {
    return NULL;
}

UFMODEvent* USoundSubsystem::GetCurrentAmbience() const {
    return NULL;
}

void USoundSubsystem::EnableSnapshot(UFMODEvent* Snapshot, FName Tag) {
}

void USoundSubsystem::DisableSnapshot(FName Tag) {
}

void USoundSubsystem::DisableAllSnapshots() {
}


