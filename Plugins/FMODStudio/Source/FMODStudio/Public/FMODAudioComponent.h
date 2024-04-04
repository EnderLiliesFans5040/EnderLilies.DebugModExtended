#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "EFMODEventProperty.h"
#include "FMODAttenuationDetails.h"
#include "FMODOcclusionDetails.h"
#include "OnEventStoppedDelegate.h"
#include "OnTimelineBeatDelegate.h"
#include "OnTimelineMarkerDelegate.h"
#include "FMODAudioComponent.generated.h"

class UFMODEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FMODSTUDIO_API UFMODAudioComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFMODEvent* Event;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SimpleDisplay, meta=(AllowPrivateAccess=true))
    TMap<FName, float> ParameterCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProgrammerSoundName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableTimelineCallbacks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutoDestroy: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopWhenOwnerDestroyed: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventStopped OnEventStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimelineMarker OnTimelineMarker;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimelineBeat OnTimelineBeat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODAttenuationDetails AttenuationDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFMODOcclusionDetails OcclusionDetails;
    
    UFMODAudioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerCue();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(float Volume);
    
    UFUNCTION(BlueprintCallable)
    void SetTimelinePosition(int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void SetProperty(TEnumAsByte<EFMODEventProperty::Type> Property, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetProgrammerSoundName(const FString& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetPitch(float Pitch);
    
    UFUNCTION(BlueprintCallable)
    void SetPaused(bool paused);
    
    UFUNCTION(BlueprintCallable)
    void SetParameter(FName Name, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetEvent(UFMODEvent* NewEvent);
    
    UFUNCTION(BlueprintCallable)
    void Release();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    bool IsPlaying();
    
    UFUNCTION(BlueprintCallable)
    int32 GetTimelinePosition();
    
    UFUNCTION(BlueprintCallable)
    float GetProperty(TEnumAsByte<EFMODEventProperty::Type> Property);
    
    UFUNCTION(BlueprintCallable)
    void GetParameterValue(FName Name, float& UserValue, float& FinalValue);
    
    UFUNCTION(BlueprintCallable)
    float GetParameter(FName Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLength() const;
    
};

