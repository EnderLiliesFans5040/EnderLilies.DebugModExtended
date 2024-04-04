#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Camera/CameraActor.h"
#include "GameplayCameraOverrideSettings.h"
#include "GameplayCameraSettings.h"
#include "GameplayCamera.generated.h"

class AActor;
class AController;
class APlayerCameraManagerZenithBase;

UCLASS(Blueprintable)
class ZENITH_API AGameplayCamera : public ACameraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputMoveLerpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputMoveRadius;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AController>> PlayerControllerTargets;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AController>> AllyAIControllerTargets;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AController>> EnemyControllerTargets;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AActor>> OtherTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCameraManagerZenithBase* CameraManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCameraSettings CurrentSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCameraSettings DefaultSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCameraOverrideSettings DefaultOverrideSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCameraOverrideSettings> OverrideSettingsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayCameraOverrideSettings BlendStartOverrideSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayCameraOverrideSettings CurrOverrideSettings;
    
    AGameplayCamera(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnregisterEnemyControllers(const TArray<AController*>& EnemyControllersToRemove);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterEnemyController(AController* EnemyControllerToRemove);
    
    UFUNCTION(BlueprintCallable)
    void UnregisterAllyController(AController* AllyControllerToRemove);
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FGameplayCameraSettings& NewSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendSpeedFactor(float NewBlendSpeedFactor);
    
    UFUNCTION(BlueprintCallable)
    void ResetCameraLocation();
    
    UFUNCTION(BlueprintCallable)
    void RemoveOverrideSettings(int32 OverrideSettingsID, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEnemyControllers(const TArray<AController*>& EnemyControllersToAdd);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEnemyController(AController* EnemyControllerToAdd);
    
    UFUNCTION(BlueprintCallable)
    void RegisterAllyController(AController* AllyControllerToAdd);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnViewportResized();
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetOffsetFromPlayerFeet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFOV() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentMin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentCenter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBorderLocationsAtDist(float DistFromCamera, FVector& LeftBorderLocation, FVector& RightBorderLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetBorderLocationsAtAbsoluteX(float AbsoluteX, FVector& LeftBorderLocation, FVector& RightBorderLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlendSpeedFactor() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSettings();
    
    UFUNCTION(BlueprintCallable)
    int32 AddOverrideSettings(const FGameplayCameraOverrideSettings& NewOverrideSettings, float BlendTime);
    
};

