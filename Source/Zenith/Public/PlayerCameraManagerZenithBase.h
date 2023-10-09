#pragma once
#include "CoreMinimal.h"
#include "Camera/PlayerCameraManager.h"
#include "PlayerCameraManagerZenithEventDelegate.h"
#include "Engine/EngineTypes.h"
#include "UObject/NoExportTypes.h"
#include "PlayerCameraManagerZenithBase.generated.h"

class AActor;
class AGameplayCamera;
class APlayerCameraManagerZenithBase;
class ACameraClampVolume;
class UObject;
class UCameraComponent;
class ACameraActor;

UCLASS(NonTransient)
class ZENITH_API APlayerCameraManagerZenithBase : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    bool bWarnIfNoClampVolume;
    
    UPROPERTY(EditDefaultsOnly)
    float WarnIfNoClampVolumeAfterSeconds;
    
    UPROPERTY(EditDefaultsOnly)
    float MinTimeBetweenNoClampVolumeWarnings;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCameraManagerZenithEvent OnViewTargetChangedDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCameraManagerZenithEvent OnNoClampVolumeWarningDelegate;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerCameraManagerZenithEvent OnPostUpdateCameraDelegate;
    
private:
    UPROPERTY(EditAnywhere)
    bool bExperimental_DisableAspectRatioConstraint;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AGameplayCamera> RegisteredGameplayCamera;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<ACameraClampVolume>> ClampVolumes;
    
public:
    APlayerCameraManagerZenithBase();
    UFUNCTION(BlueprintCallable)
    void UnregisterGameplayCamera(AGameplayCamera* GameplayCamera);
    
    UFUNCTION(BlueprintCallable)
    void RemoveClampVolume(ACameraClampVolume* ClampVolume);
    
    UFUNCTION(BlueprintCallable)
    void RegisterGameplayCamera(AGameplayCamera* GameplayCamera);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostUpdateCamera();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNoClampVolumeWarning();
    
public:
    UFUNCTION(BlueprintPure)
    bool IsGameplayCameraRegistered() const;
    
    UFUNCTION(BlueprintPure)
    bool IsClamped() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetViewTargetActor() const;
    
    UFUNCTION(BlueprintPure)
    ACameraClampVolume* GetRootClampVolume() const;
    
    UFUNCTION(BlueprintPure)
    AGameplayCamera* GetRegisteredGameplayCamera() const;
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerCameraManagerZenithBase* GetPlayerCameraManagerZenith(UObject* WorldContextObject, int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintPure)
    AGameplayCamera* GetGameplayCamera() const;
    
    UFUNCTION(BlueprintPure)
    UCameraComponent* GetCameraComponent() const;
    
    UFUNCTION(BlueprintPure)
    ACameraActor* GetCamera() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EAspectRatioAxisConstraint> GetAspectRatioAxisConstraint() const;
    
    UFUNCTION(BlueprintPure)
    ACameraClampVolume* GetActiveClampVolume() const;
    
    UFUNCTION(BlueprintPure)
    FVector ClampLocationInCameraView(FVector Location, float Size) const;
    
    UFUNCTION(BlueprintCallable)
    void AddClampVolume(ACameraClampVolume* ClampVolume);
    
};

