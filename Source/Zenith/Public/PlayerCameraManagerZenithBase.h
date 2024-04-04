#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Camera/PlayerCameraManager.h"
#include "PlayerCameraManagerZenithEventDelegate.h"
#include "PlayerCameraManagerZenithBase.generated.h"

class AActor;
class ACameraActor;
class ACameraClampVolume;
class AGameplayCamera;
class APlayerCameraManagerZenithBase;
class UCameraComponent;
class UObject;

UCLASS(Blueprintable, NonTransient)
class ZENITH_API APlayerCameraManagerZenithBase : public APlayerCameraManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnIfNoClampVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarnIfNoClampVolumeAfterSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTimeBetweenNoClampVolumeWarnings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCameraManagerZenithEvent OnViewTargetChangedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCameraManagerZenithEvent OnNoClampVolumeWarningDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerCameraManagerZenithEvent OnPostUpdateCameraDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExperimental_DisableAspectRatioConstraint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AGameplayCamera> RegisteredGameplayCamera;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<ACameraClampVolume>> ClampVolumes;
    
public:
    APlayerCameraManagerZenithBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterGameplayCamera(AGameplayCamera* GameplayCamera);
    
    UFUNCTION(BlueprintCallable)
    void RemoveClampVolume(ACameraClampVolume* ClampVolume);
    
    UFUNCTION(BlueprintCallable)
    void RegisterGameplayCamera(AGameplayCamera* GameplayCamera);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostUpdateCamera();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNoClampVolumeWarning();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameplayCameraRegistered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClamped() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetViewTargetActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACameraClampVolume* GetRootClampVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameplayCamera* GetRegisteredGameplayCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static APlayerCameraManagerZenithBase* GetPlayerCameraManagerZenith(UObject* WorldContextObject, int32 PlayerControllerIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AGameplayCamera* GetGameplayCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetCameraComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACameraActor* GetCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EAspectRatioAxisConstraint> GetAspectRatioAxisConstraint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACameraClampVolume* GetActiveClampVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector ClampLocationInCameraView(FVector Location, float Size) const;
    
    UFUNCTION(BlueprintCallable)
    void AddClampVolume(ACameraClampVolume* ClampVolume);
    
};

