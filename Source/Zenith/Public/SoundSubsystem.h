#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "FMODEventInstance.h"
#include "Chaos/ChaosEngineInterface.h"
#include "ESoundAction.h"
#include "ESoundFamily.h"
#include "ESoundHeavinessCategory.h"
#include "ESoundMaterial.h"
#include "SoundSubsystem.generated.h"

class UFMODEvent;

UCLASS(Blueprintable)
class ZENITH_API USoundSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ESoundFamily, float> VolumeForSoundFamilies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, FFMODEventInstance> SnapshotInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFMODEvent* CurrentBGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFMODEventInstance CurrentBGMInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFMODEvent* CurrentAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVolume(ESoundFamily SoundFamily) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetStepSoundEffect(ESoundHeavinessCategory Heaviness, TEnumAsByte<EPhysicalSurface> SurfaceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetLandingSoundEffect(ESoundHeavinessCategory Heaviness, TEnumAsByte<EPhysicalSurface> SurfaceType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetHitSoundEffect(ESoundMaterial From, ESoundMaterial To, ESoundAction Action) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetCurrentBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFMODEvent* GetCurrentAmbience() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableSnapshot(UFMODEvent* Snapshot, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void DisableSnapshot(FName Tag);
    
    UFUNCTION(BlueprintCallable)
    void DisableAllSnapshots();
    
};

