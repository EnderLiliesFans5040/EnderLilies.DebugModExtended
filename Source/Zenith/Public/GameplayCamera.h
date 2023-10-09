#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "GameplayCameraOverrideSettings.h"
#include "GameplayCameraSettings.h"
#include "UObject/NoExportTypes.h"
#include "GameplayCamera.generated.h"

class AActor;
class AController;
class APlayerCameraManagerZenithBase;

UCLASS()
class ZENITH_API AGameplayCamera : public ACameraActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    float InputMoveLerpSpeed;
    
    UPROPERTY(EditDefaultsOnly)
    float InputMoveRadius;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AController>> PlayerControllerTargets;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AController>> AllyAIControllerTargets;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AController>> EnemyControllerTargets;
    
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<AActor>> OtherTargets;
    
    UPROPERTY(Transient)
    APlayerCameraManagerZenithBase* CameraManager;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    FGameplayCameraSettings CurrentSettings;
    
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FGameplayCameraSettings DefaultSettings;
    
    UPROPERTY()
    FGameplayCameraOverrideSettings DefaultOverrideSettings;
    
    UPROPERTY(Transient)
    TArray<FGameplayCameraOverrideSettings> OverrideSettingsList;
    
    UPROPERTY(Transient)
    FGameplayCameraOverrideSettings BlendStartOverrideSettings;
    
    UPROPERTY(Transient)
    FGameplayCameraOverrideSettings CurrOverrideSettings;
    
    AGameplayCamera();
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
    UFUNCTION(BlueprintNativeEvent)
    void OnViewportResized();
    
public:
    UFUNCTION(BlueprintCallable)
    FVector GetOffsetFromPlayerFeet();
    
    UFUNCTION(BlueprintPure)
    float GetFOV() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentMin() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentMax() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCurrentCenter() const;
    
    UFUNCTION(BlueprintPure)
    void GetBorderLocationsAtDist(float DistFromCamera, FVector& LeftBorderLocation, FVector& RightBorderLocation) const;
    
    UFUNCTION(BlueprintPure)
    void GetBorderLocationsAtAbsoluteX(float AbsoluteX, FVector& LeftBorderLocation, FVector& RightBorderLocation) const;
    
    UFUNCTION(BlueprintPure)
    float GetBlendSpeedFactor() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSettings();
    
    UFUNCTION(BlueprintCallable)
    int32 AddOverrideSettings(const FGameplayCameraOverrideSettings& NewOverrideSettings, float BlendTime);
    
};

