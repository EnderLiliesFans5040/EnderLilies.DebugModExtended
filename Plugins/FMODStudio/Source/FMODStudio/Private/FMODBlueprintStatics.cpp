#include "FMODBlueprintStatics.h"

UFMODBlueprintStatics::UFMODBlueprintStatics() {
}

void UFMODBlueprintStatics::VCASetVolume(UFMODVCA* Vca, float Volume) {
}

void UFMODBlueprintStatics::UnloadEventSampleData(UObject* WorldContextObject, UFMODEvent* Event) {
}

void UFMODBlueprintStatics::UnloadBankSampleData(UFMODBank* Bank) {
}

void UFMODBlueprintStatics::UnloadBank(UFMODBank* Bank) {
}

void UFMODBlueprintStatics::SetOutputDriverByName(const FString& NewDriverName) {
}

void UFMODBlueprintStatics::SetOutputDriverByIndex(int32 NewDriverIndex) {
}

void UFMODBlueprintStatics::SetLocale(const FString& Locale) {
}

void UFMODBlueprintStatics::SetGlobalParameterByName(FName Name, float Value) {
}

UFMODAudioComponent* UFMODBlueprintStatics::PlayEventAttached(UFMODEvent* Event, USceneComponent* AttachToComponent, FName AttachPointName, FVector Location, TEnumAsByte<EAttachLocation::Type> LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy) {
    return NULL;
}

FFMODEventInstance UFMODBlueprintStatics::PlayEventAtLocation(UObject* WorldContextObject, UFMODEvent* Event, const FTransform& Location, bool bAutoPlay) {
    return FFMODEventInstance{};
}

FFMODEventInstance UFMODBlueprintStatics::PlayEvent2D(UObject* WorldContextObject, UFMODEvent* Event, bool bAutoPlay) {
    return FFMODEventInstance{};
}

void UFMODBlueprintStatics::MixerSuspend() {
}

void UFMODBlueprintStatics::MixerResume() {
}

void UFMODBlueprintStatics::LoadEventSampleData(UObject* WorldContextObject, UFMODEvent* Event) {
}

void UFMODBlueprintStatics::LoadBankSampleData(UFMODBank* Bank) {
}

void UFMODBlueprintStatics::LoadBank(UFMODBank* Bank, bool bBlocking, bool bLoadSampleData) {
}

bool UFMODBlueprintStatics::IsBankLoaded(UFMODBank* Bank) {
    return false;
}

TArray<FString> UFMODBlueprintStatics::GetOutputDrivers() {
    return TArray<FString>();
}

void UFMODBlueprintStatics::GetGlobalParameterValueByName(FName Name, float& UserValue, float& FinalValue) {
}

float UFMODBlueprintStatics::GetGlobalParameterByName(FName Name) {
    return 0.0f;
}

TArray<FFMODEventInstance> UFMODBlueprintStatics::FindEventInstances(UObject* WorldContextObject, UFMODEvent* Event) {
    return TArray<FFMODEventInstance>();
}

UFMODEvent* UFMODBlueprintStatics::FindEventByName(const FString& Name) {
    return NULL;
}

UFMODAsset* UFMODBlueprintStatics::FindAssetByName(const FString& Name) {
    return NULL;
}

void UFMODBlueprintStatics::EventInstanceTriggerCue(FFMODEventInstance EventInstance) {
}

void UFMODBlueprintStatics::EventInstanceStop(FFMODEventInstance EventInstance, bool Release) {
}

void UFMODBlueprintStatics::EventInstanceSetVolume(FFMODEventInstance EventInstance, float Volume) {
}

void UFMODBlueprintStatics::EventInstanceSetTransform(FFMODEventInstance EventInstance, const FTransform& Location) {
}

void UFMODBlueprintStatics::EventInstanceSetProperty(FFMODEventInstance EventInstance, TEnumAsByte<EFMODEventProperty::Type> Property, float Value) {
}

void UFMODBlueprintStatics::EventInstanceSetPitch(FFMODEventInstance EventInstance, float Pitch) {
}

void UFMODBlueprintStatics::EventInstanceSetPaused(FFMODEventInstance EventInstance, bool paused) {
}

void UFMODBlueprintStatics::EventInstanceSetParameter(FFMODEventInstance EventInstance, FName Name, float Value) {
}

void UFMODBlueprintStatics::EventInstanceRelease(FFMODEventInstance EventInstance) {
}

void UFMODBlueprintStatics::EventInstancePlay(FFMODEventInstance EventInstance) {
}

bool UFMODBlueprintStatics::EventInstanceIsValid(FFMODEventInstance EventInstance) {
    return false;
}

void UFMODBlueprintStatics::EventInstanceGetParameterValue(FFMODEventInstance EventInstance, FName Name, float& UserValue, float& FinalValue) {
}

float UFMODBlueprintStatics::EventInstanceGetParameter(FFMODEventInstance EventInstance, FName Name) {
    return 0.0f;
}

void UFMODBlueprintStatics::BusStopAllEvents(UFMODBus* Bus, TEnumAsByte<EFMOD_STUDIO_STOP_MODE> stopMode) {
}

void UFMODBlueprintStatics::BusSetVolume(UFMODBus* Bus, float Volume) {
}

void UFMODBlueprintStatics::BusSetPaused(UFMODBus* Bus, bool bPaused) {
}

void UFMODBlueprintStatics::BusSetMute(UFMODBus* Bus, bool bMute) {
}


