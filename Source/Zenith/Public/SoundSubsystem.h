#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "ESoundMaterial.h"
#include "ESoundFamily.h"
#include "ESoundAction.h"
#include "ESoundHeavinessCategory.h"
#include "FMODBlueprintStatics.h"
//#include "FMODEventInstance.h"
#include "Chaos/ChaosEngineInterface.h"
#include "SoundSubsystem.generated.h"

class UFMODEvent;

UCLASS(BlueprintType)
class ZENITH_API USoundSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TMap<ESoundFamily, float> VolumeForSoundFamilies;
    
    UPROPERTY(Transient)
    TMap<FName, FFMODEventInstance> SnapshotInstances;
    
    UPROPERTY(Transient)
    UFMODEvent* CurrentBGM;
    
    UPROPERTY(Transient)
    FFMODEventInstance CurrentBGMInstance;
    
    UPROPERTY(Transient)
    UFMODEvent* CurrentAmbience;
    
    UPROPERTY(Transient)
    FFMODEventInstance CurrentAmbienceInstance;
    
public:
    USoundSubsystem();
    UFUNCTION(BlueprintCallable)
    void StopSoundEventInstance(const FFMODEventInstance& SoundInstance);
    
    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    void StopAmbience();
    
    UFUNCTION(BlueprintCallable)
    void StopAll();
    
    UFUNCTION(BlueprintCallable)
    void SetVolume(ESoundFamily SoundFamily, float NewVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetParameter(FName Parameter, float Value);
    
    UFUNCTION(BlueprintCallable)
    void ResetVolumes();
    
    UFUNCTION(BlueprintCallable)
    FFMODEventInstance PlaySoundEvent(UFMODEvent* SoundEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGM(UFMODEvent* SoundEvent);
    
    UFUNCTION(BlueprintCallable)
    void PlayAmbience(UFMODEvent* SoundEvent);
    
    UFUNCTION(BlueprintPure)
    float GetVolume(ESoundFamily SoundFamily) const;
    
    UFUNCTION(BlueprintPure)
    UFMODEvent* GetStepSoundEffect(ESoundHeavinessCategory Heaviness, TEnumAsByte<EPhysicalSurface> SurfaceType) const;
    
    UFUNCTION(BlueprintPure)
    UFMODEvent* GetLandingSoundEffect(ESoundHeavinessCategory Heaviness, TEnumAsByte<EPhysicalSurface> SurfaceType) const;
    
    UFUNCTION(BlueprintPure)
    UFMODEvent* GetHitSoundEffect(ESoundMaterial From, ESoundMaterial To, ESoundAction Action) const;
    
    UFUNCTION(BlueprintPure)
    UFMODEvent* GetCurrentBGM() const;
    
    UFUNCTION(BlueprintPure)
    UFMODEvent* GetCurrentAmbience() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSnapshot(UFMODEvent* Snapshot, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void DisableSnapshot(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void DisableAllSnapshots();
    
};

